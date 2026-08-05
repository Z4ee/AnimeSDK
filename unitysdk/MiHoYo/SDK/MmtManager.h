#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MmtManager_GeetestModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MMTMANAGER_CREATEMMT_OFFSET UNITYSDK_OFFSET(0x1C7C7B00)
#define MIHOYO_SDK_MMTMANAGER_GETMMTHEADER_OFFSET UNITYSDK_OFFSET(0x1C7C7410)
#define MIHOYO_SDK_MMTMANAGER_GETMMTRESULT_OFFSET UNITYSDK_OFFSET(0x1C7C6EF0)
#define MIHOYO_SDK_MMTMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C7C6F60)
#define MIHOYO_SDK_MMTMANAGER_ONMMTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C7C82A0)
#define MIHOYO_SDK_MMTMANAGER_ONPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x1C7C7100)
#define MIHOYO_SDK_MMTMANAGER_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0x1C7C71A0)
#define MIHOYO_SDK_MMTMANAGER_REQUESTCHECK_OFFSET UNITYSDK_OFFSET(0x1C7C7BF0)
#define MIHOYO_SDK_MMTMANAGER_SHOWMMTWEB_OFFSET UNITYSDK_OFFSET(0x1C7C6B90)
#define MIHOYO_SDK_MMTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7C8310)
#define MIHOYO_SDK_MMTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C8300)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MmtManager_TypeDefinitionIndex = 20144;

	class MmtManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MmtManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::MmtManager**)Il2CppClass::FromTypeDefinitionIndex(MmtManager_TypeDefinitionIndex)->GetStaticField(0x9E30);
		}
		// static const ::System::String* MMT_ID; // 0x0
		// static const ::System::String* GEETEST_C; // 0x0
		// static const ::System::String* GEETEST_S; // 0x0
		// static const ::System::String* GEETEST_V; // 0x0
		// static const ::System::String* HEADER_RISKY; // 0x0
		::System::Action_2<::System::Int32, ::System::String*>* OnGetMmtResult; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER__CCTOR_OFFSET))();
		}

		::System::Void ShowMmtWeb(::MiHoYo::SDK::MmtManager_GeetestModel* parameters)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MmtManager_GeetestModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER_SHOWMMTWEB_OFFSET))(this, parameters);
		}

		::System::Void GetMmtResult(::System::Int32 ret, ::System::String* mmt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER_GETMMTRESULT_OFFSET))(this, ret, mmt);
		}

		::System::Void OnGetUniWebViewMessage(::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, message);
		}

		::System::Void OnPageClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER_ONPAGECLOSE_OFFSET))(this);
		}

		::System::Void OnPageError(::System::String* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER_ONPAGEERROR_OFFSET))(this, result);
		}

		::System::String* GetMmtHeader(::System::String* mmt)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER_GETMMTHEADER_OFFSET))(this, mmt);
		}

		::System::Void CreateMmt(::System::String* actionType, ::System::String* url, ::System::String* email, ::System::String* mobile, ::System::String* username, ::System::Action_2<::System::Int32, ::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER_CREATEMMT_OFFSET))(this, actionType, url, email, mobile, username, callback);
		}

		::System::Void OnMmtCallback(::System::Action_2<::System::Int32, ::System::String*>* callback, ::System::Int32 code, ::System::String* mmt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER_ONMMTCALLBACK_OFFSET))(this, callback, code, mmt);
		}

		::System::Void RequestCheck(::System::String* actionType, ::System::String* url, ::System::String* email, ::System::String* mobile, ::System::String* username, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MMTMANAGER_REQUESTCHECK_OFFSET))(this, actionType, url, email, mobile, username, callback);
		}
	};
}
