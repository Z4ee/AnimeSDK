#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }

#define RPG_CLIENT_CONSENTBANNERFUNC_GET_ISSHOWEDIT_OFFSET UNITYSDK_OFFSET(0xB7121E0)
#define RPG_CLIENT_CONSENTBANNERFUNC_INIT_OFFSET UNITYSDK_OFFSET(0xB711B00)
#define RPG_CLIENT_CONSENTBANNERFUNC_SET_ISSHOWEDIT_OFFSET UNITYSDK_OFFSET(0xB7121F0)
#define RPG_CLIENT_CONSENTBANNERFUNC_SHOWMANAGEPREFERENCES_OFFSET UNITYSDK_OFFSET(0xB711B80)
#define RPG_CLIENT_CONSENTBANNERFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0xB712200)
#define RPG_CLIENT_CONSENTBANNERFUNC__INITCONSENTBANNER_OFFSET UNITYSDK_OFFSET(0xB711BC0)
#define RPG_CLIENT_CONSENTBANNERFUNC__ONSHOWMANAGEPREFERENCESRESULT_OFFSET UNITYSDK_OFFSET(0xB712130)
#define RPG_CLIENT_CONSENTBANNERFUNC__ONSHOWPRIVACYBANNERRESULT_OFFSET UNITYSDK_OFFSET(0xB711EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ConsentBannerFunc_TypeDefinitionIndex = 57085;

	class ConsentBannerFunc : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _MaxInitCount = 0x3; // 0x0
		::RPG::Client::Promises::Promise* _InitPromise; // 0x10
		::System::Boolean _IsShowEdit_k__BackingField; // 0x18
		::System::UInt32 _InitCount; // 0x1C

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

		::System::Void _OnShowPrivacyBannerResult(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONSENTBANNERFUNC__ONSHOWPRIVACYBANNERRESULT_OFFSET))(this, a1);
		}

		::System::Void _OnShowManagePreferencesResult(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONSENTBANNERFUNC__ONSHOWMANAGEPREFERENCESRESULT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONSENTBANNERFUNC_GET_ISSHOWEDIT_OFFSET))(this);
		}

		::System::Void set_IsShowEdit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONSENTBANNERFUNC_SET_ISSHOWEDIT_OFFSET))(this, a1);
		}
	};
}
