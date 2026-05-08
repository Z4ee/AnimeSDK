#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIFSPLUGIN_CRIFS_GETNUMUSEDINSTALLERS_OFFSET UNITYSDK_OFFSET(0x1BF335C0)
#define CRIWARE_CRIFSPLUGIN_CRIFS_GETNUMUSEDLOADERS_OFFSET UNITYSDK_OFFSET(0x1BF33530)
#define CRIWARE_CRIFSPLUGIN_CRIWARE1012AF20_OFFSET UNITYSDK_OFFSET(0x1BF33430)
#define CRIWARE_CRIFSPLUGIN_CRIWARE601ABE43_OFFSET UNITYSDK_OFFSET(0x1BF333B0)
#define CRIWARE_CRIFSPLUGIN_CRIWARE74A6103A_OFFSET UNITYSDK_OFFSET(0x1BF334B0)
#define CRIWARE_CRIFSPLUGIN_CRIWARE8451156E_OFFSET UNITYSDK_OFFSET(0x1BF32CB0)
#define CRIWARE_CRIFSPLUGIN_FINALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x1BF330D0)
#define CRIWARE_CRIFSPLUGIN_INITIALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x1BF32D80)
#define CRIWARE_CRIFSPLUGIN_ISLIBRARYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1BF32FF0)
#define CRIWARE_CRIFSPLUGIN_SETCONFIGADDITIONALPARAMETERS_ANDROID_OFFSET UNITYSDK_OFFSET(0x1BF32D70)
#define CRIWARE_CRIFSPLUGIN_SETCONFIGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1BF32B90)
#define CRIWARE_CRIFSPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF33650)

namespace CriWare
{
	inline static constexpr unsigned int CriFsPlugin_TypeDefinitionIndex = 32769;

	class CriFsPlugin : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_initializationCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x7EC0);
		}
		static ::System::Int32* StaticGet_installBufferSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x7EC4);
		}
		static ::System::Boolean* StaticGet_isConfigured()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x7EC8);
		}
		static ::System::Int32* StaticGet_defaultInstallBufferSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x7ECC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN__CCTOR_OFFSET))();
		}

		static ::System::Void SetConfigParameters(::System::Int32 num_loaders, ::System::Int32 num_binders, ::System::Int32 num_installers, ::System::Int32 argInstallBufferSize, ::System::Int32 max_path, ::System::Boolean minimize_file_descriptor_usage, ::System::Boolean enable_crc_check)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_SETCONFIGPARAMETERS_OFFSET))(num_loaders, num_binders, num_installers, argInstallBufferSize, max_path, minimize_file_descriptor_usage, enable_crc_check);
		}

		static ::System::Void SetConfigAdditionalParameters_ANDROID(::System::Int32 device_read_bps)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_SETCONFIGADDITIONALPARAMETERS_ANDROID_OFFSET))(device_read_bps);
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

		static ::System::Int32 criFs_GetNumUsedLoaders(::System::Int32& cur, ::System::Int32& max, ::System::Int32& limit)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIFS_GETNUMUSEDLOADERS_OFFSET))(cur, max, limit);
		}

		static ::System::Int32 criFs_GetNumUsedInstallers(::System::Int32& cur, ::System::Int32& max, ::System::Int32& limit)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIFS_GETNUMUSEDINSTALLERS_OFFSET))(cur, max, limit);
		}
	};
}
