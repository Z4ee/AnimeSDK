#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePhase.h"
#include "unitysdk/RPG/Client/LoginNodeType.h"
#include "unitysdk/RPG/Client/LoginPanelFunction.h"
#include "unitysdk/RPG/Client/NotifyType.h"

class Class_2_819E7966739ABB7B;
namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class RspHandler; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_LOGINPHASE_CHANGENODESTATE_OFFSET UNITYSDK_OFFSET(0xBE64230)
#define RPG_CLIENT_LOGINPHASE_GET_LOGINCONTEXT_OFFSET UNITYSDK_OFFSET(0xBE63FE0)
#define RPG_CLIENT_LOGINPHASE_ISFUNCTIONOPEN_OFFSET UNITYSDK_OFFSET(0xBE64120)
#define RPG_CLIENT_LOGINPHASE_ISOPEN_OFFSET UNITYSDK_OFFSET(0xBE64020)
#define RPG_CLIENT_LOGINPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0xBE643D0)
#define RPG_CLIENT_LOGINPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0xBE645D0)
#define RPG_CLIENT_LOGINPHASE_SETFUNCTIONOPEN_OFFSET UNITYSDK_OFFSET(0xBE64180)
#define RPG_CLIENT_LOGINPHASE_SETPANELSTATE_OFFSET UNITYSDK_OFFSET(0xBE641E0)
#define RPG_CLIENT_LOGINPHASE__ADDNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xBE64570)
#define RPG_CLIENT_LOGINPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0xBE63F60)

namespace RPG::Client
{
	inline static constexpr unsigned int LoginPhase_TypeDefinitionIndex = 57163;

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

		::Class_2_819E7966739ABB7B* get_loginContext()
		{
			return ((::Class_2_819E7966739ABB7B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINPHASE_GET_LOGINCONTEXT_OFFSET))(this);
		}

		::System::Boolean IsOpen(::RPG::Client::LoginNodeType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LoginNodeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINPHASE_ISOPEN_OFFSET))(this, a1);
		}

		::System::Boolean IsFunctionOpen(::RPG::Client::LoginPanelFunction a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LoginPanelFunction))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINPHASE_ISFUNCTIONOPEN_OFFSET))(this, a1);
		}

		::System::Void SetFunctionOpen(::RPG::Client::LoginPanelFunction a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoginPanelFunction, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINPHASE_SETFUNCTIONOPEN_OFFSET))(this, a1, a2);
		}

		::System::Void SetPanelState(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINPHASE_SETPANELSTATE_OFFSET))(this, a1);
		}

		::System::Void ChangeNodeState(::RPG::Client::LoginNodeType a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoginNodeType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINPHASE_CHANGENODESTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINPHASE_ONENTER_OFFSET))(this);
		}

		::System::Void _AddNotifyHandler(::RPG::Client::NotifyType a1, ::RPG::Client::NotifyHandler* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINPHASE__ADDNOTIFYHANDLER_OFFSET))(this, a1, a2);
		}

		::System::Void OnLeave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOGINPHASE_ONLEAVE_OFFSET))(this);
		}
	};
}
