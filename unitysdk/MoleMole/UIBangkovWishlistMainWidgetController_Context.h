#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBANGKOVWISHLISTMAINWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x142CCEB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovWishlistMainWidgetController_Context_TypeDefinitionIndex = 72294;

	class UIBangkovWishlistMainWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 SrcType; // 0x28
		::System::UInt32 SrcId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTMAINWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
