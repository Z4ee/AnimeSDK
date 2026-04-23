#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SecurityTunnel_FileHeader; }
namespace MiHoYo::SDK { class SecurityTunnel_FilePart; }
namespace MiHoYo::SDK { class SecurityTunnel_File_OnTransferCompleteHandler; }
namespace MiHoYo::SDK { class SecurityTunnel_File_Range; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Stream; }

#define MIHOYO_SDK_SECURITYTUNNEL_FILE_CHECKMD5_OFFSET UNITYSDK_OFFSET(0x8DC65B0)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_CLEARDUETOEXCEPTION_OFFSET UNITYSDK_OFFSET(0x8DB9AC0)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_COMPLETEIFEMPTYFILE_OFFSET UNITYSDK_OFFSET(0x8DB95B0)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_GET_DOWNLOADCOMPLETED_OFFSET UNITYSDK_OFFSET(0x8DC62D0)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_ONRECEIVEPART_OFFSET UNITYSDK_OFFSET(0x8DBA240)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_SETUPSTREAM_OFFSET UNITYSDK_OFFSET(0x8DB9030)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x8DC6530)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE__CTOR_OFFSET UNITYSDK_OFFSET(0x8DB8FD0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_File_TypeDefinitionIndex = 42986;

	class SecurityTunnel_File : public ::System::Object
	{
	public:
		::MiHoYo::SDK::SecurityTunnel_FileHeader* Header; // 0x10
		::System::Collections::Generic::List_1<::MiHoYo::SDK::SecurityTunnel_File_Range*>* downloadedRanges; // 0x18
		::System::IO::Stream* Stream; // 0x20

		::System::Void _ctor(::MiHoYo::SDK::SecurityTunnel_FileHeader* header)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_FileHeader*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE__CTOR_OFFSET))(this, header);
		}

		::System::Boolean get_DownloadCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_GET_DOWNLOADCOMPLETED_OFFSET))(this);
		}

		::System::Void SetupStream()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_SETUPSTREAM_OFFSET))(this);
		}

		::System::Void UpdateProgress(::System::UInt64 offset, ::System::UInt64 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_UPDATEPROGRESS_OFFSET))(this, offset, length);
		}

		::System::Void CompleteIfEmptyFile(::MiHoYo::SDK::SecurityTunnel_File_OnTransferCompleteHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_File_OnTransferCompleteHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_COMPLETEIFEMPTYFILE_OFFSET))(this, handler);
		}

		::System::Void ClearDueToException()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_CLEARDUETOEXCEPTION_OFFSET))(this);
		}

		::System::Void OnReceivePart(::MiHoYo::SDK::SecurityTunnel_FilePart* part, ::MiHoYo::SDK::SecurityTunnel_File_OnTransferCompleteHandler* handler)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_FilePart*, ::MiHoYo::SDK::SecurityTunnel_File_OnTransferCompleteHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_ONRECEIVEPART_OFFSET))(this, part, handler);
		}

		::System::Boolean CheckMD5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_CHECKMD5_OFFSET))(this);
		}
	};
}
