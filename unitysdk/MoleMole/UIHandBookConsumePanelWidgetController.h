#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_BB18B5C1205C80C6_4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER_ONCONSOLEBTN_OFFSET UNITYSDK_OFFSET(0x168FE380)
#define MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x168FE150)
#define MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x168FE260)
#define MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x168FE1E0)
#define MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x168FD8E0)
#define MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x168FDC00)
#define MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x168FDCE0)
#define MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x168FE8C0)
#define MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x168FE860)
#define MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET UNITYSDK_OFFSET(0x168FE940)
#define MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER__ONUIINIT_B__2_1_OFFSET UNITYSDK_OFFSET(0x168FE9B0)
#define MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER__ONUIINIT_B__2_2_OFFSET UNITYSDK_OFFSET(0x168FEA20)
#define MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x168FEA90)
#define MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x168FEB20)
#define MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x168FEBB0)
#define MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x168FEC40)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookConsumePanelWidgetController_TypeDefinitionIndex = 76527;

	class UIHandBookConsumePanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_ListenedItemIDs()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookConsumePanelWidgetController_TypeDefinitionIndex)->GetStaticField(0x4CE20);
		}
		::Class_2_BB18B5C1205C80C6_4* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER_REFRESHINFO_OFFSET))(this);
		}

		::System::Void OnItemChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER_ONITEMCHANGED_OFFSET))(this, args);
		}

		::System::Void OnConsoleBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER_ONCONSOLEBTN_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER__ONUIINIT_B__2_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER__ONUIINIT_B__2_2_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKCONSUMEPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
