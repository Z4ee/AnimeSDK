#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBasePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEANDPREDICATECONFIG_METHOD_3_059F8BE06544BBFE_OFFSET UNITYSDK_OFFSET(0x195E8990)
#define RPG_GAMECORE_CAKERACEANDPREDICATECONFIG_METHOD_3_93757D0173453C8E_OFFSET UNITYSDK_OFFSET(0x195E8930)
#define RPG_GAMECORE_CAKERACEANDPREDICATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x195E8980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceAndPredicateConfig_TypeDefinitionIndex = 17469;

	class CakeRaceAndPredicateConfig : public ::RPG::GameCore::CakeRaceBasePredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CakeRaceBasePredicateConfig*>* Predicates; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEANDPREDICATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_93757D0173453C8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceAndPredicateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceAndPredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEANDPREDICATECONFIG_METHOD_3_93757D0173453C8E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_059F8BE06544BBFE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceAndPredicateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceAndPredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEANDPREDICATECONFIG_METHOD_3_059F8BE06544BBFE_OFFSET))(a1, a2);
		}
	};
}
