#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_02A3E7FB5B687DF7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIRABDepositoryBangbooTitleRowWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIRABDEPOSITORYBANGBOOTITLEROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19894F60)
#define MOLEMOLE_UIRABDEPOSITORYBANGBOOTITLEROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19894FD0)
#define MOLEMOLE_UIRABDEPOSITORYBANGBOOTITLEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19895070)
#define MOLEMOLE_UIRABDEPOSITORYBANGBOOTITLEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19895130)
#define MOLEMOLE_UIRABDEPOSITORYBANGBOOTITLEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x198952B0)
#define MOLEMOLE_UIRABDEPOSITORYBANGBOOTITLEROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x198952C0)
#define MOLEMOLE_UIRABDEPOSITORYBANGBOOTITLEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19895360)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryBangbooTitleRowWidgetController_TypeDefinitionIndex = 86115;

	class UIRABDepositoryBangbooTitleRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYBANGBOOTITLEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_02A3E7FB5B687DF7* get__viewModel()
		{
			return ((::Class_2_02A3E7FB5B687DF7*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYBANGBOOTITLEROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYBANGBOOTITLEROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYBANGBOOTITLEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UIRABDepositoryBangbooTitleRowWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRABDepositoryBangbooTitleRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYBANGBOOTITLEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYBANGBOOTITLEROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYBANGBOOTITLEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
