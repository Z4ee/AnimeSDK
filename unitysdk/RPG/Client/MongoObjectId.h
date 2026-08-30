#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define RPG_CLIENT_MONGOOBJECTID_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3B9CDF0)
#define RPG_CLIENT_MONGOOBJECTID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B9CDD0)
#define RPG_CLIENT_MONGOOBJECTID_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B9CDA0)
#define RPG_CLIENT_MONGOOBJECTID_FROMBYTEARRAY_1_OFFSET UNITYSDK_OFFSET(0x1E593040)
#define RPG_CLIENT_MONGOOBJECTID_FROMBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1E593010)
#define RPG_CLIENT_MONGOOBJECTID_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x1E592FE0)
#define RPG_CLIENT_MONGOOBJECTID_GENERATENEW_1_OFFSET UNITYSDK_OFFSET(0x1E593FB0)
#define RPG_CLIENT_MONGOOBJECTID_GENERATENEW_2_OFFSET UNITYSDK_OFFSET(0x1E5940D0)
#define RPG_CLIENT_MONGOOBJECTID_GENERATENEW_OFFSET UNITYSDK_OFFSET(0x1E593F40)
#define RPG_CLIENT_MONGOOBJECTID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B9CD00)
#define RPG_CLIENT_MONGOOBJECTID_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x2E7EC30)
#define RPG_CLIENT_MONGOOBJECTID_GET_CREATIONTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xDAB0)
#define RPG_CLIENT_MONGOOBJECTID_GET_CREATIONTIME_OFFSET UNITYSDK_OFFSET(0x3B9D370)
#define RPG_CLIENT_MONGOOBJECTID_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1E5942B0)
#define RPG_CLIENT_MONGOOBJECTID_GET__CREATIONTIMESTAMPPART_OFFSET UNITYSDK_OFFSET(0xDAB0)
#define RPG_CLIENT_MONGOOBJECTID_GET__INCCOUNTERPART_OFFSET UNITYSDK_OFFSET(0x3B9D3E0)
#define RPG_CLIENT_MONGOOBJECTID_GET__RANDOMPART_OFFSET UNITYSDK_OFFSET(0x3B9D3D0)
#define RPG_CLIENT_MONGOOBJECTID_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x3B9D2B0)
#define RPG_CLIENT_MONGOOBJECTID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E593070)
#define RPG_CLIENT_MONGOOBJECTID_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1E593210)
#define RPG_CLIENT_MONGOOBJECTID_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1E593170)
#define RPG_CLIENT_MONGOOBJECTID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E5930B0)
#define RPG_CLIENT_MONGOOBJECTID_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1E5931C0)
#define RPG_CLIENT_MONGOOBJECTID_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1E5930D0)
#define RPG_CLIENT_MONGOOBJECTID_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x3B9CE40)
#define RPG_CLIENT_MONGOOBJECTID_TOBYTEARRAY_1_OFFSET UNITYSDK_OFFSET(0x3B9D360)
#define RPG_CLIENT_MONGOOBJECTID_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x3B9D320)
#define RPG_CLIENT_MONGOOBJECTID_TOBYTE_OFFSET UNITYSDK_OFFSET(0x3B9CE90)
#define RPG_CLIENT_MONGOOBJECTID_TOCHAR_OFFSET UNITYSDK_OFFSET(0x3B9CEE0)
#define RPG_CLIENT_MONGOOBJECTID_TODATETIME_OFFSET UNITYSDK_OFFSET(0x3B9CF30)
#define RPG_CLIENT_MONGOOBJECTID_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x3B9CF80)
#define RPG_CLIENT_MONGOOBJECTID_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x3B9CFD0)
#define RPG_CLIENT_MONGOOBJECTID_TOINT16_OFFSET UNITYSDK_OFFSET(0x3B9D020)
#define RPG_CLIENT_MONGOOBJECTID_TOINT32_OFFSET UNITYSDK_OFFSET(0x3B9D070)
#define RPG_CLIENT_MONGOOBJECTID_TOINT64_OFFSET UNITYSDK_OFFSET(0x3B9D0C0)
#define RPG_CLIENT_MONGOOBJECTID_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x3B9D110)
#define RPG_CLIENT_MONGOOBJECTID_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x3B9D160)
#define RPG_CLIENT_MONGOOBJECTID_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3B9CD40)
#define RPG_CLIENT_MONGOOBJECTID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B9CD40)
#define RPG_CLIENT_MONGOOBJECTID_TOTYPE_OFFSET UNITYSDK_OFFSET(0x3B9D1B0)
#define RPG_CLIENT_MONGOOBJECTID_TOUINT16_OFFSET UNITYSDK_OFFSET(0x3B9D1C0)
#define RPG_CLIENT_MONGOOBJECTID_TOUINT32_OFFSET UNITYSDK_OFFSET(0x3B9D210)
#define RPG_CLIENT_MONGOOBJECTID_TOUINT64_OFFSET UNITYSDK_OFFSET(0x3B9D260)
#define RPG_CLIENT_MONGOOBJECTID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E593B90)
#define RPG_CLIENT_MONGOOBJECTID__CREATE_OFFSET UNITYSDK_OFFSET(0x1E594140)
#define RPG_CLIENT_MONGOOBJECTID__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B9CCE0)
#define RPG_CLIENT_MONGOOBJECTID__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3B9CCF0)
#define RPG_CLIENT_MONGOOBJECTID__CTOR_3_OFFSET UNITYSDK_OFFSET(0x7CCB0)
#define RPG_CLIENT_MONGOOBJECTID__CTOR_OFFSET UNITYSDK_OFFSET(0x3B9CCD0)
#define RPG_CLIENT_MONGOOBJECTID__FROMBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1E592CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MongoObjectId_TypeDefinitionIndex = 34627;

	struct alignas(4) MongoObjectId
	{
		static ::System::UInt64* StaticGet__RandomPartValue()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(MongoObjectId_TypeDefinitionIndex)->GetStaticField(0x680);
		}
		static ::System::Int32* StaticGet__IncCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MongoObjectId_TypeDefinitionIndex)->GetStaticField(0x688);
		}
		static ::RPG::Client::MongoObjectId* StaticGet__Empty()
		{
			return (::RPG::Client::MongoObjectId*)Il2CppClass::FromTypeDefinitionIndex(MongoObjectId_TypeDefinitionIndex)->GetStaticField(0x68C);
		}
		// static const ::System::UInt64 _RandomPartValueMask = 0xFFFFFFFFFF; // 0x0
		// static const ::System::Int32 _IncCounterMask = 0xFFFFFF; // 0x0
		::System::UInt32 _LoPart; // 0x10
		::System::UInt32 _MiPart; // 0x14
		::System::UInt32 _HiPart; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID__CTOR_3_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID__CCTOR_OFFSET))();
		}

		static ::RPG::Client::MongoObjectId FromString(::System::String* a1)
		{
			return ((::RPG::Client::MongoObjectId(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_FROMSTRING_OFFSET))(a1);
		}

		static ::RPG::Client::MongoObjectId FromByteArray(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::RPG::Client::MongoObjectId(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_FROMBYTEARRAY_OFFSET))(a1);
		}

		static ::RPG::Client::MongoObjectId FromByteArray_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::MongoObjectId(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_FROMBYTEARRAY_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::RPG::Client::MongoObjectId a1, ::RPG::Client::MongoObjectId a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MongoObjectId, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::MongoObjectId a1, ::RPG::Client::MongoObjectId a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MongoObjectId, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan(::RPG::Client::MongoObjectId a1, ::RPG::Client::MongoObjectId a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MongoObjectId, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_OP_LESSTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan(::RPG::Client::MongoObjectId a1, ::RPG::Client::MongoObjectId a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MongoObjectId, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_OP_GREATERTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual(::RPG::Client::MongoObjectId a1, ::RPG::Client::MongoObjectId a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MongoObjectId, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::RPG::Client::MongoObjectId a1, ::RPG::Client::MongoObjectId a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MongoObjectId, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::Client::MongoObjectId a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::RPG::Client::MongoObjectId a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_COMPARETO_OFFSET))(this, a1);
		}

		::System::TypeCode GetTypeCode()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_GETTYPECODE_OFFSET))(this);
		}

		::System::Boolean ToBoolean(::System::IFormatProvider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOBOOLEAN_OFFSET))(this, a1);
		}

		::System::Byte ToByte(::System::IFormatProvider* a1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOBYTE_OFFSET))(this, a1);
		}

		::System::Char ToChar(::System::IFormatProvider* a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOCHAR_OFFSET))(this, a1);
		}

		/*
		::System::DateTime ToDateTime(::System::IFormatProvider* a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TODATETIME_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Decimal ToDecimal(::System::IFormatProvider* a1)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TODECIMAL_OFFSET))(this, a1);
		}
		*/

		::System::Double ToDouble(::System::IFormatProvider* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TODOUBLE_OFFSET))(this, a1);
		}

		::System::Int16 ToInt16(::System::IFormatProvider* a1)
		{
			return ((::System::Int16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOINT16_OFFSET))(this, a1);
		}

		::System::Int32 ToInt32(::System::IFormatProvider* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOINT32_OFFSET))(this, a1);
		}

		::System::Int64 ToInt64(::System::IFormatProvider* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOINT64_OFFSET))(this, a1);
		}

		::System::SByte ToSByte(::System::IFormatProvider* a1)
		{
			return ((::System::SByte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOSBYTE_OFFSET))(this, a1);
		}

		::System::Single ToSingle(::System::IFormatProvider* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOSINGLE_OFFSET))(this, a1);
		}

		::System::String* ToString_1(::System::IFormatProvider* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::Object* ToType(::System::Type* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOTYPE_OFFSET))(this, a1, a2);
		}

		::System::UInt16 ToUInt16(::System::IFormatProvider* a1)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOUINT16_OFFSET))(this, a1);
		}

		::System::UInt32 ToUInt32(::System::IFormatProvider* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOUINT32_OFFSET))(this, a1);
		}

		::System::UInt64 ToUInt64(::System::IFormatProvider* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOUINT64_OFFSET))(this, a1);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_ISEMPTY_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* ToByteArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOBYTEARRAY_OFFSET))(this);
		}

		::System::Void ToByteArray_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOBYTEARRAY_1_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::MongoObjectId GenerateNew()
		{
			return ((::RPG::Client::MongoObjectId(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_GENERATENEW_OFFSET))();
		}

		/*
		static ::RPG::Client::MongoObjectId GenerateNew_1(::System::DateTime a1)
		{
			return ((::RPG::Client::MongoObjectId(*)(::System::DateTime))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_GENERATENEW_1_OFFSET))(a1);
		}
		*/

		static ::RPG::Client::MongoObjectId GenerateNew_2(::System::UInt32 a1)
		{
			return ((::RPG::Client::MongoObjectId(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_GENERATENEW_2_OFFSET))(a1);
		}

		static ::RPG::Client::MongoObjectId _Create(::System::UInt32 a1, ::System::UInt64 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::MongoObjectId(*)(::System::UInt32, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID__CREATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _FromByteArray(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::UInt32& a3, ::System::UInt32& a4, ::System::UInt32& a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID__FROMBYTEARRAY_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::UInt32 get_CreationTimestamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_GET_CREATIONTIMESTAMP_OFFSET))(this);
		}

		/*
		::System::DateTime get_CreationTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_GET_CREATIONTIME_OFFSET))(this);
		}
		*/

		::System::UInt32 get__CreationTimestampPart()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_GET__CREATIONTIMESTAMPPART_OFFSET))(this);
		}

		::System::UInt64 get__RandomPart()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_GET__RANDOMPART_OFFSET))(this);
		}

		::System::UInt32 get__IncCounterPart()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_GET__INCCOUNTERPART_OFFSET))(this);
		}

		static ::RPG::Client::MongoObjectId get_Empty()
		{
			return ((::RPG::Client::MongoObjectId(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_GET_EMPTY_OFFSET))();
		}
	};
}
