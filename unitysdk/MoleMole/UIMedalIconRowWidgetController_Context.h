#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_2A0117F72708B5DF;

#define MOLEMOLE_UIMEDALICONROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15D569F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMedalIconRowWidgetController_Context_TypeDefinitionIndex = 51527;

	class UIMedalIconRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_2A0117F72708B5DF* medalData; // 0x28
		::System::UInt32 editableMedalID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALICONROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
