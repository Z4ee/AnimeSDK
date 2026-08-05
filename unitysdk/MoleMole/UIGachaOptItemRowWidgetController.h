#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_4833743D7E5F6CC1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }

#define MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x172E7480)
#define MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x172E74F0)
#define MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x172E7800)
#define MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_ONSETGLOBALDATA_OFFSET UNITYSDK_OFFSET(0x172E7C00)
#define MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x172E7590)
#define MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_SETITEMID_OFFSET UNITYSDK_OFFSET(0x172E80B0)
#define MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x172E8450)
#define MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x172E8460)
#define MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x172E8500)
#define MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER___BASE_ONSETGLOBALDATA_OFFSET UNITYSDK_OFFSET(0x172E85A0)
#define MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x172E8630)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaOptItemRowWidgetController_TypeDefinitionIndex = 71607;

	class UIGachaOptItemRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_4833743D7E5F6CC1* get__viewModel()
		{
			return ((::Class_2_4833743D7E5F6CC1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnSetGlobalData(::System::Object* globalData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_ONSETGLOBALDATA_OFFSET))(this, globalData);
		}

		::System::Void SetItemID(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_SETITEMID_OFFSET))(this, itemID);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnSetGlobalData(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER___BASE_ONSETGLOBALDATA_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
