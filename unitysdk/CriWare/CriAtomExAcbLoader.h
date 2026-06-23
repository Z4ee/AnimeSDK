#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAcbLoader_LoaderConfig.h"
#include "unitysdk/CriWare/CriAtomExAcbLoader_Status.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"

namespace CriWare { class CriAtomExAcb; }
namespace CriWare { class CriFsBinder; }
namespace System { class String; }

#define CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_CREATE_OFFSET UNITYSDK_OFFSET(0x1E7C65D0)
#define CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1E7C7170)
#define CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1E7C6CA0)
#define CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_LOADACBDATAASYNC_OFFSET UNITYSDK_OFFSET(0x1E7C6B50)
#define CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_LOADACBFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1E7C6660)
#define CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_MOVEACBHANDLE_OFFSET UNITYSDK_OFFSET(0x1E7C6EC0)
#define CRIWARE_CRIATOMEXACBLOADER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E7C6FA0)
#define CRIWARE_CRIATOMEXACBLOADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E7C6F40)
#define CRIWARE_CRIATOMEXACBLOADER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E7C71F0)
#define CRIWARE_CRIATOMEXACBLOADER_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1E7C6C20)
#define CRIWARE_CRIATOMEXACBLOADER_LOADACBDATAASYNC_OFFSET UNITYSDK_OFFSET(0x1E7C67F0)
#define CRIWARE_CRIATOMEXACBLOADER_LOADACBFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1E7C62C0)
#define CRIWARE_CRIATOMEXACBLOADER_MOVEACB_OFFSET UNITYSDK_OFFSET(0x1E7C6D20)
#define CRIWARE_CRIATOMEXACBLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C6740)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcbLoader_TypeDefinitionIndex = 34294;

	class CriAtomExAcbLoader : public ::CriWare::CriDisposable
	{
	public:
		::System::IntPtr handle; // 0x20
		::System::Nullable_1<::System::Runtime::InteropServices::GCHandle> gch; // 0x28

		::System::Void _ctor(::System::IntPtr handle, ::System::Nullable_1<::System::Runtime::InteropServices::GCHandle> dataHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Nullable_1<::System::Runtime::InteropServices::GCHandle>))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER__CTOR_OFFSET))(this, handle, dataHandle);
		}

		static ::CriWare::CriAtomExAcbLoader* LoadAcbFileAsync(::CriWare::CriFsBinder* binder, ::System::String* acbPath, ::System::String* awbPath, ::System::Boolean loadAwbOnMemory)
		{
			return ((::CriWare::CriAtomExAcbLoader*(*)(::CriWare::CriFsBinder*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_LOADACBFILEASYNC_OFFSET))(binder, acbPath, awbPath, loadAwbOnMemory);
		}

		static ::CriWare::CriAtomExAcbLoader* LoadAcbDataAsync(::Il2CppArray<::System::Byte>* acbData, ::CriWare::CriFsBinder* awbBinder, ::System::String* awbPath, ::System::Boolean loadAwbOnMemory)
		{
			return ((::CriWare::CriAtomExAcbLoader*(*)(::Il2CppArray<::System::Byte>*, ::CriWare::CriFsBinder*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_LOADACBDATAASYNC_OFFSET))(acbData, awbBinder, awbPath, loadAwbOnMemory);
		}

		::CriWare::CriAtomExAcbLoader_Status GetStatus()
		{
			return ((::CriWare::CriAtomExAcbLoader_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_GETSTATUS_OFFSET))(this);
		}

		::CriWare::CriAtomExAcb* MoveAcb()
		{
			return ((::CriWare::CriAtomExAcb*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_MOVEACB_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_FINALIZE_OFFSET))(this);
		}

		static ::System::IntPtr criAtomExAcbLoader_Create(::CriWare::CriAtomExAcbLoader_LoaderConfig& config)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExAcbLoader_LoaderConfig&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_CREATE_OFFSET))(config);
		}

		static ::System::Void criAtomExAcbLoader_Destroy(::System::IntPtr acb_loader)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_DESTROY_OFFSET))(acb_loader);
		}

		static ::System::Boolean criAtomExAcbLoader_LoadAcbFileAsync(::System::IntPtr acb_loader, ::System::IntPtr acb_binder, ::System::String* acb_path, ::System::IntPtr awb_binder, ::System::String* awb_path)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_LOADACBFILEASYNC_OFFSET))(acb_loader, acb_binder, acb_path, awb_binder, awb_path);
		}

		static ::System::Boolean criAtomExAcbLoader_LoadAcbDataAsync(::System::IntPtr acb_loader, ::System::IntPtr acb_data, ::System::Int32 acb_size, ::System::IntPtr awb_binder, ::System::String* awb_path)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_LOADACBDATAASYNC_OFFSET))(acb_loader, acb_data, acb_size, awb_binder, awb_path);
		}

		static ::CriWare::CriAtomExAcbLoader_Status criAtomExAcbLoader_GetStatus(::System::IntPtr acb_loader)
		{
			return ((::CriWare::CriAtomExAcbLoader_Status(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_GETSTATUS_OFFSET))(acb_loader);
		}

		static ::System::IntPtr criAtomExAcbLoader_MoveAcbHandle(::System::IntPtr acb_loader)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACBLOADER_CRIATOMEXACBLOADER_MOVEACBHANDLE_OFFSET))(acb_loader);
		}
	};
}
