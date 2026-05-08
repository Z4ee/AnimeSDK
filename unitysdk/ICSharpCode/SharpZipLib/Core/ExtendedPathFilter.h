#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Core/PathFilter.h"
#include "unitysdk/System/DateTime.h"

namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER_GET_MAXDATE_OFFSET UNITYSDK_OFFSET(0x1C485880)
#define ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER_GET_MAXSIZE_OFFSET UNITYSDK_OFFSET(0x1C485860)
#define ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER_GET_MINDATE_OFFSET UNITYSDK_OFFSET(0x1C485870)
#define ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER_GET_MINSIZE_OFFSET UNITYSDK_OFFSET(0x1C485850)
#define ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1C4856F0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER_SET_MAXDATE_OFFSET UNITYSDK_OFFSET(0x1C485400)
#define ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER_SET_MAXSIZE_OFFSET UNITYSDK_OFFSET(0x1C4851A0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER_SET_MINDATE_OFFSET UNITYSDK_OFFSET(0x1C485370)
#define ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER_SET_MINSIZE_OFFSET UNITYSDK_OFFSET(0x1C485130)
#define ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C485210)
#define ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C485490)
#define ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C484FE0)

namespace ICSharpCode::SharpZipLib::Core
{
	inline static constexpr unsigned int ExtendedPathFilter_TypeDefinitionIndex = 6659;

	class ExtendedPathFilter : public ::ICSharpCode::SharpZipLib::Core::PathFilter
	{
	public:
		::System::DateTime maxDate_; // 0x18
		::System::Int64 maxSize_; // 0x20
		::System::Int64 minSize_; // 0x28
		::System::DateTime minDate_; // 0x30

		::System::Void _ctor(::System::String* filter, ::System::Int64 minSize, ::System::Int64 maxSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER__CTOR_OFFSET))(this, filter, minSize, maxSize);
		}

		::System::Void _ctor_1(::System::String* filter, ::System::DateTime minDate, ::System::DateTime maxDate)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER__CTOR_1_OFFSET))(this, filter, minDate, maxDate);
		}

		::System::Void _ctor_2(::System::String* filter, ::System::Int64 minSize, ::System::Int64 maxSize, ::System::DateTime minDate, ::System::DateTime maxDate)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64, ::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER__CTOR_2_OFFSET))(this, filter, minSize, maxSize, minDate, maxDate);
		}

		::System::Boolean IsMatch(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER_ISMATCH_OFFSET))(this, name);
		}

		::System::Int64 get_MinSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER_GET_MINSIZE_OFFSET))(this);
		}

		::System::Void set_MinSize(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER_SET_MINSIZE_OFFSET))(this, value);
		}

		::System::Int64 get_MaxSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER_GET_MAXSIZE_OFFSET))(this);
		}

		::System::Void set_MaxSize(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER_SET_MAXSIZE_OFFSET))(this, value);
		}

		::System::DateTime get_MinDate()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER_GET_MINDATE_OFFSET))(this);
		}

		::System::Void set_MinDate(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER_SET_MINDATE_OFFSET))(this, value);
		}

		::System::DateTime get_MaxDate()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER_GET_MAXDATE_OFFSET))(this);
		}

		::System::Void set_MaxDate(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_EXTENDEDPATHFILTER_SET_MAXDATE_OFFSET))(this, value);
		}
	};
}
