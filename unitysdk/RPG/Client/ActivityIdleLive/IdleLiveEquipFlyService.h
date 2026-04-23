#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B18A907A8E4C5C9C;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B531B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_INIT_OFFSET UNITYSDK_OFFSET(0x9B529A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_ONALLEQUIPSELECTFINISHED_OFFSET UNITYSDK_OFFSET(0x9B52B70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_REGISTERROOTTRANS_OFFSET UNITYSDK_OFFSET(0x9B528E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_SHOWEQUIPFLY_OFFSET UNITYSDK_OFFSET(0x9B52CA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x9B53200)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveEquipFlyService_TypeDefinitionIndex = 69345;

	class IdleLiveEquipFlyService : public ::System::Object
	{
	public:
		// static const ::System::String* _EQUIP_FLY_PREFAB_PATH; // 0x0
		::Class_1_B18A907A8E4C5C9C* _PoolMgr; // 0x10
		::RPG::Client::Promises::Promise* _EquipFlyEndPromise; // 0x18
		::UnityEngine::Canvas* _RootCanvas; // 0x20
		::System::Boolean _Inited; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterRootTrans(::UnityEngine::Transform* rootTrans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_REGISTERROOTTRANS_OFFSET))(this, rootTrans);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_INIT_OFFSET))(this);
		}

		::System::Void OnAllEquipSelectFinished(::System::Boolean hasNewSpEquip, ::System::Boolean hasSpEquipUpgrade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_ONALLEQUIPSELECTFINISHED_OFFSET))(this, hasNewSpEquip, hasSpEquipUpgrade);
		}

		::RPG::Client::Promises::IPromise* ShowEquipFly(::UnityEngine::Transform* startTrans, ::UnityEngine::Transform* endTrans)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_SHOWEQUIPFLY_OFFSET))(this, startTrans, endTrans);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_DISPOSE_OFFSET))(this);
		}
	};
}
