#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_UNLOCKHOTPOTFOODMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x114982F0)
#define MOLEMOLE_UNLOCKHOTPOTFOODMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x114982E0)

namespace MoleMole
{
	inline static constexpr unsigned int UnlockHotpotFoodMessage_TypeDefinitionIndex = 40333;

	class UnlockHotpotFoodMessage : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNLOCKHOTPOTFOODMESSAGE__CTOR_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNLOCKHOTPOTFOODMESSAGE_ONPROCESS_OFFSET))(this);
		}
	};
}
