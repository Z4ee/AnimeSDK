#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMKEYBOARDDASHHELPER_FETCHMOUSEAXISDELTA_OFFSET UNITYSDK_OFFSET(0x1AC50330)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMKEYBOARDDASHHELPER_GET_MOUSEX_OFFSET UNITYSDK_OFFSET(0x1AC502F0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMKEYBOARDDASHHELPER_GET_MOUSEY_OFFSET UNITYSDK_OFFSET(0x1AC50310)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMKEYBOARDDASHHELPER_SET_MOUSEX_OFFSET UNITYSDK_OFFSET(0x1AC50300)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMKEYBOARDDASHHELPER_SET_MOUSEY_OFFSET UNITYSDK_OFFSET(0x1AC50320)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMKEYBOARDDASHHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC50390)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimKeyboardDashHelper_TypeDefinitionIndex = 76738;

	class FiveDimKeyboardDashHelper : public ::System::Object
	{
	public:
		// static const ::System::String* _MOUSE_X; // 0x0
		// static const ::System::String* _MOUSE_Y; // 0x0
		::System::Single _MouseX_k__BackingField; // 0x10
		::System::Single _MouseY_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMKEYBOARDDASHHELPER__CTOR_OFFSET))(this);
		}

		::System::Single get_MouseX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMKEYBOARDDASHHELPER_GET_MOUSEX_OFFSET))(this);
		}

		::System::Void set_MouseX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMKEYBOARDDASHHELPER_SET_MOUSEX_OFFSET))(this, a1);
		}

		::System::Single get_MouseY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMKEYBOARDDASHHELPER_GET_MOUSEY_OFFSET))(this);
		}

		::System::Void set_MouseY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMKEYBOARDDASHHELPER_SET_MOUSEY_OFFSET))(this, a1);
		}

		::System::Void FetchMouseAxisDelta()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMKEYBOARDDASHHELPER_FETCHMOUSEAXISDELTA_OFFSET))(this);
		}
	};
}
