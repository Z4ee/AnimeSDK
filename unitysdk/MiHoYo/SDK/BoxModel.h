#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class H5logFilterConfig; }
namespace MiHoYo::SDK { class HttpDnsBoxConfig; }
namespace MiHoYo::SDK { class HttpDnsPlusBoxConfig; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class KibanaNetBoxConfig; }
namespace MiHoYo::SDK { class KibanaPCBoxConfig; }
namespace MiHoYo::SDK { class LoginFlowNotificationBoxConfig; }
namespace MiHoYo::SDK { class LoginRecordBoxConfig; }
namespace MiHoYo::SDK { class NoticeNativeTaskConfig; }
namespace MiHoYo::SDK { class PS4BindMobileConfig; }
namespace MiHoYo::SDK { class PaymentCNBoxConfig; }
namespace MiHoYo::SDK { class ProtocolNativeTaskConfig; }
namespace MiHoYo::SDK { class TelemetryBoxConfig; }
namespace MiHoYo::SDK { class WebViewAPMBoxConfig; }
namespace MiHoYo::SDK { class WebViewRenderMethodBoxConfig; }
namespace MiHoYo::SDK { class WebViewReportBoxConfig; }
namespace System { class String; }

#define MIHOYO_SDK_BOXMODEL_CHECKDIVISORENABLE_OFFSET UNITYSDK_OFFSET(0x181F1910)
#define MIHOYO_SDK_BOXMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x181EE6B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BoxModel_TypeDefinitionIndex = 7876;

	class BoxModel : public ::System::Object
	{
	public:
		::System::Int32 emailBindRemindInterval; // 0x10
		::System::Boolean emailBindRemind; // 0x14
		::System::Boolean disableEmailBindSkip; // 0x15
		::System::Boolean noticePreloadDisable; // 0x16
		::System::Int32 reportLocalMaxCount; // 0x18
		::System::Int32 reportLocalDeletePercentage; // 0x1C
		::System::Boolean kcpEnable; // 0x20
		::System::Boolean modifyRealNameOtherVerify; // 0x21
		::System::String* pay_payco_centered_host; // 0x28
		::MiHoYo::SDK::KibanaNetBoxConfig* network_report_config; // 0x30
		::MiHoYo::SDK::KibanaPCBoxConfig* kibana_pc_config; // 0x38
		::MiHoYo::SDK::H5logFilterConfig* h5log_filter_config; // 0x40
		::System::Boolean webviewTrackEnable; // 0x48
		::System::Boolean enablelistPriceTierV2; // 0x49
		::System::String* defaultOSPayDialogType; // 0x50
		::MiHoYo::SDK::PaymentCNBoxConfig* payment_cn_config; // 0x58
		::MiHoYo::SDK::TelemetryBoxConfig* telemetry_config; // 0x60
		::System::Boolean enable_web_dpi; // 0x68
		::MiHoYo::SDK::HttpDnsBoxConfig* httpdns_config; // 0x70
		::MiHoYo::SDK::HttpDnsPlusBoxConfig* httpdns_plus_config; // 0x78
		::System::String* hoyoplay_auth_login_ignore; // 0x80
		::MiHoYo::SDK::WebViewAPMBoxConfig* webview_apm_config; // 0x88
		::MiHoYo::SDK::WebViewReportBoxConfig* webview_report_config; // 0x90
		::System::Int32 list_goods_work_mode; // 0x98
		::System::Int32 kibana_ps_log_method; // 0x9C
		::MiHoYo::SDK::WebViewRenderMethodBoxConfig* webview_rendermethod_config; // 0xA0
		::System::String* webview_async_init; // 0xA8
		::System::Boolean enable_webview_joypad; // 0xB0
		::MiHoYo::SDK::LoginFlowNotificationBoxConfig* login_flow_notification; // 0xB8
		::System::Boolean enable_register_autologin; // 0xC0
		::System::Boolean enable_logout_ann_redpoint; // 0xC1
		::MiHoYo::SDK::LoginRecordBoxConfig* login_record_config; // 0xC8
		::System::Int32 launch_user_agreement_timeout; // 0xD0
		::System::Int32 console_collectionsid_timeout; // 0xD4
		::System::String* block_unsupported_region; // 0xD8
		::System::Int32 apm_ftc_switch_type; // 0xE0
		::System::Boolean webview_module_fallback; // 0xE4
		::System::Boolean enable_spint_prodqa_realname; // 0xE5
		::System::Boolean webview_enable_delegate_esc; // 0xE6
		::MiHoYo::SDK::PS4BindMobileConfig* ps4_bind_mobile_config; // 0xE8
		::System::Boolean domain_region_enable; // 0xF0
		::MiHoYo::SDK::NoticeNativeTaskConfig* notice_native_task_config; // 0xF8
		::MiHoYo::SDK::ProtocolNativeTaskConfig* protocol_native_task_config; // 0x100
		::System::Boolean enable_separate_render_method; // 0x108
		::System::String* vox_asr_config; // 0x110

		::System::Void _ctor(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BOXMODEL__CTOR_OFFSET))(this, a1);
		}

		static ::System::Boolean CheckDivisorEnable(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BOXMODEL_CHECKDIVISORENABLE_OFFSET))(a1);
		}
	};
}
