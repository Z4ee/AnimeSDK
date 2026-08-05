#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_178572AA7B5DCE11.h"
#include "unitysdk/Enum_3_3855198EDB5CF06A_2.h"
#include "unitysdk/Enum_3_4A097505A5A1A069.h"
#include "unitysdk/Enum_3_84EF80B5EAF22C03.h"
#include "unitysdk/Enum_3_9BA2A8AEAE5EE45A.h"
#include "unitysdk/Enum_3_DAFCB1AA7EAADD66.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/ConfigInteractionFanCylinder.h"
#include "unitysdk/MoleMole/InteractantTagListEntry.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_INTERACTTRAITDATA_GETINTERACTABLETYPEDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x149F1EF0)
#define MOLEMOLE_INTERACTTRAITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x149F1FA0)

namespace MoleMole
{
	inline static constexpr unsigned int InteractTraitData_TypeDefinitionIndex = 61706;

	class InteractTraitData : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::Enum_3_84EF80B5EAF22C03 SpecialInteractableType; // 0x58
		::System::Int32 InteractionCntMax; // 0x5C
		::Enum_3_4A097505A5A1A069 InteractPriority; // 0x60
		::Enum_3_DAFCB1AA7EAADD66 StartMode; // 0x64
		::MoleMole::Config::ConfigInteractionFanCylinder TargetEntity; // 0x68
		::System::Boolean AgentTriggerEnable; // 0x90
		::MoleMole::Config::ConfigInteractionFanCylinder Agent; // 0x94
		::System::Boolean PendingWhenNotActivated; // 0xBC
		::System::Boolean NonBattleStatus; // 0xBD
		::System::Collections::Generic::List_1<::MoleMole::InteractantTagListEntry>* ZoneTagWhiteList; // 0xC0
		::System::Collections::Generic::List_1<::MoleMole::InteractantTagListEntry>* ZoneTagBlackList; // 0xC8
		::System::Collections::Generic::List_1<::System::String*>* TagWhiteList; // 0xD0
		::System::Collections::Generic::List_1<::System::String*>* TagBlackList; // 0xD8
		::System::Boolean EnableObstacleCheck; // 0xE0
		::System::Collections::Generic::List_1<::System::String*>* ObstacleTagWhiteList; // 0xE8
		::Enum_3_9BA2A8AEAE5EE45A ObstacleCheckQuality; // 0xF0
		::System::Single RequiredInputHoldTime; // 0xF4
		::Enum_3_3855198EDB5CF06A_2 HoldInteractionInputBlockFlags; // 0xF8
		::Enum_3_178572AA7B5DCE11 HoldInteractionInterruptSourceFlags; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTTRAITDATA__CTOR_OFFSET))(this);
		}

		static ::System::String* GetInteractableTypeDescription(::Enum_3_84EF80B5EAF22C03 specialInteractableType)
		{
			return ((::System::String*(*)(::Enum_3_84EF80B5EAF22C03))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTTRAITDATA_GETINTERACTABLETYPEDESCRIPTION_OFFSET))(specialInteractableType);
		}
	};
}
