#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Networking/DownloadHandlerScript.h"

namespace Foundation { class Download; }
namespace System { class String; }
namespace System::IO { class FileStream; }

#define FOUNDATION_DOWNLOADHANDLER_ABORT_OFFSET UNITYSDK_OFFSET(0x1F0A4570)
#define FOUNDATION_DOWNLOADHANDLER_CLOSETEMPFILE_OFFSET UNITYSDK_OFFSET(0x1F0A4600)
#define FOUNDATION_DOWNLOADHANDLER_COMBINETEMPFILES_OFFSET UNITYSDK_OFFSET(0x1F0A4E10)
#define FOUNDATION_DOWNLOADHANDLER_COMPLETECONTENT_OFFSET UNITYSDK_OFFSET(0x1F0A4910)
#define FOUNDATION_DOWNLOADHANDLER_DELETEFILEIFEXIST_OFFSET UNITYSDK_OFFSET(0x1F0A51A0)
#define FOUNDATION_DOWNLOADHANDLER_GETFILECRC_OFFSET UNITYSDK_OFFSET(0x1F0A4CA0)
#define FOUNDATION_DOWNLOADHANDLER_GETFILEMD5_OFFSET UNITYSDK_OFFSET(0x1F0A5270)
#define FOUNDATION_DOWNLOADHANDLER_INIT_OFFSET UNITYSDK_OFFSET(0x1F0A44A0)
#define FOUNDATION_DOWNLOADHANDLER_ISINASSETREQUEST_OFFSET UNITYSDK_OFFSET(0x1F0A5030)
#define FOUNDATION_DOWNLOADHANDLER_MOVEFILEIFEXIST_OFFSET UNITYSDK_OFFSET(0x1F0A5080)
#define FOUNDATION_DOWNLOADHANDLER_RECEIVEDATA_OFFSET UNITYSDK_OFFSET(0x1F0A4670)
#define FOUNDATION_DOWNLOADHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0A4470)
#define FOUNDATION_DOWNLOADHANDLER___BASE_COMPLETECONTENT_OFFSET UNITYSDK_OFFSET(0x1F0A5500)
#define FOUNDATION_DOWNLOADHANDLER___BASE_RECEIVEDATA_OFFSET UNITYSDK_OFFSET(0x1F0A5510)

namespace Foundation
{
	inline static constexpr unsigned int DownloadHandler_TypeDefinitionIndex = 8372;

	class DownloadHandler : public ::UnityEngine::Networking::DownloadHandlerScript
	{
	public:
		::Foundation::Download* _downloadInfo; // 0x18
		::System::String* _tempFilePath; // 0x20
		::System::IO::FileStream* _tempFileStream; // 0x28
		::System::String* errMsg; // 0x30
		::System::Int64 downloadedLength; // 0x38
		::System::Int32 errCode; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADHANDLER__CTOR_OFFSET))(this);
		}

		::System::Boolean Init(::Foundation::Download* info)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Download*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADHANDLER_INIT_OFFSET))(this, info);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADHANDLER_ABORT_OFFSET))(this);
		}

		::System::Boolean ReceiveData(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 dataLength)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADHANDLER_RECEIVEDATA_OFFSET))(this, buffer, dataLength);
		}

		::System::Void CompleteContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADHANDLER_COMPLETECONTENT_OFFSET))(this);
		}

		::System::Boolean IsInAssetRequest(::System::String* assetBundleName, ::System::String* savePath)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADHANDLER_ISINASSETREQUEST_OFFSET))(this, assetBundleName, savePath);
		}

		::System::Boolean CombineTempFiles(::System::String* tempFilePath, ::System::String* savePath)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADHANDLER_COMBINETEMPFILES_OFFSET))(this, tempFilePath, savePath);
		}

		::System::Boolean DeleteFileIfExist(::System::String* filePath)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADHANDLER_DELETEFILEIFEXIST_OFFSET))(this, filePath);
		}

		::System::String* MoveFileIfExist(::System::String* srcPath, ::System::String* dstPath)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADHANDLER_MOVEFILEIFEXIST_OFFSET))(this, srcPath, dstPath);
		}

		::System::String* GetFileCRC(::System::String* filePath)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADHANDLER_GETFILECRC_OFFSET))(this, filePath);
		}

		::System::String* GetFileMD5(::System::String* filePath)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADHANDLER_GETFILEMD5_OFFSET))(this, filePath);
		}

		::System::Void CloseTempFile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADHANDLER_CLOSETEMPFILE_OFFSET))(this);
		}

		::System::Void __base_CompleteContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADHANDLER___BASE_COMPLETECONTENT_OFFSET))(this);
		}

		::System::Boolean __base_ReceiveData(::Il2CppArray<::System::Byte>* P0, ::System::Int32 P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DOWNLOADHANDLER___BASE_RECEIVEDATA_OFFSET))(this, P0, P1);
		}
	};
}
