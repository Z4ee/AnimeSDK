#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_24B9743ED3B822A9_3;
namespace MoleMole { class UIThreeDMapElement_MonsterContext; }

#define MOLEMOLE_UIURBANMAPPOINTMONSTERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xEBCC460)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointMonsterWidgetController_TypeDefinitionIndex = 79260;

	class UIUrbanMapPointMonsterWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_24B9743ED3B822A9_3*, ::MoleMole::UIThreeDMapElement_MonsterContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTMONSTERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
