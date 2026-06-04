#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_APMINVOKE_APM_BLOCK_REPORT_OFFSET UNITYSDK_OFFSET(0xA137CF0)
#define MIHOYO_SDK_APMINVOKE_APM_CONFIG_OFFSET UNITYSDK_OFFSET(0xA134A50)
#define MIHOYO_SDK_APMINVOKE_APM_CRASH_ADD_CUSTOM_KEY_VALUE_OFFSET UNITYSDK_OFFSET(0xA1370C0)
#define MIHOYO_SDK_APMINVOKE_APM_CRASH_DELETE_UNSENT_DUMP_OFFSET UNITYSDK_OFFSET(0xA136F30)
#define MIHOYO_SDK_APMINVOKE_APM_CRASH_REPORT_OFFSET UNITYSDK_OFFSET(0xA137980)
#define MIHOYO_SDK_APMINVOKE_APM_GAMELOG_REPORT_OFFSET UNITYSDK_OFFSET(0xA1368F0)
#define MIHOYO_SDK_APMINVOKE_APM_SET_AID_OFFSET UNITYSDK_OFFSET(0xA137510)
#define MIHOYO_SDK_APMINVOKE_APM_SET_CUSTOM_DATA_OFFSET UNITYSDK_OFFSET(0xA1377D0)
#define MIHOYO_SDK_APMINVOKE_APM_SET_FTC_SWITCH_OFFSET UNITYSDK_OFFSET(0xA138730)
#define MIHOYO_SDK_APMINVOKE_APM_SET_LRSAG_OFFSET UNITYSDK_OFFSET(0xA1384C0)
#define MIHOYO_SDK_APMINVOKE_APM_SET_SERVER_ID_OFFSET UNITYSDK_OFFSET(0xA137240)
#define MIHOYO_SDK_APMINVOKE_APM_SET_UID_OFFSET UNITYSDK_OFFSET(0xA137610)
#define MIHOYO_SDK_APMINVOKE_APM_SET_USER_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0xA1376F0)
#define MIHOYO_SDK_APMINVOKE_APM_START_OFFSET UNITYSDK_OFFSET(0xA1357F0)
#define MIHOYO_SDK_APMINVOKE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA1389B0)
#define MIHOYO_SDK_APMINVOKE__CTOR_OFFSET UNITYSDK_OFFSET(0xA1389A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMInvoke_TypeDefinitionIndex = 43903;

	class APMInvoke : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_work_path()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(APMInvoke_TypeDefinitionIndex)->GetStaticField(0xA530);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE__CCTOR_OFFSET))();
		}

		static ::System::Void apm_config(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_CONFIG_OFFSET))(a1);
		}

		static ::System::Void apm_start(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_START_OFFSET))(a1);
		}

		static ::System::Void apm_gamelog_report(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_GAMELOG_REPORT_OFFSET))(a1);
		}

		static ::System::Void apm_crash_delete_unsent_dump()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_CRASH_DELETE_UNSENT_DUMP_OFFSET))();
		}

		static ::System::Void apm_crash_add_custom_key_value(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_CRASH_ADD_CUSTOM_KEY_VALUE_OFFSET))(a1);
		}

		static ::System::Void apm_set_server_id(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_SET_SERVER_ID_OFFSET))(a1);
		}

		static ::System::Void apm_set_aid(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_SET_AID_OFFSET))(a1);
		}

		static ::System::Void apm_set_uid(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_SET_UID_OFFSET))(a1);
		}

		static ::System::Void apm_set_user_device_id(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_SET_USER_DEVICE_ID_OFFSET))(a1);
		}

		static ::System::Void apm_set_custom_data(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_SET_CUSTOM_DATA_OFFSET))(a1);
		}

		static ::System::Void apm_crash_report(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_CRASH_REPORT_OFFSET))(a1);
		}

		static ::System::Void apm_block_report(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_BLOCK_REPORT_OFFSET))(a1);
		}

		static ::System::Void apm_set_lrsag(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_SET_LRSAG_OFFSET))(a1);
		}

		static ::System::Void apm_set_ftc_switch(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_SET_FTC_SWITCH_OFFSET))(a1);
		}
	};
}
