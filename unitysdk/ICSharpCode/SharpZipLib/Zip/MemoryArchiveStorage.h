#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/BaseArchiveStorage.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/FileUpdateMode.h"

namespace System::IO { class MemoryStream; }
namespace System::IO { class Stream; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_MEMORYARCHIVESTORAGE_CONVERTTEMPORARYTOFINAL_OFFSET UNITYSDK_OFFSET(0x1FBFECA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_MEMORYARCHIVESTORAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FBFEF70)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_MEMORYARCHIVESTORAGE_GETTEMPORARYOUTPUT_OFFSET UNITYSDK_OFFSET(0x1FBFEBF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_MEMORYARCHIVESTORAGE_GET_FINALSTREAM_OFFSET UNITYSDK_OFFSET(0x1FBFEBE0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_MEMORYARCHIVESTORAGE_MAKETEMPORARYCOPY_OFFSET UNITYSDK_OFFSET(0x1FBFED40)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_MEMORYARCHIVESTORAGE_OPENFORDIRECTUPDATE_OFFSET UNITYSDK_OFFSET(0x1FBFEE50)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_MEMORYARCHIVESTORAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBFEBD0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_MEMORYARCHIVESTORAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBFEBC0)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int MemoryArchiveStorage_TypeDefinitionIndex = 6887;

	class MemoryArchiveStorage : public ::ICSharpCode::SharpZipLib::Zip::BaseArchiveStorage
	{
	public:
		::System::IO::MemoryStream* finalStream_; // 0x18
		::System::IO::MemoryStream* temporaryStream_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_MEMORYARCHIVESTORAGE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ICSharpCode::SharpZipLib::Zip::FileUpdateMode updateMode)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_MEMORYARCHIVESTORAGE__CTOR_1_OFFSET))(this, updateMode);
		}

		::System::IO::MemoryStream* get_FinalStream()
		{
			return ((::System::IO::MemoryStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_MEMORYARCHIVESTORAGE_GET_FINALSTREAM_OFFSET))(this);
		}

		::System::IO::Stream* GetTemporaryOutput()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_MEMORYARCHIVESTORAGE_GETTEMPORARYOUTPUT_OFFSET))(this);
		}

		::System::IO::Stream* ConvertTemporaryToFinal()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_MEMORYARCHIVESTORAGE_CONVERTTEMPORARYTOFINAL_OFFSET))(this);
		}

		::System::IO::Stream* MakeTemporaryCopy(::System::IO::Stream* stream)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_MEMORYARCHIVESTORAGE_MAKETEMPORARYCOPY_OFFSET))(this, stream);
		}

		::System::IO::Stream* OpenForDirectUpdate(::System::IO::Stream* stream)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_MEMORYARCHIVESTORAGE_OPENFORDIRECTUPDATE_OFFSET))(this, stream);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_MEMORYARCHIVESTORAGE_DISPOSE_OFFSET))(this);
		}
	};
}
