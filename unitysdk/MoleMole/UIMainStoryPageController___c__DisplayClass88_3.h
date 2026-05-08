#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainStoryPageController___c__DisplayClass88_2; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS88_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1483F500)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS88_3__GOTOSUBITEM_B__2_OFFSET UNITYSDK_OFFSET(0x1483F680)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass88_3_TypeDefinitionIndex = 56270;

	class UIMainStoryPageController___c__DisplayClass88_3 : public ::System::Object
	{
	public:
		::MoleMole::UIMainStoryPageController___c__DisplayClass88_2* CS___8__locals3; // 0x10
		::System::Boolean cachedOpenPreUIAfterFinish; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS88_3__CTOR_OFFSET))(this);
		}

		::System::Void _GoToSubItem_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS88_3__GOTOSUBITEM_B__2_OFFSET))(this);
		}
	};
}
