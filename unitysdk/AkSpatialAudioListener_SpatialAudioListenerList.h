#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkSpatialAudioListener;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKSPATIALAUDIOLISTENER_SPATIALAUDIOLISTENERLIST_ADD_OFFSET UNITYSDK_OFFSET(0x18C21FB0)
#define AKSPATIALAUDIOLISTENER_SPATIALAUDIOLISTENERLIST_GET_LISTENERLIST_OFFSET UNITYSDK_OFFSET(0x18C22230)
#define AKSPATIALAUDIOLISTENER_SPATIALAUDIOLISTENERLIST_REFRESH_OFFSET UNITYSDK_OFFSET(0x18C223A0)
#define AKSPATIALAUDIOLISTENER_SPATIALAUDIOLISTENERLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x18C220E0)
#define AKSPATIALAUDIOLISTENER_SPATIALAUDIOLISTENERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18C221F0)

inline static constexpr unsigned int AkSpatialAudioListener_SpatialAudioListenerList_TypeDefinitionIndex = 34690;

class AkSpatialAudioListener_SpatialAudioListenerList : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::AkSpatialAudioListener*>* listenerList; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_SPATIALAUDIOLISTENERLIST__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::AkSpatialAudioListener*>* get_ListenerList()
	{
		return ((::System::Collections::Generic::List_1<::AkSpatialAudioListener*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_SPATIALAUDIOLISTENERLIST_GET_LISTENERLIST_OFFSET))(this);
	}

	::System::Boolean Add(::AkSpatialAudioListener* listener)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkSpatialAudioListener*))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_SPATIALAUDIOLISTENERLIST_ADD_OFFSET))(this, listener);
	}

	::System::Boolean Remove(::AkSpatialAudioListener* listener)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkSpatialAudioListener*))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_SPATIALAUDIOLISTENERLIST_REMOVE_OFFSET))(this, listener);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_SPATIALAUDIOLISTENERLIST_REFRESH_OFFSET))(this);
	}
};
