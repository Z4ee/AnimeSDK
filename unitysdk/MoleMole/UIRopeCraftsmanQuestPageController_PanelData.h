#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIRopeCraftsmanQuestPageController_ItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_PANELDATA_GETITEMDATABYINDEX_OFFSET UNITYSDK_OFFSET(0x161398B0)
#define MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16139930)

namespace MoleMole
{
	inline static constexpr unsigned int UIRopeCraftsmanQuestPageController_PanelData_TypeDefinitionIndex = 66888;

	class UIRopeCraftsmanQuestPageController_PanelData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIRopeCraftsmanQuestPageController_ItemData*>* ItemDataList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::UIRopeCraftsmanQuestPageController_ItemData* GetItemDataByIndex(::System::Int32 index)
		{
			return ((::MoleMole::UIRopeCraftsmanQuestPageController_ItemData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPECRAFTSMANQUESTPAGECONTROLLER_PANELDATA_GETITEMDATABYINDEX_OFFSET))(this, index);
		}
	};
}
