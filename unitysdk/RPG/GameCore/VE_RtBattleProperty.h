#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTBATTLEPROPERTY_METHOD_3_3A626A9DDE7A86D6_OFFSET UNITYSDK_OFFSET(0x19E42AB0)
#define RPG_GAMECORE_VE_RTBATTLEPROPERTY_METHOD_3_CF77A487D0DB51B8_OFFSET UNITYSDK_OFFSET(0x19E42AE0)
#define RPG_GAMECORE_VE_RTBATTLEPROPERTY_METHOD_3_DEEDFCB2D02F8B73_OFFSET UNITYSDK_OFFSET(0x19E428A0)
#define RPG_GAMECORE_VE_RTBATTLEPROPERTY_METHOD_3_FFFD9742EE3B720A_OFFSET UNITYSDK_OFFSET(0x19E428E0)
#define RPG_GAMECORE_VE_RTBATTLEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x19E428D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtBattleProperty_TypeDefinitionIndex = 22947;

	class VE_RtBattleProperty : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::RtAbilityProperty Property; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DEEDFCB2D02F8B73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTY_METHOD_3_DEEDFCB2D02F8B73_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FFFD9742EE3B720A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTY_METHOD_3_FFFD9742EE3B720A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A626A9DDE7A86D6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleProperty*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTY_METHOD_3_3A626A9DDE7A86D6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CF77A487D0DB51B8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTY_METHOD_3_CF77A487D0DB51B8_OFFSET))(a1, a2);
		}
	};
}
