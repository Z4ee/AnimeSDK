#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_BUILDURL_OFFSET UNITYSDK_OFFSET(0x1C0F9030)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_CHECKAGEGATEERROR_OFFSET UNITYSDK_OFFSET(0x1C0F5DB0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_CLEARPAYLOAD_OFFSET UNITYSDK_OFFSET(0x1C0F8FD0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_DELETEACCOUNTDATA_OFFSET UNITYSDK_OFFSET(0x1C0F9540)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_DISABLEAGEGATE_OFFSET UNITYSDK_OFFSET(0x1C0F8D70)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_DISABLEBRAGEGATE_OFFSET UNITYSDK_OFFSET(0x1C0F8EA0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_ENABLEAGEGATE_OFFSET UNITYSDK_OFFSET(0x1C0F8B10)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_ENABLEBRAGEGATE_OFFSET UNITYSDK_OFFSET(0x1C0F8C40)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GENERATECOLOREDTEXT_OFFSET UNITYSDK_OFFSET(0x1C0F9E40)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GETCOLOREDTEXT_OFFSET UNITYSDK_OFFSET(0x1C0F9CD0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GETREPORTBODY_OFFSET UNITYSDK_OFFSET(0x1C0F96E0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C0F5840)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GET_PARSESUCC_OFFSET UNITYSDK_OFFSET(0x1C0F8AD0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GET_TOKENLOGIN_OFFSET UNITYSDK_OFFSET(0x1C0F8AB0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_OPENAGEGATEWEBPAGE_OFFSET UNITYSDK_OFFSET(0x1C0F93A0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SETACCOUNTSUCCESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C0F5D90)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SETFAILCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C0F5DA0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SETSUCCESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C0F9EE0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C0F8B00)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SET_PARSESUCC_OFFSET UNITYSDK_OFFSET(0x1C0F8AE0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SET_TOKENLOGIN_OFFSET UNITYSDK_OFFSET(0x1C0F8AC0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SHOWAGEGATEDIALOG_OFFSET UNITYSDK_OFFSET(0x1C0F5FA0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SHOWAGEGATEERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x1C0F5DC0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SHOWAGEGATEVERIFICATIONDIALOG_OFFSET UNITYSDK_OFFSET(0x1C0F9830)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_STARTTHIRDPARTREGISTERFLOW_OFFSET UNITYSDK_OFFSET(0x1C0F9AB0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_TRYLOADTICKET_OFFSET UNITYSDK_OFFSET(0x1C0F9B10)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_TRYPARSEPAYLOAD_OFFSET UNITYSDK_OFFSET(0x1C0F58B0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_TRYUPDATETICKET_OFFSET UNITYSDK_OFFSET(0x1C0F9BC0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0F8AF0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__SHOWAGEGATEERRORDIALOG_B__34_0_OFFSET UNITYSDK_OFFSET(0x1C0F9EF0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__SHOWAGEGATEVERIFICATIONDIALOG_B__36_0_OFFSET UNITYSDK_OFFSET(0x1C0F9FA0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__SHOWAGEGATEVERIFICATIONDIALOG_B__36_1_OFFSET UNITYSDK_OFFSET(0x1C0FA050)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__STARTTHIRDPARTREGISTERFLOW_B__45_0_OFFSET UNITYSDK_OFFSET(0x1C0FAEE0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYLOADTICKET_B__37_2_OFFSET UNITYSDK_OFFSET(0x1C0FA8A0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYLOADTICKET_B__37_4_OFFSET UNITYSDK_OFFSET(0x1C0FA800)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYLOADTICKET_G__CALLBACK_37_0_OFFSET UNITYSDK_OFFSET(0x1C0FA0F0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYLOADTICKET_G__CONFIRMCALLBACK_37_1_OFFSET UNITYSDK_OFFSET(0x1C0FA4B0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYUPDATETICKET_G__CALLBACK_38_0_OFFSET UNITYSDK_OFFSET(0x1C0FA950)

namespace MiHoYo::SDK::Windows::OS
{
	inline static constexpr unsigned int AgeGateManager_TypeDefinitionIndex = 20117;

