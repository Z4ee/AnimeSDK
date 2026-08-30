#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define R3_TRACKINGSTATE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3C9EDB0)
#define R3_TRACKINGSTATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C9EE80)
#define R3_TRACKINGSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C9EE10)
#define R3_TRACKINGSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C9EE00)
#define R3_TRACKINGSTATE_GET_ADDTIME_OFFSET UNITYSDK_OFFSET(0x84C7C0)
#define R3_TRACKINGSTATE_GET_FORMATTEDTYPE_OFFSET UNITYSDK_OFFSET(0x7846F0)
#define R3_TRACKINGSTATE_GET_STACKTRACE_OFFSET UNITYSDK_OFFSET(0x82D660)
#define R3_TRACKINGSTATE_GET_TRACKINGID_OFFSET UNITYSDK_OFFSET(0x19050)
#define R3_TRACKINGSTATE_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3C9EDE0)
#define R3_TRACKINGSTATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C9EDD0)
#define R3_TRACKINGSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x3ADF250)

namespace R3
{
	inline static constexpr unsigned int TrackingState_TypeDefinitionIndex = 35248;

	struct alignas(8) TrackingState
	{
		::System::Int32 _TrackingId_k__BackingField; // 0x10
		::System::String* _FormattedType_k__BackingField; // 0x18
		::System::DateTime _AddTime_k__BackingField; // 0x20
		::System::String* _StackTrace_k__BackingField; // 0x28

		::System::Void _ctor(::System::Int32 a1, ::System::String* a2, ::System::DateTime a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::DateTime, ::System::String*))((::PBYTE)hIl2Cpp + R3_TRACKINGSTATE__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 get_TrackingId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_TRACKINGSTATE_GET_TRACKINGID_OFFSET))(this);
		}

		::System::String* get_FormattedType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_TRACKINGSTATE_GET_FORMATTEDTYPE_OFFSET))(this);
		}

		::System::DateTime get_AddTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_TRACKINGSTATE_GET_ADDTIME_OFFSET))(this);
		}

		::System::String* get_StackTrace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_TRACKINGSTATE_GET_STACKTRACE_OFFSET))(this);
		}

		::System::Int32 CompareTo(::R3::TrackingState a1)
		{
			return ((::System::Int32(*)(::PVOID, ::R3::TrackingState))((::PBYTE)hIl2Cpp + R3_TRACKINGSTATE_COMPARETO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_TRACKINGSTATE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + R3_TRACKINGSTATE_PRINTMEMBERS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_TRACKINGSTATE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + R3_TRACKINGSTATE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::R3::TrackingState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::R3::TrackingState))((::PBYTE)hIl2Cpp + R3_TRACKINGSTATE_EQUALS_1_OFFSET))(this, a1);
		}
	};
}
