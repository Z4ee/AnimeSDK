#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_METHOD_3_30E4F9B591B453E6_OFFSET UNITYSDK_OFFSET(0x190EED30)
#define RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_METHOD_3_EBF760DD8398F3CB_OFFSET UNITYSDK_OFFSET(0x190EECF0)
#define RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x190EED20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtBattleRankParamByCharacterID_TypeDefinitionIndex = 23273;

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

		static ::System::Void Method_3_EBF760DD8398F3CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_METHOD_3_EBF760DD8398F3CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_30E4F9B591B453E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_METHOD_3_30E4F9B591B453E6_OFFSET))(a1, a2);
		}
	};
}
