#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_FFBC003CFBB61A74.h"

class Class_2_1F7AF72642B2D0D6;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1691A140)
#define MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1691A1B0)
#define MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1691A250)
#define MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER_PROCESSONINTERACT_OFFSET UNITYSDK_OFFSET(0x1691A400)
#define MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1691A4F0)
#define MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1691A550)
#define MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1691A5F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmResultInfoWidgetController_TypeDefinitionIndex = 59941;

	class UIHouseRhythmResultInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_1F7AF72642B2D0D6* get__viewModel()
		{
			return ((::Class_2_1F7AF72642B2D0D6*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void ProcessOnInteract(::Struct_2_FFBC003CFBB61A74 data)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_FFBC003CFBB61A74))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER_PROCESSONINTERACT_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
