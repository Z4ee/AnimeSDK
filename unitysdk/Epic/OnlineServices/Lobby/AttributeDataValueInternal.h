#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AttributeType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class AttributeDataValue; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A38A0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x9A35F0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x9A34C0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_GET_ASINT64_OFFSET UNITYSDK_OFFSET(0x9A3390)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_GET_ASUTF8_OFFSET UNITYSDK_OFFSET(0x9A3700)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9A3830)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x9A3670)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x9A3550)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_ASINT64_OFFSET UNITYSDK_OFFSET(0x9A3420)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_ASUTF8_OFFSET UNITYSDK_OFFSET(0x9A3780)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9A3820)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AttributeDataValueInternal_TypeDefinitionIndex = 35612;

	struct alignas(8) AttributeDataValueInternal
	{
		::System::Int64 m_AsInt64; // 0x10
		::System::Double m_AsDouble; // 0x10
		::System::Int32 m_AsBool; // 0x10
		::System::IntPtr m_AsUtf8; // 0x10
		::Epic::OnlineServices::AttributeType m_ValueType; // 0x18

		/*
		::System::Nullable_1<::System::Int64> get_AsInt64()
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_GET_ASINT64_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_AsInt64(::System::Nullable_1<::System::Int64> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_ASINT64_OFFSET))(this, value);
		}
		*/

		/*
		::System::Nullable_1<::System::Double> get_AsDouble()
		{
			return ((::System::Nullable_1<::System::Double>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_GET_ASDOUBLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_AsDouble(::System::Nullable_1<::System::Double> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Double>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_ASDOUBLE_OFFSET))(this, value);
		}
		*/

		/*
		::System::Nullable_1<::System::Boolean> get_AsBool()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_GET_ASBOOL_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_AsBool(::System::Nullable_1<::System::Boolean> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_ASBOOL_OFFSET))(this, value);
		}
		*/

		::System::String* get_AsUtf8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_GET_ASUTF8_OFFSET))(this);
		}

		::System::Void set_AsUtf8(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_ASUTF8_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::AttributeDataValue* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::AttributeDataValue*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
