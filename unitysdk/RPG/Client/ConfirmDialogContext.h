#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ConfirmDialogContext_DialogBtnMode.h"
#include "unitysdk/RPG/Client/ConfirmDialogContext_OnClickType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"

class Class_2_A48F3719AA1CF200_31;
namespace RPG::Client { class LocalizedText; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_CUSTOMEXIT_OFFSET UNITYSDK_OFFSET(0x1A296B10)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_DISABLETOGGLE_OFFSET UNITYSDK_OFFSET(0x1A297630)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_ENABLETOGGLE_OFFSET UNITYSDK_OFFSET(0x1A2973E0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTCANCEL_OFFSET UNITYSDK_OFFSET(0x1A297120)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTCONTENT_OFFSET UNITYSDK_OFFSET(0x1A297080)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTOK_OFFSET UNITYSDK_OFFSET(0x1A2971C0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTTITLE_OFFSET UNITYSDK_OFFSET(0x1A296FE0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_GET_VIEW_OFFSET UNITYSDK_OFFSET(0x1A295DF0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNBGCLICK_OFFSET UNITYSDK_OFFSET(0x1A296D50)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNCANCELCLICK_OFFSET UNITYSDK_OFFSET(0x1A296C10)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNCLOSECLICK_OFFSET UNITYSDK_OFFSET(0x1A296CB0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNOKCLICK_OFFSET UNITYSDK_OFFSET(0x1A296B70)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNTOGGLECLICK_OFFSET UNITYSDK_OFFSET(0x1A296DF0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETBTNBGINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1A296560)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETBTNMODE_OFFSET UNITYSDK_OFFSET(0x1A296F90)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETCONTENT_OFFSET UNITYSDK_OFFSET(0x1A297320)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETDESCTIP_OFFSET UNITYSDK_OFFSET(0x1A297760)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETSETTINGBTNACTIVE_OFFSET UNITYSDK_OFFSET(0x1A2963F0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETTITLE_OFFSET UNITYSDK_OFFSET(0x1A297260)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETTOGGLETIPS_OFFSET UNITYSDK_OFFSET(0x1A297570)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_BGDISPATCH_OFFSET UNITYSDK_OFFSET(0x1A297D90)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_CLOSEDISPATCH_OFFSET UNITYSDK_OFFSET(0x1A297DE0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1A297E30)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDCANCEL_OFFSET UNITYSDK_OFFSET(0x1A297C80)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDCONTENT_OFFSET UNITYSDK_OFFSET(0x1A2978A0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDOK_OFFSET UNITYSDK_OFFSET(0x1A297B70)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDTITLE_OFFSET UNITYSDK_OFFSET(0x1A2979B0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A295880)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x1A295960)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__ONBTNSETTINGCLICK_OFFSET UNITYSDK_OFFSET(0x1A296EF0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x1A296960)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__PROCESSEXITDISPATCH_OFFSET UNITYSDK_OFFSET(0x1A2969F0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPINCONTROLBTN_OFFSET UNITYSDK_OFFSET(0x1A296660)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPMODEBTN_OFFSET UNITYSDK_OFFSET(0x1A2960C0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPTILELAYOUT_OFFSET UNITYSDK_OFFSET(0x1A296880)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1A295E60)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x1A2964A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ConfirmDialogContext_TypeDefinitionIndex = 72635;

	class ConfirmDialogContext : public ::RPG::Client::UIController
	{
	public:
		::System::Action* ExitAction; // 0x188
		::System::Action* NoneDispatch; // 0x190
		::System::Action* _BgDispatch; // 0x198
		::System::Action_1<::System::Boolean>* _ToggleDispatch; // 0x1A0
		::System::Action* _CloseDispatch; // 0x1A8
		::System::Action_1<::System::Boolean>* OkOrCancelDispatch; // 0x1B0
		::RPG::Client::ConfirmDialogContext_OnClickType _ClickType; // 0x1B8
		::RPG::Client::ConfirmDialogContext_DialogBtnMode _Mode; // 0x1BC
		::System::Boolean _IsToggleSelected; // 0x1C0
		::System::Boolean CallDispatchBeforeExit; // 0x1C1

		::System::Void _ctor(::RPG::Client::UILayer a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupModeBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPMODEBTN_OFFSET))(this);
		}

		::System::Void _SetupIncontrolBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPINCONTROLBTN_OFFSET))(this);
		}

		::System::Void _SetupTileLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPTILELAYOUT_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _ProcessExitDispatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__PROCESSEXITDISPATCH_OFFSET))(this);
		}

