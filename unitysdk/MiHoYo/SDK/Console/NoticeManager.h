#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_CHECKBEFORELOGINNOTICE_OFFSET UNITYSDK_OFFSET(0x182474E0)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_CHECKLOCALCACHENOTICE_OFFSET UNITYSDK_OFFSET(0x1824ED50)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_CHECKNEEDSHOW_OFFSET UNITYSDK_OFFSET(0x1824DF70)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_CHECKPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x18247F80)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_CLEARBEFORELOGINNOTICEDATA_OFFSET UNITYSDK_OFFSET(0x1824DE90)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_GETBEFORELOGINPOPNOTICEURL_OFFSET UNITYSDK_OFFSET(0x1824D7D0)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_GETCOMBOINFOCOOKIE_OFFSET UNITYSDK_OFFSET(0x1824C820)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_GETURLSTRING_OFFSET UNITYSDK_OFFSET(0x1824BDC0)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_GET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x1824BCF0)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_ISOPENWITHCROSSLOGIN_OFFSET UNITYSDK_OFFSET(0x1824CC10)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_LOADBEFORELOGINNOTICEDATA_OFFSET UNITYSDK_OFFSET(0x1824D460)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_ONGETBEFORELOGINNOTICE_OFFSET UNITYSDK_OFFSET(0x1824EF50)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_ONGETCHECKPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x1824CD60)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_PARSEBEFORELOGINNOTICE_OFFSET UNITYSDK_OFFSET(0x1824E690)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_REQUESTCROSSLOGIN_OFFSET UNITYSDK_OFFSET(0x18246680)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_REQUESTREDPOINTTEXT_OFFSET UNITYSDK_OFFSET(0x1824BD10)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_SAVEBEFORELOGINNOTICEDATA_OFFSET UNITYSDK_OFFSET(0x1824D5E0)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_SET_COUNTRY_OFFSET UNITYSDK_OFFSET(0x1824BD00)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_SHOWBEFORELOGINNOTICE_OFFSET UNITYSDK_OFFSET(0x18246AB0)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_SHOWNOTICE_OFFSET UNITYSDK_OFFSET(0x18246EB0)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER_SHOWPOPNOTICE_OFFSET UNITYSDK_OFFSET(0x18247320)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1824F360)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1824F310)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER__SHOWBEFORELOGINNOTICE_B__14_0_OFFSET UNITYSDK_OFFSET(0x1824F450)
#define MIHOYO_SDK_CONSOLE_NOTICEMANAGER__SHOWNOTICE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1824F3D0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int NoticeManager_TypeDefinitionIndex = 8640;

	class NoticeManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::NoticeManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::NoticeManager**)Il2CppClass::FromTypeDefinitionIndex(NoticeManager_TypeDefinitionIndex)->GetStaticField(0xF2A0);
		}
		static ::System::Boolean* StaticGet_isShowPopNotice()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NoticeManager_TypeDefinitionIndex)->GetStaticField(0x4D70);
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

		::System::Void set_country(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_SET_COUNTRY_OFFSET))(this, a1);
		}

		::System::String* ShowPopNotice()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_SHOWPOPNOTICE_OFFSET))(this);
		}

		::System::Void RequestRedPointText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_REQUESTREDPOINTTEXT_OFFSET))(this);
		}

		::System::Void ShowNotice(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_SHOWNOTICE_OFFSET))(this, a1);
		}

		::System::Void CheckPopNotice(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_CHECKPOPNOTICE_OFFSET))(this, a1);
		}

		::System::Void OnGetCheckPopNotice(::MiHoYo::SDK::NetworkResponseModel* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_ONGETCHECKPOPNOTICE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GetURLString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_GETURLSTRING_OFFSET))(this, a1, a2);
		}

		::System::Void ShowBeforeLoginNotice(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_SHOWBEFORELOGINNOTICE_OFFSET))(this, a1);
		}

		::System::String* GetBeforeLoginPopNoticeUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_GETBEFORELOGINPOPNOTICEURL_OFFSET))(this);
		}

		::System::Void ClearBeforeLoginNoticeData(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_CLEARBEFORELOGINNOTICEDATA_OFFSET))(this, a1);
		}

		::System::Boolean SaveBeforeLoginNoticeData(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_SAVEBEFORELOGINNOTICEDATA_OFFSET))(this, a1, a2);
		}

		::System::String* LoadBeforeLoginNoticeData(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_LOADBEFORELOGINNOTICEDATA_OFFSET))(this, a1);
		}

		::System::Boolean CheckNeedShow(::MiHoYo::SDK::JSONArray* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_CHECKNEEDSHOW_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONArray* ParseBeforeLoginNotice(::MiHoYo::SDK::JSONArray* a1)
		{
			return ((::MiHoYo::SDK::JSONArray*(*)(::PVOID, ::MiHoYo::SDK::JSONArray*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_PARSEBEFORELOGINNOTICE_OFFSET))(this, a1);
		}

		::System::Void CheckBeforeLoginNotice()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_CHECKBEFORELOGINNOTICE_OFFSET))(this);
		}

		::System::Boolean CheckLocalCacheNotice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_CHECKLOCALCACHENOTICE_OFFSET))(this);
		}

		::System::Void OnGetBeforeLoginNotice(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_ONGETBEFORELOGINNOTICE_OFFSET))(this, a1);
		}

		::System::Void RequestCrossLogin(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_NOTICEMANAGER_REQUESTCROSSLOGIN_OFFSET))(this, a1, a2);
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
