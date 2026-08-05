#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_ITEMDISPLAYSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1908B940)
#define MOLEMOLE_ITEMDISPLAYSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x1908B990)
#define MOLEMOLE_ITEMDISPLAYSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1908B950)

namespace MoleMole
{
	inline static constexpr unsigned int ItemDisplayShow_TypeDefinitionIndex = 43756;

	class ItemDisplayShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 m_itemID; // 0x28

		::System::Void _ctor(::System::Int32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ITEMDISPLAYSHOW__CTOR_OFFSET))(this, itemID);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ITEMDISPLAYSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ITEMDISPLAYSHOW_ONPROCESS_OFFSET))(this);
		}
	};
}
