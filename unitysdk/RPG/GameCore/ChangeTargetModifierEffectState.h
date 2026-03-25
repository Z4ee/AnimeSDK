#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHANGETARGETMODIFIEREFFECTSTATE_METHOD_3_5A978C4B9A5F455B_OFFSET UNITYSDK_OFFSET(0x17064810)
#define RPG_GAMECORE_CHANGETARGETMODIFIEREFFECTSTATE_METHOD_3_E3477340100A4016_OFFSET UNITYSDK_OFFSET(0x17064790)
#define RPG_GAMECORE_CHANGETARGETMODIFIEREFFECTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x170647E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeTargetModifierEffectState_TypeDefinitionIndex = 20640;

	class ChangeTargetModifierEffectState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean OnlyModifierEffects; // 0x20
		::System::Boolean IsHide; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGETARGETMODIFIEREFFECTSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E3477340100A4016(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeTargetModifierEffectState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeTargetModifierEffectState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGETARGETMODIFIEREFFECTSTATE_METHOD_3_E3477340100A4016_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5A978C4B9A5F455B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeTargetModifierEffectState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeTargetModifierEffectState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGETARGETMODIFIEREFFECTSTATE_METHOD_3_5A978C4B9A5F455B_OFFSET))(a1, a2);
		}
	};
}
