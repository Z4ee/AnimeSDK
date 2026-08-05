#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkAudioListener_DefaultListenerList;
class AkGameObj;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKAUDIOLISTENER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1FAF6C20)
#define AKAUDIOLISTENER_GETAKGAMEOBJECTID_OFFSET UNITYSDK_OFFSET(0x1FAF7210)
#define AKAUDIOLISTENER_GET_DEFAULTLISTENERS_OFFSET UNITYSDK_OFFSET(0x1FAF6940)
#define AKAUDIOLISTENER_MIGRATE14_OFFSET UNITYSDK_OFFSET(0x1FAF7220)
#define AKAUDIOLISTENER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1FAF6FE0)
#define AKAUDIOLISTENER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1FAF6F10)
#define AKAUDIOLISTENER_SETISDEFAULTLISTENER_OFFSET UNITYSDK_OFFSET(0x1FAF6A80)
#define AKAUDIOLISTENER_STARTLISTENINGTOEMITTER_OFFSET UNITYSDK_OFFSET(0x1FAF69A0)
#define AKAUDIOLISTENER_STOPLISTENINGTOEMITTER_OFFSET UNITYSDK_OFFSET(0x1FAF6A10)
#define AKAUDIOLISTENER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FAF70B0)
#define AKAUDIOLISTENER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAF7410)
#define AKAUDIOLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAF72F0)

inline static constexpr unsigned int AkAudioListener_TypeDefinitionIndex = 33769;

class AkAudioListener : public ::UnityEngine::MonoBehaviour
{
public:
	static ::AkAudioListener_DefaultListenerList** StaticGet_defaultListeners()
	{
		return (::AkAudioListener_DefaultListenerList**)Il2CppClass::FromTypeDefinitionIndex(AkAudioListener_TypeDefinitionIndex)->GetStaticField(0x28BC0);
	}
	::System::UInt64 akGameObjectID; // 0x18
	::System::Collections::Generic::List_1<::AkGameObj*>* EmittersToStartListeningTo; // 0x20
	::System::Collections::Generic::List_1<::AkGameObj*>* EmittersToStopListeningTo; // 0x28
	::System::Boolean isDefaultListener; // 0x30
	::System::Int32 listenerId; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKAUDIOLISTENER__CCTOR_OFFSET))();
	}

	static ::AkAudioListener_DefaultListenerList* get_DefaultListeners()
	{
		return ((::AkAudioListener_DefaultListenerList*(*)())((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_GET_DEFAULTLISTENERS_OFFSET))();
	}

	::System::Void StartListeningToEmitter(::AkGameObj* emitter)
	{
		return ((::System::Void(*)(::PVOID, ::AkGameObj*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_STARTLISTENINGTOEMITTER_OFFSET))(this, emitter);
	}

	::System::Void StopListeningToEmitter(::AkGameObj* emitter)
	{
		return ((::System::Void(*)(::PVOID, ::AkGameObj*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_STOPLISTENINGTOEMITTER_OFFSET))(this, emitter);
	}

	::System::Void SetIsDefaultListener(::System::Boolean isDefault)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_SETISDEFAULTLISTENER_OFFSET))(this, isDefault);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_AWAKE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_ONDISABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_UPDATE_OFFSET))(this);
	}

	::System::UInt64 GetAkGameObjectID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_GETAKGAMEOBJECTID_OFFSET))(this);
	}

	::System::Void Migrate14()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_MIGRATE14_OFFSET))(this);
	}
};
