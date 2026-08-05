#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkAudioListener_BaseListenerList.h"

class AkAudioListener;
class AkGameObj;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKGAMEOBJLISTENERLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1ECB4410)
#define AKGAMEOBJLISTENERLIST_INIT_OFFSET UNITYSDK_OFFSET(0x1ECB51D0)
#define AKGAMEOBJLISTENERLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1ECB4560)
#define AKGAMEOBJLISTENERLIST_SETUSEDEFAULTLISTENERS_OFFSET UNITYSDK_OFFSET(0x1ECB6060)
#define AKGAMEOBJLISTENERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECB5FC0)

inline static constexpr unsigned int AkGameObjListenerList_TypeDefinitionIndex = 33789;

class AkGameObjListenerList : public ::AkAudioListener_BaseListenerList
{
public:
	::AkGameObj* akGameObj; // 0x20
	::System::Collections::Generic::List_1<::AkAudioListener*>* initialListenerList; // 0x28
	::System::Boolean useDefaultListeners; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST__CTOR_OFFSET))(this);
	}

	::System::Void SetUseDefaultListeners(::System::Boolean useDefault)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST_SETUSEDEFAULTLISTENERS_OFFSET))(this, useDefault);
	}

	::System::Void Init(::AkGameObj* akGameObj)
	{
		return ((::System::Void(*)(::PVOID, ::AkGameObj*))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST_INIT_OFFSET))(this, akGameObj);
	}

	::System::Boolean Add(::AkAudioListener* listener)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST_ADD_OFFSET))(this, listener);
	}

	::System::Boolean Remove(::AkAudioListener* listener)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST_REMOVE_OFFSET))(this, listener);
	}
};
