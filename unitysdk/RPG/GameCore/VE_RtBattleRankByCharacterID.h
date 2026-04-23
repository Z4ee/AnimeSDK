#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_METHOD_3_38C1071778EA996B_OFFSET UNITYSDK_OFFSET(0x190EEB50)
#define RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_METHOD_3_F47ABDBA910641B8_OFFSET UNITYSDK_OFFSET(0x190EEB90)
#define RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x190EEB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtBattleRankByCharacterID_TypeDefinitionIndex = 23275;

	class VE_RtBattleRankByCharacterID : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* CharacterID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_38C1071778EA996B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleRankByCharacterID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleRankByCharacterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_METHOD_3_38C1071778EA996B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F47ABDBA910641B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleRankByCharacterID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleRankByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_METHOD_3_F47ABDBA910641B8_OFFSET))(a1, a2);
		}
	};
}