		::System::Void CustomExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_CUSTOMEXIT_OFFSET))(this);
		}

		::System::Void OnBtnOkClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNOKCLICK_OFFSET))(this, a1);
		}

		::System::Void OnBtnCancelClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNCANCELCLICK_OFFSET))(this, a1);
		}

		::System::Void OnBtnCloseClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNCLOSECLICK_OFFSET))(this, a1);
		}

		::System::Void OnBtnBgClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNBGCLICK_OFFSET))(this, a1);
		}

		::System::Void OnBtnToggleClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNTOGGLECLICK_OFFSET))(this, a1);
		}

		::System::Void _OnBtnSettingClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__ONBTNSETTINGCLICK_OFFSET))(this, a1);
		}

		::System::Void SetBtnBgInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETBTNBGINTERACTABLE_OFFSET))(this, a1);
		}

		::System::Void SetBtnMode(::RPG::Client::ConfirmDialogContext_DialogBtnMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ConfirmDialogContext_DialogBtnMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETBTNMODE_OFFSET))(this, a1);
		}

		::RPG::Client::LocalizedText* GetComponentTitle()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTTITLE_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* GetComponentContent()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTCONTENT_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* GetComponentCancel()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTCANCEL_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* GetComponentOK()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTOK_OFFSET))(this);
		}

		::System::Void SetTitle(::RPG::Client::TextID a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETTITLE_OFFSET))(this, a1, a2);
		}

		::System::Void SetContent(::RPG::Client::TextID a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETCONTENT_OFFSET))(this, a1, a2);
		}

		::System::Void EnableToggle(::System::Boolean a1, ::System::Action_1<::System::Boolean>* a2, ::RPG::Client::TextID a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action_1<::System::Boolean>*, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_ENABLETOGGLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DisableToggle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_DISABLETOGGLE_OFFSET))(this);
		}

		::System::Void SetToggleTips(::RPG::Client::TextID a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETTOGGLETIPS_OFFSET))(this, a1, a2);
		}

		::System::Void SetDescTip(::RPG::Client::TextID a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETDESCTIP_OFFSET))(this, a1, a2);
		}

		::System::Void SetSettingBtnActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETSETTINGBTNACTIVE_OFFSET))(this, a1);
		}

		::System::Void set_TextIDContent(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDCONTENT_OFFSET))(this, a1);
		}

		::System::Void set_TextIDTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDTITLE_OFFSET))(this, a1);
		}

		::System::Void set_TextIDOK(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDOK_OFFSET))(this, a1);
		}

		::System::Void set_TextIDCancel(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDCANCEL_OFFSET))(this, a1);
		}

		::System::Void set_BgDispatch(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_BGDISPATCH_OFFSET))(this, a1);
		}

		::System::Void set_CloseDispatch(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_CLOSEDISPATCH_OFFSET))(this, a1);
		}

		::System::Void set_Mode(::RPG::Client::ConfirmDialogContext_DialogBtnMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ConfirmDialogContext_DialogBtnMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_MODE_OFFSET))(this, a1);
		}

		::Class_2_A48F3719AA1CF200_31* get_View()
		{
			return ((::Class_2_A48F3719AA1CF200_31*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_GET_VIEW_OFFSET))(this);
		}
	};
}
