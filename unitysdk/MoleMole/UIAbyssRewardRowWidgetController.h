#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_7382653E970C5F93_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSREWARDROWWIDGETCONTROLLER_CLEARREWARDS_OFFSET UNITYSDK_OFFSET(0x180B0610)
#define MOLEMOLE_UIABYSSREWARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x180B0500)
#define MOLEMOLE_UIABYSSREWARDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x180B0790)
#define MOLEMOLE_UIABYSSREWARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x180B0590)
#define MOLEMOLE_UIABYSSREWARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x180B04A0)
#define MOLEMOLE_UIABYSSREWARDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x180B0CD0)
#define MOLEMOLE_UIABYSSREWARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x180B0D60)
#define MOLEMOLE_UIABYSSREWARDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x180B0DF0)
#define MOLEMOLE_UIABYSSREWARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x180B0E90)
#define MOLEMOLE_UIABYSSREWARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x180B0F20)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssRewardRowWidgetController_TypeDefinitionIndex = 64959;

	class UIAbyssRewardRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_7382653E970C5F93_3* _view; // 0x2F0
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _rewardIconList; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ClearRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDROWWIDGETCONTROLLER_CLEARREWARDS_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSREWARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
