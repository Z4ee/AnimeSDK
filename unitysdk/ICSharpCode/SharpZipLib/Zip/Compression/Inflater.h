#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Checksums { class Adler32; }
namespace ICSharpCode::SharpZipLib::Zip::Compression { class InflaterDynHeader; }
namespace ICSharpCode::SharpZipLib::Zip::Compression { class InflaterHuffmanTree; }
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams { class OutputWindow; }
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams { class StreamManipulator; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_DECODECHKSUM_OFFSET UNITYSDK_OFFSET(0x1C218230)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_DECODEDICT_OFFSET UNITYSDK_OFFSET(0x1C217CA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_DECODEHEADER_OFFSET UNITYSDK_OFFSET(0x1C217B80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_DECODEHUFFMAN_OFFSET UNITYSDK_OFFSET(0x1C217D20)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_DECODE_OFFSET UNITYSDK_OFFSET(0x1C2183F0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_ADLER_OFFSET UNITYSDK_OFFSET(0x1C218F00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1C218EA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_ISNEEDINGDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1C218BA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_ISNEEDINGINPUT_OFFSET UNITYSDK_OFFSET(0x1C218ED0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_REMAININGINPUT_OFFSET UNITYSDK_OFFSET(0x1C218F90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_TOTALIN_OFFSET UNITYSDK_OFFSET(0x1C218F50)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_TOTALOUT_OFFSET UNITYSDK_OFFSET(0x1C218F40)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_INFLATE_1_OFFSET UNITYSDK_OFFSET(0x1C218CB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_INFLATE_OFFSET UNITYSDK_OFFSET(0x1C218C30)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_RESET_OFFSET UNITYSDK_OFFSET(0x1C217B00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_SETDICTIONARY_1_OFFSET UNITYSDK_OFFSET(0x1C218950)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_SETDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1C218930)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_SETINPUT_1_OFFSET UNITYSDK_OFFSET(0x1C218C00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_SETINPUT_OFFSET UNITYSDK_OFFSET(0x1C218BC0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C218FC0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C217A50)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C217A40)

namespace ICSharpCode::SharpZipLib::Zip::Compression
{
	inline static constexpr unsigned int Inflater_TypeDefinitionIndex = 6702;

	class Inflater : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_CPDEXT()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Inflater_TypeDefinitionIndex)->GetStaticField(0x5B30);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_CPLENS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Inflater_TypeDefinitionIndex)->GetStaticField(0x5B38);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_CPLEXT()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Inflater_TypeDefinitionIndex)->GetStaticField(0x5B40);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_CPDIST()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Inflater_TypeDefinitionIndex)->GetStaticField(0x5B48);
		}
		// static const ::System::Int32 DECODE_HEADER = 0x0; // 0x0
		// static const ::System::Int32 DECODE_DICT = 0x1; // 0x0
		// static const ::System::Int32 DECODE_BLOCKS = 0x2; // 0x0
		// static const ::System::Int32 DECODE_STORED_LEN1 = 0x3; // 0x0
		// static const ::System::Int32 DECODE_STORED_LEN2 = 0x4; // 0x0
		// static const ::System::Int32 DECODE_STORED = 0x5; // 0x0
		// static const ::System::Int32 DECODE_DYN_HEADER = 0x6; // 0x0
		// static const ::System::Int32 DECODE_HUFFMAN = 0x7; // 0x0
		// static const ::System::Int32 DECODE_HUFFMAN_LENBITS = 0x8; // 0x0
		// static const ::System::Int32 DECODE_HUFFMAN_DIST = 0x9; // 0x0
		// static const ::System::Int32 DECODE_HUFFMAN_DISTBITS = 0xA; // 0x0
		// static const ::System::Int32 DECODE_CHKSUM = 0xB; // 0x0
		// static const ::System::Int32 FINISHED = 0xC; // 0x0
		::ICSharpCode::SharpZipLib::Checksums::Adler32* adler; // 0x10
		::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader* dynHeader; // 0x18
		::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* distTree; // 0x20
		::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator* input; // 0x28
		::ICSharpCode::SharpZipLib::Zip::Compression::Streams::OutputWindow* outputWindow; // 0x30
		::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* litlenTree; // 0x38
		::System::Int32 readAdler; // 0x40
		::System::Int32 repLength; // 0x44
		::System::Int64 totalOut; // 0x48
		::System::Int32 mode; // 0x50
		::System::Int32 repDist; // 0x54
		::System::Boolean isLastBlock; // 0x58
		::System::Boolean noHeader; // 0x59
		::System::Int32 uncomprLen; // 0x5C
		::System::Int32 neededBits; // 0x60
		::System::Int64 totalIn; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean noHeader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER__CTOR_1_OFFSET))(this, noHeader);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER__CCTOR_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_RESET_OFFSET))(this);
		}

		::System::Boolean DecodeHeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_DECODEHEADER_OFFSET))(this);
		}

		::System::Boolean DecodeDict()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_DECODEDICT_OFFSET))(this);
		}

		::System::Boolean DecodeHuffman()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_DECODEHUFFMAN_OFFSET))(this);
		}

		::System::Boolean DecodeChksum()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_DECODECHKSUM_OFFSET))(this);
		}

		::System::Boolean Decode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_DECODE_OFFSET))(this);
		}

		::System::Void SetDictionary(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_SETDICTIONARY_OFFSET))(this, buffer);
		}

		::System::Void SetDictionary_1(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_SETDICTIONARY_1_OFFSET))(this, buffer, index, count);
		}

		::System::Void SetInput(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_SETINPUT_OFFSET))(this, buffer);
		}

		::System::Void SetInput_1(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_SETINPUT_1_OFFSET))(this, buffer, index, count);
		}

		::System::Int32 Inflate(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_INFLATE_OFFSET))(this, buffer);
		}

		::System::Int32 Inflate_1(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_INFLATE_1_OFFSET))(this, buffer, offset, count);
		}

		::System::Boolean get_IsNeedingInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_ISNEEDINGINPUT_OFFSET))(this);
		}

		::System::Boolean get_IsNeedingDictionary()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_ISNEEDINGDICTIONARY_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Int32 get_Adler()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_ADLER_OFFSET))(this);
		}

		::System::Int64 get_TotalOut()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_TOTALOUT_OFFSET))(this);
		}

		::System::Int64 get_TotalIn()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_TOTALIN_OFFSET))(this);
		}

		::System::Int32 get_RemainingInput()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATER_GET_REMAININGINPUT_OFFSET))(this);
		}
	};
}
