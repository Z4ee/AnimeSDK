#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginPhase.h"

class Class_1_6B41D5D37BA0605F;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Exception; }

#define RPG_CLIENT_SDKLOGINPHASE_AFTERINITSDK_OFFSET UNITYSDK_OFFSET(0x19F24060)
#define RPG_CLIENT_SDKLOGINPHASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19F22FA0)
#define RPG_CLIENT_SDKLOGINPHASE_ENTER_OFFSET UNITYSDK_OFFSET(0x19F23050)
#define RPG_CLIENT_SDKLOGINPHASE_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x19F23EA0)
#define RPG_CLIENT_SDKLOGINPHASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19F23B70)
#define RPG_CLIENT_SDKLOGINPHASE_LEAVE_OFFSET UNITYSDK_OFFSET(0x19F23E20)
#define RPG_CLIENT_SDKLOGINPHASE_PRELOADWEBVIEW_OFFSET UNITYSDK_OFFSET(0x19F23BD0)
#define RPG_CLIENT_SDKLOGINPHASE_SETSDKINTERFACE_OFFSET UNITYSDK_OFFSET(0x19F24480)
#define RPG_CLIENT_SDKLOGINPHASE_TICK_OFFSET UNITYSDK_OFFSET(0x19F22FF0)
#define RPG_CLIENT_SDKLOGINPHASE__CHECKAGREEMENT_OFFSET UNITYSDK_OFFSET(0x19F24920)
#define RPG_CLIENT_SDKLOGINPHASE__CHECKCONSENTBANNER_OFFSET UNITYSDK_OFFSET(0x19F24D40)
#define RPG_CLIENT_SDKLOGINPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F22EF0)
#define RPG_CLIENT_SDKLOGINPHASE__FORCEUPDATECHECK_OFFSET UNITYSDK_OFFSET(0x19F24190)
#define RPG_CLIENT_SDKLOGINPHASE__INITSDK_OFFSET UNITYSDK_OFFSET(0x19F23EF0)
#define RPG_CLIENT_SDKLOGINPHASE__ONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x19F24E30)
#define RPG_CLIENT_SDKLOGINPHASE__ONUSERAGREEMENTRESULT_OFFSET UNITYSDK_OFFSET(0x19F24700)
#define RPG_CLIENT_SDKLOGINPHASE__TRYGETUSERAGREEMENTINFO_OFFSET UNITYSDK_OFFSET(0x19F23710)

namespace RPG::Client
{
	inline static constexpr unsigned int SDKLoginPhase_TypeDefinitionIndex = 58425;

	class SDKLoginPhase : public ::RPG::Client::LoginPhase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE_TICK_OFFSET))(this, a1);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE_ENTER_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void PreLoadWebView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE_PRELOADWEBVIEW_OFFSET))(this);
		}

		::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE_LEAVE_OFFSET))(this, a1);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _InitSDk()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE__INITSDK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* AfterInitSDk()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE_AFTERINITSDK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ForceUpdateCheck()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE__FORCEUPDATECHECK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* SetSDKInterface()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE_SETSDKINTERFACE_OFFSET))(this);
		}

		::System::Void _OnUserAgreementResult(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE__ONUSERAGREEMENTRESULT_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Int32>* _TryGetUserAgreementInfo()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE__TRYGETUSERAGREEMENTINFO_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _CheckAgreement(::System::Int32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE__CHECKAGREEMENT_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _CheckConsentBanner()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE__CHECKCONSENTBANNER_OFFSET))(this);
		}

		::System::Void _OnException(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE__ONEXCEPTION_OFFSET))(this, a1);
		}
	};
}
