#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_147177123441150A;
namespace MoleMole { class UIMainCityChatPlayWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19865AD0)
#define MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS50_0__SHOWCUSTOMTRANSITION_B__3_OFFSET UNITYSDK_OFFSET(0x19865AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityChatPlayWidgetController___c__DisplayClass50_0_TypeDefinitionIndex = 77917;

	class UIMainCityChatPlayWidgetController___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityChatPlayWidgetController* __4__this; // 0x10
		::System::Action* __9__3; // 0x18
		::Class_2_147177123441150A* transition; // 0x20
		::System::Single length; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowCustomTransition_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS50_0__SHOWCUSTOMTRANSITION_B__3_OFFSET))(this);
		}
	};
}
