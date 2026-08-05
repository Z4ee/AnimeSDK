#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }

#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS79_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19EFE3F0)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS79_0__SETSHARECLICK_B__0_OFFSET UNITYSDK_OFFSET(0x19F05270)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsPopWindowController___c__DisplayClass79_0_TypeDefinitionIndex = 40470;

	class UIGeneralTipsPopWindowController___c__DisplayClass79_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTipsPopWindowController* __4__this; // 0x10
		::System::Boolean playCloseAnim; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS79_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetShareClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS79_0__SETSHARECLICK_B__0_OFFSET))(this);
		}
	};
}
