#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B18A907A8E4C5C9C;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5B6080)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_INIT_OFFSET UNITYSDK_OFFSET(0xC5B5810)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_ONALLEQUIPSELECTFINISHED_OFFSET UNITYSDK_OFFSET(0xC5B5A20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_REGISTERROOTTRANS_OFFSET UNITYSDK_OFFSET(0xC5B5750)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_SHOWEQUIPFLY_OFFSET UNITYSDK_OFFSET(0xC5B5B60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xC5B60D0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveEquipFlyService_TypeDefinitionIndex = 74987;

	class IdleLiveEquipFlyService : public ::System::Object
	{
	public:
		// static const ::System::String* _EQUIP_FLY_PREFAB_PATH; // 0x0
		::UnityEngine::Canvas* _RootCanvas; // 0x10
		::Class_1_B18A907A8E4C5C9C* _PoolMgr; // 0x18
		::RPG::Client::Promises::Promise* _EquipFlyEndPromise; // 0x20
		::System::Boolean _Inited; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterRootTrans(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_REGISTERROOTTRANS_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_INIT_OFFSET))(this);
		}

		::System::Void OnAllEquipSelectFinished(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_ONALLEQUIPSELECTFINISHED_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* ShowEquipFly(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_SHOWEQUIPFLY_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEEQUIPFLYSERVICE_DISPOSE_OFFSET))(this);
		}
	};
}
