#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ByteArray; }
namespace Foundation { class ByteArrayEncode; }
namespace Foundation { class ExistFlag; }
namespace System { class String; }

#define FOUNDATION_BINARYTOOL_CHECKVALID_OFFSET UNITYSDK_OFFSET(0x1DCB1FD0)
#define FOUNDATION_BINARYTOOL_FROMBINARY_10_OFFSET UNITYSDK_OFFSET(0x1DCB31B0)
#define FOUNDATION_BINARYTOOL_FROMBINARY_11_OFFSET UNITYSDK_OFFSET(0x1DCB3390)
#define FOUNDATION_BINARYTOOL_FROMBINARY_12_OFFSET UNITYSDK_OFFSET(0x1DCB3520)
#define FOUNDATION_BINARYTOOL_FROMBINARY_1_OFFSET UNITYSDK_OFFSET(0x1DCB2290)
#define FOUNDATION_BINARYTOOL_FROMBINARY_2_OFFSET UNITYSDK_OFFSET(0x1DCB2450)
#define FOUNDATION_BINARYTOOL_FROMBINARY_3_OFFSET UNITYSDK_OFFSET(0x1DCB2610)
#define FOUNDATION_BINARYTOOL_FROMBINARY_4_OFFSET UNITYSDK_OFFSET(0x1DCB2770)
#define FOUNDATION_BINARYTOOL_FROMBINARY_5_OFFSET UNITYSDK_OFFSET(0x1DCB2950)
#define FOUNDATION_BINARYTOOL_FROMBINARY_6_OFFSET UNITYSDK_OFFSET(0x1DCB2AB0)
#define FOUNDATION_BINARYTOOL_FROMBINARY_7_OFFSET UNITYSDK_OFFSET(0x1DCB2C90)
#define FOUNDATION_BINARYTOOL_FROMBINARY_8_OFFSET UNITYSDK_OFFSET(0x1DCB2DF0)
#define FOUNDATION_BINARYTOOL_FROMBINARY_9_OFFSET UNITYSDK_OFFSET(0x1DCB2FD0)
#define FOUNDATION_BINARYTOOL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DCB2030)
#define FOUNDATION_BINARYTOOL_READARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1DCB3880)
#define FOUNDATION_BINARYTOOL_READDICTCOUNT_OFFSET UNITYSDK_OFFSET(0x1DCB39E0)
#define FOUNDATION_BINARYTOOL_READLISTCOUNT_OFFSET UNITYSDK_OFFSET(0x1DCB3930)
#define FOUNDATION_BINARYTOOL_READSTRINGLENGTH_OFFSET UNITYSDK_OFFSET(0x1DCB37D0)
#define FOUNDATION_BINARYTOOL_READTYPEINDEX_OFFSET UNITYSDK_OFFSET(0x1DCB3A90)
#define FOUNDATION_BINARYTOOL_TOBINARY_10_OFFSET UNITYSDK_OFFSET(0x1DCB44A0)
#define FOUNDATION_BINARYTOOL_TOBINARY_11_OFFSET UNITYSDK_OFFSET(0x1DCB4580)
#define FOUNDATION_BINARYTOOL_TOBINARY_12_OFFSET UNITYSDK_OFFSET(0x1DCB4660)
#define FOUNDATION_BINARYTOOL_TOBINARY_13_OFFSET UNITYSDK_OFFSET(0x1DCB48D0)
#define FOUNDATION_BINARYTOOL_TOBINARY_1_OFFSET UNITYSDK_OFFSET(0x1DCB3C90)
#define FOUNDATION_BINARYTOOL_TOBINARY_2_OFFSET UNITYSDK_OFFSET(0x1DCB3D60)
#define FOUNDATION_BINARYTOOL_TOBINARY_3_OFFSET UNITYSDK_OFFSET(0x1DCB3E30)
#define FOUNDATION_BINARYTOOL_TOBINARY_4_OFFSET UNITYSDK_OFFSET(0x1DCB3ED0)
#define FOUNDATION_BINARYTOOL_TOBINARY_5_OFFSET UNITYSDK_OFFSET(0x1DCB4010)
#define FOUNDATION_BINARYTOOL_TOBINARY_6_OFFSET UNITYSDK_OFFSET(0x1DCB40A0)
#define FOUNDATION_BINARYTOOL_TOBINARY_7_OFFSET UNITYSDK_OFFSET(0x1DCB41E0)
#define FOUNDATION_BINARYTOOL_TOBINARY_8_OFFSET UNITYSDK_OFFSET(0x1DCB4280)
#define FOUNDATION_BINARYTOOL_TOBINARY_9_OFFSET UNITYSDK_OFFSET(0x1DCB43C0)
#define FOUNDATION_BINARYTOOL_TOBINARY_OFFSET UNITYSDK_OFFSET(0x1DCB3B40)
#define FOUNDATION_BINARYTOOL_WRITEARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1DCB4B20)
#define FOUNDATION_BINARYTOOL_WRITEDICTCOUNT_OFFSET UNITYSDK_OFFSET(0x1DCB4C40)
#define FOUNDATION_BINARYTOOL_WRITELISTCOUNT_OFFSET UNITYSDK_OFFSET(0x1DCB4BB0)
#define FOUNDATION_BINARYTOOL_WRITESTRINGLENGTH_OFFSET UNITYSDK_OFFSET(0x1DCB4A90)
#define FOUNDATION_BINARYTOOL_WRITETYPEINDEX_OFFSET UNITYSDK_OFFSET(0x1DCB4CD0)
#define FOUNDATION_BINARYTOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCB1E60)

