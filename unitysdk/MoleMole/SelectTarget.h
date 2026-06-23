#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"

class Class_1_3169BBF21D83DEAB;
class Class_1_CB7F0487F7A6164A;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SELECTTARGET_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12BDFF80)
#define MOLEMOLE_SELECTTARGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12BE0130)
#define MOLEMOLE_SELECTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x12BE07A0)
#define MOLEMOLE_SELECTTARGET___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12BE09A0)
#define MOLEMOLE_SELECTTARGET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12BE0A30)

namespace MoleMole
{
	inline static constexpr unsigned int SelectTarget_TypeDefinitionIndex = 45991;

	class SelectTarget : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Il2CppArray<::MoleMole::Config::MonsterFunctionType>* monsterFunctionTypeArray; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* IsAreaDetect; // 0x60
		::BehaviorDesigner::Runtime::SharedBool* enableFindFeatureTarget; // 0x68
		::MoleMole::Battle::Entity* ownerEntity; // 0x70
		::BehaviorDesigner::Runtime::SharedBool* ExcludeExitBattleTarget; // 0x78
		::BehaviorDesigner::Runtime::SharedBool* IsFailClearTarget; // 0x80
		::BehaviorDesigner::Runtime::SharedBool* EnableDistanceFilter; // 0x88
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x90
		::Class_1_3169BBF21D83DEAB* _selectTargetPara; // 0x98
		::BehaviorDesigner::Runtime::SharedString* AbilityTargetCustomKey; // 0xA0
		::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* _featureTargets; // 0xA8
		::BehaviorDesigner::Runtime::SharedFloat* ValidDistance; // 0xB0
		::System::String* DistanceEntityCustomKey; // 0xB8
		::System::String* DistanceEntityAttachPoint; // 0xC0
		::BehaviorDesigner::Runtime::SharedBool* OverrideSelectConditionWithAbilityTargetKey; // 0xC8
		::MoleMole::AIMoveTargetType DistanceCenterEntity; // 0xD0
		::System::Boolean isSelectAllied; // 0xD4
		::System::Boolean isSelectEnemy; // 0xD5
		::System::Boolean isSelectNeutral; // 0xD6
		::System::Boolean isLocalAvatarFirst; // 0xD7

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SELECTTARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SELECTTARGET_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SELECTTARGET_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SELECTTARGET___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SELECTTARGET___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
