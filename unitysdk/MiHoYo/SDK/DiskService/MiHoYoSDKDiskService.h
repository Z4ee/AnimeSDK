#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/DiskService/MiHoYoSDKDiskService_DEVICE_SEEK_PENALTY_DESCRIPTOR.h"
#include "unitysdk/MiHoYo/SDK/DiskService/MiHoYoSDKDiskService_STORAGE_PROPERTY_QUERY.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32::SafeHandles { class SafeFileHandle; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text { class StringBuilder; }

#define MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_CREATEFILEW_OFFSET UNITYSDK_OFFSET(0x1A49AB90)
#define MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_CTL_CODE_OFFSET UNITYSDK_OFFSET(0x1A49AD00)
#define MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_DEVICEIOCONTROL_OFFSET UNITYSDK_OFFSET(0x1A49AD20)
#define MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_FORMATMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A49AF50)
#define MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_GETDISKTYPE_OFFSET UNITYSDK_OFFSET(0x1A49B310)
#define MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_GETERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A49B080)
#define MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_GETLOGICALDRIVE_OFFSET UNITYSDK_OFFSET(0x1A49B270)
#define MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A49BB90)
#define MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A49BB80)

namespace MiHoYo::SDK::DiskService
{
	inline static constexpr unsigned int MiHoYoSDKDiskService_TypeDefinitionIndex = 35442;

	class MiHoYoSDKDiskService : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_diskTypeDicLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDiskService_TypeDefinitionIndex)->GetStaticField(0x26910);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_diskTypeDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDiskService_TypeDefinitionIndex)->GetStaticField(0x26918);
		}
		// static const ::System::UInt32 FILE_SHARE_READ = 0x1; // 0x0
		// static const ::System::UInt32 FILE_SHARE_WRITE = 0x2; // 0x0
		// static const ::System::UInt32 OPEN_EXISTING = 0x3; // 0x0
		// static const ::System::UInt32 FILE_ATTRIBUTE_NORMAL = 0x80; // 0x0
		// static const ::System::UInt32 IOCTL_STORAGE_BASE = 0x2D; // 0x0
		// static const ::System::UInt32 METHOD_BUFFERED = 0x0; // 0x0
		// static const ::System::UInt32 FILE_ANY_ACCESS = 0x0; // 0x0
		// static const ::System::UInt32 StorageDeviceSeekPenaltyProperty = 0x7; // 0x0
		// static const ::System::UInt32 PropertyStandardQuery = 0x0; // 0x0
		// static const ::System::UInt32 FORMAT_MESSAGE_FROM_SYSTEM = 0x1000; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE__CCTOR_OFFSET))();
		}

		static ::Microsoft::Win32::SafeHandles::SafeFileHandle* CreateFileW(::System::String* lpFileName, ::System::UInt32 dwDesiredAccess, ::System::UInt32 dwShareMode, ::System::IntPtr lpSecurityAttributes, ::System::UInt32 dwCreationDisposition, ::System::UInt32 dwFlagsAndAttributes, ::System::IntPtr hTemplateFile)
		{
			return ((::Microsoft::Win32::SafeHandles::SafeFileHandle*(*)(::System::String*, ::System::UInt32, ::System::UInt32, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_CREATEFILEW_OFFSET))(lpFileName, dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile);
		}

		static ::System::UInt32 CTL_CODE(::System::UInt32 DeviceType, ::System::UInt32 Function, ::System::UInt32 Method, ::System::UInt32 Access)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_CTL_CODE_OFFSET))(DeviceType, Function, Method, Access);
		}

		static ::System::Boolean DeviceIoControl(::Microsoft::Win32::SafeHandles::SafeFileHandle* hDevice, ::System::UInt32 dwIoControlCode, ::MiHoYo::SDK::DiskService::MiHoYoSDKDiskService_STORAGE_PROPERTY_QUERY& lpInBuffer, ::System::UInt32 nInBufferSize, ::MiHoYo::SDK::DiskService::MiHoYoSDKDiskService_DEVICE_SEEK_PENALTY_DESCRIPTOR& lpOutBuffer, ::System::UInt32 nOutBufferSize, ::System::UInt32& lpBytesReturned, ::System::IntPtr lpOverlapped)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeFileHandle*, ::System::UInt32, ::MiHoYo::SDK::DiskService::MiHoYoSDKDiskService_STORAGE_PROPERTY_QUERY&, ::System::UInt32, ::MiHoYo::SDK::DiskService::MiHoYoSDKDiskService_DEVICE_SEEK_PENALTY_DESCRIPTOR&, ::System::UInt32, ::System::UInt32&, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_DEVICEIOCONTROL_OFFSET))(hDevice, dwIoControlCode, lpInBuffer, nInBufferSize, lpOutBuffer, nOutBufferSize, lpBytesReturned, lpOverlapped);
		}

		static ::System::UInt32 FormatMessage(::System::UInt32 dwFlags, ::System::IntPtr lpSource, ::System::UInt32 dwMessageId, ::System::UInt32 dwLanguageId, ::System::Text::StringBuilder* lpBuffer, ::System::UInt32 nSize, ::System::IntPtr Arguments)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::Text::StringBuilder*, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_FORMATMESSAGE_OFFSET))(dwFlags, lpSource, dwMessageId, dwLanguageId, lpBuffer, nSize, Arguments);
		}

		static ::System::String* GetErrorMessage(::System::Int32 code)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_GETERRORMESSAGE_OFFSET))(code);
		}

		static ::System::String* GetLogicalDrive(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_GETLOGICALDRIVE_OFFSET))(path);
		}

		static ::System::String* GetDiskType(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_GETDISKTYPE_OFFSET))(path);
		}
	};
}
