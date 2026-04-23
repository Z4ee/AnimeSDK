#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePhase.h"
#include "unitysdk/RPG/Client/LoginNodeType.h"
#include "unitysdk/RPG/Client/LoginPanelFunction.h"
#include "unitysdk/RPG/Client/NotifyType.h"

class Class_2_06BD520BB50B7472;
namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class RspHandler; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_LOGINPHASE_CHANGENODESTATE_OFFSET UNITYSDK_OFFSET(0xA703C90)
#define RPG_CLIENT_LOGINPHASE_GET_LOGINCONTEXT_OFFSET UNITYSDK_OFFSET(0xA703A40)
#define RPG_CLIENT_LOGINPHASE_ISFUNCTIONOPEN_OFFSET UNITYSDK_OFFSET(0xA703B80)
#define RPG_CLIENT_LOGINPHASE_ISOPEN_OFFSET UNITYSDK_OFFSET(0xA703A80)
#define RPG_CLIENT_LOGINPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0xA703E30)
#define RPG_CLIENT_LOGINPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0xA704000)
#define RPG_CLIENT_LOGINPHASE_SETFUNCTIONOPEN_OFFSET UNITYSDK_OFFSET(0xA703BE0)
#define RPG_CLIENT_LOGINPHASE_SETPANELSTATE_OFFSET UNITYSDK_OFFSET(0xA703C40)
#define RPG_CLIENT_LOGINPHASE__ADDNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xA703FA0)
#define RPG_CLIENT_LOGINPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0xA7039C0)

namespace RPG::Client
{
	inline static constexpr unsigned int LoginPhase_TypeDefinitionIndex = 56401;

	class LoginPhase : public ::RPG::Client::BasePhase
	{
	public:
		// static const ::System::UInt32 DefaultPanelState = 0xFFFFFFFF; // 0x0
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LoginNodeType, ::System::Boolean>* states; // 0x18
		::System::UInt32 PanelState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINPHASE__CTOR_OFFSET))(this);
		}

		::Class_2_06BD520BB50B7472* get_loginContext()
		{
			return ((::Class_2_06BD520BB50B7472*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINPHASE_GET_LOGINCONTEXT_OFFSET))(this);
		}

		::System::Boolean IsOpen(::RPG::Client::LoginNodeType nodeType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LoginNodeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINPHASE_ISOPEN_OFFSET))(this, nodeType);
		}

		::System::Boolean IsFunctionOpen(::RPG::Client::LoginPanelFunction panelFunction)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LoginPanelFunction))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINPHASE_ISFUNCTIONOPEN_OFFSET))(this, panelFunction);
		}

		::System::Void SetFunctionOpen(::RPG::Client::LoginPanelFunction panelFunction, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoginPanelFunction, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINPHASE_SETFUNCTIONOPEN_OFFSET))(this, panelFunction, value);
		}

		::System::Void SetPanelState(::System::UInt32 panelState)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINPHASE_SETPANELSTATE_OFFSET))(this, panelState);
		}

		::System::Void ChangeNodeState(::RPG::Client::LoginNodeType nodeType, ::System::Boolean value, ::System::Boolean notify)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoginNodeType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINPHASE_CHANGENODESTATE_OFFSET))(this, nodeType, value, notify);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINPHASE_ONENTER_OFFSET))(this);
		}

		::System::Void _AddNotifyHandler(::RPG::Client::NotifyType type, ::RPG::Client::NotifyHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINPHASE__ADDNOTIFYHANDLER_OFFSET))(this, type, handler);
		}

		::System::Void OnLeave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINPHASE_ONLEAVE_OFFSET))(this);
		}
	};
}
