#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIFSPLUGIN_CRIFSLOADER_GETRETRYCOUNT_OFFSET UNITYSDK_OFFSET(0x11A3A740)
#define CRIWARE_CRIFSPLUGIN_CRIFS_GETNUMBINDS_OFFSET UNITYSDK_OFFSET(0x11A3A7C0)
#define CRIWARE_CRIFSPLUGIN_CRIFS_GETNUMUSEDINSTALLERS_OFFSET UNITYSDK_OFFSET(0x11A3A8E0)
#define CRIWARE_CRIFSPLUGIN_CRIFS_GETNUMUSEDLOADERS_OFFSET UNITYSDK_OFFSET(0x11A3A850)
#define CRIWARE_CRIFSPLUGIN_CRIFS_SETREADDEVICEENABLED_OFFSET UNITYSDK_OFFSET(0x11A3A410)
#define CRIWARE_CRIFSPLUGIN_CRIWARE1012AF20_OFFSET UNITYSDK_OFFSET(0x11A3A550)
#define CRIWARE_CRIFSPLUGIN_CRIWARE601ABE43_OFFSET UNITYSDK_OFFSET(0x11A3A4D0)
#define CRIWARE_CRIFSPLUGIN_CRIWARE74A6103A_OFFSET UNITYSDK_OFFSET(0x11A3A640)
#define CRIWARE_CRIFSPLUGIN_CRIWARE785081A5_OFFSET UNITYSDK_OFFSET(0x11A3A6C0)
#define CRIWARE_CRIFSPLUGIN_CRIWARE8451156E_OFFSET UNITYSDK_OFFSET(0x11A3A140)
#define CRIWARE_CRIFSPLUGIN_FINALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x11A2A410)
#define CRIWARE_CRIFSPLUGIN_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x11A3A020)
#define CRIWARE_CRIFSPLUGIN_INITIALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x11A29E80)
#define CRIWARE_CRIFSPLUGIN_ISLIBRARYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x11A35220)
#define CRIWARE_CRIFSPLUGIN_SETCONFIGADDITIONALPARAMETERS_ANDROID_OFFSET UNITYSDK_OFFSET(0x11A3A4A0)
#define CRIWARE_CRIFSPLUGIN_SETCONFIGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x11A3A050)
#define CRIWARE_CRIFSPLUGIN_SETDATADECOMPRESSIONTHREADPRIORITYEXPERIMENTALANDROID_OFFSET UNITYSDK_OFFSET(0x11A3A4C0)
#define CRIWARE_CRIFSPLUGIN_SETMEMORYFILESYSTEMTHREADPRIORITYEXPERIMENTALANDROID_OFFSET UNITYSDK_OFFSET(0x11A3A4B0)
#define CRIWARE_CRIFSPLUGIN_SETREADDEVICEENABLED_OFFSET UNITYSDK_OFFSET(0x11A3A200)
#define CRIWARE_CRIFSPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A3A970)

namespace CriWare
{
	inline static constexpr unsigned int CriFsPlugin_TypeDefinitionIndex = 31139;

	class CriFsPlugin : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_initializationCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x108B0);
		}
		static ::System::Int32* StaticGet_installBufferSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x108B4);
		}
		static ::System::Boolean* StaticGet_isConfigured()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x108B8);
		}
		static ::System::Int32* StaticGet_defaultInstallBufferSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x108BC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_isInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_GET_ISINITIALIZED_OFFSET))();
		}

		static ::System::Void SetConfigParameters(::System::Int32 num_loaders, ::System::Int32 num_binders, ::System::Int32 num_installers, ::System::Int32 argInstallBufferSize, ::System::Int32 max_path, ::System::Boolean minimize_file_descriptor_usage, ::System::Boolean enable_crc_check)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_SETCONFIGPARAMETERS_OFFSET))(num_loaders, num_binders, num_installers, argInstallBufferSize, max_path, minimize_file_descriptor_usage, enable_crc_check);
		}

		static ::System::Void SetReadDeviceEnabled(::System::Int32 deviceId, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_SETREADDEVICEENABLED_OFFSET))(deviceId, enabled);
		}

		static ::System::Void SetConfigAdditionalParameters_ANDROID(::System::Int32 device_read_bps)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_SETCONFIGADDITIONALPARAMETERS_ANDROID_OFFSET))(device_read_bps);
		}

		static ::System::Void SetMemoryFileSystemThreadPriorityExperimentalAndroid(::System::Int32 prio)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_SETMEMORYFILESYSTEMTHREADPRIORITYEXPERIMENTALANDROID_OFFSET))(prio);
		}

		static ::System::Void SetDataDecompressionThreadPriorityExperimentalAndroid(::System::Int32 prio)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_SETDATADECOMPRESSIONTHREADPRIORITYEXPERIMENTALANDROID_OFFSET))(prio);
		}

		static ::System::Void InitializeLibrary()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_INITIALIZELIBRARY_OFFSET))();
		}

		static ::System::Boolean IsLibraryInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_ISLIBRARYINITIALIZED_OFFSET))();
		}

		static ::System::Void FinalizeLibrary()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_FINALIZELIBRARY_OFFSET))();
		}

		static ::System::Void CRIWARE8451156E(::System::Int32 num_loaders, ::System::Int32 num_binders, ::System::Int32 num_installers, ::System::Int32 max_path, ::System::Boolean minimize_file_descriptor_usage, ::System::Boolean enable_crc_check)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIWARE8451156E_OFFSET))(num_loaders, num_binders, num_installers, max_path, minimize_file_descriptor_usage, enable_crc_check);
		}

		static ::System::Void CRIWARE601ABE43()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIWARE601ABE43_OFFSET))();
		}

		static ::System::Boolean CRIWARE1012AF20()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIWARE1012AF20_OFFSET))();
		}

		static ::System::Void CRIWARE74A6103A()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIWARE74A6103A_OFFSET))();
		}

		static ::System::UInt32 CRIWARE785081A5()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIWARE785081A5_OFFSET))();
		}

		static ::System::UInt32 criFsLoader_GetRetryCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIFSLOADER_GETRETRYCOUNT_OFFSET))();
		}

		static ::System::Int32 criFs_GetNumBinds(::System::Int32& cur, ::System::Int32& max, ::System::Int32& limit)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIFS_GETNUMBINDS_OFFSET))(cur, max, limit);
		}

		static ::System::Int32 criFs_GetNumUsedLoaders(::System::Int32& cur, ::System::Int32& max, ::System::Int32& limit)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIFS_GETNUMUSEDLOADERS_OFFSET))(cur, max, limit);
		}

		static ::System::Int32 criFs_GetNumUsedInstallers(::System::Int32& cur, ::System::Int32& max, ::System::Int32& limit)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIFS_GETNUMUSEDINSTALLERS_OFFSET))(cur, max, limit);
		}

		static ::System::Int32 criFs_SetReadDeviceEnabled(::System::Int32 device_id, ::System::Boolean enabled)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIFS_SETREADDEVICEENABLED_OFFSET))(device_id, enabled);
		}
	};
}
