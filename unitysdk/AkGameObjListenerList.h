#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkAudioListener_BaseListenerList.h"

class AkAudioListener;
class AkGameObj;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKGAMEOBJLISTENERLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1B434460)
#define AKGAMEOBJLISTENERLIST_INIT_OFFSET UNITYSDK_OFFSET(0x1B4354A0)
#define AKGAMEOBJLISTENERLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B4345F0)
#define AKGAMEOBJLISTENERLIST_SETUSEDEFAULTLISTENERS_OFFSET UNITYSDK_OFFSET(0x1B437D70)
#define AKGAMEOBJLISTENERLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B437060)
#define AKGAMEOBJLISTENERLIST___IFIXBASEPROXY_ADD_OFFSET UNITYSDK_OFFSET(0x1B438020)
#define AKGAMEOBJLISTENERLIST___IFIXBASEPROXY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B438030)

inline static constexpr unsigned int AkGameObjListenerList_TypeDefinitionIndex = 41313;

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

	::System::Void SetUseDefaultListeners(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST_SETUSEDEFAULTLISTENERS_OFFSET))(this, a1);
	}

	::System::Void Init(::AkGameObj* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkGameObj*))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST_INIT_OFFSET))(this, a1);
	}

	::System::Boolean Add(::AkAudioListener* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST_ADD_OFFSET))(this, a1);
	}

	::System::Boolean Remove(::AkAudioListener* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST_REMOVE_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy_Add(::AkAudioListener* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST___IFIXBASEPROXY_ADD_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy_Remove(::AkAudioListener* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkAudioListener*))((::PBYTE)hIl2Cpp + AKGAMEOBJLISTENERLIST___IFIXBASEPROXY_REMOVE_OFFSET))(this, a1);
	}
};
