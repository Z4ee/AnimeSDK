#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierCustomEventSortType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERMODIFIERCUSTOMEVENT_METHOD_3_79D01DAAE32C5863_OFFSET UNITYSDK_OFFSET(0x1D290DB0)
#define RPG_GAMECORE_TRIGGERMODIFIERCUSTOMEVENT_METHOD_3_BB21DF926805CCB7_OFFSET UNITYSDK_OFFSET(0x1D290E90)
#define RPG_GAMECORE_TRIGGERMODIFIERCUSTOMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D290E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerModifierCustomEvent_TypeDefinitionIndex = 22452;

	class TriggerModifierCustomEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::JsonEnum* EventType; // 0x20
		::RPG::GameCore::TargetEvaluator* CasterFilter; // 0x28
		::System::String* DynamicKey; // 0x30
		::RPG::GameCore::DynamicFloat* Value; // 0x38
		::RPG::GameCore::DynamicFloat* MaxNumber; // 0x40
		::RPG::GameCore::PredicateConfig* PreCheck; // 0x48
		::RPG::GameCore::ModifierCustomEventSortType OverrideSortBy; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODIFIERCUSTOMEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_79D01DAAE32C5863(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerModifierCustomEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerModifierCustomEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODIFIERCUSTOMEVENT_METHOD_3_79D01DAAE32C5863_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BB21DF926805CCB7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerModifierCustomEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODIFIERCUSTOMEVENT_METHOD_3_BB21DF926805CCB7_OFFSET))(a1, a2);
		}
	};
}
