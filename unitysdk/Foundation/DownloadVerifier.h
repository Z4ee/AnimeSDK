#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class Download; }
namespace System { class String; }

#define FOUNDATION_DOWNLOADVERIFIER_COPYFILEIFEXIST_OFFSET UNITYSDK_OFFSET(0x1F6969E0)
#define FOUNDATION_DOWNLOADVERIFIER_DELETEFILEIFEXIST_OFFSET UNITYSDK_OFFSET(0x1F6967A0)
#define FOUNDATION_DOWNLOADVERIFIER_GETTEMPFILEPATH_OFFSET UNITYSDK_OFFSET(0x1F696340)
#define FOUNDATION_DOWNLOADVERIFIER_MOVEFILEIFEXIST_OFFSET UNITYSDK_OFFSET(0x1F6968D0)
#define FOUNDATION_DOWNLOADVERIFIER_RENAMETEMPFILE_OFFSET UNITYSDK_OFFSET(0x1F696570)
#define FOUNDATION_DOWNLOADVERIFIER_VERIFYANDRENAMETEMPFILE_OFFSET UNITYSDK_OFFSET(0x1F6962C0)
#define FOUNDATION_DOWNLOADVERIFIER_VERIFYFILE_OFFSET UNITYSDK_OFFSET(0x1F696420)
#define FOUNDATION_DOWNLOADVERIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F696AF0)

namespace Foundation
{
	inline static constexpr unsigned int DownloadVerifier_TypeDefinitionIndex = 8396;

	class DownloadVerifier : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADVERIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean VerifyAndRenameTempFile(::Foundation::Download* downloadInfo)
		{
			return ((::System::Boolean(*)(::Foundation::Download*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADVERIFIER_VERIFYANDRENAMETEMPFILE_OFFSET))(downloadInfo);
		}

		static ::System::String* GetTempFilePath(::System::String* filePath, ::System::String* md5)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADVERIFIER_GETTEMPFILEPATH_OFFSET))(filePath, md5);
		}

		static ::System::Boolean VerifyFile(::System::String* tempFilePath, ::System::Int64 expectFileSize, ::System::String* expectCRC)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int64, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADVERIFIER_VERIFYFILE_OFFSET))(tempFilePath, expectFileSize, expectCRC);
		}

		static ::System::Boolean RenameTempFile(::System::String* tempFilePath, ::System::String* savePath)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADVERIFIER_RENAMETEMPFILE_OFFSET))(tempFilePath, savePath);
		}

		static ::System::Boolean DeleteFileIfExist(::System::String* filePath)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADVERIFIER_DELETEFILEIFEXIST_OFFSET))(filePath);
		}

		static ::System::String* MoveFileIfExist(::System::String* srcPath, ::System::String* dstPath)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADVERIFIER_MOVEFILEIFEXIST_OFFSET))(srcPath, dstPath);
		}

		static ::System::String* CopyFileIfExist(::System::String* srcPath, ::System::String* dstPath)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADVERIFIER_COPYFILEIFEXIST_OFFSET))(srcPath, dstPath);
		}
	};
}
