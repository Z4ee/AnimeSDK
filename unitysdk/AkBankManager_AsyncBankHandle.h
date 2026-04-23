#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkBankManager_BankHandle.h"

class AkCallbackManager_BankCallback;
namespace System { class Object; }
namespace System { class String; }

#define AKBANKMANAGER_ASYNCBANKHANDLE_DOLOADBANK_OFFSET UNITYSDK_OFFSET(0x1A5D23E0)
#define AKBANKMANAGER_ASYNCBANKHANDLE_GLOBALBANKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A5D1A90)
#define AKBANKMANAGER_ASYNCBANKHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5D17A0)
#define AKBANKMANAGER_ASYNCBANKHANDLE___IFIXBASEPROXY_DOLOADBANK_OFFSET UNITYSDK_OFFSET(0x1A5D2500)

inline static constexpr unsigned int AkBankManager_AsyncBankHandle_TypeDefinitionIndex = 40373;

class AkBankManager_AsyncBankHandle : public ::AkBankManager_BankHandle
{
public:
	::AkCallbackManager_BankCallback* bankCallback; // 0x20

	::System::Void _ctor(::System::String* name, ::AkCallbackManager_BankCallback* callback)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::AkCallbackManager_BankCallback*))((::PBYTE)hIl2Cpp + AKBANKMANAGER_ASYNCBANKHANDLE__CTOR_OFFSET))(this, name, callback);
	}

	static ::System::Void GlobalBankCallback(::System::UInt32 in_bankID, ::System::IntPtr in_pInMemoryBankPtr, ::AKRESULT in_eLoadResult, ::System::Object* in_Cookie)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*))((::PBYTE)hIl2Cpp + AKBANKMANAGER_ASYNCBANKHANDLE_GLOBALBANKCALLBACK_OFFSET))(in_bankID, in_pInMemoryBankPtr, in_eLoadResult, in_Cookie);
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
