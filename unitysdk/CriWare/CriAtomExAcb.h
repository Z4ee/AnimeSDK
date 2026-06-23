#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_WaveformInfo.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"

namespace CriWare { class CriFsBinder; }
namespace System { class String; }

#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETWAVEFORMINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2487C0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_LOADACBDATA_OFFSET UNITYSDK_OFFSET(0x1E248290)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_LOADACBFILE_OFFSET UNITYSDK_OFFSET(0x1E247E30)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_RELEASE_OFFSET UNITYSDK_OFFSET(0x1E248510)
#define CRIWARE_CRIATOMEXACB_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E2483C0)
#define CRIWARE_CRIATOMEXACB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E248360)
#define CRIWARE_CRIATOMEXACB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E248870)
#define CRIWARE_CRIATOMEXACB_GETWAVEFORMINFO_OFFSET UNITYSDK_OFFSET(0x1E248590)
#define CRIWARE_CRIATOMEXACB_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1E247B90)
#define CRIWARE_CRIATOMEXACB_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1E247B80)
#define CRIWARE_CRIATOMEXACB_LOADACBDATA_OFFSET UNITYSDK_OFFSET(0x1E247FC0)
#define CRIWARE_CRIATOMEXACB_LOADACBFILE_OFFSET UNITYSDK_OFFSET(0x1E247BA0)
#define CRIWARE_CRIATOMEXACB__CTOR_OFFSET UNITYSDK_OFFSET(0x1E247F20)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcb_TypeDefinitionIndex = 34293;

	class CriAtomExAcb : public ::CriWare::CriDisposable
	{
	public:
		::System::Runtime::InteropServices::GCHandle dataHandle; // 0x20
		::System::IntPtr handle; // 0x28

		::System::Void _ctor(::System::IntPtr handle, ::System::Nullable_1<::System::Runtime::InteropServices::GCHandle> dataHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Nullable_1<::System::Runtime::InteropServices::GCHandle>))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB__CTOR_OFFSET))(this, handle, dataHandle);
		}

		::System::IntPtr get_nativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GET_NATIVEHANDLE_OFFSET))(this);
		}

		::System::Boolean get_isAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GET_ISAVAILABLE_OFFSET))(this);
		}

		static ::CriWare::CriAtomExAcb* LoadAcbFile(::CriWare::CriFsBinder* binder, ::System::String* acbPath, ::System::String* awbPath)
		{
			return ((::CriWare::CriAtomExAcb*(*)(::CriWare::CriFsBinder*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_LOADACBFILE_OFFSET))(binder, acbPath, awbPath);
		}

		static ::CriWare::CriAtomExAcb* LoadAcbData(::Il2CppArray<::System::Byte>* acbData, ::CriWare::CriFsBinder* awbBinder, ::System::String* awbPath)
		{
			return ((::CriWare::CriAtomExAcb*(*)(::Il2CppArray<::System::Byte>*, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_LOADACBDATA_OFFSET))(acbData, awbBinder, awbPath);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Boolean GetWaveFormInfo(::System::String* cueName, ::CriWare::CriAtomEx_WaveformInfo& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::CriWare::CriAtomEx_WaveformInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETWAVEFORMINFO_OFFSET))(this, cueName, info);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_FINALIZE_OFFSET))(this);
		}

		static ::System::IntPtr criAtomExAcb_LoadAcbFile(::System::IntPtr acb_binder, ::System::String* acb_path, ::System::IntPtr awb_binder, ::System::String* awb_path, ::System::IntPtr work, ::System::Int32 work_size)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_LOADACBFILE_OFFSET))(acb_binder, acb_path, awb_binder, awb_path, work, work_size);
		}

		static ::System::IntPtr criAtomExAcb_LoadAcbData(::System::IntPtr acb_data, ::System::Int32 acb_data_size, ::System::IntPtr awb_binder, ::System::String* awb_path, ::System::IntPtr work, ::System::Int32 work_size)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_LOADACBDATA_OFFSET))(acb_data, acb_data_size, awb_binder, awb_path, work, work_size);
		}

		static ::System::Void criAtomExAcb_Release(::System::IntPtr acb_hn)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_RELEASE_OFFSET))(acb_hn);
		}

		static ::System::Boolean criAtomExAcb_GetWaveformInfoByName(::System::IntPtr acb_hn, ::System::String* name, ::System::IntPtr waveform_info)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETWAVEFORMINFOBYNAME_OFFSET))(acb_hn, name, waveform_info);
		}
	};
}
