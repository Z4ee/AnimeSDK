#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITAUTOTRIGGERROGUEENTRANCEPROPINTERACT_METHOD_3_00B243FAB326A679_OFFSET UNITYSDK_OFFSET(0x1D69F280)
#define RPG_GAMECORE_WAITAUTOTRIGGERROGUEENTRANCEPROPINTERACT_METHOD_3_10923C41618305BA_OFFSET UNITYSDK_OFFSET(0x1D69F240)
#define RPG_GAMECORE_WAITAUTOTRIGGERROGUEENTRANCEPROPINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69F270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitAutoTriggerRogueEntrancePropInteract_TypeDefinitionIndex = 21833;

	class WaitAutoTriggerRogueEntrancePropInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 NotifyValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITAUTOTRIGGERROGUEENTRANCEPROPINTERACT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_10923C41618305BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAutoTriggerRogueEntrancePropInteract*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAutoTriggerRogueEntrancePropInteract*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITAUTOTRIGGERROGUEENTRANCEPROPINTERACT_METHOD_3_10923C41618305BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_00B243FAB326A679(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAutoTriggerRogueEntrancePropInteract* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAutoTriggerRogueEntrancePropInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITAUTOTRIGGERROGUEENTRANCEPROPINTERACT_METHOD_3_00B243FAB326A679_OFFSET))(a1, a2);
		}
	};
}
