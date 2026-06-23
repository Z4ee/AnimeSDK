#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1005B9479049BC5A;
class Class_1_E9529ED64113E4E9;
namespace MoleMole { class UIActivityReturnPageController; }
namespace MoleMole { class UIBackFlowContext; }

#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1F52D0)
#define MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS24_0__OPNETABWIDGETBYACTIVITYDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1A1F52E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnPageController___c__DisplayClass24_0_TypeDefinitionIndex = 84845;

	class UIActivityReturnPageController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::Class_1_1005B9479049BC5A* subActivityData; // 0x10
		::MoleMole::UIActivityReturnPageController* __4__this; // 0x18
		::MoleMole::UIBackFlowContext* contextBase; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpneTabWidgetByActivityData_b__0(::Class_1_E9529ED64113E4E9* _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNPAGECONTROLLER___C__DISPLAYCLASS24_0__OPNETABWIDGETBYACTIVITYDATA_B__0_OFFSET))(this, _);
		}
	};
}
