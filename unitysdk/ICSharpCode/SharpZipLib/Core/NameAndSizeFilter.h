#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Core/PathFilter.h"

namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_CORE_NAMEANDSIZEFILTER_GET_MAXSIZE_OFFSET UNITYSDK_OFFSET(0x1E87DCD0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_NAMEANDSIZEFILTER_GET_MINSIZE_OFFSET UNITYSDK_OFFSET(0x1E87DCC0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_NAMEANDSIZEFILTER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1E87DBC0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_NAMEANDSIZEFILTER_SET_MAXSIZE_OFFSET UNITYSDK_OFFSET(0x1E87DB50)
#define ICSHARPCODE_SHARPZIPLIB_CORE_NAMEANDSIZEFILTER_SET_MINSIZE_OFFSET UNITYSDK_OFFSET(0x1E87DAE0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_NAMEANDSIZEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E87D9B0)

namespace ICSharpCode::SharpZipLib::Core
{
	inline static constexpr unsigned int NameAndSizeFilter_TypeDefinitionIndex = 6791;

	class NameAndSizeFilter : public ::ICSharpCode::SharpZipLib::Core::PathFilter
	{
	public:
		::System::Int64 minSize_; // 0x18
		::System::Int64 maxSize_; // 0x20

		::System::Void _ctor(::System::String* filter, ::System::Int64 minSize, ::System::Int64 maxSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_NAMEANDSIZEFILTER__CTOR_OFFSET))(this, filter, minSize, maxSize);
		}

		::System::Boolean IsMatch(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_NAMEANDSIZEFILTER_ISMATCH_OFFSET))(this, name);
		}

		::System::Int64 get_MinSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_NAMEANDSIZEFILTER_GET_MINSIZE_OFFSET))(this);
		}

		::System::Void set_MinSize(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_NAMEANDSIZEFILTER_SET_MINSIZE_OFFSET))(this, value);
		}

		::System::Int64 get_MaxSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_NAMEANDSIZEFILTER_GET_MAXSIZE_OFFSET))(this);
		}

		::System::Void set_MaxSize(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_NAMEANDSIZEFILTER_SET_MAXSIZE_OFFSET))(this, value);
		}
	};
}
