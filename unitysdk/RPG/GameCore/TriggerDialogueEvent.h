#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERDIALOGUEEVENT_METHOD_3_423129201CC278BD_OFFSET UNITYSDK_OFFSET(0x1D5F2520)
#define RPG_GAMECORE_TRIGGERDIALOGUEEVENT_METHOD_3_E7EAAB6675C356A6_OFFSET UNITYSDK_OFFSET(0x1D5F2560)
#define RPG_GAMECORE_TRIGGERDIALOGUEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F2550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerDialogueEvent_TypeDefinitionIndex = 20613;

	class TriggerDialogueEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 DialogueEventID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDIALOGUEEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_423129201CC278BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerDialogueEvent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerDialogueEvent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDIALOGUEEVENT_METHOD_3_423129201CC278BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E7EAAB6675C356A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerDialogueEvent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerDialogueEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDIALOGUEEVENT_METHOD_3_E7EAAB6675C356A6_OFFSET))(a1, a2);
		}
	};
}
