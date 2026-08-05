#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }

#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS76_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18979350)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS76_0__SETGOCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x18979360)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsPopWindowController___c__DisplayClass76_0_TypeDefinitionIndex = 40482;

	class UIGeneralTipsPopWindowController___c__DisplayClass76_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTipsPopWindowController* __4__this; // 0x10
		::System::Boolean playCloseAnim; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS76_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetGoClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS76_0__SETGOCLICK_B__0_OFFSET))(this);
		}
	};
}
