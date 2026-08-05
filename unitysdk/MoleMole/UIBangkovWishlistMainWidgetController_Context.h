#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_13.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBANGKOVWISHLISTMAINWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16D54140)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovWishlistMainWidgetController_Context_TypeDefinitionIndex = 67531;

	class UIBangkovWishlistMainWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 SrcId; // 0x28
		::System::UInt32 SrcType; // 0x2C
		::Enum_3_ED790DAC948A65A9_13 PlayType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTMAINWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
