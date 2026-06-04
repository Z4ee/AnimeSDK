#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBasePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEORPREDICATECONFIG_METHOD_3_0E47CAE8301634F0_OFFSET UNITYSDK_OFFSET(0x195E9970)
#define RPG_GAMECORE_CAKERACEORPREDICATECONFIG_METHOD_3_F3B95642F3B5C738_OFFSET UNITYSDK_OFFSET(0x195EF840)
#define RPG_GAMECORE_CAKERACEORPREDICATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x195E9960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceOrPredicateConfig_TypeDefinitionIndex = 17468;

	class CakeRaceOrPredicateConfig : public ::RPG::GameCore::CakeRaceBasePredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CakeRaceBasePredicateConfig*>* Predicates; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEORPREDICATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F3B95642F3B5C738(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceOrPredicateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceOrPredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEORPREDICATECONFIG_METHOD_3_F3B95642F3B5C738_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0E47CAE8301634F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceOrPredicateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceOrPredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEORPREDICATECONFIG_METHOD_3_0E47CAE8301634F0_OFFSET))(a1, a2);
		}
	};
}
