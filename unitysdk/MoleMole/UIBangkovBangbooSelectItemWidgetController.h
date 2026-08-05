#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_26670C469760EFB3;
namespace MoleMole { class UIBangkovBangbooSelectItemWidgetController_Data; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }

#define MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1802AF20)
#define MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER_ONBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1802B1E0)
#define MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1802AF90)
#define MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1802B050)
#define MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1802B400)
#define MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1802B390)
#define MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1802B450)
#define MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1802B460)
#define MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1802B500)
#define MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1802B5A0)
#define MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1802B5B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovBangbooSelectItemWidgetController_TypeDefinitionIndex = 44948;

	class UIBangkovBangbooSelectItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::MoleMole::UIBangkovBangbooSelectItemWidgetController_Data* _data; // 0x2F0
		::System::Int32 _index; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_26670C469760EFB3* get__viewModel()
		{
			return ((::Class_2_26670C469760EFB3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* info, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, info, init);
		}

		::System::Void OnButtonClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER_ONBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBANGBOOSELECTITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
