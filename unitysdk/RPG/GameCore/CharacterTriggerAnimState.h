#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERTRIGGERANIMSTATE_METHOD_3_525A3F96B38D0DB5_OFFSET UNITYSDK_OFFSET(0x1B72BBB0)
#define RPG_GAMECORE_CHARACTERTRIGGERANIMSTATE_METHOD_3_6506ED4B38DBB0C0_OFFSET UNITYSDK_OFFSET(0x1B72BC00)
#define RPG_GAMECORE_CHARACTERTRIGGERANIMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B72BBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterTriggerAnimState_TypeDefinitionIndex = 20040;

	class CharacterTriggerAnimState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* CharacterUniqueName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetAlias; // 0x20
		::System::Boolean ForceStart; // 0x28
		::System::Boolean AutoExitToDefault; // 0x29
		::System::String* AnimStateName; // 0x30
		::RPG::GameCore::DynamicString* AnimStateNameDS; // 0x38
		::System::Single NormalizedTimeStart; // 0x40
		::System::Single NormalizedTransitionDuration; // 0x44
		::System::Single NormalizedTimeWait; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERTRIGGERANIMSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_525A3F96B38D0DB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterTriggerAnimState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterTriggerAnimState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERTRIGGERANIMSTATE_METHOD_3_525A3F96B38D0DB5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6506ED4B38DBB0C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterTriggerAnimState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterTriggerAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERTRIGGERANIMSTATE_METHOD_3_6506ED4B38DBB0C0_OFFSET))(a1, a2);
		}
	};
}
