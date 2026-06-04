#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkBankManager_BankHandle.h"

namespace System { class String; }

#define AKBANKMANAGER_DECODABLEBANKHANDLE_DOLOADBANK_OFFSET UNITYSDK_OFFSET(0x1B41D0D0)
#define AKBANKMANAGER_DECODABLEBANKHANDLE_UNLOADBANK_OFFSET UNITYSDK_OFFSET(0x1B41D5D0)
#define AKBANKMANAGER_DECODABLEBANKHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B41BE00)
#define AKBANKMANAGER_DECODABLEBANKHANDLE___IFIXBASEPROXY_DOLOADBANK_OFFSET UNITYSDK_OFFSET(0x1B41D700)
#define AKBANKMANAGER_DECODABLEBANKHANDLE___IFIXBASEPROXY_UNLOADBANK_OFFSET UNITYSDK_OFFSET(0x1B41D830)

inline static constexpr unsigned int AkBankManager_DecodableBankHandle_TypeDefinitionIndex = 41202;

class AkBankManager_DecodableBankHandle : public ::AkBankManager_BankHandle
{
public:
	::System::String* decodedBankPath; // 0x20
	::System::Boolean decodeBank; // 0x28
	::System::Boolean saveDecodedBank; // 0x29

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKBANKMANAGER_DECODABLEBANKHANDLE__CTOR_OFFSET))(this, a1, a2);
	}

	::AKRESULT DoLoadBank()
	{
		return ((::AKRESULT(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKMANAGER_DECODABLEBANKHANDLE_DOLOADBANK_OFFSET))(this);
	}

	::System::Void UnloadBank()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKMANAGER_DECODABLEBANKHANDLE_UNLOADBANK_OFFSET))(this);
	}

	::AKRESULT __iFixBaseProxy_DoLoadBank()
	{
		return ((::AKRESULT(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKMANAGER_DECODABLEBANKHANDLE___IFIXBASEPROXY_DOLOADBANK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_UnloadBank()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKMANAGER_DECODABLEBANKHANDLE___IFIXBASEPROXY_UNLOADBANK_OFFSET))(this);
	}
};
