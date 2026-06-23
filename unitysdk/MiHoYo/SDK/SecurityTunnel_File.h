#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SecurityTunnel_FileHeader; }
namespace MiHoYo::SDK { class SecurityTunnel_FilePart; }
namespace MiHoYo::SDK { class SecurityTunnel_File_OnTransferCompleteHandler; }
namespace MiHoYo::SDK { class SecurityTunnel_File_Range; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Stream; }

#define MIHOYO_SDK_SECURITYTUNNEL_FILE_CHECKMD5_OFFSET UNITYSDK_OFFSET(0x1CC6EF10)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_CLEARDUETOEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1CC6F1B0)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_COMPLETEIFEMPTYFILE_OFFSET UNITYSDK_OFFSET(0x1CC6ED90)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_GET_DOWNLOADCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CC6E640)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_ONRECEIVEPART_OFFSET UNITYSDK_OFFSET(0x1CC6F360)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_SETUPSTREAM_OFFSET UNITYSDK_OFFSET(0x1CC6E760)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1CC6ED20)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC6EC90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_File_TypeDefinitionIndex = 36764;

	class SecurityTunnel_File : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MiHoYo::SDK::SecurityTunnel_File_Range*>* downloadedRanges; // 0x10
		::MiHoYo::SDK::SecurityTunnel_FileHeader* Header; // 0x18
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
