#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVSLOTITEMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B23050)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovSlotItemContext_TypeDefinitionIndex = 52714;

	class UIZenkovSlotItemContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 SlotIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSLOTITEMCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
