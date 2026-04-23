#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_A58651510BF6ACD7;
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9B46FF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_REGISTERBOSSHPCHANGELISTENER_OFFSET UNITYSDK_OFFSET(0x9B47810)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_SETTOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x9B477C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_START_OFFSET UNITYSDK_OFFSET(0x9B47490)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9B47A60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR__GETBOSSENTITY_OFFSET UNITYSDK_OFFSET(0x9B471C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR__INITTOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x9B47700)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR__ONBOSSHPCHANGE_OFFSET UNITYSDK_OFFSET(0x9B478A0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonHpChangeMonitor_TypeDefinitionIndex = 69231;

	class IdleLiveDungeonHpChangeMonitor : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Action_1<::System::Int32>*>* _BossHpChangeListeners; // 0x18
		::System::Int32 _TotalProgress; // 0x20
		::RPG::GameCore::FixPoint _InitialBossHp; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_START_OFFSET))(this);
		}

		::System::Void _InitTotalProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR__INITTOTALPROGRESS_OFFSET))(this);
		}

		::System::Void SetTotalProgress(::System::Int32 totalProgress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_SETTOTALPROGRESS_OFFSET))(this, totalProgress);
		}

		::System::Void RegisterBossHpChangeListener(::System::Action_1<::System::Int32>* currentProgress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_REGISTERBOSSHPCHANGELISTENER_OFFSET))(this, currentProgress);
		}

		::RPG::GameCore::GameEntity* _GetBossEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR__GETBOSSENTITY_OFFSET))(this);
		}

		::System::Void _OnBossHpChange(::Class_1_A58651510BF6ACD7* result)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A58651510BF6ACD7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR__ONBOSSHPCHANGE_OFFSET))(this, result);
		}
	};
}
