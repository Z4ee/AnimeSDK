#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkAudioListener_BaseListenerList.h"

class AkAudioListener;

#define AKAUDIOLISTENER_DEFAULTLISTENERLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1D4CBFD0)
#define AKAUDIOLISTENER_DEFAULTLISTENERLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1D4CC0F0)
#define AKAUDIOLISTENER_DEFAULTLISTENERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CC210)

inline static constexpr unsigned int AkAudioListener_DefaultListenerList_TypeDefinitionIndex = 33771;

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
};
