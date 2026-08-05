#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_48D56DACBE4271BC;
class Class_2_8A63B61964F5D521;
namespace MoleMole { class RepelPrepPageContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET UNITYSDK_OFFSET(0x12FFA4A0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_CHECKNEWITEM_OFFSET UNITYSDK_OFFSET(0x12FFA810)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_CHECKSLOT_OFFSET UNITYSDK_OFFSET(0x12FFA9E0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_CLOSE_OFFSET UNITYSDK_OFFSET(0x12FFAE10)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x12FF9BB0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x12FF9BC0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12FF9BD0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x12FF9E30)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12FF9D70)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12FFADA0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12FF9C40)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12FF9F90)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x12FF9EF0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FFAEB0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12FFAEA0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_CLOSE_OFFSET UNITYSDK_OFFSET(0x12FFAEC0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x12FFAED0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x12FFAF60)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12FFB000)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12FFB0A0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12FFB0B0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x12FFB0C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepelPrepPageController_TypeDefinitionIndex = 78083;

	class UIRepelPrepPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		static ::System::Int32* StaticGet_StoreID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIRepelPrepPageController_TypeDefinitionIndex)->GetStaticField(0x12990);
		}
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x328
		::MoleMole::RepelPrepPageContext* _context; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_205B03D40B9BD873 get_MessageMatchPage()
		{
			return ((::Enum_3_205B03D40B9BD873(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_8A63B61964F5D521* get__viewModel()
		{
			return ((::Class_2_8A63B61964F5D521*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void BuildViewModelDataBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_BUILDVIEWMODELDATABINDING_OFFSET))(this);
		}

		::System::Void CheckNewItem(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_CHECKNEWITEM_OFFSET))(this, args);
		}

		::System::Void CheckSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_CHECKSLOT_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_CLOSE_OFFSET))(this);
		}

		::System::Void __base_Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_CLOSE_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
