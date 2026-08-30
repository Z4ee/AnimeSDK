#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SecurityTunnel_FileHeader; }
namespace MiHoYo::SDK { class SecurityTunnel_FilePart; }
namespace MiHoYo::SDK { class SecurityTunnel_File_OnTransferCompleteHandler; }
namespace MiHoYo::SDK { class SecurityTunnel_File_Range; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Stream; }

#define MIHOYO_SDK_SECURITYTUNNEL_FILE_CHECKMD5_OFFSET UNITYSDK_OFFSET(0x1CD30C80)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_CLEARDUETOEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1CD31050)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_COMPLETEIFEMPTYFILE_OFFSET UNITYSDK_OFFSET(0x1CD30A80)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_GET_DOWNLOADCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C6CF150)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_ONRECEIVEPART_OFFSET UNITYSDK_OFFSET(0x1CD313C0)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_SETUPSTREAM_OFFSET UNITYSDK_OFFSET(0x1C6C5D80)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1CD309B0)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C5D20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_File_TypeDefinitionIndex = 46837;

	class SecurityTunnel_File : public ::System::Object
	{
	public:
		::MiHoYo::SDK::SecurityTunnel_FileHeader* Header; // 0x10
		::System::Collections::Generic::List_1<::MiHoYo::SDK::SecurityTunnel_File_Range*>* downloadedRanges; // 0x18
		::System::IO::Stream* Stream; // 0x20

		::System::Void _ctor(::MiHoYo::SDK::SecurityTunnel_FileHeader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_FileHeader*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_DownloadCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_GET_DOWNLOADCOMPLETED_OFFSET))(this);
		}

		::System::Void SetupStream()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_SETUPSTREAM_OFFSET))(this);
		}

		::System::Void UpdateProgress(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_UPDATEPROGRESS_OFFSET))(this, a1, a2);
		}

		::System::Void CompleteIfEmptyFile(::MiHoYo::SDK::SecurityTunnel_File_OnTransferCompleteHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_File_OnTransferCompleteHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_COMPLETEIFEMPTYFILE_OFFSET))(this, a1);
		}

		::System::Void ClearDueToException()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_CLEARDUETOEXCEPTION_OFFSET))(this);
		}

		::System::Void OnReceivePart(::MiHoYo::SDK::SecurityTunnel_FilePart* a1, ::MiHoYo::SDK::SecurityTunnel_File_OnTransferCompleteHandler* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_FilePart*, ::MiHoYo::SDK::SecurityTunnel_File_OnTransferCompleteHandler*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_ONRECEIVEPART_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckMD5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE_CHECKMD5_OFFSET))(this);
		}
	};
}
