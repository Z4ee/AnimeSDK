#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_7807B2B04302CD7B_19;
class Class_2_79F6D62CE30E3F8E_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER_CLEARREWARDS_OFFSET UNITYSDK_OFFSET(0x140F7050)
#define MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x140F5AB0)
#define MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x140F5C40)
#define MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x140F5BC0)
#define MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x140F5D50)
#define MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0x140F71D0)
#define MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x140F73F0)
#define MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x140F7480)
#define MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x140F7510)
#define MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x140F75B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustLevelRewardRowWidgetController_TypeDefinitionIndex = 64572;

	class UIWorkBenchTrustLevelRewardRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_3* _view; // 0x2F0
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _rewardIconList; // 0x2F8
		::Class_1_7807B2B04302CD7B_19* _levelReward; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void ClearRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER_CLEARREWARDS_OFFSET))(this);
		}

		::System::Void TakeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER_TAKEREWARD_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTLEVELREWARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
