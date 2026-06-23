#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Core { class NameFilter; }
namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_CORE_PATHFILTER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1E7F43D0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_PATHFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F4380)

namespace ICSharpCode::SharpZipLib::Core
{
	inline static constexpr unsigned int PathFilter_TypeDefinitionIndex = 6789;

	class PathFilter : public ::System::Object
	{
	public:
		::ICSharpCode::SharpZipLib::Core::NameFilter* nameFilter_; // 0x10

		::System::Void _ctor(::System::String* filter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_PATHFILTER__CTOR_OFFSET))(this, filter);
		}

		::System::Boolean IsMatch(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_PATHFILTER_ISMATCH_OFFSET))(this, name);
		}
	};
}
