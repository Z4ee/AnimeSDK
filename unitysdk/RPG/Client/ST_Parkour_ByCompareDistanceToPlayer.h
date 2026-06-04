#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_METHOD_4_08408ECF1AD95AD2_OFFSET UNITYSDK_OFFSET(0x193BC830)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_METHOD_4_459CD8E636E37249_OFFSET UNITYSDK_OFFSET(0x193BCA00)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_METHOD_4_568403493A1725A4_OFFSET UNITYSDK_OFFSET(0x193BCA80)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_METHOD_4_A2A4732A227CA15A_OFFSET UNITYSDK_OFFSET(0x193BC760)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x193BC7E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ST_Parkour_ByCompareDistanceToPlayer_TypeDefinitionIndex = 9934;

	class ST_Parkour_ByCompareDistanceToPlayer : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x20
		::System::Single CompareValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A2A4732A227CA15A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_METHOD_4_A2A4732A227CA15A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_08408ECF1AD95AD2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_METHOD_4_08408ECF1AD95AD2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_459CD8E636E37249(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_METHOD_4_459CD8E636E37249_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_568403493A1725A4(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_METHOD_4_568403493A1725A4_OFFSET))(a1, a2);
		}
	};
}
