#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BB014E0)
#define MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_GET_ONSENDBTNCLIEKD_OFFSET UNITYSDK_OFFSET(0x1BB01500)
#define MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1BB01710)
#define MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BB014F0)
#define MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_SET_ONSENDBTNCLIEKD_OFFSET UNITYSDK_OFFSET(0x1BB01510)
#define MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1BB01520)
#define MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1BB01830)
#define MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB01A60)
#define MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG__SHOW_B__8_0_OFFSET UNITYSDK_OFFSET(0x1BB01A70)
#define MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG__SHOW_B__8_1_OFFSET UNITYSDK_OFFSET(0x1BB01A90)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int PayParentConsentSentDialog_TypeDefinitionIndex = 8376;

	class PayParentConsentSentDialog : public ::System::Object
	{
	public:
		::System::Action* _onCloseBtnClicked_k__BackingField; // 0x10
		::System::Action_1<::System::String*>* _OnSendBtnCliekd_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action* get_onCloseBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_onCloseBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action_1<::System::String*>* get_OnSendBtnCliekd()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_GET_ONSENDBTNCLIEKD_OFFSET))(this);
		}

		::System::Void set_OnSendBtnCliekd(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_SET_ONSENDBTNCLIEKD_OFFSET))(this, a1);
		}

		::System::Void Show(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_SHOW_OFFSET))(this, a1);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_HIDE_OFFSET))(this);
		}

		::System::Void StartCountDown(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG_STARTCOUNTDOWN_OFFSET))(this, a1);
		}

		::System::Void _Show_b__8_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG__SHOW_B__8_0_OFFSET))(this, a1);
		}

		::System::Void _Show_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_PAYPARENTCONSENTSENTDIALOG__SHOW_B__8_1_OFFSET))(this);
		}
	};
}
