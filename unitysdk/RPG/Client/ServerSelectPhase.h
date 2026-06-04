#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginPhase.h"

class Class_1_6B41D5D37BA0605F;
class Class_1_718B8238EA10D3FF;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Exception; }

#define RPG_CLIENT_SERVERSELECTPHASE_CHECKUPDATEIFIX_OFFSET UNITYSDK_OFFSET(0xC8B7120)
#define RPG_CLIENT_SERVERSELECTPHASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8B6A10)
#define RPG_CLIENT_SERVERSELECTPHASE_ENTER_OFFSET UNITYSDK_OFFSET(0xC8B6AC0)
#define RPG_CLIENT_SERVERSELECTPHASE_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xC8B7070)
#define RPG_CLIENT_SERVERSELECTPHASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC8B6F90)
#define RPG_CLIENT_SERVERSELECTPHASE_LEAVE_OFFSET UNITYSDK_OFFSET(0xC8B6FF0)
#define RPG_CLIENT_SERVERSELECTPHASE_STARTSERVERLOGIN_OFFSET UNITYSDK_OFFSET(0xC8B6D00)
#define RPG_CLIENT_SERVERSELECTPHASE_TICK_OFFSET UNITYSDK_OFFSET(0xC8B6A60)
#define RPG_CLIENT_SERVERSELECTPHASE__CHECKSERVERSTATE_OFFSET UNITYSDK_OFFSET(0xC8B7500)
#define RPG_CLIENT_SERVERSELECTPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0xC8B6990)
#define RPG_CLIENT_SERVERSELECTPHASE__ONEXCEPTION_OFFSET UNITYSDK_OFFSET(0xC8B7260)
#define RPG_CLIENT_SERVERSELECTPHASE__REPORTLOCALASSETINFO_OFFSET UNITYSDK_OFFSET(0xC8B7830)
#define RPG_CLIENT_SERVERSELECTPHASE__SERVERSELECTCOMPLETE_OFFSET UNITYSDK_OFFSET(0xC8B7750)
#define RPG_CLIENT_SERVERSELECTPHASE__STARTLOGIN_OFFSET UNITYSDK_OFFSET(0xC8B70C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ServerSelectPhase_TypeDefinitionIndex = 57170;

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
