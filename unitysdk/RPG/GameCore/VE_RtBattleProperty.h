#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_VE_RTBATTLEPROPERTY_METHOD_3_B5FE558A80202FB9_OFFSET UNITYSDK_OFFSET(0x190EE770)
#define RPG_GAMECORE_VE_RTBATTLEPROPERTY_METHOD_3_F9428CAD66CB4A54_OFFSET UNITYSDK_OFFSET(0x190EE730)
#define RPG_GAMECORE_VE_RTBATTLEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x190EE760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtBattleProperty_TypeDefinitionIndex = 23280;

	class VE_RtBattleProperty : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::RtAbilityProperty Property; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F9428CAD66CB4A54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTY_METHOD_3_F9428CAD66CB4A54_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B5FE558A80202FB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VE_RtBattleProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VE_RtBattleProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLEPROPERTY_METHOD_3_B5FE558A80202FB9_OFFSET))(a1, a2);
		}
	};
}
