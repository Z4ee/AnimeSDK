#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIRoleSkinRowWidgetController_ERoleCardType.h"

class Class_2_927E2D0470CF77A4;

#define MOLEMOLE_UIROLESKINROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x179BF0E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkinRowWidgetController_Context_TypeDefinitionIndex = 70943;

	class UIRoleSkinRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_927E2D0470CF77A4* data; // 0x28
		::System::Boolean isGetMethodPreview; // 0x30
		::System::Boolean isAvatarObtained; // 0x31
		::MoleMole::UIRoleSkinRowWidgetController_ERoleCardType roleCardType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKINROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
