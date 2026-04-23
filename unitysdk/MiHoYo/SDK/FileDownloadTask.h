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

#define MIHOYO_SDK_FILEDOWNLOADTASK_ACCEPTRANGESFORRESPONSE_OFFSET UNITYSDK_OFFSET(0x8D06CA0)
#define MIHOYO_SDK_FILEDOWNLOADTASK_CANCEL_OFFSET UNITYSDK_OFFSET(0x8D06AA0)
#define MIHOYO_SDK_FILEDOWNLOADTASK_ETAGFORRESPONSE_OFFSET UNITYSDK_OFFSET(0x8D06D60)
#define MIHOYO_SDK_FILEDOWNLOADTASK_GET_BYTESWRITTEN_OFFSET UNITYSDK_OFFSET(0x8D02B70)
#define MIHOYO_SDK_FILEDOWNLOADTASK_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x8D02B60)
#define MIHOYO_SDK_FILEDOWNLOADTASK_GET_DONE_OFFSET UNITYSDK_OFFSET(0x8D02B90)
#define MIHOYO_SDK_FILEDOWNLOADTASK_GET_ERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x8D02BB0)
#define MIHOYO_SDK_FILEDOWNLOADTASK_GET_JSONNODE_OFFSET UNITYSDK_OFFSET(0x8D06DF0)
#define MIHOYO_SDK_FILEDOWNLOADTASK_GET_JSONSTRING_OFFSET UNITYSDK_OFFSET(0x8D072B0)
#define MIHOYO_SDK_FILEDOWNLOADTASK_GET_MD5TMPPATH_OFFSET UNITYSDK_OFFSET(0x8D02AD0)
#define MIHOYO_SDK_FILEDOWNLOADTASK_GET_PAUSED_OFFSET UNITYSDK_OFFSET(0x8D02B20)
#define MIHOYO_SDK_FILEDOWNLOADTASK_GET_TMPPATH_OFFSET UNITYSDK_OFFSET(0x8D02A80)
#define MIHOYO_SDK_FILEDOWNLOADTASK_JSONSTRING_OFFSET UNITYSDK_OFFSET(0x8D07390)
#define MIHOYO_SDK_FILEDOWNLOADTASK_PAUSE_OFFSET UNITYSDK_OFFSET(0x8D06A90)
#define MIHOYO_SDK_FILEDOWNLOADTASK_SET_BYTESWRITTEN_OFFSET UNITYSDK_OFFSET(0x8D02B80)
#define MIHOYO_SDK_FILEDOWNLOADTASK_START_OFFSET UNITYSDK_OFFSET(0x8D033C0)
#define MIHOYO_SDK_FILEDOWNLOADTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D07470)
#define MIHOYO_SDK_FILEDOWNLOADTASK__CHECKLOCALFILE_OFFSET UNITYSDK_OFFSET(0x8D04DF0)
#define MIHOYO_SDK_FILEDOWNLOADTASK__CREATEDIRECTORYIFNEEDED_OFFSET UNITYSDK_OFFSET(0x8D04D10)
#define MIHOYO_SDK_FILEDOWNLOADTASK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8D02C20)
#define MIHOYO_SDK_FILEDOWNLOADTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x8D02C10)
#define MIHOYO_SDK_FILEDOWNLOADTASK__DELETEMD5FILEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x8D06370)
#define MIHOYO_SDK_FILEDOWNLOADTASK__REQUESTFILEHEADER_OFFSET UNITYSDK_OFFSET(0x8D055B0)
#define MIHOYO_SDK_FILEDOWNLOADTASK__RESUME_OFFSET UNITYSDK_OFFSET(0x8D033D0)
#define MIHOYO_SDK_FILEDOWNLOADTASK__RETRYIFNEEDED_OFFSET UNITYSDK_OFFSET(0x8D064F0)
#define MIHOYO_SDK_FILEDOWNLOADTASK__SAVEMD5FILEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x8D06180)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int FileDownloadTask_TypeDefinitionIndex = 42890;

	class FileDownloadTask : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_Timeout()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FileDownloadTask_TypeDefinitionIndex)->GetStaticField(0xF900);
		}
		static ::System::Int32* StaticGet_ReadWriteTimeout()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FileDownloadTask_TypeDefinitionIndex)->GetStaticField(0xF904);
		}
		::System::IO::FileStream* fileStream; // 0x10
		::System::String* url; // 0x18
		::System::String* exceptionPayload; // 0x20
		::System::String* errorTextMessage; // 0x28
		::System::Exception* exception; // 0x30
		::System::String* path; // 0x38
		::System::String* filename; // 0x40
		::System::String* ETag; // 0x48
		::System::String* md5; // 0x50
		::System::Int32 _contentLength; // 0x58
		::System::Int32 errorCodeIntValue; // 0x5C
		::MiHoYo::SDK::FileDownloadErrorCode errorCode; // 0x60
		::System::Boolean CancelDownload; // 0x64
		::System::Boolean _pause; // 0x65
		::MiHoYo::SDK::FileDownloadStatus status; // 0x68
		::System::Int32 RetryCount; // 0x6C
		::System::Int32 _BytesWritten_k__BackingField; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::JSONObject* jsonObject)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK__CTOR_1_OFFSET))(this, jsonObject);
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

		::System::Void set_BytesWritten(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_SET_BYTESWRITTEN_OFFSET))(this, value);
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

		::System::Void _RetryIfNeeded(::System::Exception* exception, ::MiHoYo::SDK::FileDownloadErrorCode code)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::MiHoYo::SDK::FileDownloadErrorCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK__RETRYIFNEEDED_OFFSET))(this, exception, code);
		}

		::System::Boolean _SaveMD5FileIfNeeded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK__SAVEMD5FILEIFNEEDED_OFFSET))(this);
		}

		::System::Void _DeleteMD5FileIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK__DELETEMD5FILEIFNEEDED_OFFSET))(this);
		}

		static ::System::Boolean AcceptRangesForResponse(::System::Net::WebResponse* response)
		{
			return ((::System::Boolean(*)(::System::Net::WebResponse*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_ACCEPTRANGESFORRESPONSE_OFFSET))(response);
		}

		static ::System::String* ETagForResponse(::System::Net::WebResponse* response)
		{
			return ((::System::String*(*)(::System::Net::WebResponse*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_FILEDOWNLOADTASK_ETAGFORRESPONSE_OFFSET))(response);
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
