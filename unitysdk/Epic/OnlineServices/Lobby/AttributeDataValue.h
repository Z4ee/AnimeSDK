#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AttributeType.h"
#include "unitysdk/Epic/OnlineServices/Lobby/AttributeDataValueInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x8EA3FE0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x8EA3E80)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_GET_ASINT64_OFFSET UNITYSDK_OFFSET(0x8EA3D20)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_GET_ASUTF8_OFFSET UNITYSDK_OFFSET(0x8EA4120)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x8EA4280)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x8EA4400)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x8EA4560)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x8EA46A0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x8EA42A0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_SET_1_OFFSET UNITYSDK_OFFSET(0x8EA5100)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x8EA4060)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x8EA3F20)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_SET_ASINT64_OFFSET UNITYSDK_OFFSET(0x8EA3DC0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_SET_ASUTF8_OFFSET UNITYSDK_OFFSET(0x8EA41A0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_SET_OFFSET UNITYSDK_OFFSET(0x8EA47F0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_SET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x8EA4290)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x8EA43F0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AttributeDataValue_TypeDefinitionIndex = 41829;

	class AttributeDataValue : public ::System::Object
	{
	public:
		::System::String* m_AsUtf8; // 0x10
		::Epic::OnlineServices::AttributeType m_ValueType; // 0x18
		::System::Nullable_1<::System::Boolean> m_AsBool; // 0x1C
		::System::Nullable_1<::System::Double> m_AsDouble; // 0x20
		::System::Nullable_1<::System::Int64> m_AsInt64; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int64> get_AsInt64()
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_GET_ASINT64_OFFSET))(this);
		}

		::System::Void set_AsInt64(::System::Nullable_1<::System::Int64> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_SET_ASINT64_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Double> get_AsDouble()
		{
			return ((::System::Nullable_1<::System::Double>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Void set_AsDouble(::System::Nullable_1<::System::Double> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Double>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_SET_ASDOUBLE_OFFSET))(this, value);
		}

		::System::Nullable_1<::System::Boolean> get_AsBool()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_GET_ASBOOL_OFFSET))(this);
		}

		::System::Void set_AsBool(::System::Nullable_1<::System::Boolean> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_SET_ASBOOL_OFFSET))(this, value);
		}

		::System::String* get_AsUtf8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_GET_ASUTF8_OFFSET))(this);
		}

		::System::Void set_AsUtf8(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_SET_ASUTF8_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AttributeType get_ValueType()
		{
			return ((::Epic::OnlineServices::AttributeType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Void set_ValueType(::Epic::OnlineServices::AttributeType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AttributeType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_SET_VALUETYPE_OFFSET))(this, value);
		}

		static ::Epic::OnlineServices::Lobby::AttributeDataValue* op_Implicit(::System::Int64 value)
		{
			return ((::Epic::OnlineServices::Lobby::AttributeDataValue*(*)(::System::Int64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_OP_IMPLICIT_OFFSET))(value);
		}

		static ::Epic::OnlineServices::Lobby::AttributeDataValue* op_Implicit_1(::System::Double value)
		{
			return ((::Epic::OnlineServices::Lobby::AttributeDataValue*(*)(::System::Double))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_OP_IMPLICIT_1_OFFSET))(value);
		}

		static ::Epic::OnlineServices::Lobby::AttributeDataValue* op_Implicit_2(::System::Boolean value)
		{
			return ((::Epic::OnlineServices::Lobby::AttributeDataValue*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_OP_IMPLICIT_2_OFFSET))(value);
		}

		static ::Epic::OnlineServices::Lobby::AttributeDataValue* op_Implicit_3(::System::String* value)
		{
			return ((::Epic::OnlineServices::Lobby::AttributeDataValue*(*)(::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_OP_IMPLICIT_3_OFFSET))(value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeDataValueInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Lobby::AttributeDataValueInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUE_SET_1_OFFSET))(this, other);
		}
	};
}
