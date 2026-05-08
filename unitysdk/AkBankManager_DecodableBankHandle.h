#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkBankManager_BankHandle.h"

namespace System { class String; }

#define AKBANKMANAGER_DECODABLEBANKHANDLE_DOLOADBANK_OFFSET UNITYSDK_OFFSET(0x1C2E8180)
#define AKBANKMANAGER_DECODABLEBANKHANDLE_UNLOADBANK_OFFSET UNITYSDK_OFFSET(0x1C2E8560)
#define AKBANKMANAGER_DECODABLEBANKHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E7F60)

inline static constexpr unsigned int AkBankManager_DecodableBankHandle_TypeDefinitionIndex = 31495;

class AkBankManager_DecodableBankHandle : public ::AkBankManager_BankHandle
{
public:
	::System::String* decodedBankPath; // 0x20
	::System::Boolean decodeBank; // 0x28
	::System::Boolean saveDecodedBank; // 0x29

	::System::Void _ctor(::System::String* name, ::System::Boolean save)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKBANKMANAGER_DECODABLEBANKHANDLE__CTOR_OFFSET))(this, name, save);
	}

	::AKRESULT DoLoadBank()
	{
		return ((::AKRESULT(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKMANAGER_DECODABLEBANKHANDLE_DOLOADBANK_OFFSET))(this);
	}

	::System::Void UnloadBank()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBANKMANAGER_DECODABLEBANKHANDLE_UNLOADBANK_OFFSET))(this);
	}
};
