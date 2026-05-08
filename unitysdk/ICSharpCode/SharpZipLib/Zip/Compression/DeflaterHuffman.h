#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Zip::Compression { class DeflaterHuffman_Tree; }
namespace ICSharpCode::SharpZipLib::Zip::Compression { class DeflaterPending; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_BITREVERSE_OFFSET UNITYSDK_OFFSET(0x1B2C2AF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_COMPRESSBLOCK_OFFSET UNITYSDK_OFFSET(0x1B2C3840)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_DCODE_OFFSET UNITYSDK_OFFSET(0x1B2C3B80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_FLUSHBLOCK_OFFSET UNITYSDK_OFFSET(0x1B2C3C70)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_FLUSHSTOREDBLOCK_OFFSET UNITYSDK_OFFSET(0x1B2C3BB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_ISFULL_OFFSET UNITYSDK_OFFSET(0x1B2C5070)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_LCODE_OFFSET UNITYSDK_OFFSET(0x1B2C3AC0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_RESET_OFFSET UNITYSDK_OFFSET(0x1B2C2E70)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_SENDALLTREES_OFFSET UNITYSDK_OFFSET(0x1B2C2FD0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TALLYDIST_OFFSET UNITYSDK_OFFSET(0x1B2C5130)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TALLYLIT_OFFSET UNITYSDK_OFFSET(0x1B2C5080)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2C2440)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C2C30)

namespace ICSharpCode::SharpZipLib::Zip::Compression
{
	inline static constexpr unsigned int DeflaterHuffman_TypeDefinitionIndex = 6698;

	class DeflaterHuffman : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_BL_ORDER()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DeflaterHuffman_TypeDefinitionIndex)->GetStaticField(0x5BA0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_bit4Reverse()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(DeflaterHuffman_TypeDefinitionIndex)->GetStaticField(0x5BA8);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_staticLLength()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(DeflaterHuffman_TypeDefinitionIndex)->GetStaticField(0x5BB0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_staticDLength()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(DeflaterHuffman_TypeDefinitionIndex)->GetStaticField(0x5BB8);
		}
		static ::Il2CppArray<::System::Int16>** StaticGet_staticDCodes()
		{
			return (::Il2CppArray<::System::Int16>**)Il2CppClass::FromTypeDefinitionIndex(DeflaterHuffman_TypeDefinitionIndex)->GetStaticField(0x5BC0);
		}
		static ::Il2CppArray<::System::Int16>** StaticGet_staticLCodes()
		{
			return (::Il2CppArray<::System::Int16>**)Il2CppClass::FromTypeDefinitionIndex(DeflaterHuffman_TypeDefinitionIndex)->GetStaticField(0x5BC8);
		}
		// static const ::System::Int32 BUFSIZE = 0x4000; // 0x0
		// static const ::System::Int32 LITERAL_NUM = 0x11E; // 0x0
		// static const ::System::Int32 DIST_NUM = 0x1E; // 0x0
		// static const ::System::Int32 BITLEN_NUM = 0x13; // 0x0
		// static const ::System::Int32 REP_3_6 = 0x10; // 0x0
		// static const ::System::Int32 REP_3_10 = 0x11; // 0x0
		// static const ::System::Int32 REP_11_138 = 0x12; // 0x0
		// static const ::System::Int32 EOF_SYMBOL = 0x100; // 0x0
		::Il2CppArray<::System::Int16>* d_buf; // 0x10
		::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree* literalTree; // 0x18
		::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree* blTree; // 0x20
		::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree* distTree; // 0x28
		::Il2CppArray<::System::Byte>* l_buf; // 0x30
		::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending* pending; // 0x38
		::System::Int32 last_lit; // 0x40
		::System::Int32 extra_bits; // 0x44

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending* pending)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN__CTOR_OFFSET))(this, pending);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_RESET_OFFSET))(this);
		}

		::System::Void SendAllTrees(::System::Int32 blTreeCodes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_SENDALLTREES_OFFSET))(this, blTreeCodes);
		}

		::System::Void CompressBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_COMPRESSBLOCK_OFFSET))(this);
		}

		::System::Void FlushStoredBlock(::Il2CppArray<::System::Byte>* stored, ::System::Int32 storedOffset, ::System::Int32 storedLength, ::System::Boolean lastBlock)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_FLUSHSTOREDBLOCK_OFFSET))(this, stored, storedOffset, storedLength, lastBlock);
		}

		::System::Void FlushBlock(::Il2CppArray<::System::Byte>* stored, ::System::Int32 storedOffset, ::System::Int32 storedLength, ::System::Boolean lastBlock)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_FLUSHBLOCK_OFFSET))(this, stored, storedOffset, storedLength, lastBlock);
		}

		::System::Boolean IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_ISFULL_OFFSET))(this);
		}

		::System::Boolean TallyLit(::System::Int32 literal)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TALLYLIT_OFFSET))(this, literal);
		}

		::System::Boolean TallyDist(::System::Int32 distance, ::System::Int32 length)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TALLYDIST_OFFSET))(this, distance, length);
		}

		static ::System::Int16 BitReverse(::System::Int32 toReverse)
		{
			return ((::System::Int16(*)(::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_BITREVERSE_OFFSET))(toReverse);
		}

		static ::System::Int32 Lcode(::System::Int32 length)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_LCODE_OFFSET))(length);
		}

		static ::System::Int32 Dcode(::System::Int32 distance)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_DCODE_OFFSET))(distance);
		}
	};
}
