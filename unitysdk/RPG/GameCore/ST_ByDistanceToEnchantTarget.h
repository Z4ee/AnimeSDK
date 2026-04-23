#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/ST_EnchantTargetDistanceType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_BYDISTANCETOENCHANTTARGET_METHOD_4_09D04241A173B5F4_OFFSET UNITYSDK_OFFSET(0x18DEC5F0)
#define RPG_GAMECORE_ST_BYDISTANCETOENCHANTTARGET_METHOD_4_267176B2C57D7B50_OFFSET UNITYSDK_OFFSET(0x18DEC6C0)
#define RPG_GAMECORE_ST_BYDISTANCETOENCHANTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18DEC670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByDistanceToEnchantTarget_TypeDefinitionIndex = 19003;

	class ST_ByDistanceToEnchantTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::RPG::GameCore::ST_EnchantTargetDistanceType DistanceType; // 0x24
		::RPG::GameCore::PredicateConfig* FallBackPredicate; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTANCETOENCHANTTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_09D04241A173B5F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByDistanceToEnchantTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByDistanceToEnchantTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTANCETOENCHANTTARGET_METHOD_4_09D04241A173B5F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_267176B2C57D7B50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByDistanceToEnchantTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByDistanceToEnchantTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTANCETOENCHANTTARGET_METHOD_4_267176B2C57D7B50_OFFSET))(a1, a2);
		}
	};
}
