#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_916237A3F76E6444;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER_ONCLICKTASKTABBTN_OFFSET UNITYSDK_OFFSET(0x1A62D760)
#define MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A62D9D0)
#define MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1A62DA60)
#define MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER_ONOPENBPTASKWIDGET_OFFSET UNITYSDK_OFFSET(0x1A62CF00)
#define MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A62D6D0)
#define MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER_ONTASKCHANGED_OFFSET UNITYSDK_OFFSET(0x1A62E1E0)
#define MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A62DBE0)
#define MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A62CC70)
#define MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A62CD30)
#define MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER_REFRESHTASKTIME_OFFSET UNITYSDK_OFFSET(0x1A62DD90)
#define MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A62E4B0)
#define MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A62E450)
#define MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A62E650)
#define MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1A62E6E0)
#define MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A62E770)
#define MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A62E810)
#define MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A62E8A0)
#define MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A62E930)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPTaskWidgetWidgetController_TypeDefinitionIndex = 68283;

	class UIBPTaskWidgetWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_tabNames()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIBPTaskWidgetWidgetController_TypeDefinitionIndex)->GetStaticField(0x4D940);
		}
		::Class_2_916237A3F76E6444* _view; // 0x2C0
		::Il2CppArray<::UnityEngine::UI::Extension::UITabButton*>* tabArray; // 0x2C8
		::Il2CppArray<::MoleMole::NotificationBadge*>* redDotArray; // 0x2D0
		::System::Int32 nowTabEnum; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnOpenBPTaskWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER_ONOPENBPTASKWIDGET_OFFSET))(this);
		}

		::System::Void OnClickTaskTabBtn(::System::Int32 targetType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER_ONCLICKTASKTABBTN_OFFSET))(this, targetType);
		}

		::System::Void RefreshTaskTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER_REFRESHTASKTIME_OFFSET))(this);
		}

		::System::Void OnTaskChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER_ONTASKCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPTASKWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
