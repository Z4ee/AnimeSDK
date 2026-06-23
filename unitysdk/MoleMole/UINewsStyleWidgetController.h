#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_84553FEB3F39F7E6;
namespace MoleMole { class UIControlReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER_ENABLEFOCUS_OFFSET UNITYSDK_OFFSET(0x1787F320)
#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1787F080)
#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1787F0F0)
#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER_SHOWDETAILWINDOW_OFFSET UNITYSDK_OFFSET(0x1787F260)
#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER_SHOWSTYLE_OFFSET UNITYSDK_OFFSET(0x1787F1B0)
#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1787F3C0)
#define MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1787F420)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStyleWidgetController_TypeDefinitionIndex = 63247;

	class UINewsStyleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_84553FEB3F39F7E6* get__viewModel()
		{
			return ((::Class_2_84553FEB3F39F7E6*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void ShowStyle(::System::Collections::Generic::List_1<::System::UInt32>* newsList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER_SHOWSTYLE_OFFSET))(this, newsList);
		}

		::System::Void ShowDetailWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER_SHOWDETAILWINDOW_OFFSET))(this);
		}

		::System::Void EnableFocus(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER_ENABLEFOCUS_OFFSET))(this, enable);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTYLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}
	};
}
