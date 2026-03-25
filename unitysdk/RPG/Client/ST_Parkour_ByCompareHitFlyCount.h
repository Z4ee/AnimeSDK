#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREHITFLYCOUNT_METHOD_4_016DB7CF21D60B3C_OFFSET UNITYSDK_OFFSET(0x16E8C5D0)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREHITFLYCOUNT_METHOD_4_8A3AE30400818658_OFFSET UNITYSDK_OFFSET(0x16E8C500)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREHITFLYCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8C580)

namespace RPG::Client
{
	inline static constexpr unsigned int ST_Parkour_ByCompareHitFlyCount_TypeDefinitionIndex = 9962;

	class ST_Parkour_ByCompareHitFlyCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x20
		::System::Int32 CompareValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREHITFLYCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8A3AE30400818658(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREHITFLYCOUNT_METHOD_4_8A3AE30400818658_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_016DB7CF21D60B3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREHITFLYCOUNT_METHOD_4_016DB7CF21D60B3C_OFFSET))(a1, a2);
		}
	};
}
