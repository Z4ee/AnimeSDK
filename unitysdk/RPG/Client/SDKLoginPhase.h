#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginPhase.h"

class Class_1_6B41D5D37BA0605F;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Exception; }

#define RPG_CLIENT_SDKLOGINPHASE_AFTERINITSDK_OFFSET UNITYSDK_OFFSET(0xA40FC90)
#define RPG_CLIENT_SDKLOGINPHASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA40ECF0)
#define RPG_CLIENT_SDKLOGINPHASE_ENTER_OFFSET UNITYSDK_OFFSET(0xA40EDA0)
#define RPG_CLIENT_SDKLOGINPHASE_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xA40FAE0)
#define RPG_CLIENT_SDKLOGINPHASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA40F7B0)
#define RPG_CLIENT_SDKLOGINPHASE_LEAVE_OFFSET UNITYSDK_OFFSET(0xA40FA60)
#define RPG_CLIENT_SDKLOGINPHASE_PRELOADWEBVIEW_OFFSET UNITYSDK_OFFSET(0xA40F810)
#define RPG_CLIENT_SDKLOGINPHASE_SETSDKINTERFACE_OFFSET UNITYSDK_OFFSET(0xA4100B0)
#define RPG_CLIENT_SDKLOGINPHASE_TICK_OFFSET UNITYSDK_OFFSET(0xA40ED40)
#define RPG_CLIENT_SDKLOGINPHASE__CHECKAGREEMENT_OFFSET UNITYSDK_OFFSET(0xA410560)
#define RPG_CLIENT_SDKLOGINPHASE__CHECKCONSENTBANNER_OFFSET UNITYSDK_OFFSET(0xA410990)
#define RPG_CLIENT_SDKLOGINPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0xA40EC40)
#define RPG_CLIENT_SDKLOGINPHASE__FORCEUPDATECHECK_OFFSET UNITYSDK_OFFSET(0xA40FDC0)
#define RPG_CLIENT_SDKLOGINPHASE__INITSDK_OFFSET UNITYSDK_OFFSET(0xA40FB30)
#define RPG_CLIENT_SDKLOGINPHASE__ONEXCEPTION_OFFSET UNITYSDK_OFFSET(0xA410A80)
#define RPG_CLIENT_SDKLOGINPHASE__ONUSERAGREEMENTRESULT_OFFSET UNITYSDK_OFFSET(0xA410330)
#define RPG_CLIENT_SDKLOGINPHASE__TRYGETUSERAGREEMENTINFO_OFFSET UNITYSDK_OFFSET(0xA40F340)

namespace RPG::Client
{
	inline static constexpr unsigned int SDKLoginPhase_TypeDefinitionIndex = 49583;

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

		::System::Void Tick(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE_TICK_OFFSET))(this, time);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE_ENTER_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void PreLoadWebView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE_PRELOADWEBVIEW_OFFSET))(this);
		}

		::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* pNextPhase)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE_LEAVE_OFFSET))(this, pNextPhase);
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

		::System::Void _OnUserAgreementResult(::System::Int32 result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE__ONUSERAGREEMENTRESULT_OFFSET))(this, result);
		}

		::RPG::Client::Promises::IPromise_1<::System::Int32>* _TryGetUserAgreementInfo()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE__TRYGETUSERAGREEMENTINFO_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _CheckAgreement(::System::Int32 result)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE__CHECKAGREEMENT_OFFSET))(this, result);
		}

		::RPG::Client::Promises::IPromise* _CheckConsentBanner()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE__CHECKCONSENTBANNER_OFFSET))(this);
		}

		::System::Void _OnException(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLOGINPHASE__ONEXCEPTION_OFFSET))(this, ex);
		}
	};
}
