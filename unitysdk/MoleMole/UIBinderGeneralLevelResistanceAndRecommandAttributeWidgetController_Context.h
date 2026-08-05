#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBINDERGENERALLEVELRESISTANCEANDRECOMMANDATTRIBUTEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1802DC30)

namespace MoleMole
{
	inline static constexpr unsigned int UIBinderGeneralLevelResistanceAndRecommandAttributeWidgetController_Context_TypeDefinitionIndex = 64216;

	class UIBinderGeneralLevelResistanceAndRecommandAttributeWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 monsterID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBINDERGENERALLEVELRESISTANCEANDRECOMMANDATTRIBUTEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
