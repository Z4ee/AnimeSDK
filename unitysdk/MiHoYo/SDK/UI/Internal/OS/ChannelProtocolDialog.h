#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/OS/ChannelProtocolDisplayType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_GET_ONACCEPTBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD190F0)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_GET_ONCANCELBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD190D0)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_GET_ONCLOSEBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD19070)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_GET_ONVIEWPRIVACYPROTOCOLBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD190B0)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_GET_ONVIEWUSERAGREEMENTBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD19090)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1CD19110)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SET_ONACCEPTBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD19100)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SET_ONCANCELBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD190E0)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SET_ONCLOSEBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD19080)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SET_ONVIEWPRIVACYPROTOCOLBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD190C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SET_ONVIEWUSERAGREEMENTBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD190A0)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1CD19180)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD19230)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int ChannelProtocolDialog_TypeDefinitionIndex = 20533;

	class ChannelProtocolDialog : public ::System::Object
	{
	public:
		::System::Action* _OnCancelButtonClicked_k__BackingField; // 0x10
		::System::Action* _OnCloseButtonClicked_k__BackingField; // 0x18
		::System::Action* _OnViewUserAgreementButtonClicked_k__BackingField; // 0x20
		::System::Action* _OnAcceptButtonClicked_k__BackingField; // 0x28
		::System::Action* _OnViewPrivacyProtocolButtonClicked_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnCloseButtonClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_GET_ONCLOSEBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCloseButtonClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SET_ONCLOSEBUTTONCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnViewUserAgreementButtonClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_GET_ONVIEWUSERAGREEMENTBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void set_OnViewUserAgreementButtonClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SET_ONVIEWUSERAGREEMENTBUTTONCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnViewPrivacyProtocolButtonClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_GET_ONVIEWPRIVACYPROTOCOLBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void set_OnViewPrivacyProtocolButtonClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SET_ONVIEWPRIVACYPROTOCOLBUTTONCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnCancelButtonClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_GET_ONCANCELBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCancelButtonClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SET_ONCANCELBUTTONCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnAcceptButtonClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_GET_ONACCEPTBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void set_OnAcceptButtonClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SET_ONACCEPTBUTTONCLICKED_OFFSET))(this, value);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_HIDE_OFFSET))(this);
		}

		::System::Void Show(::MiHoYo::SDK::UI::OS::ChannelProtocolDisplayType protocolDisplayType)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::ChannelProtocolDisplayType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SHOW_OFFSET))(this, protocolDisplayType);
		}
	};
}
