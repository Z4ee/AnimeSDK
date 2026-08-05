#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1517E6A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABGachaItemRowWidgetController_Data_TypeDefinitionIndex = 66512;

	class UIRABGachaItemRowWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 PoolID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAITEMROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
