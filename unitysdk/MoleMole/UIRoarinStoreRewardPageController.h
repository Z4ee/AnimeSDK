#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_448CECD21B5ECB2E_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_GET_TRYOVERRIDETOPPAGEFADEIN_OFFSET UNITYSDK_OFFSET(0x17E37AB0)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17E37AA0)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17E37AC0)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_MASKCLOSE_OFFSET UNITYSDK_OFFSET(0x17E37D90)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17E37B30)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17E37D10)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17E37BD0)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E37E30)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER___BASE_MASKCLOSE_OFFSET UNITYSDK_OFFSET(0x17E37E40)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17E37ED0)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17E37F70)
#define MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17E37FA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoarinStoreRewardPageController_TypeDefinitionIndex = 59868;

	class UIRoarinStoreRewardPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_TryOverrideTopPageFadeIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_GET_TRYOVERRIDETOPPAGEFADEIN_OFFSET))(this);
		}

		::Class_2_448CECD21B5ECB2E_1* get__viewModel()
		{
			return ((::Class_2_448CECD21B5ECB2E_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void MaskClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER_MASKCLOSE_OFFSET))(this);
		}

		::System::Void __base_MaskClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER___BASE_MASKCLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREREWARDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
