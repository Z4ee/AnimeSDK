#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define RPG_CLIENT_MONGOOBJECTID_COMPARETO_OFFSET UNITYSDK_OFFSET(0x20FA480)
#define RPG_CLIENT_MONGOOBJECTID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20FA460)
#define RPG_CLIENT_MONGOOBJECTID_EQUALS_OFFSET UNITYSDK_OFFSET(0x20FA430)
#define RPG_CLIENT_MONGOOBJECTID_FROMBYTEARRAY_1_OFFSET UNITYSDK_OFFSET(0x18343330)
#define RPG_CLIENT_MONGOOBJECTID_FROMBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x18343300)
#define RPG_CLIENT_MONGOOBJECTID_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x183432D0)
#define RPG_CLIENT_MONGOOBJECTID_GENERATENEW_1_OFFSET UNITYSDK_OFFSET(0x18344260)
#define RPG_CLIENT_MONGOOBJECTID_GENERATENEW_2_OFFSET UNITYSDK_OFFSET(0x18344300)
#define RPG_CLIENT_MONGOOBJECTID_GENERATENEW_OFFSET UNITYSDK_OFFSET(0x18344170)
#define RPG_CLIENT_MONGOOBJECTID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20FA390)
#define RPG_CLIENT_MONGOOBJECTID_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x1515720)
#define RPG_CLIENT_MONGOOBJECTID_GET_CREATIONTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xD250)
#define RPG_CLIENT_MONGOOBJECTID_GET_CREATIONTIME_OFFSET UNITYSDK_OFFSET(0x20FAA00)
#define RPG_CLIENT_MONGOOBJECTID_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x183444E0)
#define RPG_CLIENT_MONGOOBJECTID_GET__CREATIONTIMESTAMPPART_OFFSET UNITYSDK_OFFSET(0xD250)
#define RPG_CLIENT_MONGOOBJECTID_GET__INCCOUNTERPART_OFFSET UNITYSDK_OFFSET(0x20FAA70)
#define RPG_CLIENT_MONGOOBJECTID_GET__RANDOMPART_OFFSET UNITYSDK_OFFSET(0x20FAA60)
#define RPG_CLIENT_MONGOOBJECTID_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x20FA940)
#define RPG_CLIENT_MONGOOBJECTID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18343360)
#define RPG_CLIENT_MONGOOBJECTID_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x18343500)
#define RPG_CLIENT_MONGOOBJECTID_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x18343460)
#define RPG_CLIENT_MONGOOBJECTID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x183433A0)
#define RPG_CLIENT_MONGOOBJECTID_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x183434B0)
#define RPG_CLIENT_MONGOOBJECTID_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x183433C0)
#define RPG_CLIENT_MONGOOBJECTID_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x20FA4D0)
#define RPG_CLIENT_MONGOOBJECTID_TOBYTEARRAY_1_OFFSET UNITYSDK_OFFSET(0x20FA9F0)
#define RPG_CLIENT_MONGOOBJECTID_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x20FA9B0)
#define RPG_CLIENT_MONGOOBJECTID_TOBYTE_OFFSET UNITYSDK_OFFSET(0x20FA520)
#define RPG_CLIENT_MONGOOBJECTID_TOCHAR_OFFSET UNITYSDK_OFFSET(0x20FA570)
#define RPG_CLIENT_MONGOOBJECTID_TODATETIME_OFFSET UNITYSDK_OFFSET(0x20FA5C0)
#define RPG_CLIENT_MONGOOBJECTID_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x20FA610)
#define RPG_CLIENT_MONGOOBJECTID_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x20FA660)
#define RPG_CLIENT_MONGOOBJECTID_TOINT16_OFFSET UNITYSDK_OFFSET(0x20FA6B0)
#define RPG_CLIENT_MONGOOBJECTID_TOINT32_OFFSET UNITYSDK_OFFSET(0x20FA700)
#define RPG_CLIENT_MONGOOBJECTID_TOINT64_OFFSET UNITYSDK_OFFSET(0x20FA750)
#define RPG_CLIENT_MONGOOBJECTID_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x20FA7A0)
#define RPG_CLIENT_MONGOOBJECTID_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x20FA7F0)
#define RPG_CLIENT_MONGOOBJECTID_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x20FA3D0)
#define RPG_CLIENT_MONGOOBJECTID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20FA3D0)
#define RPG_CLIENT_MONGOOBJECTID_TOTYPE_OFFSET UNITYSDK_OFFSET(0x20FA840)
#define RPG_CLIENT_MONGOOBJECTID_TOUINT16_OFFSET UNITYSDK_OFFSET(0x20FA850)
#define RPG_CLIENT_MONGOOBJECTID_TOUINT32_OFFSET UNITYSDK_OFFSET(0x20FA8A0)
#define RPG_CLIENT_MONGOOBJECTID_TOUINT64_OFFSET UNITYSDK_OFFSET(0x20FA8F0)
#define RPG_CLIENT_MONGOOBJECTID__CCTOR_OFFSET UNITYSDK_OFFSET(0x18343EE0)
#define RPG_CLIENT_MONGOOBJECTID__CREATE_OFFSET UNITYSDK_OFFSET(0x18344370)
#define RPG_CLIENT_MONGOOBJECTID__CTOR_1_OFFSET UNITYSDK_OFFSET(0x20FA370)
#define RPG_CLIENT_MONGOOBJECTID__CTOR_2_OFFSET UNITYSDK_OFFSET(0x20FA380)
#define RPG_CLIENT_MONGOOBJECTID__CTOR_3_OFFSET UNITYSDK_OFFSET(0x7B070)
#define RPG_CLIENT_MONGOOBJECTID__CTOR_OFFSET UNITYSDK_OFFSET(0x20FA360)
#define RPG_CLIENT_MONGOOBJECTID__FROMBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x18342F00)

