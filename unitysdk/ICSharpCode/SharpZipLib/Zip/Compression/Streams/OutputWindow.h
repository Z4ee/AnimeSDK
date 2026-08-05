#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams { class StreamManipulator; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_COPYDICT_OFFSET UNITYSDK_OFFSET(0x1FB5A490)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_COPYOUTPUT_OFFSET UNITYSDK_OFFSET(0x1FB5A590)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_COPYSTORED_OFFSET UNITYSDK_OFFSET(0x1FB5A3E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_GETAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1FB5A580)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_GETFREESPACE_OFFSET UNITYSDK_OFFSET(0x1FB5A570)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_REPEAT_OFFSET UNITYSDK_OFFSET(0x1FB5A220)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_RESET_OFFSET UNITYSDK_OFFSET(0x1FB5A660)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_SLOWREPEAT_OFFSET UNITYSDK_OFFSET(0x1FB5A180)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_WRITE_OFFSET UNITYSDK_OFFSET(0x1FB5A0D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB5A670)

namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams
{
	inline static constexpr unsigned int OutputWindow_TypeDefinitionIndex = 6827;

	class OutputWindow : public ::System::Object
	{
	public:
		// static const ::System::Int32 WindowSize = 0x8000; // 0x0
		// static const ::System::Int32 WindowMask = 0x7FFF; // 0x0
		::Il2CppArray<::System::Byte>* window; // 0x10
		::System::Int32 windowEnd; // 0x18
		::System::Int32 windowFilled; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW__CTOR_OFFSET))(this);
		}

		::System::Void Write(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_WRITE_OFFSET))(this, value);
		}

		::System::Void SlowRepeat(::System::Int32 repStart, ::System::Int32 length, ::System::Int32 distance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_SLOWREPEAT_OFFSET))(this, repStart, length, distance);
		}

		::System::Void Repeat(::System::Int32 length, ::System::Int32 distance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_REPEAT_OFFSET))(this, length, distance);
		}

		::System::Int32 CopyStored(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator* input, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_COPYSTORED_OFFSET))(this, input, length);
		}

		::System::Void CopyDict(::Il2CppArray<::System::Byte>* dictionary, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_COPYDICT_OFFSET))(this, dictionary, offset, length);
		}

		::System::Int32 GetFreeSpace()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_GETFREESPACE_OFFSET))(this);
		}

		::System::Int32 GetAvailable()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_GETAVAILABLE_OFFSET))(this);
		}

		::System::Int32 CopyOutput(::Il2CppArray<::System::Byte>* output, ::System::Int32 offset, ::System::Int32 len)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_COPYOUTPUT_OFFSET))(this, output, offset, len);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_OUTPUTWINDOW_RESET_OFFSET))(this);
		}
	};
}
