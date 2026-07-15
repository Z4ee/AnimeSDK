#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEBASEPREDICATECONFIG_METHOD_2_ACD2BFF9F4EA8C9B_OFFSET UNITYSDK_OFFSET(0x1B2CD460)
#define RPG_GAMECORE_CAKERACEBASEPREDICATECONFIG_METHOD_2_EF0BDD094E731BA7_OFFSET UNITYSDK_OFFSET(0x1B2C99A0)
#define RPG_GAMECORE_CAKERACEBASEPREDICATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2CD020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceBasePredicateConfig_TypeDefinitionIndex = 17640;

	class CakeRaceBasePredicateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsInverse; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBASEPREDICATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EF0BDD094E731BA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceBasePredicateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceBasePredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBASEPREDICATECONFIG_METHOD_2_EF0BDD094E731BA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_ACD2BFF9F4EA8C9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceBasePredicateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceBasePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBASEPREDICATECONFIG_METHOD_2_ACD2BFF9F4EA8C9B_OFFSET))(a1, a2);
		}
	};
}
