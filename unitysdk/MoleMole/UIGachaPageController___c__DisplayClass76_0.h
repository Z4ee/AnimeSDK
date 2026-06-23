#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
namespace MoleMole { class ActivityDemoTrialContext; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS76_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17F94EF0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS76_0__ONAVATARSCROLLVIEWCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x17F94F00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass76_0_TypeDefinitionIndex = 64985;

	class UIGachaPageController___c__DisplayClass76_0 : public ::System::Object
	{
	public:
		::MoleMole::ActivityDemoTrialContext* context; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS76_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnAvatarScrollViewClick_b__0(::Class_0_16E4307DCC419505_29* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS76_0__ONAVATARSCROLLVIEWCLICK_B__0_OFFSET))(this, msg);
		}
	};
}
