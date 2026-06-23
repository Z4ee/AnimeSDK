#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_347;
class Class_2_7E0B8A0505C257C2;
class Class_2_CE905445948732C1_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIVHSPlayerRoleWidgetController; }
namespace MoleMole { class UIVHSStoreLimitWidgetController_Context; }
namespace MoleMole { class UIVHSStorePicBtnWidgetController; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_CHECKVALID_OFFSET UNITYSDK_OFFSET(0x11581590)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_CHECKVHSINCD_OFFSET UNITYSDK_OFFSET(0x115819F0)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x11582660)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_GET__SELECTEDVHS_OFFSET UNITYSDK_OFFSET(0x115825E0)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_INITROLEWIDGET_OFFSET UNITYSDK_OFFSET(0x11580E40)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_INITSLOTFORLIMIT_OFFSET UNITYSDK_OFFSET(0x11580FA0)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_ONAFTERVHSSELECTCHANGEFORLIMIT_OFFSET UNITYSDK_OFFSET(0x115815E0)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_ONAFTERVHSSELECTCHANGEINNER_OFFSET UNITYSDK_OFFSET(0x11581410)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_ONCONTEXTCHANGE_OFFSET UNITYSDK_OFFSET(0x11581BA0)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11581480)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11581510)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11580CA0)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_ONVHSMODULECURRENTTAGLISTUPDATE_OFFSET UNITYSDK_OFFSET(0x11581D50)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_ONVHSSTORELIMITSUBMITED_OFFSET UNITYSDK_OFFSET(0x11581C70)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_ONVHSSTORELIMITSUBMITTING_OFFSET UNITYSDK_OFFSET(0x11581BE0)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x11582670)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11582870)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11582730)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER__INITSLOTFORLIMIT_B__8_0_OFFSET UNITYSDK_OFFSET(0x11582900)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER__INITSLOTFORLIMIT_B__8_1_OFFSET UNITYSDK_OFFSET(0x11582F60)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER__ONAFTERVHSSELECTCHANGEINNER_G__REFRESHSLOT_7_0_OFFSET UNITYSDK_OFFSET(0x115816D0)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11582F80)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11583010)
#define MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x115830A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreRecommandWidgetController_TypeDefinitionIndex = 86445;

	class UIVHSStoreRecommandWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Func_1<::System::Collections::Generic::IReadOnlyList_1<::Class_2_CE905445948732C1_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D*>*>** StaticGet_SelectedVhsGetter()
		{
			return (::System::Func_1<::System::Collections::Generic::IReadOnlyList_1<::Class_2_CE905445948732C1_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIVHSStoreRecommandWidgetController_TypeDefinitionIndex)->GetStaticField(0x37F60);
		}
		::Class_2_7E0B8A0505C257C2* _view; // 0x2C0
		::System::Collections::Generic::List_1<::MoleMole::UIVHSStorePicBtnWidgetController*>* _vhsCtrlList; // 0x2C8
		::MoleMole::UIVHSStoreLimitWidgetController_Context* _context; // 0x2D0
		::Class_2_208CC9941471731A_347* _activityRPQuestTemplate; // 0x2D8
		::MoleMole::UIVHSPlayerRoleWidgetController* _vhsPlayerRoleWidget; // 0x2E0
		::System::Boolean _submitting; // 0x2E8
		::System::Int32 _vhsSlotNum; // 0x2EC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean CheckValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_CHECKVALID_OFFSET))(this);
		}

		::System::Void InitRoleWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_INITROLEWIDGET_OFFSET))(this);
		}

		::System::Void OnAfterVhsSelectChangeForLimit(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_ONAFTERVHSSELECTCHANGEFORLIMIT_OFFSET))(this, args);
		}

		::System::Void OnAfterVhsSelectChangeInner()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_ONAFTERVHSSELECTCHANGEINNER_OFFSET))(this);
		}

		::System::Void InitSlotForLimit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_INITSLOTFORLIMIT_OFFSET))(this);
		}

		::System::Boolean CheckVhsInCd(::System::Int32 vhsId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_CHECKVHSINCD_OFFSET))(this, vhsId);
		}

		::System::Void OnContextChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_ONCONTEXTCHANGE_OFFSET))(this);
		}

		::System::Void OnVhsStoreLimitSubmitting(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_ONVHSSTORELIMITSUBMITTING_OFFSET))(this, args);
		}

		::System::Void OnVhsStoreLimitSubmited(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_ONVHSSTORELIMITSUBMITED_OFFSET))(this, args);
		}

		::System::Void OnVHSModuleCurrentTagListUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_ONVHSMODULECURRENTTAGLISTUPDATE_OFFSET))(this, args);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_2_CE905445948732C1_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D*>* get__selectedVhs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_CE905445948732C1_Class_1_A6660CA21D7C1066_Class_1_C277D6FBDA93149D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_GET__SELECTEDVHS_OFFSET))(this);
		}

		::MoleMole::UIVHSStoreLimitWidgetController_Context* get_context()
		{
			return ((::MoleMole::UIVHSStoreLimitWidgetController_Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_context(::MoleMole::UIVHSStoreLimitWidgetController_Context* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVHSStoreLimitWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER_SET_CONTEXT_OFFSET))(this, value);
		}

		::System::Void _OnAfterVhsSelectChangeInner_g__RefreshSlot_7_0(::System::Int32 slotIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER__ONAFTERVHSSELECTCHANGEINNER_G__REFRESHSLOT_7_0_OFFSET))(this, slotIndex);
		}

		::System::Void _InitSlotForLimit_b__8_0(::MoleMole::UIVHSStorePicBtnWidgetController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVHSStorePicBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER__INITSLOTFORLIMIT_B__8_0_OFFSET))(this, controller);
		}

		::System::Collections::Generic::List_1<::System::Int32>* _InitSlotForLimit_b__8_1()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER__INITSLOTFORLIMIT_B__8_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORERECOMMANDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
