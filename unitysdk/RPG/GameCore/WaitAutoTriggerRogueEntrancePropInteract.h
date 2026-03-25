#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITAUTOTRIGGERROGUEENTRANCEPROPINTERACT_METHOD_3_00B243FAB326A679_OFFSET UNITYSDK_OFFSET(0x178F4FE0)
#define RPG_GAMECORE_WAITAUTOTRIGGERROGUEENTRANCEPROPINTERACT_METHOD_3_540E8372F44340F0_OFFSET UNITYSDK_OFFSET(0x178F4F60)
#define RPG_GAMECORE_WAITAUTOTRIGGERROGUEENTRANCEPROPINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x178F4FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitAutoTriggerRogueEntrancePropInteract_TypeDefinitionIndex = 20263;

	class WaitAutoTriggerRogueEntrancePropInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 NotifyValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITAUTOTRIGGERROGUEENTRANCEPROPINTERACT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_540E8372F44340F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAutoTriggerRogueEntrancePropInteract*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAutoTriggerRogueEntrancePropInteract*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITAUTOTRIGGERROGUEENTRANCEPROPINTERACT_METHOD_3_540E8372F44340F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_00B243FAB326A679(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAutoTriggerRogueEntrancePropInteract* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAutoTriggerRogueEntrancePropInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITAUTOTRIGGERROGUEENTRANCEPROPINTERACT_METHOD_3_00B243FAB326A679_OFFSET))(a1, a2);
		}
	};
}
