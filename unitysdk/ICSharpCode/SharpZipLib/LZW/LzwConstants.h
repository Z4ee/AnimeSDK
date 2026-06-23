#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ICSHARPCODE_SHARPZIPLIB_LZW_LZWCONSTANTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E55D210)

namespace ICSharpCode::SharpZipLib::LZW
{
	inline static constexpr unsigned int LzwConstants_TypeDefinitionIndex = 6808;

	class LzwConstants : public ::System::Object
	{
	public:
		// static const ::System::Int32 MAGIC = 0x1F9D; // 0x0
		// static const ::System::Int32 MAX_BITS = 0x10; // 0x0
		// static const ::System::Int32 BIT_MASK = 0x1F; // 0x0
		// static const ::System::Int32 EXTENDED_MASK = 0x20; // 0x0
		// static const ::System::Int32 RESERVED_MASK = 0x60; // 0x0
		// static const ::System::Int32 BLOCK_MODE_MASK = 0x80; // 0x0
		// static const ::System::Int32 HDR_SIZE = 0x3; // 0x0
		// static const ::System::Int32 INIT_BITS = 0x9; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_LZW_LZWCONSTANTS__CTOR_OFFSET))(this);
		}
	};
}
