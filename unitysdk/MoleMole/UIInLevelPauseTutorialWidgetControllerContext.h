#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1691E0F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseTutorialWidgetControllerContext_TypeDefinitionIndex = 70705;

	class UIInLevelPauseTutorialWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* popupWindowGroupIDs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETUTORIALWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
