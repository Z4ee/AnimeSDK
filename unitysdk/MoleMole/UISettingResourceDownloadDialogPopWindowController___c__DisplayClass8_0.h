#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_08FFAF9759A4ED46_3;
namespace MoleMole { class UISettingResourceDownloadDialogPopWindowController; }

#define MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F79EC0)
#define MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__REFRESHTABS_B__0_OFFSET UNITYSDK_OFFSET(0x15F79ED0)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingResourceDownloadDialogPopWindowController___c__DisplayClass8_0_TypeDefinitionIndex = 85949;

	class UISettingResourceDownloadDialogPopWindowController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::Class_2_08FFAF9759A4ED46_3* picker; // 0x10
		::MoleMole::UISettingResourceDownloadDialogPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshTabs_b__0(::System::Int64 downloadedSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__REFRESHTABS_B__0_OFFSET))(this, downloadedSize);
		}
	};
}
