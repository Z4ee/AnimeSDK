#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_CHECKBEFORELOGINNOTICE_OFFSET UNITYSDK_OFFSET(0x15E47A30)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_CHECKLOCALCACHENOTICE_OFFSET UNITYSDK_OFFSET(0x15E50F90)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_CHECKNEEDSHOW_OFFSET UNITYSDK_OFFSET(0x15E500E0)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_CHECKPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x15E484A0)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_CLEARBEFORELOGINNOTICEDATA_OFFSET UNITYSDK_OFFSET(0x15E50000)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_GETBEFORELOGINPOPNOTICEURL_OFFSET UNITYSDK_OFFSET(0x15E4F870)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_GETCOMBOINFOCOOKIE_OFFSET UNITYSDK_OFFSET(0x15E4E670)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_GETURLSTRING_OFFSET UNITYSDK_OFFSET(0x15E4DA30)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_GET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x15E4D960)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_ISOPENWITHCROSSLOGIN_OFFSET UNITYSDK_OFFSET(0x15E4EAE0)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_LOADBEFORELOGINNOTICEDATA_OFFSET UNITYSDK_OFFSET(0x15E4F500)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_ONGETBEFORELOGINNOTICE_OFFSET UNITYSDK_OFFSET(0x15E51200)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_ONGETCHECKPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x15E4EC30)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_PARSEBEFORELOGINNOTICE_OFFSET UNITYSDK_OFFSET(0x15E508A0)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_REQUESTCROSSLOGIN_OFFSET UNITYSDK_OFFSET(0x15E46BD0)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_REQUESTREDPOINTTEXT_OFFSET UNITYSDK_OFFSET(0x15E4D980)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_SAVEBEFORELOGINNOTICEDATA_OFFSET UNITYSDK_OFFSET(0x15E4F680)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_SET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x15E4D970)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_SHOWBEFORELOGINNOTICE_OFFSET UNITYSDK_OFFSET(0x15E47050)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_SHOWNOTICE_OFFSET UNITYSDK_OFFSET(0x15E47480)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_SHOWPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x15E47870)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E51610)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E515C0)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER__SHOWBEFORELOGINNOTICE_B__14_0_OFFSET UNITYSDK_OFFSET(0x15E51700)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER__SHOWNOTICE_B__10_0_OFFSET UNITYSDK_OFFSET(0x15E51680)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int NoticeManager_TypeDefinitionIndex = 7596;

	class NoticeManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::NoticeManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::NoticeManager**)Il2CppClass::FromTypeDefinitionIndex(NoticeManager_TypeDefinitionIndex)->GetStaticField(0x11430);
		}
		static ::System::Boolean* StaticGet_isShowPopNotice()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NoticeManager_TypeDefinitionIndex)->GetStaticField(0x53F0);
		}
		::System::String* beforeLoginNoticeKey; // 0x10
		::System::String* _country_k__BackingField; // 0x18
		::System::Boolean isFirstCheck; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER__CCTOR_OFFSET))();
		}

		::System::String* get_country()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_GET_COUNTRY_OFFSET))(this);
		}

		::System::Void set_country(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_SET_COUNTRY_OFFSET))(this, value);
		}

		::System::String* ShowPopNotice()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_SHOWPOPNOTICE_OFFSET))(this);
		}

		::System::Void RequestRedPointText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_REQUESTREDPOINTTEXT_OFFSET))(this);
		}

		::System::Void ShowNotice(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_SHOWNOTICE_OFFSET))(this, jsonString);
		}

		::System::Void CheckPopNotice(::System::Boolean isParseTextOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_CHECKPOPNOTICE_OFFSET))(this, isParseTextOnly);
		}

		::System::Void OnGetCheckPopNotice(::MiHoYo::SDK::NetworkResponseModel* response, ::System::Boolean isCheckTextOnly, ::System::String* strRequestLang)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_ONGETCHECKPOPNOTICE_OFFSET))(this, response, isCheckTextOnly, strRequestLang);
		}

		::System::String* GetURLString(::System::String* url, ::System::String* jsonString)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_GETURLSTRING_OFFSET))(this, url, jsonString);
		}

		::System::Void ShowBeforeLoginNotice(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_SHOWBEFORELOGINNOTICE_OFFSET))(this, jsonString);
		}

		::System::String* GetBeforeLoginPopNoticeUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_GETBEFORELOGINPOPNOTICEURL_OFFSET))(this);
		}

		::System::Void ClearBeforeLoginNoticeData(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_CLEARBEFORELOGINNOTICEDATA_OFFSET))(this, key);
		}

		::System::Boolean SaveBeforeLoginNoticeData(::System::String* key, ::System::String* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_SAVEBEFORELOGINNOTICEDATA_OFFSET))(this, key, data);
		}

		::System::String* LoadBeforeLoginNoticeData(::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_LOADBEFORELOGINNOTICEDATA_OFFSET))(this, key);
		}

		::System::Boolean CheckNeedShow(::MiHoYo::SDK::JSONArray* newNotice)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_CHECKNEEDSHOW_OFFSET))(this, newNotice);
		}

		::MiHoYo::SDK::JSONArray* ParseBeforeLoginNotice(::MiHoYo::SDK::JSONArray* data)
		{
			return ((::MiHoYo::SDK::JSONArray*(*)(::PVOID, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_PARSEBEFORELOGINNOTICE_OFFSET))(this, data);
		}

		::System::Void CheckBeforeLoginNotice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_CHECKBEFORELOGINNOTICE_OFFSET))(this);
		}

		::System::Boolean CheckLocalCacheNotice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_CHECKLOCALCACHENOTICE_OFFSET))(this);
		}

		::System::Void OnGetBeforeLoginNotice(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_ONGETBEFORELOGINNOTICE_OFFSET))(this, response);
		}

		::System::Void RequestCrossLogin(::System::String* dest, ::System::Action* webCloseCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_REQUESTCROSSLOGIN_OFFSET))(this, dest, webCloseCallback);
		}

		::System::String* GetComboInfoCookie()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_GETCOMBOINFOCOOKIE_OFFSET))(this);
		}

		::System::Boolean IsOpenWithCrossLogin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_ISOPENWITHCROSSLOGIN_OFFSET))(this);
		}

		::System::Void _ShowNotice_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER__SHOWNOTICE_B__10_0_OFFSET))(this);
		}

		::System::Void _ShowBeforeLoginNotice_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER__SHOWBEFORELOGINNOTICE_B__14_0_OFFSET))(this);
		}
	};
}
