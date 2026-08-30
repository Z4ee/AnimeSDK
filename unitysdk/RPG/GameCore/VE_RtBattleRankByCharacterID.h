#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_METHOD_3_10647AA5E3ED92F3_OFFSET UNITYSDK_OFFSET(0x1DEA4F70)
#define RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_METHOD_3_5F8637D1B321A004_OFFSET UNITYSDK_OFFSET(0x1DEA4FA0)
#define RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_METHOD_3_B414A55426266F45_OFFSET UNITYSDK_OFFSET(0x1DEA4DD0)
#define RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_METHOD_3_E27B089F5CDB8BCA_OFFSET UNITYSDK_OFFSET(0x1DEA4E10)
#define RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA4E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtBattleRankByCharacterID_TypeDefinitionIndex = 23990;

	class VE_RtBattleRankByCharacterID : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* CharacterID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B414A55426266F45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleRankByCharacterID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleRankByCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_METHOD_3_B414A55426266F45_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E27B089F5CDB8BCA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleRankByCharacterID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleRankByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_METHOD_3_E27B089F5CDB8BCA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_10647AA5E3ED92F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleRankByCharacterID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleRankByCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_METHOD_3_10647AA5E3ED92F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5F8637D1B321A004(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleRankByCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleRankByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_METHOD_3_5F8637D1B321A004_OFFSET))(a1, a2);
		}
	};
}
