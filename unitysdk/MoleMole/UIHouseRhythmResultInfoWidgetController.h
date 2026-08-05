#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_FFBC003CFBB61A74.h"

class Class_2_1F7AF72642B2D0D6;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1899C7D0)
#define MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1899C840)
#define MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1899C8E0)
#define MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER_PROCESSONINTERACT_OFFSET UNITYSDK_OFFSET(0x1899CAA0)
#define MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1899CB90)
#define MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1899CBF0)
#define MOLEMOLE_UIHOUSERHYTHMRESULTINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1899CC90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmResultInfoWidgetController_TypeDefinitionIndex = 86022;

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
