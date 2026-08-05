#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPCONSTANTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC41EF0)

namespace ICSharpCode::SharpZipLib::GZip
{
	inline static constexpr unsigned int GZipConstants_TypeDefinitionIndex = 6805;

	class GZipConstants : public ::System::Object
	{
	public:
		// static const ::System::Int32 GZIP_MAGIC = 0x1F8B; // 0x0
		// static const ::System::Int32 FTEXT = 0x1; // 0x0
		// static const ::System::Int32 FHCRC = 0x2; // 0x0
		// static const ::System::Int32 FEXTRA = 0x4; // 0x0
		// static const ::System::Int32 FNAME = 0x8; // 0x0
		// static const ::System::Int32 FCOMMENT = 0x10; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_GZIP_GZIPCONSTANTS__CTOR_OFFSET))(this);
		}
	};
}
