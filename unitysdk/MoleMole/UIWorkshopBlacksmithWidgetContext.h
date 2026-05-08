#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Share/EItemType.h"

class Class_1_F71F7FB55BBEB1D9;

#define MOLEMOLE_UIWORKSHOPBLACKSMITHWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xF8094B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkshopBlacksmithWidgetContext_TypeDefinitionIndex = 74214;

	class UIWorkshopBlacksmithWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_F71F7FB55BBEB1D9* storeData; // 0x28
		::Share::EItemType ShowItemType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPBLACKSMITHWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
