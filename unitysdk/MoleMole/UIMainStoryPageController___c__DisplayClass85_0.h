#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainStoryPageController; }
namespace MoleMole { class UIMainStoryPageController_PersonalLineRowData; }

#define MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS85_0__CTOR_OFFSET UNITYSDK_OFFSET(0x189C5730)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPageController___c__DisplayClass85_0_TypeDefinitionIndex = 84558;

	class UIMainStoryPageController___c__DisplayClass85_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainStoryPageController* __4__this; // 0x10
		::MoleMole::UIMainStoryPageController_PersonalLineRowData* rowData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPAGECONTROLLER___C__DISPLAYCLASS85_0__CTOR_OFFSET))(this);
		}
	};
}
