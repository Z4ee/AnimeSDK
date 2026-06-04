#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIFSPLUGIN_CRIFSLOADER_GETRETRYCOUNT_OFFSET UNITYSDK_OFFSET(0x146C3C10)
#define CRIWARE_CRIFSPLUGIN_CRIFS_GETNUMBINDS_OFFSET UNITYSDK_OFFSET(0x146C3C90)
#define CRIWARE_CRIFSPLUGIN_CRIFS_GETNUMUSEDINSTALLERS_OFFSET UNITYSDK_OFFSET(0x146C3DB0)
#define CRIWARE_CRIFSPLUGIN_CRIFS_GETNUMUSEDLOADERS_OFFSET UNITYSDK_OFFSET(0x146C3D20)
#define CRIWARE_CRIFSPLUGIN_CRIFS_SETREADDEVICEENABLED_OFFSET UNITYSDK_OFFSET(0x146C3920)
#define CRIWARE_CRIFSPLUGIN_CRIWARE1012AF20_OFFSET UNITYSDK_OFFSET(0x146C3A60)
#define CRIWARE_CRIFSPLUGIN_CRIWARE601ABE43_OFFSET UNITYSDK_OFFSET(0x146C39E0)
#define CRIWARE_CRIFSPLUGIN_CRIWARE74A6103A_OFFSET UNITYSDK_OFFSET(0x146C3B10)
#define CRIWARE_CRIFSPLUGIN_CRIWARE785081A5_OFFSET UNITYSDK_OFFSET(0x146C3B90)
#define CRIWARE_CRIFSPLUGIN_CRIWARE8451156E_OFFSET UNITYSDK_OFFSET(0x146C3650)
#define CRIWARE_CRIFSPLUGIN_FINALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x146B51F0)
#define CRIWARE_CRIFSPLUGIN_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x146C3530)
#define CRIWARE_CRIFSPLUGIN_INITIALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x146B4C60)
#define CRIWARE_CRIFSPLUGIN_ISLIBRARYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x146BE500)
#define CRIWARE_CRIFSPLUGIN_SETCONFIGADDITIONALPARAMETERS_ANDROID_OFFSET UNITYSDK_OFFSET(0x146C39B0)
#define CRIWARE_CRIFSPLUGIN_SETCONFIGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x146C3560)
#define CRIWARE_CRIFSPLUGIN_SETDATADECOMPRESSIONTHREADPRIORITYEXPERIMENTALANDROID_OFFSET UNITYSDK_OFFSET(0x146C39D0)
#define CRIWARE_CRIFSPLUGIN_SETMEMORYFILESYSTEMTHREADPRIORITYEXPERIMENTALANDROID_OFFSET UNITYSDK_OFFSET(0x146C39C0)
#define CRIWARE_CRIFSPLUGIN_SETREADDEVICEENABLED_OFFSET UNITYSDK_OFFSET(0x146C3710)
#define CRIWARE_CRIFSPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x146C3E40)

namespace CriWare
{
	inline static constexpr unsigned int CriFsPlugin_TypeDefinitionIndex = 37159;

	class CriFsPlugin : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_initializationCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x35F0);
		}
		static ::System::Int32* StaticGet_installBufferSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x35F4);
		}
		static ::System::Boolean* StaticGet_isConfigured()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x35F8);
		}
		static ::System::Int32* StaticGet_defaultInstallBufferSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x35FC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_isInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_GET_ISINITIALIZED_OFFSET))();
		}

		static ::System::Void SetConfigParameters(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_SETCONFIGPARAMETERS_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void SetReadDeviceEnabled(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_SETREADDEVICEENABLED_OFFSET))(a1, a2);
		}

		static ::System::Void SetConfigAdditionalParameters_ANDROID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_SETCONFIGADDITIONALPARAMETERS_ANDROID_OFFSET))(a1);
		}

		static ::System::Void SetMemoryFileSystemThreadPriorityExperimentalAndroid(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_SETMEMORYFILESYSTEMTHREADPRIORITYEXPERIMENTALANDROID_OFFSET))(a1);
		}

		static ::System::Void SetDataDecompressionThreadPriorityExperimentalAndroid(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_SETDATADECOMPRESSIONTHREADPRIORITYEXPERIMENTALANDROID_OFFSET))(a1);
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

		static ::System::Void CRIWARE8451156E(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIWARE8451156E_OFFSET))(a1, a2, a3, a4, a5, a6);
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

		static ::System::Int32 criFs_GetNumBinds(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIFS_GETNUMBINDS_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criFs_GetNumUsedLoaders(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIFS_GETNUMUSEDLOADERS_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criFs_GetNumUsedInstallers(::System::Int32& a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIFS_GETNUMUSEDINSTALLERS_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criFs_SetReadDeviceEnabled(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIFS_SETREADDEVICEENABLED_OFFSET))(a1, a2);
		}
	};
}
