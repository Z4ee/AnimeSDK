#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/UGCProtocolManager_AgreementStatus.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Diagnostics { class Stopwatch; }

#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_CHECKCACHESTATUS_OFFSET UNITYSDK_OFFSET(0x1B92A8B0)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_CHECKIFSHOWNEEDED_OFFSET UNITYSDK_OFFSET(0x1B929F00)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1B92A930)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_ONRESULTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B92A530)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_OPENAGREEMENTURL_OFFSET UNITYSDK_OFFSET(0x1B92AD70)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_REQUESTAGREEMENTAPPROVE_OFFSET UNITYSDK_OFFSET(0x1B92B370)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_REQUESTAGREEMENTSTATUS_OFFSET UNITYSDK_OFFSET(0x1B92A970)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_SETROLE_OFFSET UNITYSDK_OFFSET(0x1B929CF0)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_SETTOKEN_OFFSET UNITYSDK_OFFSET(0x1B929EF0)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_SHOWAGREEMENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1B92AB40)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B92B600)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B92B560)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER__SHOWAGREEMENTDIALOG_B__22_0_OFFSET UNITYSDK_OFFSET(0x1B92B6E0)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER__SHOWAGREEMENTDIALOG_B__22_1_OFFSET UNITYSDK_OFFSET(0x1B92B6F0)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER__SHOWAGREEMENTDIALOG_B__22_2_OFFSET UNITYSDK_OFFSET(0x1B92B730)
#define MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER__SHOWAGREEMENTDIALOG_B__22_3_OFFSET UNITYSDK_OFFSET(0x1B92B790)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int UGCProtocolManager_TypeDefinitionIndex = 8896;

	class UGCProtocolManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::UGCProtocolManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::UGCProtocolManager**)Il2CppClass::FromTypeDefinitionIndex(UGCProtocolManager_TypeDefinitionIndex)->GetStaticField(0xBC20);
		}
		// static const ::System::String* AGREEMENT_STATUS_PATH; // 0x0
		// static const ::System::String* AGREEMENT_APPROVE_PATH; // 0x0
		// static const ::System::String* HEADER_UGC_UID; // 0x0
		// static const ::System::String* HEADER_UGC_REGION; // 0x0
		// static const ::System::String* HEADER_UGC_TOKEN; // 0x0
		::System::Diagnostics::Stopwatch* callbackStopwatch; // 0x10
		::System::Diagnostics::Stopwatch* requestStopwatch; // 0x18
		::System::String* agreementDomain; // 0x20
		::System::String* ugcToken; // 0x28
		::System::String* roleId; // 0x30
		::System::String* serverId; // 0x38
		::System::Action_1<::System::String*>* agreementCallback; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Headers; // 0x48
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

		::System::Void SetToken(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_SETTOKEN_OFFSET))(this, a1);
		}

		::System::Void CheckIfShowNeeded(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_CHECKIFSHOWNEEDED_OFFSET))(this, a1, a2);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_CLOSE_OFFSET))(this);
		}

		::System::Void CheckCacheStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_CHECKCACHESTATUS_OFFSET))(this);
		}

		::System::Void OnResultCallback(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::JSONNode* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_ONRESULTCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowAgreementDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_SHOWAGREEMENTDIALOG_OFFSET))(this);
		}

		::System::Void OpenAgreementUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UGCPROTOCOLMANAGER_OPENAGREEMENTURL_OFFSET))(this, a1);
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
