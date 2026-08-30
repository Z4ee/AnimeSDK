#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EffectTriggerRange; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETEFFECTANIMATORTRIGGER_METHOD_3_7D70005BB9EECBDE_OFFSET UNITYSDK_OFFSET(0x1D4FAD30)
#define RPG_GAMECORE_SETEFFECTANIMATORTRIGGER_METHOD_3_9FE9171619FA9343_OFFSET UNITYSDK_OFFSET(0x1D4FAD70)
#define RPG_GAMECORE_SETEFFECTANIMATORTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FAD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEffectAnimatorTrigger_TypeDefinitionIndex = 22631;

	class SetEffectAnimatorTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* UniqueEffectName; // 0x20
		::System::String* TriggerName; // 0x28
		::System::Boolean IsResetTrigger; // 0x30
		::Il2CppArray<::RPG::GameCore::EffectTriggerRange*>* EffectTriggerRangeList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7D70005BB9EECBDE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectAnimatorTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectAnimatorTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORTRIGGER_METHOD_3_7D70005BB9EECBDE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9FE9171619FA9343(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectAnimatorTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectAnimatorTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORTRIGGER_METHOD_3_9FE9171619FA9343_OFFSET))(a1, a2);
		}
	};
}
