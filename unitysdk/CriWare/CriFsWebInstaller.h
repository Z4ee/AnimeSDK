#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/CriWare/CriFsWebInstaller_ModuleConfig.h"
#include "unitysdk/CriWare/CriFsWebInstaller_StatusInfo.h"

namespace System { class String; }
namespace System { class Type; }

#define CRIWARE_CRIFSWEBINSTALLER_COPY_OFFSET UNITYSDK_OFFSET(0x11A3CDF0)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_COPY_OFFSET UNITYSDK_OFFSET(0x11A3D940)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_CREATE_OFFSET UNITYSDK_OFFSET(0x11A3D570)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_DESTROY_OFFSET UNITYSDK_OFFSET(0x11A3E600)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_EXECUTEMAIN_OFFSET UNITYSDK_OFFSET(0x11A3E400)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x11A3E380)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_GETCRC32_OFFSET UNITYSDK_OFFSET(0x11A3DB10)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_GETSTATUSINFO_OFFSET UNITYSDK_OFFSET(0x11A3DA80)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x11A3E0A0)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_SETREQUESTHEADER_OFFSET UNITYSDK_OFFSET(0x11A3E540)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_STOP_OFFSET UNITYSDK_OFFSET(0x11A3DA00)
#define CRIWARE_CRIFSWEBINSTALLER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x11A3D660)
#define CRIWARE_CRIFSWEBINSTALLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11A3D340)
#define CRIWARE_CRIFSWEBINSTALLER_EXECUTEMAIN_OFFSET UNITYSDK_OFFSET(0x11A3B930)
#define CRIWARE_CRIFSWEBINSTALLER_FINALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x11A3E180)
#define CRIWARE_CRIFSWEBINSTALLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x11A3D5F0)
#define CRIWARE_CRIFSWEBINSTALLER_GETCRC32_OFFSET UNITYSDK_OFFSET(0x11A3D2B0)
#define CRIWARE_CRIFSWEBINSTALLER_GETCRIFSWEBINSTALLERCURLEXPANSIONCLASS_OFFSET UNITYSDK_OFFSET(0x11A3E040)
#define CRIWARE_CRIFSWEBINSTALLER_GETSTATUSINFO_OFFSET UNITYSDK_OFFSET(0x11A3D1D0)
#define CRIWARE_CRIFSWEBINSTALLER_GET_DEFAULTMODULECONFIG_OFFSET UNITYSDK_OFFSET(0x11A3D520)
#define CRIWARE_CRIFSWEBINSTALLER_GET_ISCRCENABLED_OFFSET UNITYSDK_OFFSET(0x11A3D4B0)
#define CRIWARE_CRIFSWEBINSTALLER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x11A3D440)
#define CRIWARE_CRIFSWEBINSTALLER_INITIALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x11A3DBA0)
#define CRIWARE_CRIFSWEBINSTALLER_SETREQUESTHEADER_OFFSET UNITYSDK_OFFSET(0x11A3E480)
#define CRIWARE_CRIFSWEBINSTALLER_SET_ISCRCENABLED_OFFSET UNITYSDK_OFFSET(0x11A3D4F0)
#define CRIWARE_CRIFSWEBINSTALLER_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x11A3D480)
#define CRIWARE_CRIFSWEBINSTALLER_STOP_OFFSET UNITYSDK_OFFSET(0x11A3CC40)
#define CRIWARE_CRIFSWEBINSTALLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A3CCD0)

namespace CriWare
{
	inline static constexpr unsigned int CriFsWebInstaller_TypeDefinitionIndex = 31141;

