#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_APMINVOKE_APM_BLOCK_REPORT_OFFSET UNITYSDK_OFFSET(0x1E1B3AA0)
#define MIHOYO_SDK_APMINVOKE_APM_CONFIG_OFFSET UNITYSDK_OFFSET(0x1E1B30C0)
#define MIHOYO_SDK_APMINVOKE_APM_CRASH_ADD_CUSTOM_KEY_VALUE_OFFSET UNITYSDK_OFFSET(0x1E1B3260)
#define MIHOYO_SDK_APMINVOKE_APM_CRASH_DELETE_UNSENT_DUMP_OFFSET UNITYSDK_OFFSET(0x1E1B3200)
#define MIHOYO_SDK_APMINVOKE_APM_CRASH_REPORT_OFFSET UNITYSDK_OFFSET(0x1E1B3A40)
#define MIHOYO_SDK_APMINVOKE_APM_GAMELOG_REPORT_OFFSET UNITYSDK_OFFSET(0x1E1B31A0)
#define MIHOYO_SDK_APMINVOKE_APM_SET_AID_OFFSET UNITYSDK_OFFSET(0x1E1B3470)
#define MIHOYO_SDK_APMINVOKE_APM_SET_BOX_CONFIG_OFFSET UNITYSDK_OFFSET(0x1E1B3920)
#define MIHOYO_SDK_APMINVOKE_APM_SET_CUSTOM_DATA_OFFSET UNITYSDK_OFFSET(0x1E1B38C0)
#define MIHOYO_SDK_APMINVOKE_APM_SET_FTC_SWITCH_OFFSET UNITYSDK_OFFSET(0x1E1B3C10)
#define MIHOYO_SDK_APMINVOKE_APM_SET_LRSAG_OFFSET UNITYSDK_OFFSET(0x1E1B3B00)
#define MIHOYO_SDK_APMINVOKE_APM_SET_SERVER_ID_OFFSET UNITYSDK_OFFSET(0x1E1B32C0)
#define MIHOYO_SDK_APMINVOKE_APM_SET_UID_OFFSET UNITYSDK_OFFSET(0x1E1B35E0)
#define MIHOYO_SDK_APMINVOKE_APM_SET_USER_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x1E1B3750)
#define MIHOYO_SDK_APMINVOKE_APM_START_OFFSET UNITYSDK_OFFSET(0x1E1B3140)
#define MIHOYO_SDK_APMINVOKE_GETDEFAULTWORKPATH_OFFSET UNITYSDK_OFFSET(0x1E1B30B0)
#define MIHOYO_SDK_APMINVOKE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B3D30)
#define MIHOYO_SDK_APMINVOKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B3D20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMInvoke_TypeDefinitionIndex = 37539;

	class APMInvoke : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_work_path()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(APMInvoke_TypeDefinitionIndex)->GetStaticField(0x2A2B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE__CCTOR_OFFSET))();
		}

		static ::System::String* GetDefaultWorkPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_GETDEFAULTWORKPATH_OFFSET))();
		}

		static ::System::Void apm_config(::System::String* config)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_CONFIG_OFFSET))(config);
		}

		static ::System::Void apm_start(::System::String* config)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_START_OFFSET))(config);
		}

		static ::System::Void apm_gamelog_report(::System::String* jsonString)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_GAMELOG_REPORT_OFFSET))(jsonString);
		}

		static ::System::Void apm_crash_delete_unsent_dump()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_CRASH_DELETE_UNSENT_DUMP_OFFSET))();
		}

		static ::System::Void apm_crash_add_custom_key_value(::System::String* data)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_CRASH_ADD_CUSTOM_KEY_VALUE_OFFSET))(data);
		}

		static ::System::Void apm_set_server_id(::System::String* server_id)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_SET_SERVER_ID_OFFSET))(server_id);
		}

		static ::System::Void apm_set_aid(::System::String* id)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_SET_AID_OFFSET))(id);
		}

		static ::System::Void apm_set_uid(::System::String* id)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_SET_UID_OFFSET))(id);
		}

		static ::System::Void apm_set_user_device_id(::System::String* id)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_SET_USER_DEVICE_ID_OFFSET))(id);
		}

		static ::System::Void apm_set_custom_data(::System::String* data)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_SET_CUSTOM_DATA_OFFSET))(data);
		}

		static ::System::Void apm_set_box_config(::System::String* config)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_SET_BOX_CONFIG_OFFSET))(config);
		}

		static ::System::Void apm_crash_report(::System::String* data)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_CRASH_REPORT_OFFSET))(data);
		}

		static ::System::Void apm_block_report(::System::String* jsonString)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_BLOCK_REPORT_OFFSET))(jsonString);
		}

		static ::System::Void apm_set_lrsag(::System::String* nLrsag)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_SET_LRSAG_OFFSET))(nLrsag);
		}

		static ::System::Void apm_set_ftc_switch(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMINVOKE_APM_SET_FTC_SWITCH_OFFSET))(value);
		}
	};
}
