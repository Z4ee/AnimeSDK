#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkAudioListener;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKAUDIOLISTENER_BASELISTENERLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1B417000)
#define AKAUDIOLISTENER_BASELISTENERLIST_GETLISTENERIDS_OFFSET UNITYSDK_OFFSET(0x1B417710)
#define AKAUDIOLISTENER_BASELISTENERLIST_GET_LISTENERLIST_OFFSET UNITYSDK_OFFSET(0x1B416FF0)
#define AKAUDIOLISTENER_BASELISTENERLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B4174C0)
#define AKAUDIOLISTENER_BASELISTENERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4177E0)

inline static constexpr unsigned int AkAudioListener_BaseListenerList_TypeDefinitionIndex = 41294;

class AkAudioListener_BaseListenerList : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt64>* listenerIdList; // 0x10
	::System::Collections::Generic::List_1<::AkAudioListener*>* listenerList; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_BASELISTENERLIST__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::AkAudioListener*>* get_ListenerList()
	{
		return ((::System::Collections::Generic::List_1<::AkAudioListener*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_BASELISTENERLIST_GET_LISTENERLIST_OFFSET))(this);
	}

	::System::Boolean Add(::AkAudioListener* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_BASELISTENERLIST_ADD_OFFSET))(this, a1);
	}

	::System::Boolean Remove(::AkAudioListener* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_BASELISTENERLIST_REMOVE_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt64>* GetListenerIds()
	{
		return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUDIOLISTENER_BASELISTENERLIST_GETLISTENERIDS_OFFSET))(this);
	}
};
