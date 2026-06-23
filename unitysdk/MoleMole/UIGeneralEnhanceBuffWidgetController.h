#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_BD2725DA97808F12;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16F6C6C0)
#define MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16F6C930)
#define MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER_ONSCROLLITEMREUSE_OFFSET UNITYSDK_OFFSET(0x16F6CBC0)
#define MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16F6C9F0)
#define MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16F6C730)
#define MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16F6CCE0)
#define MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16F6CCF0)
#define MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER___BASE_ONSCROLLITEMREUSE_OFFSET UNITYSDK_OFFSET(0x16F6CD90)
#define MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x16F6CE20)
#define MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16F6CEC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralEnhanceBuffWidgetController_TypeDefinitionIndex = 51943;

	class UIGeneralEnhanceBuffWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_BD2725DA97808F12* get__viewModel()
		{
			return ((::Class_2_BD2725DA97808F12*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnScrollItemReUse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER_ONSCROLLITEMREUSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemReUse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER___BASE_ONSCROLLITEMREUSE_OFFSET))(this);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALENHANCEBUFFWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