	class AgeGateManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Windows::OS::AgeGateManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Windows::OS::AgeGateManager**)Il2CppClass::FromTypeDefinitionIndex(AgeGateManager_TypeDefinitionIndex)->GetStaticField(0xAD70);
		}
		// static const ::System::String* MODULE; // 0x0
		// static const ::System::String* AGE_GATE_PAYLOAD_KEY; // 0x0
		// static const ::System::String* AGE_GATE_TIME_KEY; // 0x0
		// static const ::System::String* AGE_GATE_TICKET; // 0x0
		::System::Action* successCallback; // 0x10
		::System::Action_1<::System::String*>* accountSuccessCallback; // 0x18
		::System::String* _ticket; // 0x20
		::System::Action* failCallback; // 0x28
		::System::String* _payload; // 0x30
		::System::Boolean ageGateEnable; // 0x38
		::System::Boolean _tokenLogin_k__BackingField; // 0x39
		::System::Int32 ageGateType; // 0x3C
		::System::Boolean timeExists; // 0x40
		::System::Boolean _ParseSucc_k__BackingField; // 0x41
		::System::Boolean brAgeGateEnable; // 0x42
		::System::Int64 _time; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_tokenLogin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GET_TOKENLOGIN_OFFSET))(this);
		}

		::System::Void set_tokenLogin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SET_TOKENLOGIN_OFFSET))(this, value);
		}

		::System::Boolean get_ParseSucc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GET_PARSESUCC_OFFSET))(this);
		}

		::System::Void set_ParseSucc(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SET_PARSESUCC_OFFSET))(this, value);
		}

		static ::MiHoYo::SDK::Windows::OS::AgeGateManager* get_Instance()
		{
			return ((::MiHoYo::SDK::Windows::OS::AgeGateManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::Windows::OS::AgeGateManager* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Windows::OS::AgeGateManager*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SET_INSTANCE_OFFSET))(value);
		}

		::System::Void EnableAgeGate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_ENABLEAGEGATE_OFFSET))(this);
		}

		::System::Void EnableBrAgeGate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_ENABLEBRAGEGATE_OFFSET))(this);
		}

		::System::Void DisableAgeGate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_DISABLEAGEGATE_OFFSET))(this);
		}

		::System::Void DisableBrAgeGate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_DISABLEBRAGEGATE_OFFSET))(this);
		}

		::System::Void ClearPayload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_CLEARPAYLOAD_OFFSET))(this);
		}

		::System::String* BuildUrl(::System::String* agegatePayload)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_BUILDURL_OFFSET))(this, agegatePayload);
		}

		::System::Void OpenAgeGateWebPage(::System::Action* failCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_OPENAGEGATEWEBPAGE_OFFSET))(this, failCallback);
		}

		::System::Boolean CheckAgeGateError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_CHECKAGEGATEERROR_OFFSET))(this);
		}

		::System::Void ShowAgeGateErrorDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SHOWAGEGATEERRORDIALOG_OFFSET))(this);
		}

		::System::Void ShowAgeGateDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SHOWAGEGATEDIALOG_OFFSET))(this);
		}

		::System::Void ShowAgeGateVerificationDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SHOWAGEGATEVERIFICATIONDIALOG_OFFSET))(this);
		}

		::System::Void TryLoadTicket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_TRYLOADTICKET_OFFSET))(this);
		}

		::System::Void TryUpdateTicket(::System::Int64 ts)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_TRYUPDATETICKET_OFFSET))(this, ts);
		}

		::System::String* GetColoredText(::System::String* content, ::System::String* highlightColor, ::System::String* highlightText)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GETCOLOREDTEXT_OFFSET))(this, content, highlightColor, highlightText);
		}

		::System::String* GenerateColoredText(::System::String* color, ::System::String* text)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GENERATECOLOREDTEXT_OFFSET))(this, color, text);
		}

		::System::Void DeleteAccountData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_DELETEACCOUNTDATA_OFFSET))(this);
		}

		::System::Void SetSuccessCallback(::System::Action* success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SETSUCCESSCALLBACK_OFFSET))(this, success);
		}

		::System::Void SetFailCallback(::System::Action* fail)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SETFAILCALLBACK_OFFSET))(this, fail);
		}

		::System::Boolean TryParsePayload(::System::Int32 retcode, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_TRYPARSEPAYLOAD_OFFSET))(this, retcode, headers);
		}

		::System::Void StartThirdPartRegisterFlow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_STARTTHIRDPARTREGISTERFLOW_OFFSET))(this);
		}

		::System::Void SetAccountSuccessCallback(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SETACCOUNTSUCCESSCALLBACK_OFFSET))(this, callback);
		}

		::MiHoYo::SDK::JSONObject* GetReportBody()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GETREPORTBODY_OFFSET))(this);
		}

		::System::Void _ShowAgeGateErrorDialog_b__34_0(::MiHoYo::SDK::Alert_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__SHOWAGEGATEERRORDIALOG_B__34_0_OFFSET))(this, result);
		}

		::System::Void _ShowAgeGateVerificationDialog_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__SHOWAGEGATEVERIFICATIONDIALOG_B__36_0_OFFSET))(this);
		}

		::System::Void _ShowAgeGateVerificationDialog_b__36_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__SHOWAGEGATEVERIFICATIONDIALOG_B__36_1_OFFSET))(this);
		}

		::System::Void _TryLoadTicket_g__callback_37_0(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYLOADTICKET_G__CALLBACK_37_0_OFFSET))(this, response);
		}

		::System::Void _TryLoadTicket_g__confirmCallback_37_1(::System::Int32 year, ::System::Int32 month, ::System::Int64 ts)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYLOADTICKET_G__CONFIRMCALLBACK_37_1_OFFSET))(this, year, month, ts);
		}

		::System::Void _TryLoadTicket_b__37_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYLOADTICKET_B__37_4_OFFSET))(this);
		}

		::System::Void _TryLoadTicket_b__37_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYLOADTICKET_B__37_2_OFFSET))(this);
		}

		::System::Void _TryUpdateTicket_g__callback_38_0(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYUPDATETICKET_G__CALLBACK_38_0_OFFSET))(this, response);
		}

		::System::Void _StartThirdPartRegisterFlow_b__45_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__STARTTHIRDPARTREGISTERFLOW_B__45_0_OFFSET))(this);
		}
	};
}
