#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_A944C35C433158AC;

#define MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19781540)

namespace MoleMole
{
	inline static constexpr unsigned int UIBanbooNetSystem3DModelController_PanelData_TypeDefinitionIndex = 82644;

	class UIBanbooNetSystem3DModelController_PanelData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_A944C35C433158AC* StartTimelineTask; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANBOONETSYSTEM3DMODELCONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}
	};
}
