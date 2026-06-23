#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIComicPageController; }

#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS340_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19DA3BC0)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS340_0__STARTMOVE_B__0_OFFSET UNITYSDK_OFFSET(0x19DA3BD0)
#define MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS340_0__STARTMOVE_B__1_OFFSET UNITYSDK_OFFSET(0x19DA3C00)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController___c__DisplayClass340_0_TypeDefinitionIndex = 46622;

	class UIComicPageController___c__DisplayClass340_0 : public ::System::Object
	{
	public:
		::MoleMole::UIComicPageController* __4__this; // 0x10
		::System::UInt32 pendingId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS340_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartMove_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS340_0__STARTMOVE_B__0_OFFSET))(this);
		}

		::System::Void _StartMove_b__1(::System::UInt32 id, ::System::UInt32 __)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER___C__DISPLAYCLASS340_0__STARTMOVE_B__1_OFFSET))(this, id, __);
		}
	};
}
