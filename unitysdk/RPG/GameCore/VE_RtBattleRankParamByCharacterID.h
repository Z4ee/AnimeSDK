#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_METHOD_3_290ED19C23A9B4F4_OFFSET UNITYSDK_OFFSET(0x19E43790)
#define RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_METHOD_3_556C75E562F746F1_OFFSET UNITYSDK_OFFSET(0x19E43750)
#define RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_METHOD_3_72AA9071B0CC73B4_OFFSET UNITYSDK_OFFSET(0x19E43960)
#define RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_METHOD_3_D87CFBDB928E0C88_OFFSET UNITYSDK_OFFSET(0x19E43930)
#define RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x19E43780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtBattleRankParamByCharacterID_TypeDefinitionIndex = 22941;

	class VE_RtBattleRankParamByCharacterID : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* CharacterID; // 0x20
		::RPG::GameCore::ValueEvaluatorConfig* Rank; // 0x28
		::RPG::GameCore::ValueEvaluatorConfig* ParamIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_556C75E562F746F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_METHOD_3_556C75E562F746F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_290ED19C23A9B4F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_METHOD_3_290ED19C23A9B4F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D87CFBDB928E0C88(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_METHOD_3_D87CFBDB928E0C88_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_72AA9071B0CC73B4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_METHOD_3_72AA9071B0CC73B4_OFFSET))(a1, a2);
		}
	};
}
