#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_05FFD1541715324E;
class Class_2_208CC9941471731A_578;

#define MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11E17E90)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RelicDetailRowWidgetController_Context_TypeDefinitionIndex = 60071;

	class UIAbyssS2RelicDetailRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_05FFD1541715324E* RelicData; // 0x28
		::Class_2_208CC9941471731A_578* RelicLevelTemplateExt; // 0x30
		::System::Boolean ShowDetail; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICDETAILROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
