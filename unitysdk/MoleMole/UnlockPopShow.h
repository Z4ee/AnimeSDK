#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

#define MOLEMOLE_UNLOCKPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x12B24810)
#define MOLEMOLE_UNLOCKPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x12B247F0)

namespace MoleMole
{
	inline static constexpr unsigned int UnlockPopShow_TypeDefinitionIndex = 64813;

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
