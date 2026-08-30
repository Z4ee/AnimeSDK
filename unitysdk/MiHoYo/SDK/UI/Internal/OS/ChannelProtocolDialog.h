#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/OS/ChannelProtocolDisplayType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_GET_ONACCEPTBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD62FD0)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_GET_ONCANCELBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD62FB0)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_GET_ONCLOSEBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD62F50)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_GET_ONVIEWPRIVACYPROTOCOLBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD62F90)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_GET_ONVIEWUSERAGREEMENTBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD62F70)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1CD62FF0)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SET_ONACCEPTBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD62FE0)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SET_ONCANCELBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD62FC0)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SET_ONCLOSEBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD62F60)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SET_ONVIEWPRIVACYPROTOCOLBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD62FA0)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SET_ONVIEWUSERAGREEMENTBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD62F80)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1CD63060)
#define MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD63110)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int ChannelProtocolDialog_TypeDefinitionIndex = 8380;

	class ChannelProtocolDialog : public ::System::Object
	{
	public:
		::System::Action* _OnCloseButtonClicked_k__BackingField; // 0x10
		::System::Action* _OnAcceptButtonClicked_k__BackingField; // 0x18
		::System::Action* _OnCancelButtonClicked_k__BackingField; // 0x20
		::System::Action* _OnViewUserAgreementButtonClicked_k__BackingField; // 0x28
		::System::Action* _OnViewPrivacyProtocolButtonClicked_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnCloseButtonClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_GET_ONCLOSEBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCloseButtonClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SET_ONCLOSEBUTTONCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnViewUserAgreementButtonClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_GET_ONVIEWUSERAGREEMENTBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void set_OnViewUserAgreementButtonClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SET_ONVIEWUSERAGREEMENTBUTTONCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnViewPrivacyProtocolButtonClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_GET_ONVIEWPRIVACYPROTOCOLBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void set_OnViewPrivacyProtocolButtonClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SET_ONVIEWPRIVACYPROTOCOLBUTTONCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnCancelButtonClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_GET_ONCANCELBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCancelButtonClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SET_ONCANCELBUTTONCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnAcceptButtonClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_GET_ONACCEPTBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void set_OnAcceptButtonClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SET_ONACCEPTBUTTONCLICKED_OFFSET))(this, a1);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_HIDE_OFFSET))(this);
		}

		::System::Void Show(::MiHoYo::SDK::UI::OS::ChannelProtocolDisplayType a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::ChannelProtocolDisplayType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_CHANNELPROTOCOLDIALOG_SHOW_OFFSET))(this, a1);
		}
	};
}
