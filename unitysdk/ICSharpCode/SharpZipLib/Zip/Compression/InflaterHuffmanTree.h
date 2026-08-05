#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams { class StreamManipulator; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERHUFFMANTREE_BUILDTREE_OFFSET UNITYSDK_OFFSET(0x1F988E30)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERHUFFMANTREE_GETSYMBOL_OFFSET UNITYSDK_OFFSET(0x1F989610)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERHUFFMANTREE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F988730)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERHUFFMANTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F988E20)

namespace ICSharpCode::SharpZipLib::Zip::Compression
{
	inline static constexpr unsigned int InflaterHuffmanTree_TypeDefinitionIndex = 6839;

	class InflaterHuffmanTree : public ::System::Object
	{
	public:
		static ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree** StaticGet_defLitLenTree()
		{
			return (::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree**)Il2CppClass::FromTypeDefinitionIndex(InflaterHuffmanTree_TypeDefinitionIndex)->GetStaticField(0x5C50);
		}
		static ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree** StaticGet_defDistTree()
		{
			return (::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree**)Il2CppClass::FromTypeDefinitionIndex(InflaterHuffmanTree_TypeDefinitionIndex)->GetStaticField(0x5C58);
		}
		// static const ::System::Int32 MAX_BITLEN = 0xF; // 0x0
		::Il2CppArray<::System::Int16>* tree; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERHUFFMANTREE__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Il2CppArray<::System::Byte>* codeLengths)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERHUFFMANTREE__CTOR_OFFSET))(this, codeLengths);
		}

		::System::Void BuildTree(::Il2CppArray<::System::Byte>* codeLengths)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERHUFFMANTREE_BUILDTREE_OFFSET))(this, codeLengths);
		}

		::System::Int32 GetSymbol(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator* input)
		{
			return ((::System::Int32(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERHUFFMANTREE_GETSYMBOL_OFFSET))(this, input);
		}
	};
}
