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

#define MOLEMOLE_SELECTTARGET_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1606C1A0)
#define MOLEMOLE_SELECTTARGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1606C350)
#define MOLEMOLE_SELECTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1606C9D0)
#define MOLEMOLE_SELECTTARGET___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1606CBE0)
#define MOLEMOLE_SELECTTARGET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1606CC70)

namespace MoleMole
{
	inline static constexpr unsigned int SelectTarget_TypeDefinitionIndex = 82300;

	class SelectTarget : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* ValidDistance; // 0x58
		::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* _featureTargets; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68
		::BehaviorDesigner::Runtime::SharedBool* IsFailClearTarget; // 0x70
		::System::String* DistanceEntityAttachPoint; // 0x78
		::BehaviorDesigner::Runtime::SharedBool* EnableDistanceFilter; // 0x80
		::BehaviorDesigner::Runtime::SharedBool* enableFindFeatureTarget; // 0x88
		::Class_1_3169BBF21D83DEAB* _selectTargetPara; // 0x90
		::BehaviorDesigner::Runtime::SharedBool* ExcludeExitBattleTarget; // 0x98
		::BehaviorDesigner::Runtime::SharedString* AbilityTargetCustomKey; // 0xA0
		::BehaviorDesigner::Runtime::SharedBool* IsAreaDetect; // 0xA8
		::Il2CppArray<::MoleMole::Config::MonsterFunctionType>* monsterFunctionTypeArray; // 0xB0
		::BehaviorDesigner::Runtime::SharedBool* OverrideSelectConditionWithAbilityTargetKey; // 0xB8
		::MoleMole::Battle::Entity* ownerEntity; // 0xC0
		::System::String* DistanceEntityCustomKey; // 0xC8
		::System::Boolean isSelectAllied; // 0xD0
		::System::Boolean isLocalAvatarFirst; // 0xD1
		::System::Boolean isSelectEnemy; // 0xD2
		::System::Boolean isSelectNeutral; // 0xD3
		::MoleMole::AIMoveTargetType DistanceCenterEntity; // 0xD4

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