namespace RPG::Client
{
	inline static constexpr unsigned int MongoObjectId_TypeDefinitionIndex = 9523;

	struct alignas(4) MongoObjectId
	{
		static ::System::UInt64* StaticGet__RandomPartValue()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(MongoObjectId_TypeDefinitionIndex)->GetStaticField(0x6520);
		}
		static ::System::Int32* StaticGet__IncCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MongoObjectId_TypeDefinitionIndex)->GetStaticField(0x6528);
		}
		static ::RPG::Client::MongoObjectId* StaticGet__Empty()
		{
			return (::RPG::Client::MongoObjectId*)Il2CppClass::FromTypeDefinitionIndex(MongoObjectId_TypeDefinitionIndex)->GetStaticField(0x652C);
		}
		// static const ::System::UInt64 _RandomPartValueMask = 0xFFFFFFFFFF; // 0x0
		// static const ::System::Int32 _IncCounterMask = 0xFFFFFF; // 0x0
		::System::UInt32 _LoPart; // 0x10
		::System::UInt32 _MiPart; // 0x14
		::System::UInt32 _HiPart; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Byte>* buf, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID__CTOR_OFFSET))(this, buf, offset);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID__CTOR_1_OFFSET))(this, bytes);
		}

		::System::Void _ctor_2(::System::String* hex)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID__CTOR_2_OFFSET))(this, hex);
		}

		::System::Void _ctor_3(::System::UInt32 loPart, ::System::UInt32 miPart, ::System::UInt32 hiPart)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID__CTOR_3_OFFSET))(this, loPart, miPart, hiPart);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID__CCTOR_OFFSET))();
		}

		static ::RPG::Client::MongoObjectId FromString(::System::String* hex)
		{
			return ((::RPG::Client::MongoObjectId(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_FROMSTRING_OFFSET))(hex);
		}

		static ::RPG::Client::MongoObjectId FromByteArray(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::RPG::Client::MongoObjectId(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_FROMBYTEARRAY_OFFSET))(bytes);
		}

		static ::RPG::Client::MongoObjectId FromByteArray_1(::Il2CppArray<::System::Byte>* buf, ::System::Int32 offset)
		{
			return ((::RPG::Client::MongoObjectId(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_FROMBYTEARRAY_1_OFFSET))(buf, offset);
		}

		static ::System::Boolean op_Equality(::RPG::Client::MongoObjectId lhs, ::RPG::Client::MongoObjectId rhs)
		{
			return ((::System::Boolean(*)(::RPG::Client::MongoObjectId, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::MongoObjectId lhs, ::RPG::Client::MongoObjectId rhs)
		{
			return ((::System::Boolean(*)(::RPG::Client::MongoObjectId, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_LessThan(::RPG::Client::MongoObjectId lhs, ::RPG::Client::MongoObjectId rhs)
		{
			return ((::System::Boolean(*)(::RPG::Client::MongoObjectId, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_OP_LESSTHAN_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_GreaterThan(::RPG::Client::MongoObjectId lhs, ::RPG::Client::MongoObjectId rhs)
		{
			return ((::System::Boolean(*)(::RPG::Client::MongoObjectId, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_OP_GREATERTHAN_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_LessThanOrEqual(::RPG::Client::MongoObjectId lhs, ::RPG::Client::MongoObjectId rhs)
		{
			return ((::System::Boolean(*)(::RPG::Client::MongoObjectId, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_OP_LESSTHANOREQUAL_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::RPG::Client::MongoObjectId lhs, ::RPG::Client::MongoObjectId rhs)
		{
			return ((::System::Boolean(*)(::RPG::Client::MongoObjectId, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_OP_GREATERTHANOREQUAL_OFFSET))(lhs, rhs);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::RPG::Client::MongoObjectId other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 CompareTo(::RPG::Client::MongoObjectId other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_COMPARETO_OFFSET))(this, other);
		}

		::System::TypeCode GetTypeCode()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_GETTYPECODE_OFFSET))(this);
		}

		::System::Boolean ToBoolean(::System::IFormatProvider* provider)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOBOOLEAN_OFFSET))(this, provider);
		}

		::System::Byte ToByte(::System::IFormatProvider* provider)
		{
			return ((::System::Byte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOBYTE_OFFSET))(this, provider);
		}

		::System::Char ToChar(::System::IFormatProvider* provider)
		{
			return ((::System::Char(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOCHAR_OFFSET))(this, provider);
		}

		/*
		::System::DateTime ToDateTime(::System::IFormatProvider* provider)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TODATETIME_OFFSET))(this, provider);
		}
		*/

		/*
		::System::Decimal ToDecimal(::System::IFormatProvider* provider)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TODECIMAL_OFFSET))(this, provider);
		}
		*/

		::System::Double ToDouble(::System::IFormatProvider* provider)
		{
			return ((::System::Double(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TODOUBLE_OFFSET))(this, provider);
		}

		::System::Int16 ToInt16(::System::IFormatProvider* provider)
		{
			return ((::System::Int16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOINT16_OFFSET))(this, provider);
		}

		::System::Int32 ToInt32(::System::IFormatProvider* provider)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOINT32_OFFSET))(this, provider);
		}

		::System::Int64 ToInt64(::System::IFormatProvider* provider)
		{
			return ((::System::Int64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOINT64_OFFSET))(this, provider);
		}

		::System::SByte ToSByte(::System::IFormatProvider* provider)
		{
			return ((::System::SByte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOSBYTE_OFFSET))(this, provider);
		}

		::System::Single ToSingle(::System::IFormatProvider* provider)
		{
			return ((::System::Single(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOSINGLE_OFFSET))(this, provider);
		}

		::System::String* ToString_1(::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOSTRING_1_OFFSET))(this, provider);
		}

		::System::Object* ToType(::System::Type* conversionType, ::System::IFormatProvider* provider)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOTYPE_OFFSET))(this, conversionType, provider);
		}

		::System::UInt16 ToUInt16(::System::IFormatProvider* provider)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOUINT16_OFFSET))(this, provider);
		}

		::System::UInt32 ToUInt32(::System::IFormatProvider* provider)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOUINT32_OFFSET))(this, provider);
		}

		::System::UInt64 ToUInt64(::System::IFormatProvider* provider)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOUINT64_OFFSET))(this, provider);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_ISEMPTY_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* ToByteArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOBYTEARRAY_OFFSET))(this);
		}

		::System::Void ToByteArray_1(::Il2CppArray<::System::Byte>* buf, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_TOBYTEARRAY_1_OFFSET))(this, buf, offset);
		}

		static ::RPG::Client::MongoObjectId GenerateNew()
		{
			return ((::RPG::Client::MongoObjectId(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_GENERATENEW_OFFSET))();
		}

		/*
		static ::RPG::Client::MongoObjectId GenerateNew_1(::System::DateTime time)
		{
			return ((::RPG::Client::MongoObjectId(*)(::System::DateTime))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_GENERATENEW_1_OFFSET))(time);
		}
		*/

		static ::RPG::Client::MongoObjectId GenerateNew_2(::System::UInt32 timestamp)
		{
			return ((::RPG::Client::MongoObjectId(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID_GENERATENEW_2_OFFSET))(timestamp);
		}

		static ::RPG::Client::MongoObjectId _Create(::System::UInt32 timestamp, ::System::UInt64 randomPart, ::System::UInt32 incCounter)
		{
			return ((::RPG::Client::MongoObjectId(*)(::System::UInt32, ::System::UInt64, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID__CREATE_OFFSET))(timestamp, randomPart, incCounter);
		}

		static ::System::Void _FromByteArray(::Il2CppArray<::System::Byte>* buf, ::System::Int32 offset, ::System::UInt32& loPart, ::System::UInt32& miPart, ::System::UInt32& hiPart)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONGOOBJECTID__FROMBYTEARRAY_OFFSET))(buf, offset, loPart, miPart, hiPart);
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
