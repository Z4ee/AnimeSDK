#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPSTRING_GET_ISSOURCESTRING_OFFSET UNITYSDK_OFFSET(0x1E830040)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPSTRING_GET_RAWCOMMENT_OFFSET UNITYSDK_OFFSET(0x1E830140)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPSTRING_GET_RAWLENGTH_OFFSET UNITYSDK_OFFSET(0x1E830050)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPSTRING_MAKEBYTESAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1E8300D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPSTRING_MAKETEXTAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1E8302D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPSTRING_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E830390)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPSTRING_RESET_OFFSET UNITYSDK_OFFSET(0x1E8302B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPSTRING__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E830030)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E830020)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipFile_ZipString_TypeDefinitionIndex = 6872;

	class ZipFile_ZipString : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* rawComment_; // 0x10
		::System::String* comment_; // 0x18
		::System::Boolean isSourceString_; // 0x20

		::System::Void _ctor(::System::String* comment)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPSTRING__CTOR_OFFSET))(this, comment);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* rawString)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPSTRING__CTOR_1_OFFSET))(this, rawString);
		}

		::System::Boolean get_IsSourceString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPSTRING_GET_ISSOURCESTRING_OFFSET))(this);
		}

		::System::Int32 get_RawLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPSTRING_GET_RAWLENGTH_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_RawComment()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPSTRING_GET_RAWCOMMENT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPSTRING_RESET_OFFSET))(this);
		}

		::System::Void MakeTextAvailable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPSTRING_MAKETEXTAVAILABLE_OFFSET))(this);
		}

		::System::Void MakeBytesAvailable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPSTRING_MAKEBYTESAVAILABLE_OFFSET))(this);
		}

		static ::System::String* op_Implicit(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString* zipString)
		{
			return ((::System::String*(*)(::ICSharpCode::SharpZipLib::Zip::ZipFile_ZipString*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPSTRING_OP_IMPLICIT_OFFSET))(zipString);
		}
	};
}
