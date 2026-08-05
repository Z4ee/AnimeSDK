#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Zip::Compression { class InflaterHuffmanTree; }
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams { class StreamManipulator; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER_BUILDDISTTREE_OFFSET UNITYSDK_OFFSET(0x1EA47310)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER_BUILDLITLENTREE_OFFSET UNITYSDK_OFFSET(0x1EA47290)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER_DECODE_OFFSET UNITYSDK_OFFSET(0x1EA46D90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA47390)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA46D80)

namespace ICSharpCode::SharpZipLib::Zip::Compression
{
	inline static constexpr unsigned int InflaterDynHeader_TypeDefinitionIndex = 6838;

	class InflaterDynHeader : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_repBits()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(InflaterDynHeader_TypeDefinitionIndex)->GetStaticField(0x5CD0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_repMin()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(InflaterDynHeader_TypeDefinitionIndex)->GetStaticField(0x5CD8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_BL_ORDER()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(InflaterDynHeader_TypeDefinitionIndex)->GetStaticField(0x5CE0);
		}
		// static const ::System::Int32 LNUM = 0x0; // 0x0
		// static const ::System::Int32 DNUM = 0x1; // 0x0
		// static const ::System::Int32 BLNUM = 0x2; // 0x0
		// static const ::System::Int32 BLLENS = 0x3; // 0x0
		// static const ::System::Int32 LENS = 0x4; // 0x0
		// static const ::System::Int32 REPS = 0x5; // 0x0
		::Il2CppArray<::System::Byte>* litdistLens; // 0x10
		::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* blTree; // 0x18
		::Il2CppArray<::System::Byte>* blLens; // 0x20
		::System::Int32 num; // 0x28
		::System::Int32 mode; // 0x2C
		::System::Int32 blnum; // 0x30
		::System::Int32 repSymbol; // 0x34
		::System::Int32 dnum; // 0x38
		::System::Int32 ptr; // 0x3C
		::System::Int32 lnum; // 0x40
		::System::Byte lastLen; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER__CCTOR_OFFSET))();
		}

		::System::Boolean Decode(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator* input)
		{
			return ((::System::Boolean(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER_DECODE_OFFSET))(this, input);
		}

		::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* BuildLitLenTree()
		{
			return ((::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER_BUILDLITLENTREE_OFFSET))(this);
		}

		::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* BuildDistTree()
		{
			return ((::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_INFLATERDYNHEADER_BUILDDISTTREE_OFFSET))(this);
		}
	};
}
