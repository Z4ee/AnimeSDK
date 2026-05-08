#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/Compression/DeflateStrategy.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Zip::Compression { class DeflaterEngine; }
namespace ICSharpCode::SharpZipLib::Zip::Compression { class DeflaterPending; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_DEFLATE_1_OFFSET UNITYSDK_OFFSET(0x1C2551A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_DEFLATE_OFFSET UNITYSDK_OFFSET(0x1C255180)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_FINISH_OFFSET UNITYSDK_OFFSET(0x1C255050)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1C255040)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_GETLEVEL_OFFSET UNITYSDK_OFFSET(0x1C255170)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_GET_ADLER_OFFSET UNITYSDK_OFFSET(0x1C254FE0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1C255060)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_GET_ISNEEDINGINPUT_OFFSET UNITYSDK_OFFSET(0x1C255090)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_GET_TOTALIN_OFFSET UNITYSDK_OFFSET(0x1C255010)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_GET_TOTALOUT_OFFSET UNITYSDK_OFFSET(0x1C255030)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_RESET_OFFSET UNITYSDK_OFFSET(0x1C254F90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_SETDICTIONARY_1_OFFSET UNITYSDK_OFFSET(0x1C255560)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_SETDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1C2554C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_SETINPUT_1_OFFSET UNITYSDK_OFFSET(0x1C2550E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_SETINPUT_OFFSET UNITYSDK_OFFSET(0x1C2550C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x1C254EF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_SETSTRATEGY_OFFSET UNITYSDK_OFFSET(0x1C254ED0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C254EC0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C254D70)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C254D60)

namespace ICSharpCode::SharpZipLib::Zip::Compression
{
	inline static constexpr unsigned int Deflater_TypeDefinitionIndex = 6694;

	class Deflater : public ::System::Object
	{
	public:
		// static const ::System::Int32 BEST_COMPRESSION = 0x9; // 0x0
		// static const ::System::Int32 BEST_SPEED = 0x1; // 0x0
		// static const ::System::Int32 DEFAULT_COMPRESSION = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 NO_COMPRESSION = 0x0; // 0x0
		// static const ::System::Int32 DEFLATED = 0x8; // 0x0
		// static const ::System::Int32 IS_SETDICT = 0x1; // 0x0
		// static const ::System::Int32 IS_FLUSHING = 0x4; // 0x0
		// static const ::System::Int32 IS_FINISHING = 0x8; // 0x0
		// static const ::System::Int32 INIT_STATE = 0x0; // 0x0
		// static const ::System::Int32 SETDICT_STATE = 0x1; // 0x0
		// static const ::System::Int32 BUSY_STATE = 0x10; // 0x0
		// static const ::System::Int32 FLUSHING_STATE = 0x14; // 0x0
		// static const ::System::Int32 FINISHING_STATE = 0x1C; // 0x0
		// static const ::System::Int32 FINISHED_STATE = 0x1E; // 0x0
		// static const ::System::Int32 CLOSED_STATE = 0x7F; // 0x0
		::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine* engine; // 0x10
		::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending* pending; // 0x18
		::System::Int64 totalOut; // 0x20
		::System::Int32 state; // 0x28
		::System::Boolean noZlibHeaderOrFooter; // 0x2C
		::System::Int32 level; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER__CTOR_1_OFFSET))(this, level);
		}

		::System::Void _ctor_2(::System::Int32 level, ::System::Boolean noZlibHeaderOrFooter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER__CTOR_2_OFFSET))(this, level, noZlibHeaderOrFooter);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_RESET_OFFSET))(this);
		}

		::System::Int32 get_Adler()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_GET_ADLER_OFFSET))(this);
		}

		::System::Int64 get_TotalIn()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_GET_TOTALIN_OFFSET))(this);
		}

		::System::Int64 get_TotalOut()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_GET_TOTALOUT_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_FLUSH_OFFSET))(this);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_FINISH_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsNeedingInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_GET_ISNEEDINGINPUT_OFFSET))(this);
		}

		::System::Void SetInput(::Il2CppArray<::System::Byte>* input)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_SETINPUT_OFFSET))(this, input);
		}

		::System::Void SetInput_1(::Il2CppArray<::System::Byte>* input, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_SETINPUT_1_OFFSET))(this, input, offset, count);
		}

		::System::Void SetLevel(::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_SETLEVEL_OFFSET))(this, level);
		}

		::System::Int32 GetLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_GETLEVEL_OFFSET))(this);
		}

		::System::Void SetStrategy(::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy strategy)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_SETSTRATEGY_OFFSET))(this, strategy);
		}

		::System::Int32 Deflate(::Il2CppArray<::System::Byte>* output)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_DEFLATE_OFFSET))(this, output);
		}

		::System::Int32 Deflate_1(::Il2CppArray<::System::Byte>* output, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_DEFLATE_1_OFFSET))(this, output, offset, length);
		}

		::System::Void SetDictionary(::Il2CppArray<::System::Byte>* dictionary)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_SETDICTIONARY_OFFSET))(this, dictionary);
		}

		::System::Void SetDictionary_1(::Il2CppArray<::System::Byte>* dictionary, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_DEFLATER_SETDICTIONARY_1_OFFSET))(this, dictionary, index, count);
		}
	};
}
