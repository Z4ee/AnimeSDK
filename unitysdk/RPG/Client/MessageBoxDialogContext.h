#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageBoxDialogContext_MessageBoxMode.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"

class Class_2_54A1D8F91AB982FE;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_GET_VIEW_OFFSET UNITYSDK_OFFSET(0xA8874E0)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_ONBTNCANCELCLICK_OFFSET UNITYSDK_OFFSET(0xA887BE0)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_ONBTNOKCLICK_OFFSET UNITYSDK_OFFSET(0xA887B70)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_SETMESSAGEBOXMODE_OFFSET UNITYSDK_OFFSET(0xA887CF0)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_SETUPBTNCLOSEENABLE_OFFSET UNITYSDK_OFFSET(0xA887C50)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA887540)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA886EC0)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA886FB0)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__ONMESSAGEBOXCLOSE_OFFSET UNITYSDK_OFFSET(0xA887D40)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__SETMESSAGEBOXMODEIMPL_OFFSET UNITYSDK_OFFSET(0xA887780)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__SETUPMODEBTN_OFFSET UNITYSDK_OFFSET(0xA8879F0)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xA887600)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA887A30)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT___IFIXBASEPROXY__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA887DF0)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA887D90)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xA887E50)
#define RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA887EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageBoxDialogContext_TypeDefinitionIndex = 67076;

	class MessageBoxDialogContext : public ::RPG::Client::UIController
	{
	public:
		::System::Action_1<::System::Boolean>* OkOrCancelDispatch; // 0x180
		::RPG::Client::TextID TextIDTitle; // 0x188
		::RPG::Client::TextID TextIDOK; // 0x198
		::RPG::Client::TextID TextIDDesc; // 0x1A8
		::RPG::Client::MessageBoxDialogContext_MessageBoxMode _Mode; // 0x1B8
		::RPG::Client::TextID TextIDCancel; // 0x1C0

		::System::Void _ctor(::RPG::Client::UILayer layer)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__CTOR_OFFSET))(this, layer);
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

		::System::Void SetupBtnCloseEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_SETUPBTNCLOSEENABLE_OFFSET))(this, enable);
		}

		::System::Void _SetMessageBoxModeImpl(::RPG::Client::MessageBoxDialogContext_MessageBoxMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__SETMESSAGEBOXMODEIMPL_OFFSET))(this, mode);
		}

		::System::Void SetMessageBoxMode(::RPG::Client::MessageBoxDialogContext_MessageBoxMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageBoxDialogContext_MessageBoxMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_SETMESSAGEBOXMODE_OFFSET))(this, mode);
		}

		::System::Void _OnMessageBoxClose(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT__ONMESSAGEBOXCLOSE_OFFSET))(this, args);
		}

		::Class_2_54A1D8F91AB982FE* get_View()
		{
			return ((::Class_2_54A1D8F91AB982FE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEBOXDIALOGCONTEXT_GET_VIEW_OFFSET))(this);
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
