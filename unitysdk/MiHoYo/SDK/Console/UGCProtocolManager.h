#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/UGCProtocolManager_AgreementStatus.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Diagnostics { class Stopwatch; }

#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_CHECKCACHESTATUS_OFFSET UNITYSDK_OFFSET(0x15EB74D0)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_CHECKIFSHOWNEEDED_OFFSET UNITYSDK_OFFSET(0x15EB6AA0)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_CLOSE_OFFSET UNITYSDK_OFFSET(0x15EB7550)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_ONRESULTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15EB7150)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_OPENAGREEMENTURL_OFFSET UNITYSDK_OFFSET(0x15EB7920)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_REQUESTAGREEMENTAPPROVE_OFFSET UNITYSDK_OFFSET(0x15EB7EA0)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_REQUESTAGREEMENTSTATUS_OFFSET UNITYSDK_OFFSET(0x15EB7590)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_SETROLE_OFFSET UNITYSDK_OFFSET(0x15EB6880)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_SETTOKEN_OFFSET UNITYSDK_OFFSET(0x15EB6A90)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_SHOWAGREEMENTDIALOG_OFFSET UNITYSDK_OFFSET(0x15EB7740)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EB8120)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15EB8080)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER__SHOWAGREEMENTDIALOG_B__22_0_OFFSET UNITYSDK_OFFSET(0x15EB8200)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER__SHOWAGREEMENTDIALOG_B__22_1_OFFSET UNITYSDK_OFFSET(0x15EB8210)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER__SHOWAGREEMENTDIALOG_B__22_2_OFFSET UNITYSDK_OFFSET(0x15EB8250)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER__SHOWAGREEMENTDIALOG_B__22_3_OFFSET UNITYSDK_OFFSET(0x15EB82B0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int UGCProtocolManager_TypeDefinitionIndex = 7573;

	class UGCProtocolManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::UGCProtocolManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::UGCProtocolManager**)Il2CppClass::FromTypeDefinitionIndex(UGCProtocolManager_TypeDefinitionIndex)->GetStaticField(0x11D80);
		}
		// static const ::System::String* AGREEMENT_STATUS_PATH; // 0x0
		// static const ::System::String* AGREEMENT_APPROVE_PATH; // 0x0
		// static const ::System::String* HEADER_UGC_UID; // 0x0
		// static const ::System::String* HEADER_UGC_REGION; // 0x0
		// static const ::System::String* HEADER_UGC_TOKEN; // 0x0
		::System::String* roleId; // 0x10
		::System::Action_1<::System::String*>* agreementCallback; // 0x18
		::System::Diagnostics::Stopwatch* callbackStopwatch; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Headers; // 0x28
		::System::Diagnostics::Stopwatch* requestStopwatch; // 0x30
		::System::String* serverId; // 0x38
		::System::String* ugcToken; // 0x40
		::System::String* agreementDomain; // 0x48
		::MiHoYo::SDK::Console::UGCProtocolManager_AgreementStatus status; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER__CCTOR_OFFSET))();
		}

		::System::Void SetRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_SETROLE_OFFSET))(this);
		}

		::System::Void SetToken(::System::String* token)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_SETTOKEN_OFFSET))(this, token);
		}

		::System::Void CheckIfShowNeeded(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_CHECKIFSHOWNEEDED_OFFSET))(this, jsonString, callback);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_CLOSE_OFFSET))(this);
		}

		::System::Void CheckCacheStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_CHECKCACHESTATUS_OFFSET))(this);
		}

		::System::Void OnResultCallback(::System::Int32 ret, ::System::String* msg, ::MiHoYo::SDK::JSONNode* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_ONRESULTCALLBACK_OFFSET))(this, ret, msg, data);
		}

		::System::Void ShowAgreementDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_SHOWAGREEMENTDIALOG_OFFSET))(this);
		}

		::System::Void OpenAgreementUrl(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_OPENAGREEMENTURL_OFFSET))(this, url);
		}

		::System::Void RequestAgreementStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_REQUESTAGREEMENTSTATUS_OFFSET))(this);
		}

		::System::Void RequestAgreementApprove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_REQUESTAGREEMENTAPPROVE_OFFSET))(this);
		}

		::System::Void _ShowAgreementDialog_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER__SHOWAGREEMENTDIALOG_B__22_0_OFFSET))(this);
		}

		::System::Void _ShowAgreementDialog_b__22_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER__SHOWAGREEMENTDIALOG_B__22_1_OFFSET))(this);
		}

		::System::Void _ShowAgreementDialog_b__22_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER__SHOWAGREEMENTDIALOG_B__22_2_OFFSET))(this);
		}

		::System::Void _ShowAgreementDialog_b__22_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER__SHOWAGREEMENTDIALOG_B__22_3_OFFSET))(this);
		}
	};
}
