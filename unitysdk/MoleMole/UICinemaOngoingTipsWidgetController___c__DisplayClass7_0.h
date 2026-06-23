#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICinemaOngoingTipsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UICINEMAONGOINGTIPSWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CLOSECHAT_B__0_OFFSET UNITYSDK_OFFSET(0x17F65780)
#define MOLEMOLE_UICINEMAONGOINGTIPSWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17F65770)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaOngoingTipsWidgetController___c__DisplayClass7_0_TypeDefinitionIndex = 41325;

	class UICinemaOngoingTipsWidgetController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::UICinemaOngoingTipsWidgetController* __4__this; // 0x10
		::System::Action* onEnd; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAONGOINGTIPSWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _CloseChat_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAONGOINGTIPSWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CLOSECHAT_B__0_OFFSET))(this);
		}
	};
}
