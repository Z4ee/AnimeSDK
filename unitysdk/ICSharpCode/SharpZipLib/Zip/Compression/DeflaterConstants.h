#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC64420)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERCONSTANTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC64410)

namespace ICSharpCode::SharpZipLib::Zip::Compression
{
	inline static constexpr unsigned int DeflaterConstants_TypeDefinitionIndex = 6830;

	class DeflaterConstants : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_COMPR_FUNC()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DeflaterConstants_TypeDefinitionIndex)->GetStaticField(0x5BF0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_GOOD_LENGTH()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DeflaterConstants_TypeDefinitionIndex)->GetStaticField(0x5BF8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_MAX_LAZY()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DeflaterConstants_TypeDefinitionIndex)->GetStaticField(0x5C00);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_NICE_LENGTH()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DeflaterConstants_TypeDefinitionIndex)->GetStaticField(0x5C08);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_MAX_CHAIN()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DeflaterConstants_TypeDefinitionIndex)->GetStaticField(0x5C10);
		}
		static ::System::Int32* StaticGet_MAX_BLOCK_SIZE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DeflaterConstants_TypeDefinitionIndex)->GetStaticField(0x31D0);
		}
		// static const ::System::Boolean DEBUGGING; // 0x0
		// static const ::System::Int32 STORED_BLOCK = 0x0; // 0x0
		// static const ::System::Int32 STATIC_TREES = 0x1; // 0x0
		// static const ::System::Int32 DYN_TREES = 0x2; // 0x0
		// static const ::System::Int32 PRESET_DICT = 0x20; // 0x0
		// static const ::System::Int32 DEFAULT_MEM_LEVEL = 0x8; // 0x0
		// static const ::System::Int32 MAX_MATCH = 0x102; // 0x0
		// static const ::System::Int32 MIN_MATCH = 0x3; // 0x0
		// static const ::System::Int32 MAX_WBITS = 0xF; // 0x0
		// static const ::System::Int32 WSIZE = 0x8000; // 0x0
		// static const ::System::Int32 WMASK = 0x7FFF; // 0x0
		// static const ::System::Int32 HASH_BITS = 0xF; // 0x0
		// static const ::System::Int32 HASH_SIZE = 0x8000; // 0x0
		// static const ::System::Int32 HASH_MASK = 0x7FFF; // 0x0
		// static const ::System::Int32 HASH_SHIFT = 0x5; // 0x0
		// static const ::System::Int32 MIN_LOOKAHEAD = 0x106; // 0x0
		// static const ::System::Int32 MAX_DIST = 0x7EFA; // 0x0
		// static const ::System::Int32 PENDING_BUF_SIZE = 0x10000; // 0x0
		// static const ::System::Int32 DEFLATE_STORED = 0x0; // 0x0
		// static const ::System::Int32 DEFLATE_FAST = 0x1; // 0x0
		// static const ::System::Int32 DEFLATE_SLOW = 0x2; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERCONSTANTS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATERCONSTANTS__CCTOR_OFFSET))();
		}
	};
}
