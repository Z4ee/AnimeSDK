#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginPhase.h"

class Class_1_6B41D5D37BA0605F;
class Class_1_718B8238EA10D3FF;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Exception; }

#define RPG_CLIENT_SERVERSELECTPHASE_CHECKUPDATEIFIX_OFFSET UNITYSDK_OFFSET(0x1AF7A0D0)
#define RPG_CLIENT_SERVERSELECTPHASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF799D0)
#define RPG_CLIENT_SERVERSELECTPHASE_ENTER_OFFSET UNITYSDK_OFFSET(0x1AF79A80)
#define RPG_CLIENT_SERVERSELECTPHASE_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x1AF7A020)
#define RPG_CLIENT_SERVERSELECTPHASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1AF79F40)
#define RPG_CLIENT_SERVERSELECTPHASE_LEAVE_OFFSET UNITYSDK_OFFSET(0x1AF79FA0)
#define RPG_CLIENT_SERVERSELECTPHASE_STARTSERVERLOGIN_OFFSET UNITYSDK_OFFSET(0x1AF79CB0)
#define RPG_CLIENT_SERVERSELECTPHASE_TICK_OFFSET UNITYSDK_OFFSET(0x1AF79A20)
#define RPG_CLIENT_SERVERSELECTPHASE__CHECKSERVERSTATE_OFFSET UNITYSDK_OFFSET(0x1AF7A5F0)
#define RPG_CLIENT_SERVERSELECTPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF79950)
#define RPG_CLIENT_SERVERSELECTPHASE__ONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AF7A210)
#define RPG_CLIENT_SERVERSELECTPHASE__REPORTLOCALASSETINFO_OFFSET UNITYSDK_OFFSET(0x1AF7A910)
#define RPG_CLIENT_SERVERSELECTPHASE__SERVERSELECTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1AF7A830)
#define RPG_CLIENT_SERVERSELECTPHASE__STARTLOGIN_OFFSET UNITYSDK_OFFSET(0x1AF7A070)

namespace RPG::Client
{
	inline static constexpr unsigned int ServerSelectPhase_TypeDefinitionIndex = 61258;

	class ServerSelectPhase : public ::RPG::Client::LoginPhase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_TICK_OFFSET))(this, a1);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_ENTER_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_LEAVE_OFFSET))(this, a1);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* StartServerLogin()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_STARTSERVERLOGIN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _StartLogin()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE__STARTLOGIN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* CheckUpdateIFix()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_CHECKUPDATEIFIX_OFFSET))(this);
		}

		::System::Void _OnException(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE__ONEXCEPTION_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _CheckServerState(::Class_1_718B8238EA10D3FF* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_718B8238EA10D3FF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE__CHECKSERVERSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _ServerSelectComplete()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE__SERVERSELECTCOMPLETE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ReportLocalAssetInfo()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE__REPORTLOCALASSETINFO_OFFSET))(this);
		}
	};
}
