#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainStoryPageController___c__DisplayClass88_4; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS88_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1483FCB0)
#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS88_5__GOTOSUBITEM_B__5_OFFSET UNITYSDK_OFFSET(0x1483FE30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass88_5_TypeDefinitionIndex = 56276;

	class UIMainStoryPageController___c__DisplayClass88_5 : public ::System::Object
	{
	public:
		::MoleMole::UIMainStoryPageController___c__DisplayClass88_4* CS___8__locals5; // 0x10
		::System::Boolean cachedOpenPreUIAfterFinish; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS88_5__CTOR_OFFSET))(this);
		}

		::System::Void _GoToSubItem_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS88_5__GOTOSUBITEM_B__5_OFFSET))(this);
		}
	};
}
