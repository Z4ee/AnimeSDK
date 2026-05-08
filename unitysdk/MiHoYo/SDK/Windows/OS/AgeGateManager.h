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

#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_BUILDURL_OFFSET UNITYSDK_OFFSET(0x1A08ED80)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_CHECKAGEGATEERROR_OFFSET UNITYSDK_OFFSET(0x1A08BA50)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_CLEARPAYLOAD_OFFSET UNITYSDK_OFFSET(0x1A08ED20)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_DELETEACCOUNTDATA_OFFSET UNITYSDK_OFFSET(0x1A08F290)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_DISABLEAGEGATE_OFFSET UNITYSDK_OFFSET(0x1A08EAC0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_DISABLEBRAGEGATE_OFFSET UNITYSDK_OFFSET(0x1A08EBF0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_ENABLEAGEGATE_OFFSET UNITYSDK_OFFSET(0x1A08E860)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_ENABLEBRAGEGATE_OFFSET UNITYSDK_OFFSET(0x1A08E990)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GENERATECOLOREDTEXT_OFFSET UNITYSDK_OFFSET(0x1A08FB90)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GETCOLOREDTEXT_OFFSET UNITYSDK_OFFSET(0x1A08FA20)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GETREPORTBODY_OFFSET UNITYSDK_OFFSET(0x1A08F430)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A08B4E0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GET_PARSESUCC_OFFSET UNITYSDK_OFFSET(0x1A08E820)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_GET_TOKENLOGIN_OFFSET UNITYSDK_OFFSET(0x1A08E800)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_OPENAGEGATEWEBPAGE_OFFSET UNITYSDK_OFFSET(0x1A08F0F0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SETACCOUNTSUCCESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A08BA30)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SETFAILCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A08BA40)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SETSUCCESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A08FC30)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A08E850)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SET_PARSESUCC_OFFSET UNITYSDK_OFFSET(0x1A08E830)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SET_TOKENLOGIN_OFFSET UNITYSDK_OFFSET(0x1A08E810)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SHOWAGEGATEDIALOG_OFFSET UNITYSDK_OFFSET(0x1A08BC40)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SHOWAGEGATEERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x1A08BA60)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_SHOWAGEGATEVERIFICATIONDIALOG_OFFSET UNITYSDK_OFFSET(0x1A08F580)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_STARTTHIRDPARTREGISTERFLOW_OFFSET UNITYSDK_OFFSET(0x1A08F800)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_TRYLOADTICKET_OFFSET UNITYSDK_OFFSET(0x1A08F860)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_TRYPARSEPAYLOAD_OFFSET UNITYSDK_OFFSET(0x1A08B550)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER_TRYUPDATETICKET_OFFSET UNITYSDK_OFFSET(0x1A08F910)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A08E840)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__SHOWAGEGATEERRORDIALOG_B__34_0_OFFSET UNITYSDK_OFFSET(0x1A08FC40)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__SHOWAGEGATEVERIFICATIONDIALOG_B__36_0_OFFSET UNITYSDK_OFFSET(0x1A08FCF0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__SHOWAGEGATEVERIFICATIONDIALOG_B__36_1_OFFSET UNITYSDK_OFFSET(0x1A08FDA0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__STARTTHIRDPARTREGISTERFLOW_B__45_0_OFFSET UNITYSDK_OFFSET(0x1A090C30)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYLOADTICKET_B__37_2_OFFSET UNITYSDK_OFFSET(0x1A0905F0)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYLOADTICKET_B__37_4_OFFSET UNITYSDK_OFFSET(0x1A090550)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYLOADTICKET_G__CALLBACK_37_0_OFFSET UNITYSDK_OFFSET(0x1A08FE40)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYLOADTICKET_G__CONFIRMCALLBACK_37_1_OFFSET UNITYSDK_OFFSET(0x1A090200)
#define MIHOYO_SDK_WINDOWS_OS_AGEGATEMANAGER__TRYUPDATETICKET_G__CALLBACK_38_0_OFFSET UNITYSDK_OFFSET(0x1A0906A0)

namespace MiHoYo::SDK::Windows::OS
{
	inline static constexpr unsigned int AgeGateManager_TypeDefinitionIndex = 19212;

	class AgeGateManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Windows::OS::AgeGateManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Windows::OS::AgeGateManager**)Il2CppClass::FromTypeDefinitionIndex(AgeGateManager_TypeDefinitionIndex)->GetStaticField(0xAA50);
		}
		// static const ::System::String* MODULE; // 0x0
		// static const ::System::String* AGE_GATE_PAYLOAD_KEY; // 0x0
		// static const ::System::String* AGE_GATE_TIME_KEY; // 0x0
		// static const ::System::String* AGE_GATE_TICKET; // 0x0
		::System::Action* failCallback; // 0x10
		::System::String* _payload; // 0x18
		::System::Action_1<::System::String*>* accountSuccessCallback; // 0x20
		::System::Action* successCallback; // 0x28
		::System::String* _ticket; // 0x30
		::System::Int64 _time; // 0x38
		::System::Boolean brAgeGateEnable; // 0x40
		::System::Boolean _ParseSucc_k__BackingField; // 0x41
		::System::Boolean _tokenLogin_k__BackingField; // 0x42
		::System::Boolean ageGateEnable; // 0x43
		::System::Boolean timeExists; // 0x44
		::System::Int32 ageGateType; // 0x48

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
