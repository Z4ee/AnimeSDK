#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTBATTLEPROPERTY_METHOD_3_553F367656B943EE_OFFSET UNITYSDK_OFFSET(0x1D68F190)
#define RPG_GAMECORE_VE_RTBATTLEPROPERTY_METHOD_3_DEEDFCB2D02F8B73_OFFSET UNITYSDK_OFFSET(0x1D68EF50)
#define RPG_GAMECORE_VE_RTBATTLEPROPERTY_METHOD_3_F0D60687BED61AE9_OFFSET UNITYSDK_OFFSET(0x1D68F160)
#define RPG_GAMECORE_VE_RTBATTLEPROPERTY_METHOD_3_FFFD9742EE3B720A_OFFSET UNITYSDK_OFFSET(0x1D68EF90)
#define RPG_GAMECORE_VE_RTBATTLEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68EF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtBattleProperty_TypeDefinitionIndex = 23994;

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

		static ::System::Void Method_3_F0D60687BED61AE9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleProperty*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTY_METHOD_3_F0D60687BED61AE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_553F367656B943EE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleProperty* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTY_METHOD_3_553F367656B943EE_OFFSET))(a1, a2);
		}
	};
}
