#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkAudioListener;
class AkGameObjEnvironmentData;
class AkGameObjListenerList;
class AkGameObjPosOffsetData;
class AkGameObjPositionData;
class AkGameObjPositionOffsetData;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define AKGAMEOBJ_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x1B5528A0)
#define AKGAMEOBJ_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B553430)
#define AKGAMEOBJ_CHECKSTATICSTATUS_OFFSET UNITYSDK_OFFSET(0x1B553830)
#define AKGAMEOBJ_GETFORWARD_OFFSET UNITYSDK_OFFSET(0x1B5540B0)
#define AKGAMEOBJ_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B553E00)
#define AKGAMEOBJ_GETUPWARD_OFFSET UNITYSDK_OFFSET(0x1B554220)
#define AKGAMEOBJ_GET_ISUSINGDEFAULTLISTENERS_OFFSET UNITYSDK_OFFSET(0x1B552860)
#define AKGAMEOBJ_GET_LISTENERLIST_OFFSET UNITYSDK_OFFSET(0x1B552880)
#define AKGAMEOBJ_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B553840)
#define AKGAMEOBJ_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B552770)
#define AKGAMEOBJ_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B5526B0)
#define AKGAMEOBJ_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1B552810)
#define AKGAMEOBJ_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1B552850)
#define AKGAMEOBJ_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x1B552800)
#define AKGAMEOBJ_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1B552750)
#define AKGAMEOBJ_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1B554390)
#define AKGAMEOBJ_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1B5543B0)
#define AKGAMEOBJ_REGISTER_OFFSET UNITYSDK_OFFSET(0x1B552B60)
#define AKGAMEOBJ_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x1B552A00)
#define AKGAMEOBJ_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B552F00)
#define AKGAMEOBJ_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B553D60)
#define AKGAMEOBJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B554590)
#define AKGAMEOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5543D0)

inline static constexpr unsigned int AkGameObj_TypeDefinitionIndex = 31600;

class AkGameObj : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Boolean* StaticGet_blockUpdate()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AkGameObj_TypeDefinitionIndex)->GetStaticField(0x7C90);
	}
	// static const ::System::Int32 AK_NUM_LISTENERS = 0x8; // 0x0
	::AkGameObjListenerList* m_listeners; // 0x18
	::System::Boolean isEnvironmentAware; // 0x20
	::System::Boolean isStaticObject; // 0x21
	::UnityEngine::Collider* m_Collider; // 0x28
	::AkGameObjEnvironmentData* m_envData; // 0x30
	::AkGameObjPositionData* m_posData; // 0x38
	::AkGameObjPositionOffsetData* m_positionOffsetData; // 0x40
	::System::Boolean isRegistered; // 0x48
	::AkGameObjPosOffsetData* m_posOffsetData; // 0x50
	::System::Int32 listenerMask; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKGAMEOBJ__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Boolean get_IsUsingDefaultListeners()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_GET_ISUSINGDEFAULTLISTENERS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::AkAudioListener*>* get_ListenerList()
	{
		return ((::System::Collections::Generic::List_1<::AkAudioListener*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_GET_LISTENERLIST_OFFSET))(this);
	}

	::System::Void AddListener(::AkAudioListener* listener)
	{
		return ((::System::Void(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ADDLISTENER_OFFSET))(this, listener);
	}

	::System::Void RemoveListener(::AkAudioListener* listener)
	{
		return ((::System::Void(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKGAMEOBJ_REMOVELISTENER_OFFSET))(this, listener);
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

	::System::Void CheckStaticStatus()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_CHECKSTATICSTATUS_OFFSET))(this);
	}

	::System::Void OnRealEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ONREALENABLE_OFFSET))(this);
	}

	::System::Void OnRealDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ONREALDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ONDESTROY_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJ_UPDATE_OFFSET))(this);
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

	::System::Void OnTriggerEnter(::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ONTRIGGERENTER_OFFSET))(this, other);
	}

	::System::Void OnTriggerExit(::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKGAMEOBJ_ONTRIGGEREXIT_OFFSET))(this, other);
	}
};
