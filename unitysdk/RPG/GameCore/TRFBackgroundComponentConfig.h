#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRFBACKGROUNDCOMPONENTCONFIG_METHOD_3_5173DBE284E09D02_OFFSET UNITYSDK_OFFSET(0x1E15F8F0)
#define RPG_GAMECORE_TRFBACKGROUNDCOMPONENTCONFIG_METHOD_3_B95987FF8FF09E50_OFFSET UNITYSDK_OFFSET(0x1E15F890)
#define RPG_GAMECORE_TRFBACKGROUNDCOMPONENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E15F8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TRFBackgroundComponentConfig_TypeDefinitionIndex = 18689;

	class TRFBackgroundComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IgnoreDissolve; // 0x10
		::System::Boolean IsThorn; // 0x11
		::System::Boolean IsMovable; // 0x12
		::System::Single MoveSpeed; // 0x14
		::System::Boolean IsScale; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFBACKGROUNDCOMPONENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B95987FF8FF09E50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TRFBackgroundComponentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TRFBackgroundComponentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFBACKGROUNDCOMPONENTCONFIG_METHOD_3_B95987FF8FF09E50_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5173DBE284E09D02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TRFBackgroundComponentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TRFBackgroundComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFBACKGROUNDCOMPONENTCONFIG_METHOD_3_5173DBE284E09D02_OFFSET))(a1, a2);
		}
	};
}
