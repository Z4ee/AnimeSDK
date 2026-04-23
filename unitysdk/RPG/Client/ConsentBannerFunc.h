#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }

#define RPG_CLIENT_CONSENTBANNERFUNC_GET_ISSHOWEDIT_OFFSET UNITYSDK_OFFSET(0xA0D28E0)
#define RPG_CLIENT_CONSENTBANNERFUNC_INIT_OFFSET UNITYSDK_OFFSET(0xA0D2210)
#define RPG_CLIENT_CONSENTBANNERFUNC_SET_ISSHOWEDIT_OFFSET UNITYSDK_OFFSET(0xA0D28F0)
#define RPG_CLIENT_CONSENTBANNERFUNC_SHOWMANAGEPREFERENCES_OFFSET UNITYSDK_OFFSET(0xA0D2290)
#define RPG_CLIENT_CONSENTBANNERFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0xA0D2900)
#define RPG_CLIENT_CONSENTBANNERFUNC__INITCONSENTBANNER_OFFSET UNITYSDK_OFFSET(0xA0D22D0)
#define RPG_CLIENT_CONSENTBANNERFUNC__ONSHOWMANAGEPREFERENCESRESULT_OFFSET UNITYSDK_OFFSET(0xA0D2830)
#define RPG_CLIENT_CONSENTBANNERFUNC__ONSHOWPRIVACYBANNERRESULT_OFFSET UNITYSDK_OFFSET(0xA0D25A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ConsentBannerFunc_TypeDefinitionIndex = 56323;

	class ConsentBannerFunc : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _MaxInitCount = 0x3; // 0x0
		::RPG::Client::Promises::Promise* _InitPromise; // 0x10
		::System::UInt32 _InitCount; // 0x18
		::System::Boolean _IsShowEdit_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONSENTBANNERFUNC__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* Init()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONSENTBANNERFUNC_INIT_OFFSET))(this);
		}

		::System::Void ShowManagePreferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONSENTBANNERFUNC_SHOWMANAGEPREFERENCES_OFFSET))(this);
		}

		::System::Void _InitConsentBanner()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONSENTBANNERFUNC__INITCONSENTBANNER_OFFSET))(this);
		}

		::System::Void _OnShowPrivacyBannerResult(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONSENTBANNERFUNC__ONSHOWPRIVACYBANNERRESULT_OFFSET))(this, responseString);
		}

		::System::Void _OnShowManagePreferencesResult(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONSENTBANNERFUNC__ONSHOWMANAGEPREFERENCESRESULT_OFFSET))(this, responseString);
		}

		::System::Boolean get_IsShowEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONSENTBANNERFUNC_GET_ISSHOWEDIT_OFFSET))(this);
		}

		::System::Void set_IsShowEdit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONSENTBANNERFUNC_SET_ISSHOWEDIT_OFFSET))(this, value);
		}
	};
}
