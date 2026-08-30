#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AttributeType.h"
#include "unitysdk/Epic/OnlineServices/Sessions/AttributeDataValueInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1DE59D00)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1DE59B60)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_GET_ASINT64_OFFSET UNITYSDK_OFFSET(0x1DE599C0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_GET_ASUTF8_OFFSET UNITYSDK_OFFSET(0x1DE59E70)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1DE59FC0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1DE5A160)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1DE5A2E0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1DE5A440)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1DE59FE0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_1_OFFSET UNITYSDK_OFFSET(0x1DE5AEF0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1DE59D80)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1DE59C00)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_ASINT64_OFFSET UNITYSDK_OFFSET(0x1DE59A60)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_ASUTF8_OFFSET UNITYSDK_OFFSET(0x1DE59EF0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_OFFSET UNITYSDK_OFFSET(0x1DE5A580)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1DE59FD0)
#define EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE5A150)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int AttributeDataValue_TypeDefinitionIndex = 45089;

	class AttributeDataValue : public ::System::Object
	{
	public:
		::System::String* m_AsUtf8; // 0x10
		::System::Nullable_1<::System::Boolean> m_AsBool; // 0x18
		::Epic::OnlineServices::AttributeType m_ValueType; // 0x1C
		::System::Nullable_1<::System::Double> m_AsDouble; // 0x20
		::System::Nullable_1<::System::Int64> m_AsInt64; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int64> get_AsInt64()
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_GET_ASINT64_OFFSET))(this);
		}

		::System::Void set_AsInt64(::System::Nullable_1<::System::Int64> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_ASINT64_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Double> get_AsDouble()
		{
			return ((::System::Nullable_1<::System::Double>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Nullable_1<::System::Double> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Double>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_ASDOUBLE_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Boolean> get_AsBool()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Nullable_1<::System::Boolean> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_ASBOOL_OFFSET))(this, a1);
		}

		::System::String* get_AsUtf8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_GET_ASUTF8_OFFSET))(this);
		}

		::System::Void set_AsUtf8(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_ASUTF8_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::AttributeType get_ValueType()
		{
			return ((::Epic::OnlineServices::AttributeType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Void set_ValueType(::Epic::OnlineServices::AttributeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AttributeType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_VALUETYPE_OFFSET))(this, a1);
		}

		static ::Epic::OnlineServices::Sessions::AttributeDataValue* op_Implicit(::System::Int64 a1)
		{
			return ((::Epic::OnlineServices::Sessions::AttributeDataValue*(*)(::System::Int64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::Epic::OnlineServices::Sessions::AttributeDataValue* op_Implicit_1(::System::Double a1)
		{
			return ((::Epic::OnlineServices::Sessions::AttributeDataValue*(*)(::System::Double))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::Epic::OnlineServices::Sessions::AttributeDataValue* op_Implicit_2(::System::Boolean a1)
		{
			return ((::Epic::OnlineServices::Sessions::AttributeDataValue*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_OP_IMPLICIT_2_OFFSET))(a1);
		}

		static ::Epic::OnlineServices::Sessions::AttributeDataValue* op_Implicit_3(::System::String* a1)
		{
			return ((::Epic::OnlineServices::Sessions::AttributeDataValue*(*)(::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_OP_IMPLICIT_3_OFFSET))(a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeDataValueInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sessions::AttributeDataValueInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ATTRIBUTEDATAVALUE_SET_1_OFFSET))(this, a1);
		}
	};
}
