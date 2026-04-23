#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EffectTriggerRange; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETEFFECTANIMATORTRIGGER_METHOD_3_C0662E5A8A1D14A6_OFFSET UNITYSDK_OFFSET(0x18E2CFA0)
#define RPG_GAMECORE_SETEFFECTANIMATORTRIGGER_METHOD_3_E9532BFCB05269D7_OFFSET UNITYSDK_OFFSET(0x18E2D020)
#define RPG_GAMECORE_SETEFFECTANIMATORTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18E2CFF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEffectAnimatorTrigger_TypeDefinitionIndex = 21802;

	class SetEffectAnimatorTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* UniqueEffectName; // 0x20
		::System::String* TriggerName; // 0x28
		::Il2CppArray<::RPG::GameCore::EffectTriggerRange*>* EffectTriggerRangeList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C0662E5A8A1D14A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectAnimatorTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectAnimatorTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORTRIGGER_METHOD_3_C0662E5A8A1D14A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E9532BFCB05269D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectAnimatorTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectAnimatorTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORTRIGGER_METHOD_3_E9532BFCB05269D7_OFFSET))(a1, a2);
		}
	};
}
