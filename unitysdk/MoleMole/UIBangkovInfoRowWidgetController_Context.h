#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIBANGKOVINFOROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17A50490)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovInfoRowWidgetController_Context_TypeDefinitionIndex = 80028;

	class UIBangkovInfoRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* nameText; // 0x28
		::System::String* valueText; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVINFOROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
