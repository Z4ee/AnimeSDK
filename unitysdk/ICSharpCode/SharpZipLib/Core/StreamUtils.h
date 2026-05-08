#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace ICSharpCode::SharpZipLib::Core { class ProgressHandler; }
namespace System { class String; }
namespace System::IO { class Stream; }

#define ICSHARPCODE_SHARPZIPLIB_CORE_STREAMUTILS_COPY_1_OFFSET UNITYSDK_OFFSET(0x1C20D080)
#define ICSHARPCODE_SHARPZIPLIB_CORE_STREAMUTILS_COPY_2_OFFSET UNITYSDK_OFFSET(0x1C20D0B0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_STREAMUTILS_COPY_OFFSET UNITYSDK_OFFSET(0x1C20CEF0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_STREAMUTILS_READFULLY_1_OFFSET UNITYSDK_OFFSET(0x1C20CD60)
#define ICSHARPCODE_SHARPZIPLIB_CORE_STREAMUTILS_READFULLY_OFFSET UNITYSDK_OFFSET(0x1C20CD40)
#define ICSHARPCODE_SHARPZIPLIB_CORE_STREAMUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C20D4F0)

namespace ICSharpCode::SharpZipLib::Core
{
	inline static constexpr unsigned int StreamUtils_TypeDefinitionIndex = 6661;

	class StreamUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_STREAMUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void ReadFully(::System::IO::Stream* stream, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::System::IO::Stream*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_STREAMUTILS_READFULLY_OFFSET))(stream, buffer);
		}

		static ::System::Void ReadFully_1(::System::IO::Stream* stream, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_STREAMUTILS_READFULLY_1_OFFSET))(stream, buffer, offset, count);
		}

		static ::System::Void Copy(::System::IO::Stream* source, ::System::IO::Stream* destination, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::System::IO::Stream*, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_STREAMUTILS_COPY_OFFSET))(source, destination, buffer);
		}

		static ::System::Void Copy_1(::System::IO::Stream* source, ::System::IO::Stream* destination, ::Il2CppArray<::System::Byte>* buffer, ::ICSharpCode::SharpZipLib::Core::ProgressHandler* progressHandler, ::System::TimeSpan updateInterval, ::System::Object* sender, ::System::String* name)
		{
			return ((::System::Void(*)(::System::IO::Stream*, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::ICSharpCode::SharpZipLib::Core::ProgressHandler*, ::System::TimeSpan, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_STREAMUTILS_COPY_1_OFFSET))(source, destination, buffer, progressHandler, updateInterval, sender, name);
		}

		static ::System::Void Copy_2(::System::IO::Stream* source, ::System::IO::Stream* destination, ::Il2CppArray<::System::Byte>* buffer, ::ICSharpCode::SharpZipLib::Core::ProgressHandler* progressHandler, ::System::TimeSpan updateInterval, ::System::Object* sender, ::System::String* name, ::System::Int64 fixedTarget)
		{
			return ((::System::Void(*)(::System::IO::Stream*, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::ICSharpCode::SharpZipLib::Core::ProgressHandler*, ::System::TimeSpan, ::System::Object*, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_STREAMUTILS_COPY_2_OFFSET))(source, destination, buffer, progressHandler, updateInterval, sender, name, fixedTarget);
		}
	};
}
