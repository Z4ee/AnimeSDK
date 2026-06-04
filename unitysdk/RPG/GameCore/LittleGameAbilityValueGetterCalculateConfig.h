#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityValueGetterConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameValueCalculateType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCALCULATECONFIG_METHOD_3_026937E415C6AE31_OFFSET UNITYSDK_OFFSET(0x19896EB0)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCALCULATECONFIG_METHOD_3_597B4E5A08A8C8EF_OFFSET UNITYSDK_OFFSET(0x19896F10)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCALCULATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19896F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityValueGetterCalculateConfig_TypeDefinitionIndex = 20216;

	class LittleGameAbilityValueGetterCalculateConfig : public ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* LeftValueGetter; // 0x10
		::RPG::GameCore::LittleGameValueCalculateType CalculateType; // 0x18
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* RightValueGetter; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCALCULATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_026937E415C6AE31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityValueGetterCalculateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityValueGetterCalculateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCALCULATECONFIG_METHOD_3_026937E415C6AE31_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_597B4E5A08A8C8EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityValueGetterCalculateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityValueGetterCalculateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCALCULATECONFIG_METHOD_3_597B4E5A08A8C8EF_OFFSET))(a1, a2);
		}
	};
}
