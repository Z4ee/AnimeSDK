#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/CriWare/CriFsWebInstaller_StatusInfo.h"

namespace System { class String; }

#define CRIWARE_CRIFSWEBINSTALLER_COPY_OFFSET UNITYSDK_OFFSET(0x1E7FED50)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_COPY_OFFSET UNITYSDK_OFFSET(0x1E7FEE10)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_CREATE_OFFSET UNITYSDK_OFFSET(0x1E7FE8C0)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1E7FF360)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_EXECUTEMAIN_OFFSET UNITYSDK_OFFSET(0x1E7FF2E0)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_GETCRC32_OFFSET UNITYSDK_OFFSET(0x1E7FF1D0)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_GETSTATUSINFO_OFFSET UNITYSDK_OFFSET(0x1E7FF0B0)
#define CRIWARE_CRIFSWEBINSTALLER_CRIFSWEBINSTALLER_STOP_OFFSET UNITYSDK_OFFSET(0x1E7FEF50)
#define CRIWARE_CRIFSWEBINSTALLER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E7FE9B0)
#define CRIWARE_CRIFSWEBINSTALLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E7FECF0)
#define CRIWARE_CRIFSWEBINSTALLER_EXECUTEMAIN_OFFSET UNITYSDK_OFFSET(0x1E7FF260)
#define CRIWARE_CRIFSWEBINSTALLER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E7FE940)
#define CRIWARE_CRIFSWEBINSTALLER_GETCRC32_OFFSET UNITYSDK_OFFSET(0x1E7FF140)
#define CRIWARE_CRIFSWEBINSTALLER_GETSTATUSINFO_OFFSET UNITYSDK_OFFSET(0x1E7FEFD0)
#define CRIWARE_CRIFSWEBINSTALLER_GET_ISCRCENABLED_OFFSET UNITYSDK_OFFSET(0x1E7FE790)
#define CRIWARE_CRIFSWEBINSTALLER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1E7FE780)
#define CRIWARE_CRIFSWEBINSTALLER_STOP_OFFSET UNITYSDK_OFFSET(0x1E7FEED0)
#define CRIWARE_CRIFSWEBINSTALLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7FE7A0)

namespace CriWare
{
	inline static constexpr unsigned int CriFsWebInstaller_TypeDefinitionIndex = 34324;

	class CriFsWebInstaller : public ::CriWare::CriDisposable
	{
	public:
		static ::System::Boolean* StaticGet__isCrcEnabled_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriFsWebInstaller_TypeDefinitionIndex)->GetStaticField(0x8390);
		}
		static ::System::Boolean* StaticGet__isInitialized_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriFsWebInstaller_TypeDefinitionIndex)->GetStaticField(0x8391);
		}
		::System::IntPtr handle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_isInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_GET_ISINITIALIZED_OFFSET))();
		}

		static ::System::Boolean get_isCrcEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_GET_ISCRCENABLED_OFFSET))();
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

		static ::System::Void ExecuteMain()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_EXECUTEMAIN_OFFSET))();
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSWEBINSTALLER_DISPOSE_1_OFFSET))(this, disposing);
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
	};
}
