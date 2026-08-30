#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_CHATMESSAGE_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x16A8C130)
#define MIHOYO_SDK_CHATMESSAGE_GET_ISNPC_OFFSET UNITYSDK_OFFSET(0x16A8C110)
#define MIHOYO_SDK_CHATMESSAGE_GET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x16A8C150)
#define MIHOYO_SDK_CHATMESSAGE_GET_SPEAKERNAME_OFFSET UNITYSDK_OFFSET(0x16A8C0F0)
#define MIHOYO_SDK_CHATMESSAGE_GET_TIME_OFFSET UNITYSDK_OFFSET(0x16A8C0B0)
#define MIHOYO_SDK_CHATMESSAGE_GET_UIDTIMEMD5_OFFSET UNITYSDK_OFFSET(0x16A8C0D0)
#define MIHOYO_SDK_CHATMESSAGE_GET_UID_OFFSET UNITYSDK_OFFSET(0x16A8C090)
#define MIHOYO_SDK_CHATMESSAGE_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x16A8C140)
#define MIHOYO_SDK_CHATMESSAGE_SET_ISNPC_OFFSET UNITYSDK_OFFSET(0x16A8C120)
#define MIHOYO_SDK_CHATMESSAGE_SET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x16A8C160)
#define MIHOYO_SDK_CHATMESSAGE_SET_SPEAKERNAME_OFFSET UNITYSDK_OFFSET(0x16A8C100)
#define MIHOYO_SDK_CHATMESSAGE_SET_TIME_OFFSET UNITYSDK_OFFSET(0x16A8C0C0)
#define MIHOYO_SDK_CHATMESSAGE_SET_UIDTIMEMD5_OFFSET UNITYSDK_OFFSET(0x16A8C0E0)
#define MIHOYO_SDK_CHATMESSAGE_SET_UID_OFFSET UNITYSDK_OFFSET(0x16A8C0A0)
#define MIHOYO_SDK_CHATMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8C170)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ChatMessage_TypeDefinitionIndex = 47040;

	class ChatMessage : public ::System::Object
	{
	public:
		::System::String* _Content_k__BackingField; // 0x10
		::System::String* _SpeakerName_k__BackingField; // 0x18
		::System::String* _UidTimeMd5_k__BackingField; // 0x20
		::System::String* _Time_k__BackingField; // 0x28
		::System::String* _Language_k__BackingField; // 0x30
		::System::String* _Uid_k__BackingField; // 0x38
		::System::Boolean _IsNPC_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE__CTOR_OFFSET))(this);
		}

		::System::String* get_Uid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_GET_UID_OFFSET))(this);
		}

		::System::Void set_Uid(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_SET_UID_OFFSET))(this, a1);
		}

		::System::String* get_Time()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_GET_TIME_OFFSET))(this);
		}

		::System::Void set_Time(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_SET_TIME_OFFSET))(this, a1);
		}

		::System::String* get_UidTimeMd5()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_GET_UIDTIMEMD5_OFFSET))(this);
		}

		::System::Void set_UidTimeMd5(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_SET_UIDTIMEMD5_OFFSET))(this, a1);
		}

		::System::String* get_SpeakerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_GET_SPEAKERNAME_OFFSET))(this);
		}

		::System::Void set_SpeakerName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_SET_SPEAKERNAME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_GET_ISNPC_OFFSET))(this);
		}

		::System::Void set_IsNPC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_SET_ISNPC_OFFSET))(this, a1);
		}

		::System::String* get_Content()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::String* get_Language()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_GET_LANGUAGE_OFFSET))(this);
		}

		::System::Void set_Language(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHATMESSAGE_SET_LANGUAGE_OFFSET))(this, a1);
		}
	};
}
