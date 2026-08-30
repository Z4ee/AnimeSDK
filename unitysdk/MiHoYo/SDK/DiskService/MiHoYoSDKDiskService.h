#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/DiskService/MiHoYoSDKDiskService_DEVICE_SEEK_PENALTY_DESCRIPTOR.h"
#include "unitysdk/MiHoYo/SDK/DiskService/MiHoYoSDKDiskService_STORAGE_PROPERTY_QUERY.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::Win32::SafeHandles { class SafeFileHandle; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text { class StringBuilder; }

#define MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_CREATEFILEW_OFFSET UNITYSDK_OFFSET(0xB1CCDC0)
#define MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_CTL_CODE_OFFSET UNITYSDK_OFFSET(0xB1CCEF0)
#define MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_DEVICEIOCONTROL_OFFSET UNITYSDK_OFFSET(0xB1CCF10)
#define MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_FORMATMESSAGE_OFFSET UNITYSDK_OFFSET(0xB1CD110)
#define MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_GETDISKTYPE_OFFSET UNITYSDK_OFFSET(0xB1CD480)
#define MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_GETERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0xB1CD240)
#define MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_GETLOGICALDRIVE_OFFSET UNITYSDK_OFFSET(0xB1CD410)
#define MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0xB1CDE70)
#define MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xB1CDE60)

namespace MiHoYo::SDK::DiskService
{
	inline static constexpr unsigned int MiHoYoSDKDiskService_TypeDefinitionIndex = 47133;

	class MiHoYoSDKDiskService : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_diskTypeDicLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDiskService_TypeDefinitionIndex)->GetStaticField(0x43E70);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_diskTypeDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDiskService_TypeDefinitionIndex)->GetStaticField(0x43E78);
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

		static ::Microsoft::Win32::SafeHandles::SafeFileHandle* CreateFileW(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::IntPtr a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::IntPtr a7)
		{
			return ((::Microsoft::Win32::SafeHandles::SafeFileHandle*(*)(::System::String*, ::System::UInt32, ::System::UInt32, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_CREATEFILEW_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::UInt32 CTL_CODE(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_CTL_CODE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean DeviceIoControl(::Microsoft::Win32::SafeHandles::SafeFileHandle* a1, ::System::UInt32 a2, ::MiHoYo::SDK::DiskService::MiHoYoSDKDiskService_STORAGE_PROPERTY_QUERY& a3, ::System::UInt32 a4, ::MiHoYo::SDK::DiskService::MiHoYoSDKDiskService_DEVICE_SEEK_PENALTY_DESCRIPTOR& a5, ::System::UInt32 a6, ::System::UInt32& a7, ::System::IntPtr a8)
		{
			return ((::System::Boolean(*)(::Microsoft::Win32::SafeHandles::SafeFileHandle*, ::System::UInt32, ::MiHoYo::SDK::DiskService::MiHoYoSDKDiskService_STORAGE_PROPERTY_QUERY&, ::System::UInt32, ::MiHoYo::SDK::DiskService::MiHoYoSDKDiskService_DEVICE_SEEK_PENALTY_DESCRIPTOR&, ::System::UInt32, ::System::UInt32&, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_DEVICEIOCONTROL_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::UInt32 FormatMessage(::System::UInt32 a1, ::System::IntPtr a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Text::StringBuilder* a5, ::System::UInt32 a6, ::System::IntPtr a7)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::Text::StringBuilder*, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_FORMATMESSAGE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::String* GetErrorMessage(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_GETERRORMESSAGE_OFFSET))(a1);
		}

		static ::System::String* GetLogicalDrive(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_GETLOGICALDRIVE_OFFSET))(a1);
		}

		static ::System::String* GetDiskType(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISKSERVICE_MIHOYOSDKDISKSERVICE_GETDISKTYPE_OFFSET))(a1);
		}
	};
}
