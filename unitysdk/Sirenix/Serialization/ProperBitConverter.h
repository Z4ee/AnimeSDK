#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_BYTESTOHEXSTRING_OFFSET UNITYSDK_OFFSET(0x1D54D840)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_CREATEBYTETOHEXLOOKUP_OFFSET UNITYSDK_OFFSET(0x1D54D550)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1D54F5D0)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_GETBYTES_2_OFFSET UNITYSDK_OFFSET(0x1D54F670)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_GETBYTES_3_OFFSET UNITYSDK_OFFSET(0x1D54F7C0)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_GETBYTES_4_OFFSET UNITYSDK_OFFSET(0x1D54F910)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_GETBYTES_5_OFFSET UNITYSDK_OFFSET(0x1D54FBB0)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_GETBYTES_6_OFFSET UNITYSDK_OFFSET(0x1D54FE50)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_GETBYTES_7_OFFSET UNITYSDK_OFFSET(0x1D54FFA0)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_GETBYTES_8_OFFSET UNITYSDK_OFFSET(0x1D550240)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_GETBYTES_9_OFFSET UNITYSDK_OFFSET(0x1D550770)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1D54F530)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_HEXSTRINGTOBYTES_OFFSET UNITYSDK_OFFSET(0x1D54DA30)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x1D54EBD0)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1D54E910)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_TOGUID_OFFSET UNITYSDK_OFFSET(0x1D54F180)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_TOINT16_OFFSET UNITYSDK_OFFSET(0x1D54E2C0)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x1D54E380)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x1D54E4C0)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x1D54E7A0)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_TOUINT16_OFFSET UNITYSDK_OFFSET(0x1D54E320)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_TOUINT32_OFFSET UNITYSDK_OFFSET(0x1D54E420)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER_TOUINT64_OFFSET UNITYSDK_OFFSET(0x1D54E630)
#define SIRENIX_SERIALIZATION_PROPERBITCONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D550B10)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ProperBitConverter_TypeDefinitionIndex = 7521;

	class ProperBitConverter : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet_ByteToHexCharLookupUpperCase()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ProperBitConverter_TypeDefinitionIndex)->GetStaticField(0x6250);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_ByteToHexCharLookupLowerCase()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ProperBitConverter_TypeDefinitionIndex)->GetStaticField(0x6258);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_HexToByteLookup()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(ProperBitConverter_TypeDefinitionIndex)->GetStaticField(0x6260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::UInt32>* CreateByteToHexLookup(::System::Boolean upperCase)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_CREATEBYTETOHEXLOOKUP_OFFSET))(upperCase);
		}

		static ::System::String* BytesToHexString(::Il2CppArray<::System::Byte>* bytes, ::System::Boolean lowerCaseHexChars)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_BYTESTOHEXSTRING_OFFSET))(bytes, lowerCaseHexChars);
		}

		static ::Il2CppArray<::System::Byte>* HexStringToBytes(::System::String* hex)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_HEXSTRINGTOBYTES_OFFSET))(hex);
		}

		static ::System::Int16 ToInt16(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index)
		{
			return ((::System::Int16(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_TOINT16_OFFSET))(buffer, index);
		}

		static ::System::UInt16 ToUInt16(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index)
		{
			return ((::System::UInt16(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_TOUINT16_OFFSET))(buffer, index);
		}

		static ::System::Int32 ToInt32(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_TOINT32_OFFSET))(buffer, index);
		}

		static ::System::UInt32 ToUInt32(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_TOUINT32_OFFSET))(buffer, index);
		}

		static ::System::Int64 ToInt64(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index)
		{
			return ((::System::Int64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_TOINT64_OFFSET))(buffer, index);
		}

		static ::System::UInt64 ToUInt64(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index)
		{
			return ((::System::UInt64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_TOUINT64_OFFSET))(buffer, index);
		}

		static ::System::Single ToSingle(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index)
		{
			return ((::System::Single(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_TOSINGLE_OFFSET))(buffer, index);
		}

		static ::System::Double ToDouble(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index)
		{
			return ((::System::Double(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_TODOUBLE_OFFSET))(buffer, index);
		}

		static ::System::Decimal ToDecimal(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index)
		{
			return ((::System::Decimal(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_TODECIMAL_OFFSET))(buffer, index);
		}

		static ::System::Guid ToGuid(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index)
		{
			return ((::System::Guid(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_TOGUID_OFFSET))(buffer, index);
		}

		static ::System::Void GetBytes(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int16 value)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_GETBYTES_OFFSET))(buffer, index, value);
		}

		static ::System::Void GetBytes_1(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::UInt16 value)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_GETBYTES_1_OFFSET))(buffer, index, value);
		}

		static ::System::Void GetBytes_2(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 value)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_GETBYTES_2_OFFSET))(buffer, index, value);
		}

		static ::System::Void GetBytes_3(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_GETBYTES_3_OFFSET))(buffer, index, value);
		}

		static ::System::Void GetBytes_4(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int64 value)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_GETBYTES_4_OFFSET))(buffer, index, value);
		}

		static ::System::Void GetBytes_5(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_GETBYTES_5_OFFSET))(buffer, index, value);
		}

		static ::System::Void GetBytes_6(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_GETBYTES_6_OFFSET))(buffer, index, value);
		}

		static ::System::Void GetBytes_7(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Double value)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_GETBYTES_7_OFFSET))(buffer, index, value);
		}

		static ::System::Void GetBytes_8(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Decimal value)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Decimal))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_GETBYTES_8_OFFSET))(buffer, index, value);
		}

		static ::System::Void GetBytes_9(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Guid value)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Guid))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_PROPERBITCONVERTER_GETBYTES_9_OFFSET))(buffer, index, value);
		}
	};
}
