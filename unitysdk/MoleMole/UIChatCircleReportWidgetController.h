#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_F964D28D070F4284;
class Class_2_1C97EB19EBCD7CE1_1;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19A92B70)
#define MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19A92BE0)
#define MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19A92C80)
#define MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19A92D40)
#define MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A93080)
#define MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19A93090)
#define MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19A93130)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatCircleReportWidgetController_TypeDefinitionIndex = 71747;

	class UIChatCircleReportWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_1C97EB19EBCD7CE1_1* get__viewModel()
		{
			return ((::Class_2_1C97EB19EBCD7CE1_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::Class_1_F964D28D070F4284* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F964D28D070F4284*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATCIRCLEREPORTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
