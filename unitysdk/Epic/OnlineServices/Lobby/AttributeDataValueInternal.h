#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AttributeType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class AttributeDataValue; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C4F160)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x3C4EEA0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x3C4ED70)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_GET_ASINT64_OFFSET UNITYSDK_OFFSET(0x3C4EC40)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_GET_ASUTF8_OFFSET UNITYSDK_OFFSET(0x3C4EFB0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C4F0E0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x3C4EF20)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x3C4EE00)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_ASINT64_OFFSET UNITYSDK_OFFSET(0x3C4ECD0)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_ASUTF8_OFFSET UNITYSDK_OFFSET(0x3C4F030)
#define EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C4F0D0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int AttributeDataValueInternal_TypeDefinitionIndex = 45676;

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
		::System::Void set_AsInt64(::System::Nullable_1<::System::Int64> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int64>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_ASINT64_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Nullable_1<::System::Double> get_AsDouble()
		{
			return ((::System::Nullable_1<::System::Double>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_GET_ASDOUBLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_AsDouble(::System::Nullable_1<::System::Double> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Double>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_ASDOUBLE_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Nullable_1<::System::Boolean> get_AsBool()
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_GET_ASBOOL_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_AsBool(::System::Nullable_1<::System::Boolean> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_ASBOOL_OFFSET))(this, a1);
		}
		*/

		::System::String* get_AsUtf8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_GET_ASUTF8_OFFSET))(this);
		}

		::System::Void set_AsUtf8(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_ASUTF8_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::AttributeDataValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::AttributeDataValue*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_ATTRIBUTEDATAVALUEINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
