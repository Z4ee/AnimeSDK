#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIVideoWidgetController; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15264BF0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_2__SHOWSTARTPERFORMANCE_B__4_OFFSET UNITYSDK_OFFSET(0x15264C00)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass115_2_TypeDefinitionIndex = 44930;

	class UIHollowMainPageController___c__DisplayClass115_2 : public ::System::Object
	{
	public:
		::MoleMole::UIVideoWidgetController* player; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_2__CTOR_OFFSET))(this);
		}

		::System::Void _ShowStartPerformance_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_2__SHOWSTARTPERFORMANCE_B__4_OFFSET))(this);
		}
	};
}
