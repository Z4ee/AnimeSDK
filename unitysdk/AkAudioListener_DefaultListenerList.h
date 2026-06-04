#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkAudioListener_BaseListenerList.h"

class AkAudioListener;

#define AKAUDIOLISTENER_DEFAULTLISTENERLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1B416340)
#define AKAUDIOLISTENER_DEFAULTLISTENERLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B4164B0)
#define AKAUDIOLISTENER_DEFAULTLISTENERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B416F30)
#define AKAUDIOLISTENER_DEFAULTLISTENERLIST___IFIXBASEPROXY_ADD_OFFSET UNITYSDK_OFFSET(0x1B4178A0)
#define AKAUDIOLISTENER_DEFAULTLISTENERLIST___IFIXBASEPROXY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B4178B0)

inline static constexpr unsigned int AkAudioListener_DefaultListenerList_TypeDefinitionIndex = 41295;

class AkAudioListener_DefaultListenerList : public ::AkAudioListener_BaseListenerList
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_DEFAULTLISTENERLIST__CTOR_OFFSET))(this);
	}

	::System::Boolean Add(::AkAudioListener* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_DEFAULTLISTENERLIST_ADD_OFFSET))(this, a1);
	}

	::System::Boolean Remove(::AkAudioListener* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_DEFAULTLISTENERLIST_REMOVE_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy_Add(::AkAudioListener* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_DEFAULTLISTENERLIST___IFIXBASEPROXY_ADD_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy_Remove(::AkAudioListener* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_DEFAULTLISTENERLIST___IFIXBASEPROXY_REMOVE_OFFSET))(this, a1);
	}
};
