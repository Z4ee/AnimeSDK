#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIFSPLUGIN_CRIFSLOADER_GETRETRYCOUNT_OFFSET UNITYSDK_OFFSET(0x164F02E0)
#define CRIWARE_CRIFSPLUGIN_CRIFS_SETREADDEVICEENABLED_OFFSET UNITYSDK_OFFSET(0x164EFB30)
#define CRIWARE_CRIFSPLUGIN_CRIWARE005A4DB9_OFFSET UNITYSDK_OFFSET(0x164F0260)
#define CRIWARE_CRIFSPLUGIN_CRIWARE18BD86D2_OFFSET UNITYSDK_OFFSET(0x164EF860)
#define CRIWARE_CRIFSPLUGIN_CRIWARE32132B9B_OFFSET UNITYSDK_OFFSET(0x164F0130)
#define CRIWARE_CRIFSPLUGIN_CRIWARE906DFDC6_OFFSET UNITYSDK_OFFSET(0x164F00B0)
#define CRIWARE_CRIFSPLUGIN_CRIWAREF425CEF9_OFFSET UNITYSDK_OFFSET(0x164F01E0)
#define CRIWARE_CRIFSPLUGIN_FINALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x164EFE70)
#define CRIWARE_CRIFSPLUGIN_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x164EF740)
#define CRIWARE_CRIFSPLUGIN_INITIALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x164EFC00)
#define CRIWARE_CRIFSPLUGIN_ISLIBRARYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x164EE5F0)
#define CRIWARE_CRIFSPLUGIN_SETCONFIGADDITIONALPARAMETERS_ANDROID_OFFSET UNITYSDK_OFFSET(0x164EFBD0)
#define CRIWARE_CRIFSPLUGIN_SETCONFIGADDITIONALPARAMETERS_EDITOR_OFFSET UNITYSDK_OFFSET(0x164EFBC0)
#define CRIWARE_CRIFSPLUGIN_SETCONFIGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x164EF770)
#define CRIWARE_CRIFSPLUGIN_SETDATADECOMPRESSIONTHREADPRIORITYEXPERIMENTALANDROID_OFFSET UNITYSDK_OFFSET(0x164EFBF0)
#define CRIWARE_CRIFSPLUGIN_SETMEMORYFILESYSTEMTHREADPRIORITYEXPERIMENTALANDROID_OFFSET UNITYSDK_OFFSET(0x164EFBE0)
#define CRIWARE_CRIFSPLUGIN_SETREADDEVICEENABLED_OFFSET UNITYSDK_OFFSET(0x164EF920)
#define CRIWARE_CRIFSPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x164F0360)

namespace CriWare
{
	inline static constexpr unsigned int CriFsPlugin_TypeDefinitionIndex = 38820;

	class CriFsPlugin : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_initializationCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x12B70);
		}
		static ::System::Int32* StaticGet_installBufferSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x12B74);
		}
		static ::System::Boolean* StaticGet_isConfigured()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x12B78);
		}
		static ::System::Int32* StaticGet_defaultInstallBufferSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriFsPlugin_TypeDefinitionIndex)->GetStaticField(0x12B7C);
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

		static ::System::Void SetConfigAdditionalParameters_EDITOR(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_SETCONFIGADDITIONALPARAMETERS_EDITOR_OFFSET))(a1);
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

		static ::System::Void CRIWARE18BD86D2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIWARE18BD86D2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void CRIWARE906DFDC6()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIWARE906DFDC6_OFFSET))();
		}

		static ::System::Boolean CRIWARE32132B9B()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIWARE32132B9B_OFFSET))();
		}

		static ::System::Void CRIWAREF425CEF9()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIWAREF425CEF9_OFFSET))();
		}

		static ::System::UInt32 CRIWARE005A4DB9()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIWARE005A4DB9_OFFSET))();
		}

		static ::System::UInt32 criFsLoader_GetRetryCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIFSLOADER_GETRETRYCOUNT_OFFSET))();
		}

		static ::System::Int32 criFs_SetReadDeviceEnabled(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSPLUGIN_CRIFS_SETREADDEVICEENABLED_OFFSET))(a1, a2);
		}
	};
}
