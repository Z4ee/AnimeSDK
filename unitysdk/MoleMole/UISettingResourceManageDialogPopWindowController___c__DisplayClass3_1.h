#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EDE736B446DA1113;
namespace MoleMole { class UISettingResourceManageDialogPopWindowController___c__DisplayClass3_0; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISETTINGRESOURCEMANAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12E7BC80)
#define MOLEMOLE_UISETTINGRESOURCEMANAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_1__ONUIINIT_B__4_OFFSET UNITYSDK_OFFSET(0x12E7BC90)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingResourceManageDialogPopWindowController___c__DisplayClass3_1_TypeDefinitionIndex = 68811;

	class UISettingResourceManageDialogPopWindowController___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* affectedTitleIds; // 0x10
		::MoleMole::UISettingResourceManageDialogPopWindowController___c__DisplayClass3_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEMANAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4(::Class_1_EDE736B446DA1113* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EDE736B446DA1113*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEMANAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_1__ONUIINIT_B__4_OFFSET))(this, itemData);
		}
	};
}
