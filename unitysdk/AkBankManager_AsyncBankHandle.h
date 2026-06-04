#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkBankManager_BankHandle.h"

class AkCallbackManager_BankCallback;
namespace System { class Object; }
namespace System { class String; }

#define AKBANKMANAGER_ASYNCBANKHANDLE_DOLOADBANK_OFFSET UNITYSDK_OFFSET(0x1B41CA80)
#define AKBANKMANAGER_ASYNCBANKHANDLE_GLOBALBANKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B41C540)
#define AKBANKMANAGER_ASYNCBANKHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B41C170)
#define AKBANKMANAGER_ASYNCBANKHANDLE___IFIXBASEPROXY_DOLOADBANK_OFFSET UNITYSDK_OFFSET(0x1B41CB90)

inline static constexpr unsigned int AkBankManager_AsyncBankHandle_TypeDefinitionIndex = 41200;

class AkBankManager_AsyncBankHandle : public ::AkBankManager_BankHandle
{
public:
	::AkCallbackManager_BankCallback* bankCallback; // 0x20

	::System::Void _ctor(::System::String* a1, ::AkCallbackManager_BankCallback* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::AkCallbackManager_BankCallback*))((::PBYTE)hIl2Cpp + AKBANKMANAGER_ASYNCBANKHANDLE__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void GlobalBankCallback(::System::UInt32 a1, ::System::IntPtr a2, ::AKRESULT a3, ::System::Object* a4)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*))((::PBYTE)hIl2Cpp + AKBANKMANAGER_ASYNCBANKHANDLE_GLOBALBANKCALLBACK_OFFSET))(a1, a2, a3, a4);
	}

	::AKRESULT DoLoadBank()
	{
		return ((::AKRESULT(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKMANAGER_ASYNCBANKHANDLE_DOLOADBANK_OFFSET))(this);
	}

	::AKRESULT __iFixBaseProxy_DoLoadBank()
	{
		return ((::AKRESULT(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKMANAGER_ASYNCBANKHANDLE___IFIXBASEPROXY_DOLOADBANK_OFFSET))(this);
	}
};
