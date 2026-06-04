#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_METHOD_4_1FDE4693B0DDE6D9_OFFSET UNITYSDK_OFFSET(0x193BDD90)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_METHOD_4_2B15F09C7B357520_OFFSET UNITYSDK_OFFSET(0x193BE0A0)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_METHOD_4_57FA65BF139EA211_OFFSET UNITYSDK_OFFSET(0x193BE120)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_METHOD_4_911084033AD37B3F_OFFSET UNITYSDK_OFFSET(0x193BDE60)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK__CTOR_OFFSET UNITYSDK_OFFSET(0x193BDE10)

namespace RPG::Client
{
	inline static constexpr unsigned int ST_Parkour_ByCompareRank_TypeDefinitionIndex = 9936;

	class ST_Parkour_ByCompareRank : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean CompareToPlayer; // 0x20
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x24
		::System::Int32 CompareValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1FDE4693B0DDE6D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ByCompareRank*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ByCompareRank*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_METHOD_4_1FDE4693B0DDE6D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_911084033AD37B3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ByCompareRank* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ByCompareRank*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_METHOD_4_911084033AD37B3F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2B15F09C7B357520(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareRank*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareRank*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_METHOD_4_2B15F09C7B357520_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_57FA65BF139EA211(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareRank*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARERANK_METHOD_4_57FA65BF139EA211_OFFSET))(a1, a2);
		}
	};
}
