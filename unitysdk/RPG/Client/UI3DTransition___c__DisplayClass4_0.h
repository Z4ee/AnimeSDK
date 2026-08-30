#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IUI3DController; }

#define RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE328860)
#define RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS4_0__EXECUTEEXIT_B__0_OFFSET UNITYSDK_OFFSET(0xE329510)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DTransition___c__DisplayClass4_0_TypeDefinitionIndex = 72929;

	class UI3DTransition___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::IUI3DController* to3d; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExecuteExit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION___C__DISPLAYCLASS4_0__EXECUTEEXIT_B__0_OFFSET))(this);
		}
	};
}
