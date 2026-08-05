#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"

class Class_1_0D6706375CDAAE8C;

#define MOLEMOLE_UIROARINSTOREITEMWIDGETCONTROLLER_CARDDATA_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x882500)
#define MOLEMOLE_UIROARINSTOREITEMWIDGETCONTROLLER_CARDDATA_GET_ISTODAYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x882510)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoarinStoreItemWidgetController_CardData_TypeDefinitionIndex = 68131;

	struct alignas(8) UIRoarinStoreItemWidgetController_CardData
	{
		::System::Int32 ExchangeId; // 0x10
		::System::Int32 Index; // 0x14
		::System::Int32 MaxIndex; // 0x18
		::Class_1_0D6706375CDAAE8C* ItemData; // 0x20
		::Foundation::AssetPath ImagePath; // 0x28

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREITEMWIDGETCONTROLLER_CARDDATA_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean get_IsTodayExchange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREITEMWIDGETCONTROLLER_CARDDATA_GET_ISTODAYEXCHANGE_OFFSET))(this);
		}
	};
}
