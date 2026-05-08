#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5D3AF1309617E53D.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_B08665FEB7112467_1;
class Class_2_79AE422BA06F6D26_62;
namespace MoleMole { class UIActivityLambGiftItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_ONCLICKREWARDITEM_OFFSET UNITYSDK_OFFSET(0x12F39910)
#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12F38C00)
#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12F38D10)
#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12F38C90)
#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12F38730)
#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_REFRESHREWARDSTATE_OFFSET UNITYSDK_OFFSET(0x12F394A0)
#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12F39B40)
#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12F39B50)
#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x12F39BA0)
#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12F39C40)
#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12F39C80)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityLambGiftSpecialRowWidgetController_TypeDefinitionIndex = 64487;

	class UIActivityLambGiftSpecialRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::Int32 maxRewardCount = 0x2; // 0x0
		::Class_2_79AE422BA06F6D26_62* _view; // 0x2E8
		::Class_1_B08665FEB7112467_1* activityData; // 0x2F0
		::Il2CppArray<::MoleMole::UIActivityLambGiftItemWidgetController*>* rewardIconArray; // 0x2F8
		::System::Collections::Generic::Dictionary_2<::Enum_3_5D3AF1309617E53D, ::UnityEngine::GameObject*>* takeStateObejcts; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnClickRewardItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_ONCLICKREWARDITEM_OFFSET))(this);
		}

		::System::Void RefreshRewardState(::Enum_3_5D3AF1309617E53D nowRewardState)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_5D3AF1309617E53D))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_REFRESHREWARDSTATE_OFFSET))(this, nowRewardState);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
