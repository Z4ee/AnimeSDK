#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AttributeType.h"
#include "unitysdk/Epic/OnlineServices/Sessions/AttributeDataValueInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1A2C79D0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1A2C7840)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_GET_ASINT64_OFFSET UNITYSDK_OFFSET(0x1A2C76B0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_GET_ASUTF8_OFFSET UNITYSDK_OFFSET(0x1A2C7B30)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1A2C7CD0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1A2C7E80)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1A2C8000)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1A2C8160)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A2C7CF0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_1_OFFSET UNITYSDK_OFFSET(0x1A2C8A90)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1A2C7A50)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1A2C78E0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_ASINT64_OFFSET UNITYSDK_OFFSET(0x1A2C7750)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_ASUTF8_OFFSET UNITYSDK_OFFSET(0x1A2C7BB0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_OFFSET UNITYSDK_OFFSET(0x1A2C82E0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1A2C7CE0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C7E70)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int AttributeDataValue_TypeDefinitionIndex = 33462;

	class AttributeDataValue : public ::System::Object
	{
	public:
		::System::String* m_AsUtf8; // 0x10
		::System::Nullable_1<::System::Boolean> m_AsBool; // 0x18
		::Epic::OnlineServices::AttributeType m_ValueType; // 0x1C
		::System::Nullable_1<::System::Int64> m_AsInt64; // 0x20
		::System::Nullable_1<::System::Double> m_AsDouble; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int64> get_AsInt64()
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_GET_ASINT64_OFFSET))(this);
		}

		::System::Void set_AsInt64(::System::Nullable_1<::System::Int64> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_ASINT64_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Double> get_AsDouble()
		{
			return ((::System::Nullable_1<::System::Double>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Nullable_1<::System::Double> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Double>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_ASDOUBLE_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Boolean> get_AsBool()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Nullable_1<::System::Boolean> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_ASBOOL_OFFSET))(this, value);
		}

		::System::String* get_AsUtf8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_GET_ASUTF8_OFFSET))(this);
		}

		::System::Void set_AsUtf8(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_ASUTF8_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AttributeType get_ValueType()
		{
			return ((::Epic::OnlineServices::AttributeType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Void set_ValueType(::Epic::OnlineServices::AttributeType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AttributeType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_VALUETYPE_OFFSET))(this, value);
		}

		static ::Epic::OnlineServices::Sessions::AttributeDataValue* op_Implicit(::System::Int64 value)
		{
			return ((::Epic::OnlineServices::Sessions::AttributeDataValue*(*)(::System::Int64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_OP_IMPLICIT_OFFSET))(value);
		}

		static ::Epic::OnlineServices::Sessions::AttributeDataValue* op_Implicit_1(::System::Double value)
		{
			return ((::Epic::OnlineServices::Sessions::AttributeDataValue*(*)(::System::Double))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_OP_IMPLICIT_1_OFFSET))(value);
		}

		static ::Epic::OnlineServices::Sessions::AttributeDataValue* op_Implicit_2(::System::Boolean value)
		{
			return ((::Epic::OnlineServices::Sessions::AttributeDataValue*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_OP_IMPLICIT_2_OFFSET))(value);
		}

		static ::Epic::OnlineServices::Sessions::AttributeDataValue* op_Implicit_3(::System::String* value)
		{
			return ((::Epic::OnlineServices::Sessions::AttributeDataValue*(*)(::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_OP_IMPLICIT_3_OFFSET))(value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeDataValueInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeDataValueInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_1_OFFSET))(this, other);
		}
	};
}
