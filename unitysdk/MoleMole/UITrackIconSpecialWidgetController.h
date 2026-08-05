#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_22FEBBA7FA4D4D4A_10;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16782D00)
#define MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16782D90)
#define MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16782C30)
#define MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16782C90)
#define MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER_SETAFFIXICONPATH_OFFSET UNITYSDK_OFFSET(0x16782F90)
#define MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER_SETICONPATH_OFFSET UNITYSDK_OFFSET(0x16782E10)
#define MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x167830E0)
#define MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16783140)
#define MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167831D0)
#define MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16783260)
#define MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x167832F0)

namespace MoleMole
{
	inline static constexpr unsigned int UITrackIconSpecialWidgetController_TypeDefinitionIndex = 91403;

	class UITrackIconSpecialWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_22FEBBA7FA4D4D4A_10* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetIconPath(::Foundation::AssetPath iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER_SETICONPATH_OFFSET))(this, iconPath);
		}

		::System::Void SetAffixIconPath(::Foundation::AssetPath affixIconPath)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER_SETAFFIXICONPATH_OFFSET))(this, affixIconPath);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRACKICONSPECIALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
