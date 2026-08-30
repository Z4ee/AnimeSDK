#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client::Prop { class TeleportGate; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_TELEPORTGATE___DOMOVE_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17B10ED0)
#define RPG_CLIENT_PROP_TELEPORTGATE___DOMOVE_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17B12BF0)
#define RPG_CLIENT_PROP_TELEPORTGATE___DOMOVE_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17B12C50)
#define RPG_CLIENT_PROP_TELEPORTGATE___DOMOVE_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17B12C00)
#define RPG_CLIENT_PROP_TELEPORTGATE___DOMOVE_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B10EB0)
#define RPG_CLIENT_PROP_TELEPORTGATE___DOMOVE_D__23__CTOR_OFFSET UNITYSDK_OFFSET(0x17B10490)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TeleportGate___DoMove_d__23_TypeDefinitionIndex = 78418;

	class TeleportGate___DoMove_d__23 : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffectManager* _pMonoEffectManager_5__9; // 0x10
		::RPG::Client::Prop::TeleportGate* _targetGate_5__5; // 0x18
		::RPG::Client::AdventurePhase* _adventurePhase_5__11; // 0x20
		::UnityEngine::Transform* _proxyObjectTrans_5__8; // 0x28
		::RPG::Client::Prop::TeleportGate* __4__this; // 0x30
		::System::Object* __2__current; // 0x38
		::System::Int32 __1__state; // 0x40
		::System::Single _t_5__4; // 0x44
		::UnityEngine::Vector3 _curPosition_5__7; // 0x48
		::UnityEngine::Vector3 _stepTargetPosition_5__6; // 0x54
		::System::Single _distance_5__10; // 0x60
		::System::Single _curDistance_5__3; // 0x64
		::System::Single _totalDistance_5__2; // 0x68

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE___DOMOVE_D__23__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE___DOMOVE_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE___DOMOVE_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE___DOMOVE_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE___DOMOVE_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATE___DOMOVE_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
