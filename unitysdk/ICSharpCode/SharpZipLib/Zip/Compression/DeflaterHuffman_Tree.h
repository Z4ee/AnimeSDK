#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Zip::Compression { class DeflaterHuffman; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_BUILDCODES_OFFSET UNITYSDK_OFFSET(0x1B2C3210)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_BUILDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B2C54C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_BUILDTREE_OFFSET UNITYSDK_OFFSET(0x1B2C4480)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_CALCBLFREQ_OFFSET UNITYSDK_OFFSET(0x1B2C4D10)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_CHECKEMPTY_OFFSET UNITYSDK_OFFSET(0x1B2C5370)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_GETENCODEDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B2C4FE0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_RESET_OFFSET UNITYSDK_OFFSET(0x1B2C2F80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_SETSTATICCODES_OFFSET UNITYSDK_OFFSET(0x1B2C5060)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_WRITESYMBOL_OFFSET UNITYSDK_OFFSET(0x1B2C3B00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_WRITETREE_OFFSET UNITYSDK_OFFSET(0x1B2C3460)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C2DF0)

namespace ICSharpCode::SharpZipLib::Zip::Compression
{
	inline static constexpr unsigned int DeflaterHuffman_Tree_TypeDefinitionIndex = 6699;

	class DeflaterHuffman_Tree : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int16>* freqs; // 0x10
		::Il2CppArray<::System::Int32>* bl_counts; // 0x18
		::Il2CppArray<::System::Byte>* length; // 0x20
		::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman* dh; // 0x28
		::Il2CppArray<::System::Int16>* codes; // 0x30
		::System::Int32 minNumCodes; // 0x38
		::System::Int32 maxLength; // 0x3C
		::System::Int32 numCodes; // 0x40

		::System::Void _ctor(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman* dh, ::System::Int32 elems, ::System::Int32 minCodes, ::System::Int32 maxLength)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE__CTOR_OFFSET))(this, dh, elems, minCodes, maxLength);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_RESET_OFFSET))(this);
		}

		::System::Void WriteSymbol(::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_WRITESYMBOL_OFFSET))(this, code);
		}

		::System::Void CheckEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_CHECKEMPTY_OFFSET))(this);
		}

		::System::Void SetStaticCodes(::Il2CppArray<::System::Int16>* staticCodes, ::Il2CppArray<::System::Byte>* staticLengths)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int16>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_SETSTATICCODES_OFFSET))(this, staticCodes, staticLengths);
		}

		::System::Void BuildCodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_BUILDCODES_OFFSET))(this);
		}

		::System::Void BuildTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_BUILDTREE_OFFSET))(this);
		}

		::System::Int32 GetEncodedLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_GETENCODEDLENGTH_OFFSET))(this);
		}

		::System::Void CalcBLFreq(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree* blTree)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_CALCBLFREQ_OFFSET))(this, blTree);
		}

		::System::Void WriteTree(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree* blTree)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman_Tree*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_WRITETREE_OFFSET))(this, blTree);
		}

		::System::Void BuildLength(::Il2CppArray<::System::Int32>* childs)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERHUFFMAN_TREE_BUILDLENGTH_OFFSET))(this, childs);
		}
	};
}
