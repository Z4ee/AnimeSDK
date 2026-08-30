#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityTaskConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYCONFIG_METHOD_2_BCA1169D1A9DB2E2_OFFSET UNITYSDK_OFFSET(0x1DD60BA0)
#define RPG_GAMECORE_LITTLEGAMEABILITYCONFIG_METHOD_2_C7B4F09768F2445E_OFFSET UNITYSDK_OFFSET(0x1DD60D60)
#define RPG_GAMECORE_LITTLEGAMEABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD60D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityConfig_TypeDefinitionIndex = 21147;

	class LittleGameAbilityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseLittleGameAbilityTaskConfig*>* Tasks; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BCA1169D1A9DB2E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYCONFIG_METHOD_2_BCA1169D1A9DB2E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_C7B4F09768F2445E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYCONFIG_METHOD_2_C7B4F09768F2445E_OFFSET))(a1, a2);
		}
	};
}
