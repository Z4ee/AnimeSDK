#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_1092;
class Class_2_79F6D62CE30E3F8E_62;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER_CHECKISFIRST_OFFSET UNITYSDK_OFFSET(0x171F78C0)
#define MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER_CLEARREWARDS_OFFSET UNITYSDK_OFFSET(0x171F7CE0)
#define MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x171F64D0)
#define MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x171F6920)
#define MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x171F7850)
#define MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x171F6680)
#define MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x171F6850)
#define MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER_REFRESHNOTIFY_OFFSET UNITYSDK_OFFSET(0x171F7270)
#define MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER_REFRESHREWARD_OFFSET UNITYSDK_OFFSET(0x171F73B0)
#define MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x171F6A30)
#define MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x171F7E60)
#define MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET UNITYSDK_OFFSET(0x171F7EF0)
#define MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER__ONUIINIT_B__2_1_OFFSET UNITYSDK_OFFSET(0x171F8040)
#define MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER__ONUIOPEN_B__3_0_OFFSET UNITYSDK_OFFSET(0x171F8150)
#define MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x171F8160)
#define MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x171F81F0)
#define MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x171F8290)
#define MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x171F8320)
#define MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x171F83B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHIARewardListRowItemWidgetController_TypeDefinitionIndex = 70653;

	class UIHIARewardListRowItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_62* _view; // 0x2F0
		::Class_2_208CC9941471731A_1092* _template; // 0x2F8
		::System::Boolean _isFirstInGroup; // 0x300
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _rewardIconList; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER_REFRESHNOTIFY_OFFSET))(this);
		}

		::System::Void RefreshReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER_REFRESHREWARD_OFFSET))(this);
		}

		::System::Void ClearRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER_CLEARREWARDS_OFFSET))(this);
		}

		::System::Void CheckIsFirst()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER_CHECKISFIRST_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2_1(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER__ONUIINIT_B__2_1_OFFSET))(this, success);
		}

		::System::Void _OnUIOpen_b__3_0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER__ONUIOPEN_B__3_0_OFFSET))(this, _);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHIAREWARDLISTROWITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
