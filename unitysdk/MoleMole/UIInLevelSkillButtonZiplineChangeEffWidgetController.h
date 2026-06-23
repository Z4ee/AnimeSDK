#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E1EF1C824DE1E5D4;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }

#define MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17121D10)
#define MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17121D80)
#define MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17121E20)
#define MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER_PLAYFEEDBACK_OFFSET UNITYSDK_OFFSET(0x171220B0)
#define MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17122410)
#define MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17122470)
#define MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17122510)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSkillButtonZiplineChangeEffWidgetController_TypeDefinitionIndex = 77429;

	class UIInLevelSkillButtonZiplineChangeEffWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Foundation::Coroutine::CoroutineHandle _effCoroutineHandle01; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_E1EF1C824DE1E5D4* get__viewModel()
		{
			return ((::Class_2_E1EF1C824DE1E5D4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void PlayFeedBack(::System::Single animRatio, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER_PLAYFEEDBACK_OFFSET))(this, animRatio, callback);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONZIPLINECHANGEEFFWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
