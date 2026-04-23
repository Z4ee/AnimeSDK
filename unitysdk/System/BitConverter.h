#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_BITCONVERTER_AMILITTLEENDIAN_OFFSET UNITYSDK_OFFSET(0x177E4CC0)
#define SYSTEM_BITCONVERTER_DOUBLETOINT64BITS_OFFSET UNITYSDK_OFFSET(0x177E5860)
#define SYSTEM_BITCONVERTER_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x177E4D20)
#define SYSTEM_BITCONVERTER_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x177E4D50)
#define SYSTEM_BITCONVERTER_GETBYTES_3_OFFSET UNITYSDK_OFFSET(0x177E4D80)
#define SYSTEM_BITCONVERTER_GETBYTES_4_OFFSET UNITYSDK_OFFSET(0x177E4DB0)
#define SYSTEM_BITCONVERTER_GETBYTES_5_OFFSET UNITYSDK_OFFSET(0x177E4DE0)
#define SYSTEM_BITCONVERTER_GETBYTES_6_OFFSET UNITYSDK_OFFSET(0x177E4E10)
#define SYSTEM_BITCONVERTER_GETBYTES_7_OFFSET UNITYSDK_OFFSET(0x177E4E40)
#define SYSTEM_BITCONVERTER_GETBYTES_8_OFFSET UNITYSDK_OFFSET(0x177E4E70)
#define SYSTEM_BITCONVERTER_GETBYTES_9_OFFSET UNITYSDK_OFFSET(0x177E4EA0)
#define SYSTEM_BITCONVERTER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x177E4CD0)
#define SYSTEM_BITCONVERTER_GETHEXVALUE_OFFSET UNITYSDK_OFFSET(0x177E5410)
#define SYSTEM_BITCONVERTER_INT64BITSTODOUBLE_OFFSET UNITYSDK_OFFSET(0x177E5870)
#define SYSTEM_BITCONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x177E5780)
#define SYSTEM_BITCONVERTER_TOCHAR_OFFSET UNITYSDK_OFFSET(0x177E4ED0)
#define SYSTEM_BITCONVERTER_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x177E53B0)
#define SYSTEM_BITCONVERTER_TOINT16_OFFSET UNITYSDK_OFFSET(0x177E4F70)
#define SYSTEM_BITCONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x177E5010)
#define SYSTEM_BITCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x177E50D0)
#define SYSTEM_BITCONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x177E5350)
#define SYSTEM_BITCONVERTER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x177E5710)
#define SYSTEM_BITCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x177E5420)
#define SYSTEM_BITCONVERTER_TOUINT16_OFFSET UNITYSDK_OFFSET(0x177E5210)
#define SYSTEM_BITCONVERTER_TOUINT32_OFFSET UNITYSDK_OFFSET(0x177E52B0)
#define SYSTEM_BITCONVERTER_TOUINT64_OFFSET UNITYSDK_OFFSET(0x177E5300)
#define SYSTEM_BITCONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x177E5880)

namespace System
{
	inline static constexpr unsigned int BitConverter_TypeDefinitionIndex = 205;

	class BitConverter : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_IsLittleEndian()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BitConverter_TypeDefinitionIndex)->GetStaticField(0x2A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER__CCTOR_OFFSET))();
		}

		static ::System::Boolean AmILittleEndian()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_AMILITTLEENDIAN_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* GetBytes(::System::Boolean value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_1(::System::Char value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_1_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_2(::System::Int16 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_2_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_3(::System::Int32 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_3_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_4(::System::Int64 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_4_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_5(::System::UInt16 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_5_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_6(::System::UInt32 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_6_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_7(::System::UInt64 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_7_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_8(::System::Single value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_8_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_9(::System::Double value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_9_OFFSET))(value);
		}

		static ::System::Char ToChar(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Char(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOCHAR_OFFSET))(value, startIndex);
		}

		static ::System::Int16 ToInt16(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Int16(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOINT16_OFFSET))(value, startIndex);
		}

		static ::System::Int32 ToInt32(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOINT32_OFFSET))(value, startIndex);
		}

		static ::System::Int64 ToInt64(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Int64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOINT64_OFFSET))(value, startIndex);
		}

		static ::System::UInt16 ToUInt16(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::UInt16(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOUINT16_OFFSET))(value, startIndex);
		}

		static ::System::UInt32 ToUInt32(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOUINT32_OFFSET))(value, startIndex);
		}

		static ::System::UInt64 ToUInt64(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::UInt64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOUINT64_OFFSET))(value, startIndex);
		}

		static ::System::Single ToSingle(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOSINGLE_OFFSET))(value, startIndex);
		}

		static ::System::Double ToDouble(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Double(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TODOUBLE_OFFSET))(value, startIndex);
		}

		static ::System::Char GetHexValue(::System::Int32 i)
		{
			return ((::System::Char(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETHEXVALUE_OFFSET))(i);
		}

		static ::System::String* ToString(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex, ::System::Int32 length)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOSTRING_OFFSET))(value, startIndex, length);
		}

		static ::System::String* ToString_1(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOSTRING_1_OFFSET))(value);
		}

		static ::System::Boolean ToBoolean(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOBOOLEAN_OFFSET))(value, startIndex);
		}

		static ::System::Int64 DoubleToInt64Bits(::System::Double value)
		{
			return ((::System::Int64(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_DOUBLETOINT64BITS_OFFSET))(value);
		}

		static ::System::Double Int64BitsToDouble(::System::Int64 value)
		{
			return ((::System::Double(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_INT64BITSTODOUBLE_OFFSET))(value);
		}
	};
}
