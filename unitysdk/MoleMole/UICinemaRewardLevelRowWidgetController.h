#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_77ADBA378EFC2D41.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_484467572E032327;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x14C101D0)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C100C0)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C10150)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C0FF70)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C10050)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_SETDESCRAWTEXT_OFFSET UNITYSDK_OFFSET(0x14C102B0)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_SETDESCTEXT_OFFSET UNITYSDK_OFFSET(0x14C10220)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_SETFAVOURICON_1_OFFSET UNITYSDK_OFFSET(0x14C10390)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_SETFAVOURICON_OFFSET UNITYSDK_OFFSET(0x14C10320)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C10420)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C10480)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C104D0)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C10510)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C10550)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaRewardLevelRowWidgetController_TypeDefinitionIndex = 52784;

	class UICinemaRewardLevelRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_484467572E032327* _view; // 0x2C0
		::MoleMole::UIItemIconBtnSmallWidgetController* itemIconSmall; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_2_484467572E032327* GetView()
		{
			return ((::Class_2_484467572E032327*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void SetDescText(::System::String* descKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_SETDESCTEXT_OFFSET))(this, descKey);
		}

		::System::Void SetDescRawText(::System::String* desc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_SETDESCRAWTEXT_OFFSET))(this, desc);
		}

		::System::Void SetFavourIcon(::Enum_3_77ADBA378EFC2D41 favourLevelType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_77ADBA378EFC2D41))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_SETFAVOURICON_OFFSET))(this, favourLevelType);
		}

		::System::Void SetFavourIcon_1(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_SETFAVOURICON_1_OFFSET))(this, path);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
