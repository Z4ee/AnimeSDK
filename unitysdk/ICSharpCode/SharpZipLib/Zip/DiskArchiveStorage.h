#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/BaseArchiveStorage.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/FileUpdateMode.h"

namespace ICSharpCode::SharpZipLib::Zip { class ZipFile; }
namespace System { class String; }
namespace System::IO { class Stream; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_DISKARCHIVESTORAGE_CONVERTTEMPORARYTOFINAL_OFFSET UNITYSDK_OFFSET(0x1C4861C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_DISKARCHIVESTORAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C486520)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_DISKARCHIVESTORAGE_GETTEMPFILENAME_OFFSET UNITYSDK_OFFSET(0x1C485E20)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_DISKARCHIVESTORAGE_GETTEMPORARYOUTPUT_OFFSET UNITYSDK_OFFSET(0x1C485D70)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_DISKARCHIVESTORAGE_MAKETEMPORARYCOPY_OFFSET UNITYSDK_OFFSET(0x1C486390)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_DISKARCHIVESTORAGE_OPENFORDIRECTUPDATE_OFFSET UNITYSDK_OFFSET(0x1C486460)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_DISKARCHIVESTORAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C485CE0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_DISKARCHIVESTORAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C485BC0)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int DiskArchiveStorage_TypeDefinitionIndex = 6751;

	class DiskArchiveStorage : public ::ICSharpCode::SharpZipLib::Zip::BaseArchiveStorage
	{
	public:
		::System::String* fileName_; // 0x18
		::System::IO::Stream* temporaryStream_; // 0x20
		::System::String* temporaryName_; // 0x28

		::System::Void _ctor(::ICSharpCode::SharpZipLib::Zip::ZipFile* file, ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode updateMode)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipFile*, ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_DISKARCHIVESTORAGE__CTOR_OFFSET))(this, file, updateMode);
		}

		::System::Void _ctor_1(::ICSharpCode::SharpZipLib::Zip::ZipFile* file)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipFile*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_DISKARCHIVESTORAGE__CTOR_1_OFFSET))(this, file);
		}

		::System::IO::Stream* GetTemporaryOutput()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_DISKARCHIVESTORAGE_GETTEMPORARYOUTPUT_OFFSET))(this);
		}

		::System::IO::Stream* ConvertTemporaryToFinal()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_DISKARCHIVESTORAGE_CONVERTTEMPORARYTOFINAL_OFFSET))(this);
		}

		::System::IO::Stream* MakeTemporaryCopy(::System::IO::Stream* stream)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_DISKARCHIVESTORAGE_MAKETEMPORARYCOPY_OFFSET))(this, stream);
		}

		::System::IO::Stream* OpenForDirectUpdate(::System::IO::Stream* stream)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_DISKARCHIVESTORAGE_OPENFORDIRECTUPDATE_OFFSET))(this, stream);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_DISKARCHIVESTORAGE_DISPOSE_OFFSET))(this);
		}

		static ::System::String* GetTempFileName(::System::String* original, ::System::Boolean makeTempFile)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_DISKARCHIVESTORAGE_GETTEMPFILENAME_OFFSET))(original, makeTempFile);
		}
	};
}
