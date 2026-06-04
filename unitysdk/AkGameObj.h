#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkAudioListener;
class AkGameObjEnvironmentData;
class AkGameObjListenerList;
class AkGameObjPosOffsetData;
class AkGameObjPositionOffsetData;
class TransformVersionTracker;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define AKGAMEOBJ_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x1B416BC0)
#define AKGAMEOBJ_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B4348D0)
#define AKGAMEOBJ_CHECKSTATICSTATUS_OFFSET UNITYSDK_OFFSET(0x1B4356C0)
#define AKGAMEOBJ_GETFORWARD_OFFSET UNITYSDK_OFFSET(0x1B4367B0)
#define AKGAMEOBJ_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B4364C0)
#define AKGAMEOBJ_GETUPWARD_OFFSET UNITYSDK_OFFSET(0x1B436970)
#define AKGAMEOBJ_GET_ISAUTOSTOP_OFFSET UNITYSDK_OFFSET(0x1B434440)
#define AKGAMEOBJ_GET_ISUSINGDEFAULTLISTENERS_OFFSET UNITYSDK_OFFSET(0x1B42F320)
#define AKGAMEOBJ_GET_LISTENERLIST_OFFSET UNITYSDK_OFFSET(0x1B42F340)
#define AKGAMEOBJ_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B4359A0)
#define AKGAMEOBJ_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B435700)
#define AKGAMEOBJ_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1B436B30)
#define AKGAMEOBJ_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1B436BA0)
#define AKGAMEOBJ_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1B4355B0)
#define AKGAMEOBJ_REGISTER_OFFSET UNITYSDK_OFFSET(0x1B4167A0)
#define AKGAMEOBJ_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x1B416C20)
#define AKGAMEOBJ_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B434780)
#define AKGAMEOBJ_SET_ISAUTOSTOP_OFFSET UNITYSDK_OFFSET(0x1B434450)
#define AKGAMEOBJ_TICK_OFFSET UNITYSDK_OFFSET(0x1B435D70)
#define AKGAMEOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B437020)

inline static constexpr unsigned int AkGameObj_TypeDefinitionIndex = 41311;

class AkGameObj : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::Int32 AK_NUM_LISTENERS = 0x8; // 0x0
	::AkGameObjListenerList* m_listeners; // 0x18
	::System::Boolean isEnvironmentAware; // 0x20
	::System::Boolean isStaticObject; // 0x21
	::UnityEngine::Collider* m_Collider; // 0x28
	::UnityEngine::Transform* m_Trans; // 0x30
	::TransformVersionTracker* m_TransformTracker; // 0x38
	::System::UInt32 m_TransformVersion; // 0x40
	::AkGameObjEnvironmentData* m_envData; // 0x48
	::AkGameObjPositionOffsetData* m_positionOffsetData; // 0x50
	::System::Boolean isRegistered; // 0x58
	::System::Boolean _IsAutoStop_k__BackingField; // 0x59
	::AkGameObjPosOffsetData* m_posOffsetData; // 0x60
	::System::Int32 listenerMask; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsUsingDefaultListeners()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_GET_ISUSINGDEFAULTLISTENERS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::AkAudioListener*>* get_ListenerList()
	{
		return ((::System::Collections::Generic::List_1<::AkAudioListener*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_GET_LISTENERLIST_OFFSET))(this);
	}

	::System::Boolean get_IsAutoStop()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_GET_ISAUTOSTOP_OFFSET))(this);
	}

	::System::Void set_IsAutoStop(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKGAMEOBJ_SET_ISAUTOSTOP_OFFSET))(this, a1);
	}

	::System::Void AddListener(::AkAudioListener* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ADDLISTENER_OFFSET))(this, a1);
	}

	::System::Void RemoveListener(::AkAudioListener* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKGAMEOBJ_REMOVELISTENER_OFFSET))(this, a1);
	}

	::AKRESULT Register()
	{
		return ((::AKRESULT(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_REGISTER_OFFSET))(this);
	}

	::System::Void SetPosition()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_SETPOSITION_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_AWAKE_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ONVALIDATE_OFFSET))(this);
	}

	::System::Void CheckStaticStatus()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_CHECKSTATICSTATUS_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ONDESTROY_OFFSET))(this);
	}

	::System::Void Tick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_TICK_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_GETPOSITION_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetForward()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_GETFORWARD_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetUpward()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_GETUPWARD_OFFSET))(this);
	}

	::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ONTRIGGERENTER_OFFSET))(this, a1);
	}

	::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ONTRIGGEREXIT_OFFSET))(this, a1);
	}
};
