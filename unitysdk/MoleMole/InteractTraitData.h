#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4A097505A5A1A069_1.h"
#include "unitysdk/Enum_3_9BA2A8AEAE5EE45A.h"
#include "unitysdk/Enum_3_DAFCB1AA7EAADD66.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/ConfigInteractionFanCylinder.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_INTERACTTRAITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16D4F110)

namespace MoleMole
{
	inline static constexpr unsigned int InteractTraitData_TypeDefinitionIndex = 54258;

	class InteractTraitData : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::String* InteractShowName; // 0x58
		::System::String* Desc; // 0x60
		::System::String* InteractIcon; // 0x68
		::System::Int32 InteractionCntMax; // 0x70
		::System::Boolean ExclusiveInteract; // 0x74
		::Enum_3_4A097505A5A1A069_1 InteractPriority; // 0x75
		::Enum_3_DAFCB1AA7EAADD66 StartMode; // 0x78
		::MoleMole::Config::ConfigInteractionFanCylinder TargetEntity; // 0x7C
		::System::Boolean AgentTriggerEnable; // 0xA4
		::MoleMole::Config::ConfigInteractionFanCylinder Agent; // 0xA8
		::System::Boolean PendingWhenNotActivated; // 0xD0
		::System::Boolean NonBattleStatus; // 0xD1
		::System::Collections::Generic::List_1<::System::String*>* ZoneTagWhiteList; // 0xD8
		::System::Collections::Generic::List_1<::System::String*>* ZoneTagBlackList; // 0xE0
		::System::Boolean EnableObstacleCheck; // 0xE8
		::System::Collections::Generic::List_1<::System::String*>* ObstacleTagWhiteList; // 0xF0
		::Enum_3_9BA2A8AEAE5EE45A ObstacleCheckQuality; // 0xF8
		::System::Collections::Generic::List_1<::System::String*>* AvatarSpecialStateBlackList; // 0x100
		::System::Collections::Generic::List_1<::System::String*>* AvatarSpecialStateWhiteList; // 0x108
		::System::Collections::Generic::List_1<::System::String*>* PerformStatus; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTTRAITDATA__CTOR_OFFSET))(this);
		}
	};
}
