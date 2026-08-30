#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalConsentDetailsDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalConsentDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalConsentSentDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalDenyDialog; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_CHECKISAGEGATEPAYERROR_OFFSET UNITYSDK_OFFSET(0x1A655C20)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_CLOSEALL_OFFSET UNITYSDK_OFFSET(0x1A6563D0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_GETREPORTBODY_OFFSET UNITYSDK_OFFSET(0x1A656B00)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A655AF0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_GET_RSAKEY_OFFSET UNITYSDK_OFFSET(0x1A655B70)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_PARENTCONSENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A657B20)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_PARENTCONSENTDENYCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A6581C0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_REQUESTPARENTCONSENT_OFFSET UNITYSDK_OFFSET(0x1A6579C0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x1A655DB0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SENDPARENTEMAIL_OFFSET UNITYSDK_OFFSET(0x1A6578B0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTCONSENTDETAILS_OFFSET UNITYSDK_OFFSET(0x1A657040)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTCONSENTPENDING_OFFSET UNITYSDK_OFFSET(0x1A656BC0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTCONSENTREQUIRED_OFFSET UNITYSDK_OFFSET(0x1A656630)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTDENY_1_OFFSET UNITYSDK_OFFSET(0x1A656250)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTDENY_OFFSET UNITYSDK_OFFSET(0x1A657440)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_TRYLOADTICKET_OFFSET UNITYSDK_OFFSET(0x1A6561B0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_TRYPARSEPAYLOAD_OFFSET UNITYSDK_OFFSET(0x1A655DD0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_TRYUPDATETICKET_OFFSET UNITYSDK_OFFSET(0x1A6584C0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A655B60)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTDETAILS_B__21_0_OFFSET UNITYSDK_OFFSET(0x1A658FC0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTPENDING_B__20_0_OFFSET UNITYSDK_OFFSET(0x1A658CA0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTPENDING_B__20_1_OFFSET UNITYSDK_OFFSET(0x1A658DE0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTPENDING_B__20_2_OFFSET UNITYSDK_OFFSET(0x1A658DA0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_0_OFFSET UNITYSDK_OFFSET(0x1A6586E0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_1_OFFSET UNITYSDK_OFFSET(0x1A658AC0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_2_OFFSET UNITYSDK_OFFSET(0x1A658C30)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_4_OFFSET UNITYSDK_OFFSET(0x1A658A30)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__22_0_OFFSET UNITYSDK_OFFSET(0x1A659060)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__22_1_OFFSET UNITYSDK_OFFSET(0x1A659120)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__22_2_OFFSET UNITYSDK_OFFSET(0x1A6590E0)
#define MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__23_0_OFFSET UNITYSDK_OFFSET(0x1A6592F0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int AgeGatePayManager_TypeDefinitionIndex = 8439;

	class AgeGatePayManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::AgeGatePayManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PC::OS::AgeGatePayManager**)Il2CppClass::FromTypeDefinitionIndex(AgeGatePayManager_TypeDefinitionIndex)->GetStaticField(0x18740);
		}
		::System::Action_1<::System::String*>* onCancel; // 0x10
		::MiHoYo::SDK::UI::OS::IWinAgeGateParentalDenyDialog* parentDenyDialog; // 0x18
		::System::String* ticket; // 0x20
		::System::String* payload; // 0x28
		::System::String* hintMessage; // 0x30
		::System::Action* onFail; // 0x38
		::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentSentDialog* parentalConsentPendingDialog; // 0x40
		::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentDialog* parentalConsentRequiredDialog; // 0x48
		::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentDetailsDialog* parentConsenDetailsDialog; // 0x50
		::System::Int32 defaultCoolDown; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::AgeGatePayManager* get_Instance()
		{
			return ((::MiHoYo::SDK::PC::OS::AgeGatePayManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::String* get_RSAKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_GET_RSAKEY_OFFSET))();
		}

		::System::Boolean CheckIsAgeGatePayError(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_CHECKISAGEGATEPAYERROR_OFFSET))(this, a1, a2);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_RESET_OFFSET))(this);
		}

		::System::Void TryParsePayload(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2, ::System::String* a3, ::System::Action_1<::System::String*>* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::String*, ::System::Action_1<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_TRYPARSEPAYLOAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CloseAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_CLOSEALL_OFFSET))(this);
		}

		::System::Void ShowParentConsentRequired()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTCONSENTREQUIRED_OFFSET))(this);
		}

		::System::Void ShowParentConsentPending(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTCONSENTPENDING_OFFSET))(this, a1, a2);
		}

		::System::Void ShowParentConsentDetails()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTCONSENTDETAILS_OFFSET))(this);
		}

		::System::Void ShowParentDeny(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTDENY_OFFSET))(this, a1, a2);
		}

		::System::Void ShowParentDeny_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SHOWPARENTDENY_1_OFFSET))(this);
		}

		::System::Void SendParentEmail(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_SENDPARENTEMAIL_OFFSET))(this, a1);
		}

		::System::Void RequestParentConsent(::System::Int32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_REQUESTPARENTCONSENT_OFFSET))(this, a1, a2);
		}

		::System::Void ParentConsentCallback(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_PARENTCONSENTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void ParentConsentDenyCallback(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_PARENTCONSENTDENYCALLBACK_OFFSET))(this, a1);
		}

		::System::Void TryLoadTicket(::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_TRYLOADTICKET_OFFSET))(this, a1);
		}

		::System::Void TryUpdateTicket(::System::String* a1, ::System::Action_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_TRYUPDATETICKET_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::JSONObject* GetReportBody()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER_GETREPORTBODY_OFFSET))(this);
		}

		::System::Void _ShowParentConsentRequired_b__19_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_0_OFFSET))(this, a1);
		}

		::System::Void _ShowParentConsentRequired_b__19_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_4_OFFSET))(this);
		}

		::System::Void _ShowParentConsentRequired_b__19_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_1_OFFSET))(this);
		}

		::System::Void _ShowParentConsentRequired_b__19_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTREQUIRED_B__19_2_OFFSET))(this);
		}

		::System::Void _ShowParentConsentPending_b__20_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTPENDING_B__20_0_OFFSET))(this, a1);
		}

		::System::Void _ShowParentConsentPending_b__20_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTPENDING_B__20_2_OFFSET))(this);
		}

		::System::Void _ShowParentConsentPending_b__20_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTPENDING_B__20_1_OFFSET))(this);
		}

		::System::Void _ShowParentConsentDetails_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTCONSENTDETAILS_B__21_0_OFFSET))(this);
		}

		::System::Void _ShowParentDeny_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__22_0_OFFSET))(this);
		}

		::System::Void _ShowParentDeny_b__22_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__22_2_OFFSET))(this);
		}

		::System::Void _ShowParentDeny_b__22_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__22_1_OFFSET))(this);
		}

		::System::Void _ShowParentDeny_b__23_0(::MiHoYo::SDK::Alert_AlertResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_AGEGATEPAYMANAGER__SHOWPARENTDENY_B__23_0_OFFSET))(this, a1);
		}
	};
}
