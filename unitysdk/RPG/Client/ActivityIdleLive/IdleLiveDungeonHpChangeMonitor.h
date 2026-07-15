#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_DFF28B1BAA582E14;
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A64F760)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_REGISTERBOSSHPCHANGELISTENER_OFFSET UNITYSDK_OFFSET(0x1A650080)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_SETTOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x1A650030)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_START_OFFSET UNITYSDK_OFFSET(0x1A64FCC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A650300)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR__GETBOSSENTITY_OFFSET UNITYSDK_OFFSET(0x1A64F8E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR__INITTOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x1A64FEC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR__ONBOSSHPCHANGE_OFFSET UNITYSDK_OFFSET(0x1A650160)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonHpChangeMonitor_TypeDefinitionIndex = 71566;

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

		::System::Void SetTotalProgress(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_SETTOTALPROGRESS_OFFSET))(this, a1);
		}

		::System::Void RegisterBossHpChangeListener(::System::Action_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR_REGISTERBOSSHPCHANGELISTENER_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* _GetBossEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR__GETBOSSENTITY_OFFSET))(this);
		}

		::System::Void _OnBossHpChange(::Class_1_DFF28B1BAA582E14* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DFF28B1BAA582E14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONHPCHANGEMONITOR__ONBOSSHPCHANGE_OFFSET))(this, a1);
		}
	};
}
