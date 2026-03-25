#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_OVERRIDECUSTOMDRONEFUNCBTN_METHOD_3_3D98E941BE56214D_OFFSET UNITYSDK_OFFSET(0x17482050)
#define RPG_GAMECORE_OVERRIDECUSTOMDRONEFUNCBTN_METHOD_3_AEBBAF0943C20C9A_OFFSET UNITYSDK_OFFSET(0x17481FD0)
#define RPG_GAMECORE_OVERRIDECUSTOMDRONEFUNCBTN__CTOR_OFFSET UNITYSDK_OFFSET(0x17482020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideCustomDroneFuncBtn_TypeDefinitionIndex = 20318;

	class OverrideCustomDroneFuncBtn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* OverrideIconPath; // 0x18
		::RPG::Client::TextID OverrideBtnName; // 0x20
		::System::String* OverrideActionCustomString; // 0x30
		::System::Boolean ResetOverrride; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDECUSTOMDRONEFUNCBTN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AEBBAF0943C20C9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideCustomDroneFuncBtn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideCustomDroneFuncBtn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDECUSTOMDRONEFUNCBTN_METHOD_3_AEBBAF0943C20C9A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3D98E941BE56214D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideCustomDroneFuncBtn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideCustomDroneFuncBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDECUSTOMDRONEFUNCBTN_METHOD_3_3D98E941BE56214D_OFFSET))(a1, a2);
		}
	};
}
