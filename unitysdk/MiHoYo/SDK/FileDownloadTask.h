#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/FileDownloadErrorCode.h"
#include "unitysdk/MiHoYo/SDK/FileDownloadStatus.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::IO { class FileStream; }
namespace System::Net { class WebResponse; }

#define MIHOYO_SDK_FILEDOWNLOADTASK_ACCEPTRANGESFORRESPONSE_OFFSET UNITYSDK_OFFSET(0x16AA56C0)
#define MIHOYO_SDK_FILEDOWNLOADTASK_CANCEL_OFFSET UNITYSDK_OFFSET(0x16AA54D0)
#define MIHOYO_SDK_FILEDOWNLOADTASK_ETAGFORRESPONSE_OFFSET UNITYSDK_OFFSET(0x16AA5930)
#define MIHOYO_SDK_FILEDOWNLOADTASK_GET_BYTESWRITTEN_OFFSET UNITYSDK_OFFSET(0x16AA1530)
#define MIHOYO_SDK_FILEDOWNLOADTASK_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x16AA1520)
#define MIHOYO_SDK_FILEDOWNLOADTASK_GET_DONE_OFFSET UNITYSDK_OFFSET(0x16AA1550)
#define MIHOYO_SDK_FILEDOWNLOADTASK_GET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x16AA1570)
#define MIHOYO_SDK_FILEDOWNLOADTASK_GET_JSONNODE_OFFSET UNITYSDK_OFFSET(0x16AA5B80)
#define MIHOYO_SDK_FILEDOWNLOADTASK_GET_JSONSTRING_OFFSET UNITYSDK_OFFSET(0x16AA6040)
#define MIHOYO_SDK_FILEDOWNLOADTASK_GET_MD5TMPPATH_OFFSET UNITYSDK_OFFSET(0x16AA1490)
#define MIHOYO_SDK_FILEDOWNLOADTASK_GET_PAUSED_OFFSET UNITYSDK_OFFSET(0x16AA14E0)
#define MIHOYO_SDK_FILEDOWNLOADTASK_GET_TMPPATH_OFFSET UNITYSDK_OFFSET(0x16AA1440)
#define MIHOYO_SDK_FILEDOWNLOADTASK_JSONSTRING_OFFSET UNITYSDK_OFFSET(0x16AA6080)
#define MIHOYO_SDK_FILEDOWNLOADTASK_PAUSE_OFFSET UNITYSDK_OFFSET(0x16AA54C0)
#define MIHOYO_SDK_FILEDOWNLOADTASK_SET_BYTESWRITTEN_OFFSET UNITYSDK_OFFSET(0x16AA1540)
#define MIHOYO_SDK_FILEDOWNLOADTASK_START_OFFSET UNITYSDK_OFFSET(0x16AA1AB0)
#define MIHOYO_SDK_FILEDOWNLOADTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AA60C0)
#define MIHOYO_SDK_FILEDOWNLOADTASK__CHECKLOCALFILE_OFFSET UNITYSDK_OFFSET(0x16AA3610)
#define MIHOYO_SDK_FILEDOWNLOADTASK__CREATEDIRECTORYIFNEEDED_OFFSET UNITYSDK_OFFSET(0x16AA3530)
#define MIHOYO_SDK_FILEDOWNLOADTASK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16AA15E0)
#define MIHOYO_SDK_FILEDOWNLOADTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA15D0)
#define MIHOYO_SDK_FILEDOWNLOADTASK__DELETEMD5FILEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x16AA4B30)
#define MIHOYO_SDK_FILEDOWNLOADTASK__REQUESTFILEHEADER_OFFSET UNITYSDK_OFFSET(0x16AA3DD0)
#define MIHOYO_SDK_FILEDOWNLOADTASK__RESUME_OFFSET UNITYSDK_OFFSET(0x16AA1AC0)
#define MIHOYO_SDK_FILEDOWNLOADTASK__RETRYIFNEEDED_OFFSET UNITYSDK_OFFSET(0x16AA4CB0)
#define MIHOYO_SDK_FILEDOWNLOADTASK__SAVEMD5FILEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x16AA4900)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int FileDownloadTask_TypeDefinitionIndex = 46741;

	class FileDownloadTask : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_Timeout()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FileDownloadTask_TypeDefinitionIndex)->GetStaticField(0x10880);
		}
		static ::System::Int32* StaticGet_ReadWriteTimeout()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FileDownloadTask_TypeDefinitionIndex)->GetStaticField(0x10884);
		}
		::System::String* ETag; // 0x10
		::System::IO::FileStream* fileStream; // 0x18
		::System::String* filename; // 0x20
		::System::String* errorTextMessage; // 0x28
		::System::String* exceptionPayload; // 0x30
		::System::Exception* exception; // 0x38
		::System::String* url; // 0x40
		::System::String* md5; // 0x48
		::System::String* path; // 0x50
		::MiHoYo::SDK::FileDownloadErrorCode errorCode; // 0x58
		::MiHoYo::SDK::FileDownloadStatus status; // 0x5C
		::System::Int32 _contentLength; // 0x60
		::System::Int32 _BytesWritten_k__BackingField; // 0x64
		::System::Int32 errorCodeIntValue; // 0x68
		::System::Boolean _pause; // 0x6C
		::System::Boolean CancelDownload; // 0x6D
		::System::Int32 RetryCount; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::JSONObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK__CCTOR_OFFSET))();
		}

		::System::String* get_tmpPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_GET_TMPPATH_OFFSET))(this);
		}

		::System::String* get_md5tmpPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_GET_MD5TMPPATH_OFFSET))(this);
		}

		::System::Boolean get_Paused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_GET_PAUSED_OFFSET))(this);
		}

		::System::Int32 get_ContentLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_GET_CONTENTLENGTH_OFFSET))(this);
		}

		::System::Int32 get_BytesWritten()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_GET_BYTESWRITTEN_OFFSET))(this);
		}

		::System::Void set_BytesWritten(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_SET_BYTESWRITTEN_OFFSET))(this, a1);
		}

		::System::Boolean get_Done()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_GET_DONE_OFFSET))(this);
		}

		::System::String* get_errorMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_GET_ERRORMESSAGE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_START_OFFSET))(this);
		}

		::System::Void _Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK__RESUME_OFFSET))(this);
		}

		::System::Boolean Pause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_PAUSE_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_CANCEL_OFFSET))(this);
		}

		::System::Boolean _CreateDirectoryIfNeeded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK__CREATEDIRECTORYIFNEEDED_OFFSET))(this);
		}

		::System::Boolean _CheckLocalFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK__CHECKLOCALFILE_OFFSET))(this);
		}

		::System::Boolean _RequestFileHeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK__REQUESTFILEHEADER_OFFSET))(this);
		}

		::System::Void _RetryIfNeeded(::System::Exception* a1, ::MiHoYo::SDK::FileDownloadErrorCode a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::MiHoYo::SDK::FileDownloadErrorCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK__RETRYIFNEEDED_OFFSET))(this, a1, a2);
		}

		::System::Boolean _SaveMD5FileIfNeeded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK__SAVEMD5FILEIFNEEDED_OFFSET))(this);
		}

		::System::Void _DeleteMD5FileIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK__DELETEMD5FILEIFNEEDED_OFFSET))(this);
		}

		static ::System::Boolean AcceptRangesForResponse(::System::Net::WebResponse* a1)
		{
			return ((::System::Boolean(*)(::System::Net::WebResponse*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_ACCEPTRANGESFORRESPONSE_OFFSET))(a1);
		}

		static ::System::String* ETagForResponse(::System::Net::WebResponse* a1)
		{
			return ((::System::String*(*)(::System::Net::WebResponse*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_ETAGFORRESPONSE_OFFSET))(a1);
		}

		::MiHoYo::SDK::JSONObject* get_jsonNode()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_GET_JSONNODE_OFFSET))(this);
		}

		::System::String* get_jsonString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_GET_JSONSTRING_OFFSET))(this);
		}

		::System::String* JSONString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_JSONSTRING_OFFSET))(this);
		}
	};
}
