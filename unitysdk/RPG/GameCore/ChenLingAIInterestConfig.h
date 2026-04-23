#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGAIINTERESTCONFIG_METHOD_2_B43CD488E3BB0D86_OFFSET UNITYSDK_OFFSET(0x187DC750)
#define RPG_GAMECORE_CHENLINGAIINTERESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x187DC8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingAIInterestConfig_TypeDefinitionIndex = 14857;

	class ChenLingAIInterestConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single TargetInterestWeight; // 0x10
		::System::Single BypassInterestWeight; // 0x14
		::System::Single BattlefieldCenterInterestWeight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGAIINTERESTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B43CD488E3BB0D86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingAIInterestConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingAIInterestConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGAIINTERESTCONFIG_METHOD_2_B43CD488E3BB0D86_OFFSET))(a1, a2);
		}
	};
}
