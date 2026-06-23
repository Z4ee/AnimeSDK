#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_FE58AEDF2BB486FD;
class Class_3_BD954AEAE8F1A57B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x183EBBA0)
#define MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x183EBC10)
#define MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x183EBCB0)
#define MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x183EBE50)
#define MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x183EBF10)
#define MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x183EBF70)
#define MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x183EC010)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySkyRewardItemWidgetController_TypeDefinitionIndex = 59992;

	class UIActivitySkyRewardItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_FE58AEDF2BB486FD* get__viewModel()
		{
			return ((::Class_2_FE58AEDF2BB486FD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshView(::Class_3_BD954AEAE8F1A57B* task, ::System::Int32 rewardIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_BD954AEAE8F1A57B*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, task, rewardIndex);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYREWARDITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
