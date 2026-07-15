#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/DeviceInfoManager_MEMORY_INFO.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class DeviceInfoManager_MiHoYoSDKDriverInfo; }
namespace System { class String; }

#define MIHOYO_SDK_DEVICEINFOMANAGER_GETCURRENTDRIVENAME_OFFSET UNITYSDK_OFFSET(0x15380110)
#define MIHOYO_SDK_DEVICEINFOMANAGER_GETDISKFREESPACEEXA_OFFSET UNITYSDK_OFFSET(0x153802B0)
#define MIHOYO_SDK_DEVICEINFOMANAGER_GETDRIVEINFO_OFFSET UNITYSDK_OFFSET(0x15380130)
#define MIHOYO_SDK_DEVICEINFOMANAGER_GETDRIVETOTALFREESPACE_OFFSET UNITYSDK_OFFSET(0x153771B0)
#define MIHOYO_SDK_DEVICEINFOMANAGER_GETDRIVETOTALSPACE_OFFSET UNITYSDK_OFFSET(0x153770D0)
#define MIHOYO_SDK_DEVICEINFOMANAGER_GETMACADDRESS_OFFSET UNITYSDK_OFFSET(0x15377470)
#define MIHOYO_SDK_DEVICEINFOMANAGER_GETNETWORKADAPTERDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x15377880)
#define MIHOYO_SDK_DEVICEINFOMANAGER_GETNETWORKADAPTERLIST_OFFSET UNITYSDK_OFFSET(0x153778F0)
#define MIHOYO_SDK_DEVICEINFOMANAGER_GETNETWORKTYPE_OFFSET UNITYSDK_OFFSET(0x15377D10)
#define MIHOYO_SDK_DEVICEINFOMANAGER_GETRAMREMAIN_OFFSET UNITYSDK_OFFSET(0x15377330)
#define MIHOYO_SDK_DEVICEINFOMANAGER_GLOBALMEMORYSTATUS_OFFSET UNITYSDK_OFFSET(0x15380230)
#define MIHOYO_SDK_DEVICEINFOMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15380380)
#define MIHOYO_SDK_DEVICEINFOMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x153800E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DeviceInfoManager_TypeDefinitionIndex = 44743;

	class DeviceInfoManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::DeviceInfoManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::DeviceInfoManager**)Il2CppClass::FromTypeDefinitionIndex(DeviceInfoManager_TypeDefinitionIndex)->GetStaticField(0xC240);
		}
		::System::String* strAdapterInfoList; // 0x10
		::System::String* strNetworkType; // 0x18
		::System::String* strMacAddr; // 0x20
		::System::String* strAdapterDescription; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER__CCTOR_OFFSET))();
		}

		::System::Double GetDriveTotalSpace(::System::String* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GETDRIVETOTALSPACE_OFFSET))(this, a1);
		}

		::System::Double GetDriveTotalFreeSpace(::System::String* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GETDRIVETOTALFREESPACE_OFFSET))(this, a1);
		}

		static ::System::Void GlobalMemoryStatus(::MiHoYo::SDK::DeviceInfoManager_MEMORY_INFO& a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::DeviceInfoManager_MEMORY_INFO&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GLOBALMEMORYSTATUS_OFFSET))(a1);
		}

		::System::Double GetRamRemain()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GETRAMREMAIN_OFFSET))(this);
		}

		::System::String* GetMacAddress()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GETMACADDRESS_OFFSET))(this);
		}

		::System::String* GetNetworkAdapterDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GETNETWORKADAPTERDESCRIPTION_OFFSET))(this);
		}

		::System::String* GetNetworkAdapterList()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GETNETWORKADAPTERLIST_OFFSET))(this);
		}

		::System::String* GetNetworkType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GETNETWORKTYPE_OFFSET))(this);
		}

		::System::String* GetCurrentDriveName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GETCURRENTDRIVENAME_OFFSET))(this);
		}

		static ::System::Int32 GetDiskFreeSpaceExA(::System::String* a1, ::System::Int64& a2, ::System::Int64& a3, ::System::Int64& a4)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int64&, ::System::Int64&, ::System::Int64&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GETDISKFREESPACEEXA_OFFSET))(a1, a2, a3, a4);
		}

		::MiHoYo::SDK::DeviceInfoManager_MiHoYoSDKDriverInfo* GetDriveInfo(::System::String* a1)
		{
			return ((::MiHoYo::SDK::DeviceInfoManager_MiHoYoSDKDriverInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DEVICEINFOMANAGER_GETDRIVEINFO_OFFSET))(this, a1);
		}
	};
}
