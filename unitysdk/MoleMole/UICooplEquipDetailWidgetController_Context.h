#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICOOPLEQUIPDETAILWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15EDEE40)

namespace MoleMole
{
	inline static constexpr unsigned int UICooplEquipDetailWidgetController_Context_TypeDefinitionIndex = 53382;

	class UICooplEquipDetailWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ItemID; // 0x28
		::System::Int32 AvatarID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEQUIPDETAILWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
