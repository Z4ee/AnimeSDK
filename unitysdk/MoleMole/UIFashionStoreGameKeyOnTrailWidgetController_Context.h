#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFASHIONSTOREGAMEKEYONTRAILWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16F45080)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreGameKeyOnTrailWidgetController_Context_TypeDefinitionIndex = 79921;

	class UIFashionStoreGameKeyOnTrailWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 beatType; // 0x28
		::System::Int32 inputKey; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREGAMEKEYONTRAILWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
