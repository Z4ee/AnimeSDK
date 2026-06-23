#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CE3B674D22BBFC73.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }

#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_AWAKE_OFFSET UNITYSDK_OFFSET(0x10CCEFA0)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x10CCEF00)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_GET_LAYERMASK_OFFSET UNITYSDK_OFFSET(0x10CCEF90)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_GET_OBSERVETAG_OFFSET UNITYSDK_OFFSET(0x10CCEF30)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_GET_SELFCOLLIDER_OFFSET UNITYSDK_OFFSET(0x10CCEF20)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_METHOD_5_6772AF2CA56C6F2D_OFFSET UNITYSDK_OFFSET(0x10CCF160)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x10CCF0B0)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x10CCF660)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10CCF070)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x10CCF710)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x10CCF7C0)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_SETCOLLIDERENABLE_OFFSET UNITYSDK_OFFSET(0x10CCF870)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x10CCEF10)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_SET_OBSERVETAG_OFFSET UNITYSDK_OFFSET(0x10CCEF40)
#define MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x10CCF8D0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ColliderEventDispatcher_TypeDefinitionIndex = 86788;

	class ColliderEventDispatcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Enum_3_CE3B674D22BBFC73 Mode; // 0x18
		::System::Object* CallbackPara; // 0x20
		::System::Boolean Field_5_2; // 0x28
		::UnityEngine::Collider* Field_5_3; // 0x30
		::System::Action_2<::UnityEngine::Collision*, ::System::Object*>* E_OnCollisionEnter; // 0x38
		::System::Action_2<::UnityEngine::Collision*, ::System::Object*>* E_OnCollisionExit; // 0x40
		::System::Action_2<::UnityEngine::Collider*, ::System::Object*>* E_OnTriggerEnter; // 0x48
		::System::Action_2<::UnityEngine::Collider*, ::System::Object*>* E_OnTriggerExit; // 0x50
		::System::Action_2<::UnityEngine::Collider*, ::System::Object*>* OnTriggerEnterCb; // 0x58
		::System::Action_2<::UnityEngine::Collider*, ::System::Object*>* OnTriggerExitCb; // 0x60
		::System::String* Field_5_10; // 0x68
		::UnityEngine::LayerMask Field_5_11; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_GET_ISDESTROYED_OFFSET))(this);
		}

		::System::Void set_IsDestroyed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_SET_ISDESTROYED_OFFSET))(this, a1);
		}

		::UnityEngine::Collider* get_selfCollider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_GET_SELFCOLLIDER_OFFSET))(this);
		}

		::System::String* get_ObserveTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_GET_OBSERVETAG_OFFSET))(this);
		}

		::System::Void set_ObserveTag(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_SET_OBSERVETAG_OFFSET))(this, a1);
		}

		::UnityEngine::LayerMask get_layerMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_GET_LAYERMASK_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_ONCOLLISIONENTER_OFFSET))(this, a1);
		}

		::System::Void OnCollisionExit(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_ONCOLLISIONEXIT_OFFSET))(this, a1);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void SetColliderEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_SETCOLLIDERENABLE_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_6772AF2CA56C6F2D(::UnityEngine::Collider* a1, ::Enum_3_CE3B674D22BBFC73 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::Enum_3_CE3B674D22BBFC73))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_COLLIDEREVENTDISPATCHER_METHOD_5_6772AF2CA56C6F2D_OFFSET))(this, a1, a2);
		}
	};
}
