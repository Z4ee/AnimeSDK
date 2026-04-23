#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkAudioListener_BaseListenerList.h"

class AkAudioListener;

#define AKAUDIOLISTENER_DEFAULTLISTENERLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1A5CBE90)
#define AKAUDIOLISTENER_DEFAULTLISTENERLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A5CC000)
#define AKAUDIOLISTENER_DEFAULTLISTENERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5CCA10)
#define AKAUDIOLISTENER_DEFAULTLISTENERLIST___IFIXBASEPROXY_ADD_OFFSET UNITYSDK_OFFSET(0x1A5CD180)
#define AKAUDIOLISTENER_DEFAULTLISTENERLIST___IFIXBASEPROXY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A5CD190)

inline static constexpr unsigned int AkAudioListener_DefaultListenerList_TypeDefinitionIndex = 40468;

class AkAudioListener_DefaultListenerList : public ::AkAudioListener_BaseListenerList
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_DEFAULTLISTENERLIST__CTOR_OFFSET))(this);
	}

	::System::Boolean Add(::AkAudioListener* listener)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_DEFAULTLISTENERLIST_ADD_OFFSET))(this, listener);
	}

	::System::Boolean Remove(::AkAudioListener* listener)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_DEFAULTLISTENERLIST_REMOVE_OFFSET))(this, listener);
	}

	::System::Boolean __iFixBaseProxy_Add(::AkAudioListener* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_DEFAULTLISTENERLIST___IFIXBASEPROXY_ADD_OFFSET))(this, P0);
	}

	::System::Boolean __iFixBaseProxy_Remove(::AkAudioListener* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_DEFAULTLISTENERLIST___IFIXBASEPROXY_REMOVE_OFFSET))(this, P0);
	}
};
