#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkAudioListener_BaseListenerList.h"

class AkAudioListener;
class AkGameObj;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKGAMEOBJLISTENERLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1A5EA680)
#define AKGAMEOBJLISTENERLIST_INIT_OFFSET UNITYSDK_OFFSET(0x1A5EB800)
#define AKGAMEOBJLISTENERLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A5EA810)
#define AKGAMEOBJLISTENERLIST_SETUSEDEFAULTLISTENERS_OFFSET UNITYSDK_OFFSET(0x1A5EDF00)
#define AKGAMEOBJLISTENERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5ED260)
#define AKGAMEOBJLISTENERLIST___IFIXBASEPROXY_ADD_OFFSET UNITYSDK_OFFSET(0x1A5EE140)
#define AKGAMEOBJLISTENERLIST___IFIXBASEPROXY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A5EE150)

inline static constexpr unsigned int AkGameObjListenerList_TypeDefinitionIndex = 40486;

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

	::System::Boolean __iFixBaseProxy_Add(::AkAudioListener* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST___IFIXBASEPROXY_ADD_OFFSET))(this, P0);
	}

	::System::Boolean __iFixBaseProxy_Remove(::AkAudioListener* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST___IFIXBASEPROXY_REMOVE_OFFSET))(this, P0);
	}
};
