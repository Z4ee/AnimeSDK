#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Presence { class DataRecord; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x69800)
#define EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_GET_KEY_OFFSET UNITYSDK_OFFSET(0x694B0)
#define EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x69610)
#define EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x69780)
#define EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_SET_KEY_OFFSET UNITYSDK_OFFSET(0x69560)
#define EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x69770)
#define EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x696C0)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int DataRecordInternal_TypeDefinitionIndex = 45431;

	struct alignas(8) DataRecordInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Key; // 0x18
		::System::IntPtr m_Value; // 0x20

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_SET_KEY_OFFSET))(this, a1);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Presence::DataRecord* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::DataRecord*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_DATARECORDINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
