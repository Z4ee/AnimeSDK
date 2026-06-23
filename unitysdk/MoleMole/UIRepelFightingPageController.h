#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_AAE1D9C494F66FD4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRepelFightingContext; }

#define MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x15C10FC0)
#define MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15C10FD0)
#define MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15C10FE0)
#define MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15C11050)
#define MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15C11110)
#define MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15C11520)
#define MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15C11160)
#define MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER_OPENLEVELINFO_OFFSET UNITYSDK_OFFSET(0x15C11330)
#define MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C11570)
#define MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15C11580)
#define MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15C11620)
#define MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15C11630)
#define MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15C11640)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepelFightingPageController_TypeDefinitionIndex = 65202;

	class UIRepelFightingPageController : public ::MoleMole::UIWindowController
	{
	public:
		::MoleMole::UIRepelFightingContext* _context; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_205B03D40B9BD873 get_MessageMatchPage()
		{
			return ((::Enum_3_205B03D40B9BD873(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_AAE1D9C494F66FD4* get__viewModel()
		{
			return ((::Class_2_AAE1D9C494F66FD4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OpenLevelInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER_OPENLEVELINFO_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELFIGHTINGPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
