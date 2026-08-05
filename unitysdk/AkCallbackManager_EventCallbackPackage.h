#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkCallbackManager_EventCallback;
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define AKCALLBACKMANAGER_EVENTCALLBACKPACKAGE_CREATE_OFFSET UNITYSDK_OFFSET(0x1FB47170)
#define AKCALLBACKMANAGER_EVENTCALLBACKPACKAGE_RECYCLE_OFFSET UNITYSDK_OFFSET(0x1FB47360)
#define AKCALLBACKMANAGER_EVENTCALLBACKPACKAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB47030)
#define AKCALLBACKMANAGER_EVENTCALLBACKPACKAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB47160)

inline static constexpr unsigned int AkCallbackManager_EventCallbackPackage_TypeDefinitionIndex = 33687;

class AkCallbackManager_EventCallbackPackage : public ::System::Object
{
public:
	static ::System::Collections::Generic::Stack_1<::AkCallbackManager_EventCallbackPackage*>** StaticGet_m_Pool()
	{
		return (::System::Collections::Generic::Stack_1<::AkCallbackManager_EventCallbackPackage*>**)Il2CppClass::FromTypeDefinitionIndex(AkCallbackManager_EventCallbackPackage_TypeDefinitionIndex)->GetStaticField(0x28B20);
	}
	// static const ::System::Int32 POOL_SIZE = 0x400; // 0x0
	::AkCallbackManager_EventCallback* m_Callback; // 0x10
	::System::Object* m_Cookie; // 0x18
	::System::UInt32 m_playingID; // 0x20
	::System::Boolean m_bNotifyEndOfEvent; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_EVENTCALLBACKPACKAGE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_EVENTCALLBACKPACKAGE__CTOR_OFFSET))(this);
	}

	static ::AkCallbackManager_EventCallbackPackage* Create(::AkCallbackManager_EventCallback* in_cb, ::System::Object* in_cookie, ::System::UInt32& io_Flags)
	{
		return ((::AkCallbackManager_EventCallbackPackage*(*)(::AkCallbackManager_EventCallback*, ::System::Object*, ::System::UInt32&))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_EVENTCALLBACKPACKAGE_CREATE_OFFSET))(in_cb, in_cookie, io_Flags);
	}

	static ::System::Void Recycle(::AkCallbackManager_EventCallbackPackage* evt)
	{
		return ((::System::Void(*)(::AkCallbackManager_EventCallbackPackage*))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_EVENTCALLBACKPACKAGE_RECYCLE_OFFSET))(evt);
	}
};
