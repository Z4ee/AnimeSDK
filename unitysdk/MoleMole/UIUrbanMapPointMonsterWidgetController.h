#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_741C9708D553FB97;
namespace MoleMole { class UIThreeDMapElement_MonsterContext; }

#define MOLEMOLE_UIURBANMAPPOINTMONSTERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x112C1DD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointMonsterWidgetController_TypeDefinitionIndex = 71995;

	class UIUrbanMapPointMonsterWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_741C9708D553FB97*, ::MoleMole::UIThreeDMapElement_MonsterContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTMONSTERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
