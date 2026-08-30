#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_METHOD_4_08408ECF1AD95AD2_OFFSET UNITYSDK_OFFSET(0x1D31D6D0)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_METHOD_4_1F4FC3EDACBE6F9B_OFFSET UNITYSDK_OFFSET(0x1D31D8D0)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_METHOD_4_976949D69EC6BD93_OFFSET UNITYSDK_OFFSET(0x1D31D690)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_METHOD_4_B7F6535C9744E774_OFFSET UNITYSDK_OFFSET(0x1D31D8A0)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D31D6C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ST_Parkour_ByCompareDistanceToPlayer_TypeDefinitionIndex = 10248;

	class ST_Parkour_ByCompareDistanceToPlayer : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x20
		::System::Single CompareValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_976949D69EC6BD93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_METHOD_4_976949D69EC6BD93_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_08408ECF1AD95AD2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_METHOD_4_08408ECF1AD95AD2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B7F6535C9744E774(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_METHOD_4_B7F6535C9744E774_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1F4FC3EDACBE6F9B(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareDistanceToPlayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREDISTANCETOPLAYER_METHOD_4_1F4FC3EDACBE6F9B_OFFSET))(a1, a2);
		}
	};
}
