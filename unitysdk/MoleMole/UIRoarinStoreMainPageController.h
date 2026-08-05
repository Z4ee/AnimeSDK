#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_2A9E2AE107165F68;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1675ABD0)
#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1675ABE0)
#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_ONBEFOREPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1675AE30)
#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1675AC50)
#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1675ACF0)
#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1675ADA0)
#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1675AF70)
#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER___BASE_ONBEFOREPLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x1675AF80)
#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1675B020)
#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1675B0C0)
#define MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1675B0D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoarinStoreMainPageController_TypeDefinitionIndex = 54786;

	class UIRoarinStoreMainPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_2A9E2AE107165F68* get__viewModel()
		{
			return ((::Class_2_2A9E2AE107165F68*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnBeforePlayAnimation(::MoleMole::UIBaseController_FadeFlag flag, ::System::String* anim)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER_ONBEFOREPLAYANIMATION_OFFSET))(this, flag, anim);
		}

		::System::Void __base_OnBeforePlayAnimation(::MoleMole::UIBaseController_FadeFlag P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER___BASE_ONBEFOREPLAYANIMATION_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROARINSTOREMAINPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
