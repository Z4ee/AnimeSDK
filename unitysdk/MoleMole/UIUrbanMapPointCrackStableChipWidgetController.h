#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_741C9708D553FB97_4;
namespace MoleMole { class UIThreeDMapElement_CrackStableChipContext; }

#define MOLEMOLE_UIURBANMAPPOINTCRACKSTABLECHIPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x162AD2D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointCrackStableChipWidgetController_TypeDefinitionIndex = 56447;

	class UIUrbanMapPointCrackStableChipWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_741C9708D553FB97_4*, ::MoleMole::UIThreeDMapElement_CrackStableChipContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTCRACKSTABLECHIPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
