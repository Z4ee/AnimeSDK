#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_3E87D0E270DB206F;

#define MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19784460)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebPictureBookInfoDialogPopWindowController_Context_TypeDefinitionIndex = 63005;

	class UIBangbooMicroWebPictureBookInfoDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_3E87D0E270DB206F* RowData; // 0x28
		::System::Boolean IsShowByGetPictureBook; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
