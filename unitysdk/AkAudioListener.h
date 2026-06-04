#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkAudioListener_DefaultListenerList;
class AkGameObj;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKAUDIOLISTENER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B416620)
#define AKAUDIOLISTENER_GETAKGAMEOBJECTID_OFFSET UNITYSDK_OFFSET(0x1B416C80)
#define AKAUDIOLISTENER_GET_DEFAULTLISTENERS_OFFSET UNITYSDK_OFFSET(0x1B416080)
#define AKAUDIOLISTENER_MIGRATE14_OFFSET UNITYSDK_OFFSET(0x1B416CC0)
#define AKAUDIOLISTENER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B4168F0)
#define AKAUDIOLISTENER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B416850)
#define AKAUDIOLISTENER_SETISDEFAULTLISTENER_OFFSET UNITYSDK_OFFSET(0x1B416250)
#define AKAUDIOLISTENER_STARTLISTENINGTOEMITTER_OFFSET UNITYSDK_OFFSET(0x1B4160B0)
#define AKAUDIOLISTENER_STOPLISTENINGTOEMITTER_OFFSET UNITYSDK_OFFSET(0x1B416180)
#define AKAUDIOLISTENER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B416990)
#define AKAUDIOLISTENER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B416E50)
#define AKAUDIOLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B416DF0)

inline static constexpr unsigned int AkAudioListener_TypeDefinitionIndex = 41293;

class AkAudioListener : public ::UnityEngine::MonoBehaviour
{
public:
	static ::AkAudioListener_DefaultListenerList** StaticGet_defaultListeners()
	{
		return (::AkAudioListener_DefaultListenerList**)Il2CppClass::FromTypeDefinitionIndex(AkAudioListener_TypeDefinitionIndex)->GetStaticField(0x5C650);
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

	::System::Void StartListeningToEmitter(::AkGameObj* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkGameObj*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_STARTLISTENINGTOEMITTER_OFFSET))(this, a1);
	}

	::System::Void StopListeningToEmitter(::AkGameObj* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkGameObj*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_STOPLISTENINGTOEMITTER_OFFSET))(this, a1);
	}

	::System::Void SetIsDefaultListener(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_SETISDEFAULTLISTENER_OFFSET))(this, a1);
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
