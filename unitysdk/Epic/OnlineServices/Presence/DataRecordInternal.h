#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Presence { class DataRecord; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B2A60)
#define EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_GET_KEY_OFFSET UNITYSDK_OFFSET(0x8B2720)
#define EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x8B2880)
#define EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8B29F0)
#define EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_SET_KEY_OFFSET UNITYSDK_OFFSET(0x8B27D0)
#define EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8B29E0)
#define EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x8B2930)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int DataRecordInternal_TypeDefinitionIndex = 33804;

	struct alignas(8) DataRecordInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Key; // 0x18
		::System::IntPtr m_Value; // 0x20

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_SET_KEY_OFFSET))(this, value);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Presence::DataRecord* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::DataRecord*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
