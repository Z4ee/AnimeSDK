#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_6B9BA8441E94A95A;

#define MOLEMOLE_UIMEDALICONROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17457590)

namespace MoleMole
{
	inline static constexpr unsigned int UIMedalIconRowWidgetController_Context_TypeDefinitionIndex = 56294;

	class UIMedalIconRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_6B9BA8441E94A95A* medalData; // 0x28
		::System::UInt32 editableMedalID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALICONROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
