#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/CriWare/CriFsWebInstaller_ModuleConfig.h"
#include "unitysdk/CriWare/CriFsWebInstaller_StatusInfo.h"

namespace System { class String; }
namespace System { class Type; }

#define CRIWARE_CRIFSWEBINSTALLER_COPY_OFFSET UNITYSDK_OFFSET(0x1DC38DC0)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_COPY_OFFSET UNITYSDK_OFFSET(0x1DC39950)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_CREATE_OFFSET UNITYSDK_OFFSET(0x1DC39580)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1DC3A4F0)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_EXECUTEMAIN_OFFSET UNITYSDK_OFFSET(0x1DC3A2F0)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1DC3A270)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_GETCRC32_OFFSET UNITYSDK_OFFSET(0x1DC39B20)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_GETSTATUSINFO_OFFSET UNITYSDK_OFFSET(0x1DC39A90)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1DC3A000)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_SETREQUESTHEADER_OFFSET UNITYSDK_OFFSET(0x1DC3A430)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_STOP_OFFSET UNITYSDK_OFFSET(0x1DC39A10)
#define CRIWARE_CRIFSWEBINSTALLER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1DC39670)
#define CRIWARE_CRIFSWEBINSTALLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DC39390)
#define CRIWARE_CRIFSWEBINSTALLER_EXECUTEMAIN_OFFSET UNITYSDK_OFFSET(0x1DC37480)
#define CRIWARE_CRIFSWEBINSTALLER_FINALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x1DC3A0E0)
#define CRIWARE_CRIFSWEBINSTALLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1DC39600)
#define CRIWARE_CRIFSWEBINSTALLER_GETCRC32_OFFSET UNITYSDK_OFFSET(0x1DC39300)
#define CRIWARE_CRIFSWEBINSTALLER_GETCRIFSWEBINSTALLERCURLEXPANSIONCLASS_OFFSET UNITYSDK_OFFSET(0x1DC39FA0)
#define CRIWARE_CRIFSWEBINSTALLER_GETSTATUSINFO_OFFSET UNITYSDK_OFFSET(0x1DC39220)
#define CRIWARE_CRIFSWEBINSTALLER_GET_DEFAULTMODULECONFIG_OFFSET UNITYSDK_OFFSET(0x1DC39530)
#define CRIWARE_CRIFSWEBINSTALLER_GET_ISCRCENABLED_OFFSET UNITYSDK_OFFSET(0x1DC39510)
#define CRIWARE_CRIFSWEBINSTALLER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1DC394F0)
#define CRIWARE_CRIFSWEBINSTALLER_INITIALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x1DC39BB0)
#define CRIWARE_CRIFSWEBINSTALLER_SETREQUESTHEADER_OFFSET UNITYSDK_OFFSET(0x1DC3A370)
#define CRIWARE_CRIFSWEBINSTALLER_SET_ISCRCENABLED_OFFSET UNITYSDK_OFFSET(0x1DC39520)
#define CRIWARE_CRIFSWEBINSTALLER_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1DC39500)
#define CRIWARE_CRIFSWEBINSTALLER_STOP_OFFSET UNITYSDK_OFFSET(0x1DC38C10)
#define CRIWARE_CRIFSWEBINSTALLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC38CA0)

namespace CriWare
{
	inline static constexpr unsigned int CriFsWebInstaller_TypeDefinitionIndex = 38822;

	class CriFsWebInstaller : public ::CriWare::CriDisposable
	{
	public:
		static ::System::Boolean* StaticGet__isCrcEnabled_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriFsWebInstaller_TypeDefinitionIndex)->GetStaticField(0x12DF0);
		}
		static ::System::Boolean* StaticGet__isInitialized_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriFsWebInstaller_TypeDefinitionIndex)->GetStaticField(0x12DF1);
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

		static ::System::Void set_isInitialized(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_SET_ISINITIALIZED_OFFSET))(a1);
		}

		static ::System::Boolean get_isCrcEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_GET_ISCRCENABLED_OFFSET))();
		}

		static ::System::Void set_isCrcEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_SET_ISCRCENABLED_OFFSET))(a1);
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

		::System::Void Copy(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_COPY_OFFSET))(this, a1, a2);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_STOP_OFFSET))(this);
		}

		::CriWare::CriFsWebInstaller_StatusInfo GetStatusInfo()
		{
			return ((::CriWare::CriFsWebInstaller_StatusInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_GETSTATUSINFO_OFFSET))(this);
		}

		::System::Boolean GetCRC32(::System::UInt32& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_GETCRC32_OFFSET))(this, a1);
		}

		static ::System::Void InitializeModule(::CriWare::CriFsWebInstaller_ModuleConfig a1)
		{
			return ((::System::Void(*)(::CriWare::CriFsWebInstaller_ModuleConfig))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_INITIALIZEMODULE_OFFSET))(a1);
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

		static ::System::Boolean SetRequestHeader(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_SETREQUESTHEADER_OFFSET))(a1, a2);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_DISPOSE_1_OFFSET))(this, a1);
		}

		static ::System::Int32 criFsWebInstaller_Initialize(::CriWare::CriFsWebInstaller_ModuleConfig& a1)
		{
			return ((::System::Int32(*)(::CriWare::CriFsWebInstaller_ModuleConfig&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_INITIALIZE_OFFSET))(a1);
		}

		static ::System::Int32 criFsWebInstaller_Finalize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_FINALIZE_OFFSET))();
		}

		static ::System::Int32 criFsWebInstaller_ExecuteMain()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_EXECUTEMAIN_OFFSET))();
		}

		static ::System::Int32 criFsWebInstaller_Create(::System::IntPtr& a1)
		{
			return ((::System::Int32(*)(::System::IntPtr&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_CREATE_OFFSET))(a1);
		}

		static ::System::Int32 criFsWebInstaller_Destroy(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_DESTROY_OFFSET))(a1);
		}

		static ::System::Int32 criFsWebInstaller_Copy(::System::IntPtr a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_COPY_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criFsWebInstaller_Stop(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_STOP_OFFSET))(a1);
		}

		static ::System::Int32 criFsWebInstaller_GetStatusInfo(::System::IntPtr a1, ::CriWare::CriFsWebInstaller_StatusInfo& a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::CriWare::CriFsWebInstaller_StatusInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_GETSTATUSINFO_OFFSET))(a1, a2);
		}

		static ::System::Int32 criFsWebInstaller_GetCRC32(::System::IntPtr a1, ::System::UInt32& a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::UInt32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_GETCRC32_OFFSET))(a1, a2);
		}

		static ::System::Int32 criFsWebInstaller_SetRequestHeader(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_SETREQUESTHEADER_OFFSET))(a1, a2);
		}
	};
}
