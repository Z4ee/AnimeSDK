#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkCallbackManager_EventCallback;

#define AKCALLBACKMANAGER_EVENTCALLBACKPACKAGE_CREATE_OFFSET UNITYSDK_OFFSET(0x1B422480)
#define AKCALLBACKMANAGER_EVENTCALLBACKPACKAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4225E0)

inline static constexpr unsigned int AkCallbackManager_EventCallbackPackage_TypeDefinitionIndex = 41208;

class AkCallbackManager_EventCallbackPackage : public ::System::Object
{
public:
	::System::Object* m_Cookie; // 0x10
	::AkCallbackManager_EventCallback* m_Callback; // 0x18
	::System::Boolean m_bNotifyEndOfEvent; // 0x20
	::System::UInt32 m_playingID; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_EVENTCALLBACKPACKAGE__CTOR_OFFSET))(this);
	}

	static ::AkCallbackManager_EventCallbackPackage* Create(::AkCallbackManager_EventCallback* a1, ::System::Object* a2, ::System::UInt32& a3)
	{
		return ((::AkCallbackManager_EventCallbackPackage*(*)(::AkCallbackManager_EventCallback*, ::System::Object*, ::System::UInt32&))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_EVENTCALLBACKPACKAGE_CREATE_OFFSET))(a1, a2, a3);
	}
};
