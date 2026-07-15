#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREHITFLYCOUNT_METHOD_4_016DB7CF21D60B3C_OFFSET UNITYSDK_OFFSET(0x1B9EF470)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREHITFLYCOUNT_METHOD_4_94B6AA8C376C57A0_OFFSET UNITYSDK_OFFSET(0x1B9EF650)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREHITFLYCOUNT_METHOD_4_CC25DE6DD343AF77_OFFSET UNITYSDK_OFFSET(0x1B9EF680)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREHITFLYCOUNT_METHOD_4_D8905A23C5ACCEFD_OFFSET UNITYSDK_OFFSET(0x1B9EF430)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREHITFLYCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9EF460)

namespace RPG::Client
{
	inline static constexpr unsigned int ST_Parkour_ByCompareHitFlyCount_TypeDefinitionIndex = 9953;

	class ST_Parkour_ByCompareHitFlyCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x20
		::System::Int32 CompareValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREHITFLYCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D8905A23C5ACCEFD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREHITFLYCOUNT_METHOD_4_D8905A23C5ACCEFD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_016DB7CF21D60B3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREHITFLYCOUNT_METHOD_4_016DB7CF21D60B3C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_94B6AA8C376C57A0(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREHITFLYCOUNT_METHOD_4_94B6AA8C376C57A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CC25DE6DD343AF77(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareHitFlyCount*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREHITFLYCOUNT_METHOD_4_CC25DE6DD343AF77_OFFSET))(a1, a2);
		}
	};
}
