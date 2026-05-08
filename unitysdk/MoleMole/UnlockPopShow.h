#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

#define MOLEMOLE_UNLOCKPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0xE862C20)
#define MOLEMOLE_UNLOCKPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0xE862C00)

namespace MoleMole
{
	inline static constexpr unsigned int UnlockPopShow_TypeDefinitionIndex = 39756;

	class UnlockPopShow : public ::MoleMole::LogicMessageBase
	{
	public:
		::System::Int32 unlockID; // 0x20

		::System::Void _ctor(::System::Int32 unlockID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UNLOCKPOPSHOW__CTOR_OFFSET))(this, unlockID);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UNLOCKPOPSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