namespace Foundation
{
	inline static constexpr unsigned int BinaryTool_TypeDefinitionIndex = 8301;

	class BinaryTool : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Foundation::ByteArrayEncode*>** StaticGet__encode()
		{
			return (::Il2CppArray<::Foundation::ByteArrayEncode*>**)Il2CppClass::FromTypeDefinitionIndex(BinaryTool_TypeDefinitionIndex)->GetStaticField(0x7340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL__CCTOR_OFFSET))();
		}

		static ::System::Boolean CheckValid(::Foundation::ByteArray* byteArray)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_CHECKVALID_OFFSET))(byteArray);
		}

		static ::System::Boolean FromBinary(::Foundation::ByteArray* byteArray, ::Foundation::ByteArrayEncode* encode)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::Foundation::ByteArrayEncode*))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_FROMBINARY_OFFSET))(byteArray, encode);
		}

		static ::System::Boolean FromBinary_1(::Foundation::ByteArray* byteArray, ::System::SByte& val, ::System::Int32 threadFlag, ::System::Boolean useObjectPool)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::SByte&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_FROMBINARY_1_OFFSET))(byteArray, val, threadFlag, useObjectPool);
		}

		static ::System::Boolean FromBinary_2(::Foundation::ByteArray* byteArray, ::System::Byte& val, ::System::Int32 threadFlag, ::System::Boolean useObjectPool)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Byte&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_FROMBINARY_2_OFFSET))(byteArray, val, threadFlag, useObjectPool);
		}

		static ::System::Boolean FromBinary_3(::Foundation::ByteArray* byteArray, ::System::Int16& val, ::System::Int32 threadFlag, ::System::Boolean useObjectPool)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Int16&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_FROMBINARY_3_OFFSET))(byteArray, val, threadFlag, useObjectPool);
		}

		static ::System::Boolean FromBinary_4(::Foundation::ByteArray* byteArray, ::System::UInt16& val, ::System::Int32 threadFlag, ::System::Boolean useObjectPool)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::UInt16&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_FROMBINARY_4_OFFSET))(byteArray, val, threadFlag, useObjectPool);
		}

		static ::System::Boolean FromBinary_5(::Foundation::ByteArray* byteArray, ::System::Int32& val, ::System::Int32 threadFlag, ::System::Boolean useObjectPool)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Int32&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_FROMBINARY_5_OFFSET))(byteArray, val, threadFlag, useObjectPool);
		}

		static ::System::Boolean FromBinary_6(::Foundation::ByteArray* byteArray, ::System::UInt32& val, ::System::Int32 threadFlag, ::System::Boolean useObjectPool)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::UInt32&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_FROMBINARY_6_OFFSET))(byteArray, val, threadFlag, useObjectPool);
		}

		static ::System::Boolean FromBinary_7(::Foundation::ByteArray* byteArray, ::System::Int64& val, ::System::Int32 threadFlag, ::System::Boolean useObjectPool)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Int64&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_FROMBINARY_7_OFFSET))(byteArray, val, threadFlag, useObjectPool);
		}

		static ::System::Boolean FromBinary_8(::Foundation::ByteArray* byteArray, ::System::UInt64& val, ::System::Int32 threadFlag, ::System::Boolean useObjectPool)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::UInt64&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_FROMBINARY_8_OFFSET))(byteArray, val, threadFlag, useObjectPool);
		}

		static ::System::Boolean FromBinary_9(::Foundation::ByteArray* byteArray, ::System::Single& val, ::System::Int32 threadFlag, ::System::Boolean useObjectPool)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Single&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_FROMBINARY_9_OFFSET))(byteArray, val, threadFlag, useObjectPool);
		}

		static ::System::Boolean FromBinary_10(::Foundation::ByteArray* byteArray, ::System::Double& val, ::System::Int32 threadFlag, ::System::Boolean useObjectPool)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Double&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_FROMBINARY_10_OFFSET))(byteArray, val, threadFlag, useObjectPool);
		}

		static ::System::Boolean FromBinary_11(::Foundation::ByteArray* byteArray, ::System::Boolean& val, ::System::Int32 threadFlag, ::System::Boolean useObjectPool)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Boolean&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_FROMBINARY_11_OFFSET))(byteArray, val, threadFlag, useObjectPool);
		}

		static ::System::Boolean FromBinary_12(::Foundation::ByteArray* byteArray, ::Foundation::ExistFlag*& val, ::System::Int32 threadFlag, ::System::Boolean useObjectPool)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::Foundation::ExistFlag*&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_FROMBINARY_12_OFFSET))(byteArray, val, threadFlag, useObjectPool);
		}

		static ::System::UInt32 ReadStringLength(::Foundation::ByteArray* byteArray, ::System::Int32 threadFlag, ::System::Boolean useObjectPool)
		{
			return ((::System::UInt32(*)(::Foundation::ByteArray*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_READSTRINGLENGTH_OFFSET))(byteArray, threadFlag, useObjectPool);
		}

		static ::System::UInt32 ReadArrayLength(::Foundation::ByteArray* byteArray, ::System::Int32 threadFlag, ::System::Boolean useObjectPool)
		{
			return ((::System::UInt32(*)(::Foundation::ByteArray*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_READARRAYLENGTH_OFFSET))(byteArray, threadFlag, useObjectPool);
		}

		static ::System::UInt32 ReadListCount(::Foundation::ByteArray* byteArray, ::System::Int32 threadFlag, ::System::Boolean useObjectPool)
		{
			return ((::System::UInt32(*)(::Foundation::ByteArray*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_READLISTCOUNT_OFFSET))(byteArray, threadFlag, useObjectPool);
		}

		static ::System::UInt32 ReadDictCount(::Foundation::ByteArray* byteArray, ::System::Int32 threadFlag, ::System::Boolean useObjectPool)
		{
			return ((::System::UInt32(*)(::Foundation::ByteArray*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_READDICTCOUNT_OFFSET))(byteArray, threadFlag, useObjectPool);
		}

		static ::System::UInt32 ReadTypeIndex(::Foundation::ByteArray* byteArray, ::System::Int32 threadFlag, ::System::Boolean useObjectPool)
		{
			return ((::System::UInt32(*)(::Foundation::ByteArray*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_READTYPEINDEX_OFFSET))(byteArray, threadFlag, useObjectPool);
		}

		static ::System::Boolean ToBinary(::Foundation::ByteArray* byteArray, ::Foundation::ByteArrayEncode* encode)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::Foundation::ByteArrayEncode*))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_TOBINARY_OFFSET))(byteArray, encode);
		}

		static ::System::Boolean ToBinary_1(::Foundation::ByteArray* byteArray, ::System::SByte val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::SByte))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_TOBINARY_1_OFFSET))(byteArray, val);
		}

		static ::System::Boolean ToBinary_2(::Foundation::ByteArray* byteArray, ::System::Byte val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Byte))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_TOBINARY_2_OFFSET))(byteArray, val);
		}

		static ::System::Boolean ToBinary_3(::Foundation::ByteArray* byteArray, ::System::Int16 val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Int16))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_TOBINARY_3_OFFSET))(byteArray, val);
		}

		static ::System::Boolean ToBinary_4(::Foundation::ByteArray* byteArray, ::System::UInt16 val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::UInt16))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_TOBINARY_4_OFFSET))(byteArray, val);
		}

		static ::System::Boolean ToBinary_5(::Foundation::ByteArray* byteArray, ::System::Int32 val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_TOBINARY_5_OFFSET))(byteArray, val);
		}

		static ::System::Boolean ToBinary_6(::Foundation::ByteArray* byteArray, ::System::UInt32 val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_TOBINARY_6_OFFSET))(byteArray, val);
		}

		static ::System::Boolean ToBinary_7(::Foundation::ByteArray* byteArray, ::System::Int64 val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_TOBINARY_7_OFFSET))(byteArray, val);
		}

		static ::System::Boolean ToBinary_8(::Foundation::ByteArray* byteArray, ::System::UInt64 val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_TOBINARY_8_OFFSET))(byteArray, val);
		}

		static ::System::Boolean ToBinary_9(::Foundation::ByteArray* byteArray, ::System::Single val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_TOBINARY_9_OFFSET))(byteArray, val);
		}

		static ::System::Boolean ToBinary_10(::Foundation::ByteArray* byteArray, ::System::Double val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_TOBINARY_10_OFFSET))(byteArray, val);
		}

		static ::System::Boolean ToBinary_11(::Foundation::ByteArray* byteArray, ::System::Boolean val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_TOBINARY_11_OFFSET))(byteArray, val);
		}

		static ::System::Boolean ToBinary_12(::Foundation::ByteArray* byteArray, ::System::String* val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_TOBINARY_12_OFFSET))(byteArray, val);
		}

		static ::System::Boolean ToBinary_13(::Foundation::ByteArray* byteArray, ::Foundation::ExistFlag* val)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::Foundation::ExistFlag*))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_TOBINARY_13_OFFSET))(byteArray, val);
		}

		static ::System::Boolean WriteStringLength(::Foundation::ByteArray* byteArray, ::System::UInt32 length)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_WRITESTRINGLENGTH_OFFSET))(byteArray, length);
		}

		static ::System::Boolean WriteArrayLength(::Foundation::ByteArray* byteArray, ::System::UInt32 length)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_WRITEARRAYLENGTH_OFFSET))(byteArray, length);
		}

		static ::System::Boolean WriteListCount(::Foundation::ByteArray* byteArray, ::System::UInt32 count)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_WRITELISTCOUNT_OFFSET))(byteArray, count);
		}

		static ::System::Boolean WriteDictCount(::Foundation::ByteArray* byteArray, ::System::UInt32 count)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_WRITEDICTCOUNT_OFFSET))(byteArray, count);
		}

		static ::System::Boolean WriteTypeIndex(::Foundation::ByteArray* byteArray, ::System::UInt32 typeIndex)
		{
			return ((::System::Boolean(*)(::Foundation::ByteArray*, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_BINARYTOOL_WRITETYPEINDEX_OFFSET))(byteArray, typeIndex);
		}
	};
}
