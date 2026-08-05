#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIFSPLUGIN_CRIWARE0F3477B0_OFFSET UNITYSDK_OFFSET(0x1F4D4B70)
#define CRIWARE_CRIFSPLUGIN_CRIWARE891C65F4_OFFSET UNITYSDK_OFFSET(0x1F4D5460)
#define CRIWARE_CRIFSPLUGIN_CRIWARECDE5A1FA_OFFSET UNITYSDK_OFFSET(0x1F4D53E0)
#define CRIWARE_CRIFSPLUGIN_CRIWAREEF46D040_OFFSET UNITYSDK_OFFSET(0x1F4D5360)
#define CRIWARE_CRIFSPLUGIN_FINALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x1F4D5080)
#define CRIWARE_CRIFSPLUGIN_INITIALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x1F4D4C40)
#define CRIWARE_CRIFSPLUGIN_ISLIBRARYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1F4D4FB0)
#define CRIWARE_CRIFSPLUGIN_SETCONFIGADDITIONALPARAMETERS_ANDROID_OFFSET UNITYSDK_OFFSET(0x1F4D4C30)
#define CRIWARE_CRIFSPLUGIN_SETCONFIGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1F4D4A50)
#define CRIWARE_CRIFSPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4D54E0)

namespace CriWare
{
	inline static constexpr unsigned int CriFsPlugin_TypeDefinitionIndex = 34970;

	class CriFsPlugin : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_defaultInstallBufferSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x8430);
		}
		static ::System::Boolean* StaticGet_isConfigured()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x8434);
		}
		static ::System::Int32* StaticGet_initializationCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x8438);
		}
		static ::System::Int32* StaticGet_installBufferSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x843C);
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

		static ::System::Void CRIWARE0F3477B0(::System::Int32 num_loaders, ::System::Int32 num_binders, ::System::Int32 num_installers, ::System::Int32 max_path, ::System::Boolean minimize_file_descriptor_usage, ::System::Boolean enable_crc_check)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIWARE0F3477B0_OFFSET))(num_loaders, num_binders, num_installers, max_path, minimize_file_descriptor_usage, enable_crc_check);
		}

		static ::System::Void CRIWAREEF46D040()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIWAREEF46D040_OFFSET))();
		}

		static ::System::Boolean CRIWARECDE5A1FA()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIWARECDE5A1FA_OFFSET))();
		}

		static ::System::Void CRIWARE891C65F4()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIWARE891C65F4_OFFSET))();
		}
	};
}
