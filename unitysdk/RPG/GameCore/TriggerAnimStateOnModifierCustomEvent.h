#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERANIMSTATEONMODIFIERCUSTOMEVENT_METHOD_3_9C072F47C9660DE6_OFFSET UNITYSDK_OFFSET(0x178BE870)
#define RPG_GAMECORE_TRIGGERANIMSTATEONMODIFIERCUSTOMEVENT_METHOD_3_F020E81F9A1CD2AD_OFFSET UNITYSDK_OFFSET(0x178BE900)
#define RPG_GAMECORE_TRIGGERANIMSTATEONMODIFIERCUSTOMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x178BE8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerAnimStateOnModifierCustomEvent_TypeDefinitionIndex = 21356;

	class TriggerAnimStateOnModifierCustomEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::JsonEnum* EventType; // 0x20
		::RPG::GameCore::AnimStateLogicType AnimLogicState; // 0x28
		::System::String* AnimStateName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMSTATEONMODIFIERCUSTOMEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9C072F47C9660DE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerAnimStateOnModifierCustomEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerAnimStateOnModifierCustomEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMSTATEONMODIFIERCUSTOMEVENT_METHOD_3_9C072F47C9660DE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F020E81F9A1CD2AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerAnimStateOnModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerAnimStateOnModifierCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERANIMSTATEONMODIFIERCUSTOMEVENT_METHOD_3_F020E81F9A1CD2AD_OFFSET))(a1, a2);
		}
	};
}
