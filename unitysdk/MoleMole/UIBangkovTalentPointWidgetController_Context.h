#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_D1CED082B4F1459A_Class_2_EDF9FC262B9CBBA4;
template <typename T> class Class_0_16E4307DCC419505_165;

#define MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C91600)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTalentPointWidgetController_Context_TypeDefinitionIndex = 43168;

	class UIBangkovTalentPointWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_D1CED082B4F1459A_Class_2_EDF9FC262B9CBBA4* Node; // 0x28
		::Class_0_16E4307DCC419505_165<::Class_2_D1CED082B4F1459A_Class_2_EDF9FC262B9CBBA4*>* PropertyCurrentSelectedNode; // 0x30
		::System::Boolean IsForeground; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPOINTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
