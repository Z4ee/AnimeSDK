#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UICpEndingChildWindowController_CpDamageInfo.h"
#include "unitysdk/MoleMole/UICpEndingChildWindowController_CpItemInfo.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_5E8D7F836DA392F9;
class Class_1_F11631927D0197AF;
class Class_2_0946524052D5EA18_2;
class Class_2_0CCF091CD6FC39F6;
class Class_2_67AAD4707F55C650;
class Class_2_DF374A2D13405DBB;
class Class_4_8D1AD90A8B2D39F9_3;
class Class_4_9E9E9BF263D35C5C;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UICpIconItemWidgetController; }
namespace MoleMole { class UICpItemInfoWidgetController; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1B8568F0)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONCLICKINFOBTN_OFFSET UNITYSDK_OFFSET(0x1B859080)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1B8586B0)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1B858A00)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1B8591C0)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1B858740)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1B856900)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1B856A20)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_REFRESHRESULT_OFFSET UNITYSDK_OFFSET(0x1B857320)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_SETCOMPANIONICONINFO_OFFSET UNITYSDK_OFFSET(0x1B857890)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_SETDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1B857580)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_SETITEMLISTINFO_OFFSET UNITYSDK_OFFSET(0x1B858090)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_TICKFADEIN_OFFSET UNITYSDK_OFFSET(0x1B858F80)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_TICKFADEOUT_OFFSET UNITYSDK_OFFSET(0x1B859000)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_TRYFADEOUT_OFFSET UNITYSDK_OFFSET(0x1B858D50)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B858E60)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B859370)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B859210)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1B859400)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1B859490)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1B8594C0)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1B8594D0)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1B8594E0)
#define MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1B8594F0)

namespace MoleMole
{
	inline static constexpr unsigned int UICpEndingChildWindowController_TypeDefinitionIndex = 90803;

	class UICpEndingChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Comparison_1<::MoleMole::UICpEndingChildWindowController_CpDamageInfo>** StaticGet_CompareMethord()
		{
			return (::System::Comparison_1<::MoleMole::UICpEndingChildWindowController_CpDamageInfo>**)Il2CppClass::FromTypeDefinitionIndex(UICpEndingChildWindowController_TypeDefinitionIndex)->GetStaticField(0x4E540);
		}
		::Class_2_0946524052D5EA18_2* _view; // 0x318
		::System::Boolean isFadeIn; // 0x320
		::System::Boolean isFadeOut; // 0x321
		::System::Single deltaTime; // 0x324
		::System::Single fadeOutWaitTime; // 0x328
		::Class_2_0CCF091CD6FC39F6* _gameLogic; // 0x330
		::System::Collections::Generic::List_1<::MoleMole::UICpIconItemWidgetController*>* _cpIconCtrls; // 0x338
		::System::Collections::Generic::List_1<::MoleMole::UICpItemInfoWidgetController*>* _cpItemCtrls; // 0x340
		::System::Collections::Generic::List_1<::MoleMole::UICpEndingChildWindowController_CpItemInfo>* _cpItemInfos; // 0x348
		::System::Int32 cpLimitCount; // 0x350
		::System::Int32 itemLimitCount; // 0x354
		::System::Collections::Generic::List_1<::MoleMole::UICpEndingChildWindowController_CpDamageInfo>* _cpDamageInfos; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void SetItemListInfo(::Class_1_5E8D7F836DA392F9* player)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5E8D7F836DA392F9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_SETITEMLISTINFO_OFFSET))(this, player);
		}

		::System::Void SetCompanionIconInfo(::Class_4_8D1AD90A8B2D39F9_3* insComp, ::Class_1_F11631927D0197AF* host, ::Class_4_9E9E9BF263D35C5C* cpPlayerCpComp, ::Class_2_DF374A2D13405DBB* viewEntityMgr, ::Class_2_67AAD4707F55C650* confMgr)
		{
			return ((::System::Void(*)(::PVOID, ::Class_4_8D1AD90A8B2D39F9_3*, ::Class_1_F11631927D0197AF*, ::Class_4_9E9E9BF263D35C5C*, ::Class_2_DF374A2D13405DBB*, ::Class_2_67AAD4707F55C650*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_SETCOMPANIONICONINFO_OFFSET))(this, insComp, host, cpPlayerCpComp, viewEntityMgr, confMgr);
		}

		::System::Void SetDifficulty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_SETDIFFICULTY_OFFSET))(this);
		}

		::System::Void RefreshResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_REFRESHRESULT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void TickFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_TICKFADEIN_OFFSET))(this);
		}

		::System::Void TickFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_TICKFADEOUT_OFFSET))(this);
		}

		::System::Void TryFadeOut(::System::Boolean isContinue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_TRYFADEOUT_OFFSET))(this, isContinue);
		}

		::System::Void OnClickInfoBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONCLICKINFOBTN_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPENDINGCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
