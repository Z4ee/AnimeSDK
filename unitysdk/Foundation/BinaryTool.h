#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ByteArray; }
namespace Foundation { class ByteArrayEncode; }
namespace Foundation { class ExistFlag; }
namespace System { class String; }

#define FOUNDATION_BINARYTOOL_CHECKVALID_OFFSET UNITYSDK_OFFSET(0x1EF38100)
#define FOUNDATION_BINARYTOOL_FROMBINARY_10_OFFSET UNITYSDK_OFFSET(0x1EF392D0)
#define FOUNDATION_BINARYTOOL_FROMBINARY_11_OFFSET UNITYSDK_OFFSET(0x1EF394B0)
#define FOUNDATION_BINARYTOOL_FROMBINARY_12_OFFSET UNITYSDK_OFFSET(0x1EF39640)
#define FOUNDATION_BINARYTOOL_FROMBINARY_1_OFFSET UNITYSDK_OFFSET(0x1EF383B0)
#define FOUNDATION_BINARYTOOL_FROMBINARY_2_OFFSET UNITYSDK_OFFSET(0x1EF38570)
#define FOUNDATION_BINARYTOOL_FROMBINARY_3_OFFSET UNITYSDK_OFFSET(0x1EF38730)
#define FOUNDATION_BINARYTOOL_FROMBINARY_4_OFFSET UNITYSDK_OFFSET(0x1EF38890)
#define FOUNDATION_BINARYTOOL_FROMBINARY_5_OFFSET UNITYSDK_OFFSET(0x1EF38A70)
#define FOUNDATION_BINARYTOOL_FROMBINARY_6_OFFSET UNITYSDK_OFFSET(0x1EF38BD0)
#define FOUNDATION_BINARYTOOL_FROMBINARY_7_OFFSET UNITYSDK_OFFSET(0x1EF38DB0)
#define FOUNDATION_BINARYTOOL_FROMBINARY_8_OFFSET UNITYSDK_OFFSET(0x1EF38F10)
#define FOUNDATION_BINARYTOOL_FROMBINARY_9_OFFSET UNITYSDK_OFFSET(0x1EF390F0)
#define FOUNDATION_BINARYTOOL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EF38160)
#define FOUNDATION_BINARYTOOL_READARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1EF399A0)
#define FOUNDATION_BINARYTOOL_READDICTCOUNT_OFFSET UNITYSDK_OFFSET(0x1EF39B00)
#define FOUNDATION_BINARYTOOL_READLISTCOUNT_OFFSET UNITYSDK_OFFSET(0x1EF39A50)
#define FOUNDATION_BINARYTOOL_READSTRINGLENGTH_OFFSET UNITYSDK_OFFSET(0x1EF398F0)
#define FOUNDATION_BINARYTOOL_READTYPEINDEX_OFFSET UNITYSDK_OFFSET(0x1EF39BB0)
#define FOUNDATION_BINARYTOOL_TOBINARY_10_OFFSET UNITYSDK_OFFSET(0x1EF3A5C0)
#define FOUNDATION_BINARYTOOL_TOBINARY_11_OFFSET UNITYSDK_OFFSET(0x1EF3A6A0)
#define FOUNDATION_BINARYTOOL_TOBINARY_12_OFFSET UNITYSDK_OFFSET(0x1EF3A780)
#define FOUNDATION_BINARYTOOL_TOBINARY_13_OFFSET UNITYSDK_OFFSET(0x1EF3A9E0)
#define FOUNDATION_BINARYTOOL_TOBINARY_1_OFFSET UNITYSDK_OFFSET(0x1EF39DB0)
#define FOUNDATION_BINARYTOOL_TOBINARY_2_OFFSET UNITYSDK_OFFSET(0x1EF39E80)
#define FOUNDATION_BINARYTOOL_TOBINARY_3_OFFSET UNITYSDK_OFFSET(0x1EF39F50)
#define FOUNDATION_BINARYTOOL_TOBINARY_4_OFFSET UNITYSDK_OFFSET(0x1EF39FF0)
#define FOUNDATION_BINARYTOOL_TOBINARY_5_OFFSET UNITYSDK_OFFSET(0x1EF3A130)
#define FOUNDATION_BINARYTOOL_TOBINARY_6_OFFSET UNITYSDK_OFFSET(0x1EF3A1C0)
#define FOUNDATION_BINARYTOOL_TOBINARY_7_OFFSET UNITYSDK_OFFSET(0x1EF3A300)
#define FOUNDATION_BINARYTOOL_TOBINARY_8_OFFSET UNITYSDK_OFFSET(0x1EF3A3A0)
#define FOUNDATION_BINARYTOOL_TOBINARY_9_OFFSET UNITYSDK_OFFSET(0x1EF3A4E0)
#define FOUNDATION_BINARYTOOL_TOBINARY_OFFSET UNITYSDK_OFFSET(0x1EF39C60)
#define FOUNDATION_BINARYTOOL_WRITEARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1EF3AC30)
#define FOUNDATION_BINARYTOOL_WRITEDICTCOUNT_OFFSET UNITYSDK_OFFSET(0x1EF3AD50)
#define FOUNDATION_BINARYTOOL_WRITELISTCOUNT_OFFSET UNITYSDK_OFFSET(0x1EF3ACC0)
#define FOUNDATION_BINARYTOOL_WRITESTRINGLENGTH_OFFSET UNITYSDK_OFFSET(0x1EF3ABA0)
#define FOUNDATION_BINARYTOOL_WRITETYPEINDEX_OFFSET UNITYSDK_OFFSET(0x1EF3ADE0)
#define FOUNDATION_BINARYTOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF37F90)

namespace Foundation
{
	inline static constexpr unsigned int BinaryTool_TypeDefinitionIndex = 8298;

	class BinaryTool : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Foundation::ByteArrayEncode*>** StaticGet__encode()
		{
			return (::Il2CppArray<::Foundation::ByteArrayEncode*>**)Il2CppClass::FromTypeDefinitionIndex(BinaryTool_TypeDefinitionIndex)->GetStaticField(0x74E0);
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
