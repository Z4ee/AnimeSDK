#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_BITCONVERTER_AMILITTLEENDIAN_OFFSET UNITYSDK_OFFSET(0x1C9C0920)
#define SYSTEM_BITCONVERTER_DOUBLETOINT64BITS_OFFSET UNITYSDK_OFFSET(0x1C9C1450)
#define SYSTEM_BITCONVERTER_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1C9C0970)
#define SYSTEM_BITCONVERTER_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x1C9C09A0)
#define SYSTEM_BITCONVERTER_GETBYTES_3_OFFSET UNITYSDK_OFFSET(0x1C9C09D0)
#define SYSTEM_BITCONVERTER_GETBYTES_4_OFFSET UNITYSDK_OFFSET(0x1C9C0A00)
#define SYSTEM_BITCONVERTER_GETBYTES_5_OFFSET UNITYSDK_OFFSET(0x1C9C0A30)
#define SYSTEM_BITCONVERTER_GETBYTES_6_OFFSET UNITYSDK_OFFSET(0x1C9C0A60)
#define SYSTEM_BITCONVERTER_GETBYTES_7_OFFSET UNITYSDK_OFFSET(0x1C9C0A90)
#define SYSTEM_BITCONVERTER_GETBYTES_8_OFFSET UNITYSDK_OFFSET(0x1C9C0AC0)
#define SYSTEM_BITCONVERTER_GETBYTES_9_OFFSET UNITYSDK_OFFSET(0x1C9C0AF0)
#define SYSTEM_BITCONVERTER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1C9C0930)
#define SYSTEM_BITCONVERTER_GETHEXVALUE_OFFSET UNITYSDK_OFFSET(0x1C9C1040)
#define SYSTEM_BITCONVERTER_INT64BITSTODOUBLE_OFFSET UNITYSDK_OFFSET(0x1C9C1460)
#define SYSTEM_BITCONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1C9C1380)
#define SYSTEM_BITCONVERTER_TOCHAR_OFFSET UNITYSDK_OFFSET(0x1C9C0B20)
#define SYSTEM_BITCONVERTER_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1C9C0FE0)
#define SYSTEM_BITCONVERTER_TOINT16_OFFSET UNITYSDK_OFFSET(0x1C9C0BC0)
#define SYSTEM_BITCONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x1C9C0C60)
#define SYSTEM_BITCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x1C9C0D10)
#define SYSTEM_BITCONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x1C9C0F80)
#define SYSTEM_BITCONVERTER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1C9C1310)
#define SYSTEM_BITCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C9C1050)
#define SYSTEM_BITCONVERTER_TOUINT16_OFFSET UNITYSDK_OFFSET(0x1C9C0E40)
#define SYSTEM_BITCONVERTER_TOUINT32_OFFSET UNITYSDK_OFFSET(0x1C9C0EE0)
#define SYSTEM_BITCONVERTER_TOUINT64_OFFSET UNITYSDK_OFFSET(0x1C9C0F30)
#define SYSTEM_BITCONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9C1470)

namespace System
{
	inline static constexpr unsigned int BitConverter_TypeDefinitionIndex = 204;

	class BitConverter : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_IsLittleEndian()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BitConverter_TypeDefinitionIndex)->GetStaticField(0x100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER__CCTOR_OFFSET))();
		}

		static ::System::Boolean AmILittleEndian()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_AMILITTLEENDIAN_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* GetBytes(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_1(::System::Char a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_1_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_2(::System::Int16 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_2_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_3(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_3_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_4(::System::Int64 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_4_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_5(::System::UInt16 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_5_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_6(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_6_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_7(::System::UInt64 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_7_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_8(::System::Single a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_8_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_9(::System::Double a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETBYTES_9_OFFSET))(a1);
		}

		static ::System::Char ToChar(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Char(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOCHAR_OFFSET))(a1, a2);
		}

		static ::System::Int16 ToInt16(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Int16(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOINT16_OFFSET))(a1, a2);
		}

		static ::System::Int32 ToInt32(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOINT32_OFFSET))(a1, a2);
		}

		static ::System::Int64 ToInt64(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Int64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOINT64_OFFSET))(a1, a2);
		}

		static ::System::UInt16 ToUInt16(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::UInt16(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOUINT16_OFFSET))(a1, a2);
		}

		static ::System::UInt32 ToUInt32(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOUINT32_OFFSET))(a1, a2);
		}

		static ::System::UInt64 ToUInt64(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::UInt64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOUINT64_OFFSET))(a1, a2);
		}

		static ::System::Single ToSingle(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOSINGLE_OFFSET))(a1, a2);
		}

		static ::System::Double ToDouble(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Double(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TODOUBLE_OFFSET))(a1, a2);
		}

		static ::System::Char GetHexValue(::System::Int32 a1)
		{
			return ((::System::Char(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_GETHEXVALUE_OFFSET))(a1);
		}

		static ::System::String* ToString(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOSTRING_OFFSET))(a1, a2, a3);
		}

		static ::System::String* ToString_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOSTRING_1_OFFSET))(a1);
		}

		static ::System::Boolean ToBoolean(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_TOBOOLEAN_OFFSET))(a1, a2);
		}

		static ::System::Int64 DoubleToInt64Bits(::System::Double a1)
		{
			return ((::System::Int64(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_DOUBLETOINT64BITS_OFFSET))(a1);
		}

		static ::System::Double Int64BitsToDouble(::System::Int64 a1)
		{
			return ((::System::Double(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_BITCONVERTER_INT64BITSTODOUBLE_OFFSET))(a1);
		}
	};
}