	class CriFsWebInstaller : public ::CriWare::CriDisposable
	{
	public:
		static ::System::Boolean* StaticGet__isCrcEnabled_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriFsWebInstaller_TypeDefinitionIndex)->GetStaticField(0x10970);
		}
		static ::System::Boolean* StaticGet__isInitialized_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriFsWebInstaller_TypeDefinitionIndex)->GetStaticField(0x10971);
		}
		// static const ::System::Int32 InvalidHttpStatusCode = 0xFFFFFFFF; // 0x0
		// static const ::System::Int64 InvalidContentsSize = 0xFFFFFFFFFFFFFFFF; // 0x0
		::System::IntPtr handle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_isInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_GET_ISINITIALIZED_OFFSET))();
		}

		static ::System::Void set_isInitialized(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_SET_ISINITIALIZED_OFFSET))(value);
		}

		static ::System::Boolean get_isCrcEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_GET_ISCRCENABLED_OFFSET))();
		}

		static ::System::Void set_isCrcEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_SET_ISCRCENABLED_OFFSET))(value);
		}

		static ::CriWare::CriFsWebInstaller_ModuleConfig get_defaultModuleConfig()
		{
			return ((::CriWare::CriFsWebInstaller_ModuleConfig(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_GET_DEFAULTMODULECONFIG_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_DISPOSE_OFFSET))(this);
		}

		::System::Void Copy(::System::String* url, ::System::String* dstPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_COPY_OFFSET))(this, url, dstPath);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_STOP_OFFSET))(this);
		}

		::CriWare::CriFsWebInstaller_StatusInfo GetStatusInfo()
		{
			return ((::CriWare::CriFsWebInstaller_StatusInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_GETSTATUSINFO_OFFSET))(this);
		}

		::System::Boolean GetCRC32(::System::UInt32& ret_val)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_GETCRC32_OFFSET))(this, ret_val);
		}

		static ::System::Void InitializeModule(::CriWare::CriFsWebInstaller_ModuleConfig config)
		{
			return ((::System::Void(*)(::CriWare::CriFsWebInstaller_ModuleConfig))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_INITIALIZEMODULE_OFFSET))(config);
		}

		static ::System::Type* GetCriFsWebInstallerCurlExpansionClass()
		{
			return ((::System::Type*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_GETCRIFSWEBINSTALLERCURLEXPANSIONCLASS_OFFSET))();
		}

		static ::System::Void FinalizeModule()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_FINALIZEMODULE_OFFSET))();
		}

		static ::System::Void ExecuteMain()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_EXECUTEMAIN_OFFSET))();
		}

		static ::System::Boolean SetRequestHeader(::System::String* field, ::System::String* value)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_SETREQUESTHEADER_OFFSET))(field, value);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_DISPOSE_1_OFFSET))(this, disposing);
		}

		static ::System::Int32 criFsWebInstaller_Initialize(::CriWare::CriFsWebInstaller_ModuleConfig& config)
		{
			return ((::System::Int32(*)(::CriWare::CriFsWebInstaller_ModuleConfig&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_INITIALIZE_OFFSET))(config);
		}

		static ::System::Int32 criFsWebInstaller_Finalize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_FINALIZE_OFFSET))();
		}

		static ::System::Int32 criFsWebInstaller_ExecuteMain()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_EXECUTEMAIN_OFFSET))();
		}

		static ::System::Int32 criFsWebInstaller_Create(::System::IntPtr& installer)
		{
			return ((::System::Int32(*)(::System::IntPtr&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_CREATE_OFFSET))(installer);
		}

		static ::System::Int32 criFsWebInstaller_Destroy(::System::IntPtr installer)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_DESTROY_OFFSET))(installer);
		}

		static ::System::Int32 criFsWebInstaller_Copy(::System::IntPtr installer, ::System::String* url, ::System::String* dstPath)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_COPY_OFFSET))(installer, url, dstPath);
		}

		static ::System::Int32 criFsWebInstaller_Stop(::System::IntPtr installer)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_STOP_OFFSET))(installer);
		}

		static ::System::Int32 criFsWebInstaller_GetStatusInfo(::System::IntPtr installer, ::CriWare::CriFsWebInstaller_StatusInfo& status)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::CriWare::CriFsWebInstaller_StatusInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_GETSTATUSINFO_OFFSET))(installer, status);
		}

		static ::System::Int32 criFsWebInstaller_GetCRC32(::System::IntPtr installer, ::System::UInt32& crc32)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::UInt32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_GETCRC32_OFFSET))(installer, crc32);
		}

		static ::System::Int32 criFsWebInstaller_SetRequestHeader(::System::String* field, ::System::String* value)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_SETREQUESTHEADER_OFFSET))(field, value);
		}
	};
}
