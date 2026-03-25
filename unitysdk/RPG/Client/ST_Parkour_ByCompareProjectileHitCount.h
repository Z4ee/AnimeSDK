#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_METHOD_4_2A420BA176281294_OFFSET UNITYSDK_OFFSET(0x16E8CB30)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_METHOD_4_95EC1CEABF7FE5F0_OFFSET UNITYSDK_OFFSET(0x16E8CA60)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8CAE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ST_Parkour_ByCompareProjectileHitCount_TypeDefinitionIndex = 9961;

	class ST_Parkour_ByCompareProjectileHitCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x20
		::System::Int32 CompareValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_95EC1CEABF7FE5F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_METHOD_4_95EC1CEABF7FE5F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2A420BA176281294(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_METHOD_4_2A420BA176281294_OFFSET))(a1, a2);
		}
	};
}
