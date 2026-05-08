#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class MonoUITableScrollV2;

#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1551E370)

namespace MoleMole
{
	inline static constexpr unsigned int UITapesGroup3DModelController_Context_TypeDefinitionIndex = 46595;

	class UITapesGroup3DModelController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MonoUITableScrollV2* parentControllerDummyTapesScrollView; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
