#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_912CABDA75E684D1.h"
#include "unitysdk/Enum_3_C96DD177C1F2A967.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_FAD80D2DF79126FA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIZenkovMain3DModelController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIZENKOVPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15B0F070)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15B0F080)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15B0F0F0)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15B0F230)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15B11CB0)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15B0F190)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15B10840)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_REFRESHEXPLORINGSTATE_OFFSET UNITYSDK_OFFSET(0x15B0F460)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_TRYOPENBUILDINGFROMCONTEXT_OFFSET UNITYSDK_OFFSET(0x15B10CD0)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_TRYOPENDELEGATEFROMCONTEXT_OFFSET UNITYSDK_OFFSET(0x15B115C0)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER_TRYOPENMISSIONPAGEFROMCONTEXT_OFFSET UNITYSDK_OFFSET(0x15B11870)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B11D60)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B11D50)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15B120D0)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15B12170)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15B12210)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15B12220)
#define MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15B12230)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPageController_TypeDefinitionIndex = 76755;

	class UIZenkovPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_ExploringLockButtonNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovPageController_TypeDefinitionIndex)->GetStaticField(0x4DB20);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_ExploringButtonNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovPageController_TypeDefinitionIndex)->GetStaticField(0x4DB28);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Enum_3_912CABDA75E684D1>** StaticGet_ExploringButtonBuildingTypes()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Enum_3_912CABDA75E684D1>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovPageController_TypeDefinitionIndex)->GetStaticField(0x4DB30);
		}
		// static const ::System::Int32 ExploringTipId = 0x2DD34A; // 0x0
		::MoleMole::UIZenkovMain3DModelController* _3dModelController; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_FAD80D2DF79126FA* get__viewModel()
		{
			return ((::Class_2_FAD80D2DF79126FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void TryOpenBuildingFromContext(::Enum_3_912CABDA75E684D1 buildingType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_912CABDA75E684D1))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_TRYOPENBUILDINGFROMCONTEXT_OFFSET))(this, buildingType);
		}

		::System::Void TryOpenDelegateFromContext(::Enum_3_C96DD177C1F2A967 subType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_C96DD177C1F2A967))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_TRYOPENDELEGATEFROMCONTEXT_OFFSET))(this, subType);
		}

		::System::Void TryOpenMissionPageFromContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_TRYOPENMISSIONPAGEFROMCONTEXT_OFFSET))(this);
		}

		::System::Void RefreshExploringState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER_REFRESHEXPLORINGSTATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
