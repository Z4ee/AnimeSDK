#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/MoleMole/Config/TargetValueModifyFunc.h"
#include "unitysdk/MoleMole/Config/TeamRelationship.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/MoleMole/TargetValueType.h"

class Class_3_E2819F45333A39BF;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SETSELFTARGETVALUE_COLLECTTARGETENTITYTAGS_OFFSET UNITYSDK_OFFSET(0x13AD1090)
#define MOLEMOLE_SETSELFTARGETVALUE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13AD0870)
#define MOLEMOLE_SETSELFTARGETVALUE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13AD0A30)
#define MOLEMOLE_SETSELFTARGETVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD1300)
#define MOLEMOLE_SETSELFTARGETVALUE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13AD1490)
#define MOLEMOLE_SETSELFTARGETVALUE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13AD1520)

namespace MoleMole
{
	inline static constexpr unsigned int SetSelfTargetValue_TypeDefinitionIndex = 71436;

	class SetSelfTargetValue : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* enemyEntityList; // 0x58
		::Il2CppArray<::MoleMole::Config::MonsterFunctionType>* monsterFunctionTypeArray; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::Config::TeamRelationship>* relationShipList; // 0x68
		::Class_3_E2819F45333A39BF* characterBattleData; // 0x70
		::MoleMole::Battle::Entity* ownerEntity; // 0x78
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x80
		::MoleMole::Config::TargetValueModifyFunc ModifyType; // 0x88
		::MoleMole::Config::TeamRelationship TargetRelationShip; // 0x8C
		::MoleMole::TargetValueType valueType; // 0x90
		::System::Single modifyValue; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETSELFTARGETVALUE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETSELFTARGETVALUE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETSELFTARGETVALUE_ONUPDATE_OFFSET))(this);
		}

		::System::Void CollectTargetEntityTags(::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*& results)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_SETSELFTARGETVALUE_COLLECTTARGETENTITYTAGS_OFFSET))(this, results);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETSELFTARGETVALUE___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETSELFTARGETVALUE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
