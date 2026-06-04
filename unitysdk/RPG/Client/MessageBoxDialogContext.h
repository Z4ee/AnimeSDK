#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageBoxDialogContext_MessageBoxMode.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"

class Class_2_97F5E07A56E8A298;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_GET_VIEW_OFFSET UNITYSDK_OFFSET(0xBFD2BE0)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_ONBTNCANCELCLICK_OFFSET UNITYSDK_OFFSET(0xBFD3170)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_ONBTNOKCLICK_OFFSET UNITYSDK_OFFSET(0xBFD3100)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_SETMESSAGEBOXMODE_OFFSET UNITYSDK_OFFSET(0xBFD3250)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_SETUPBTNCLOSEENABLE_OFFSET UNITYSDK_OFFSET(0xBFD31E0)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xBFD2C10)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD2720)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xBFD27F0)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__ONMESSAGEBOXCLOSE_OFFSET UNITYSDK_OFFSET(0xBFD32A0)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__SETMESSAGEBOXMODEIMPL_OFFSET UNITYSDK_OFFSET(0xBFD2E20)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__SETUPMODEBTN_OFFSET UNITYSDK_OFFSET(0xBFD2F80)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBFD2CD0)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xBFD2FC0)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT___IFIXBASEPROXY__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xBFD3350)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xBFD32F0)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBFD33B0)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xBFD3410)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageBoxDialogContext_TypeDefinitionIndex = 68018;

	class MessageBoxDialogContext : public ::RPG::Client::UIController
	{
	public:
		::System::Action_1<::System::Boolean>* OkOrCancelDispatch; // 0x180
		::RPG::Client::TextID TextIDTitle; // 0x188
		::RPG::Client::TextID TextIDDesc; // 0x198
		::RPG::Client::TextID TextIDOK; // 0x1A8
		::RPG::Client::TextID TextIDCancel; // 0x1B8
		::RPG::Client::MessageBoxDialogContext_MessageBoxMode _Mode; // 0x1C8

		::System::Void _ctor(::RPG::Client::UILayer a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _SetupModeBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__SETUPMODEBTN_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void OnBtnOkClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_ONBTNOKCLICK_OFFSET))(this);
		}

		::System::Void OnBtnCancelClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_ONBTNCANCELCLICK_OFFSET))(this);
		}

		::System::Void SetupBtnCloseEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_SETUPBTNCLOSEENABLE_OFFSET))(this, a1);
		}

		::System::Void _SetMessageBoxModeImpl(::RPG::Client::MessageBoxDialogContext_MessageBoxMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__SETMESSAGEBOXMODEIMPL_OFFSET))(this, a1);
		}

		::System::Void SetMessageBoxMode(::RPG::Client::MessageBoxDialogContext_MessageBoxMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_SETMESSAGEBOXMODE_OFFSET))(this, a1);
		}

		::System::Void _OnMessageBoxClose(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__ONMESSAGEBOXCLOSE_OFFSET))(this, a1);
		}

		::Class_2_97F5E07A56E8A298* get_View()
		{
			return ((::Class_2_97F5E07A56E8A298*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_GET_VIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT___IFIXBASEPROXY__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT___IFIXBASEPROXY__UNBINDVIEW_OFFSET))(this);
		}
	};
}
