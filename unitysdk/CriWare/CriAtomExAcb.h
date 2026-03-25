#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_AisacControlInfo.h"
#include "unitysdk/CriWare/CriAtomEx_CueInfo.h"
#include "unitysdk/CriWare/CriAtomEx_WaveformInfo.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"

namespace CriWare { class CriFsBinder; }
namespace System { class String; }

#define CRIWARE_CRIATOMEXACB_ATTACHAWBFILE_OFFSET UNITYSDK_OFFSET(0x11A056D0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_ATTACHAWBFILE_OFFSET UNITYSDK_OFFSET(0x11A057D0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_DETACHAWBFILE_OFFSET UNITYSDK_OFFSET(0x11A05970)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_EXISTSID_OFFSET UNITYSDK_OFFSET(0x11A032C0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_EXISTSNAME_OFFSET UNITYSDK_OFFSET(0x11A03190)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETBLOCKINDEXBYID_OFFSET UNITYSDK_OFFSET(0x11A048E0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETBLOCKINDEXBYNAME_OFFSET UNITYSDK_OFFSET(0x11A04770)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETCUEINFOBYID_OFFSET UNITYSDK_OFFSET(0x11A038F0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETCUEINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x11A03BF0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETCUEINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x11A035D0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMCUEPLAYINGCOUNTBYID_OFFSET UNITYSDK_OFFSET(0x11A04620)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMCUEPLAYINGCOUNTBYNAME_OFFSET UNITYSDK_OFFSET(0x11A044F0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMCUES_OFFSET UNITYSDK_OFFSET(0x11A03DC0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLSBYID_OFFSET UNITYSDK_OFFSET(0x11A04B60)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLSBYNAME_OFFSET UNITYSDK_OFFSET(0x11A04A30)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETUSABLEAISACCONTROLBYID_OFFSET UNITYSDK_OFFSET(0x11A05150)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETUSABLEAISACCONTROLBYNAME_OFFSET UNITYSDK_OFFSET(0x11A04E50)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETWAVEFORMINFOBYID_OFFSET UNITYSDK_OFFSET(0x11A043C0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETWAVEFORMINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x11A040B0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_ISREADYTORELEASE_OFFSET UNITYSDK_OFFSET(0x11A05AA0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_LOADACBDATA_OFFSET UNITYSDK_OFFSET(0x11A02E90)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_LOADACBFILE_OFFSET UNITYSDK_OFFSET(0x11A02D10)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_RELEASE_OFFSET UNITYSDK_OFFSET(0x11A03060)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_RESETCUETYPESTATEBYID_OFFSET UNITYSDK_OFFSET(0x11A05650)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_RESETCUETYPESTATEBYNAME_OFFSET UNITYSDK_OFFSET(0x11A05530)
#define CRIWARE_CRIATOMEXACB_DECRYPT_OFFSET UNITYSDK_OFFSET(0x11A05B30)
#define CRIWARE_CRIATOMEXACB_DETACHAWBFILE_OFFSET UNITYSDK_OFFSET(0x11A058C0)
#define CRIWARE_CRIATOMEXACB_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x11A02F60)
#define CRIWARE_CRIATOMEXACB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x119F6A60)
#define CRIWARE_CRIATOMEXACB_EXISTS_1_OFFSET UNITYSDK_OFFSET(0x11A03230)
#define CRIWARE_CRIATOMEXACB_EXISTS_OFFSET UNITYSDK_OFFSET(0x11A030E0)
#define CRIWARE_CRIATOMEXACB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x11A05B80)
#define CRIWARE_CRIATOMEXACB_GETBLOCKINDEX_1_OFFSET UNITYSDK_OFFSET(0x11A04830)
#define CRIWARE_CRIATOMEXACB_GETBLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x11A046B0)
#define CRIWARE_CRIATOMEXACB_GETCUEINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x11A03980)
#define CRIWARE_CRIATOMEXACB_GETCUEINFOLIST_OFFSET UNITYSDK_OFFSET(0x11A03C80)
#define CRIWARE_CRIATOMEXACB_GETCUEINFO_1_OFFSET UNITYSDK_OFFSET(0x11A03680)
#define CRIWARE_CRIATOMEXACB_GETCUEINFO_OFFSET UNITYSDK_OFFSET(0x11A03350)
#define CRIWARE_CRIATOMEXACB_GETLOADPROGRESS_OFFSET UNITYSDK_OFFSET(0x11A05B20)
#define CRIWARE_CRIATOMEXACB_GETNUMCUEPLAYING_1_OFFSET UNITYSDK_OFFSET(0x11A04590)
#define CRIWARE_CRIATOMEXACB_GETNUMCUEPLAYING_OFFSET UNITYSDK_OFFSET(0x11A04450)
#define CRIWARE_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLS_1_OFFSET UNITYSDK_OFFSET(0x11A04AD0)
#define CRIWARE_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLS_OFFSET UNITYSDK_OFFSET(0x11A04990)
#define CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROLLIST_1_OFFSET UNITYSDK_OFFSET(0x11A05350)
#define CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROLLIST_OFFSET UNITYSDK_OFFSET(0x11A051F0)
#define CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROL_1_OFFSET UNITYSDK_OFFSET(0x11A04F10)
#define CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROL_OFFSET UNITYSDK_OFFSET(0x11A04BF0)
#define CRIWARE_CRIATOMEXACB_GETWAVEFORMINFO_1_OFFSET UNITYSDK_OFFSET(0x11A04160)
#define CRIWARE_CRIATOMEXACB_GETWAVEFORMINFO_OFFSET UNITYSDK_OFFSET(0x11A03E40)
#define CRIWARE_CRIATOMEXACB_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x11A02D00)
#define CRIWARE_CRIATOMEXACB_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x11A02CF0)
#define CRIWARE_CRIATOMEXACB_ISREADYTORELEASE_OFFSET UNITYSDK_OFFSET(0x11A05A10)
#define CRIWARE_CRIATOMEXACB_LOADACBDATA_OFFSET UNITYSDK_OFFSET(0x119F76F0)
#define CRIWARE_CRIATOMEXACB_LOADACBFILE_OFFSET UNITYSDK_OFFSET(0x119F7460)
#define CRIWARE_CRIATOMEXACB_RESETCUETYPESTATE_1_OFFSET UNITYSDK_OFFSET(0x11A055D0)
#define CRIWARE_CRIATOMEXACB_RESETCUETYPESTATE_OFFSET UNITYSDK_OFFSET(0x11A05490)
#define CRIWARE_CRIATOMEXACB__CTOR_OFFSET UNITYSDK_OFFSET(0x11A02E00)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcb_TypeDefinitionIndex = 31044;

	class CriAtomExAcb : public ::CriWare::CriDisposable
	{
	public:
		::System::IntPtr handle; // 0x20
		::System::Runtime::InteropServices::GCHandle dataHandle; // 0x28

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

		::System::Boolean Exists(::System::String* cueName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_EXISTS_OFFSET))(this, cueName);
		}

		::System::Boolean Exists_1(::System::Int32 cueId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_EXISTS_1_OFFSET))(this, cueId);
		}

		::System::Boolean GetCueInfo(::System::String* cueName, ::CriWare::CriAtomEx_CueInfo& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::CriWare::CriAtomEx_CueInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETCUEINFO_OFFSET))(this, cueName, info);
		}

		::System::Boolean GetCueInfo_1(::System::Int32 cueId, ::CriWare::CriAtomEx_CueInfo& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CriWare::CriAtomEx_CueInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETCUEINFO_1_OFFSET))(this, cueId, info);
		}

		::System::Boolean GetCueInfoByIndex(::System::Int32 index, ::CriWare::CriAtomEx_CueInfo& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CriWare::CriAtomEx_CueInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETCUEINFOBYINDEX_OFFSET))(this, index, info);
		}

		::Il2CppArray<::CriWare::CriAtomEx_CueInfo>* GetCueInfoList()
		{
			return ((::Il2CppArray<::CriWare::CriAtomEx_CueInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETCUEINFOLIST_OFFSET))(this);
		}

		::System::Boolean GetWaveFormInfo(::System::String* cueName, ::CriWare::CriAtomEx_WaveformInfo& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::CriWare::CriAtomEx_WaveformInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETWAVEFORMINFO_OFFSET))(this, cueName, info);
		}

		::System::Boolean GetWaveFormInfo_1(::System::Int32 cueId, ::CriWare::CriAtomEx_WaveformInfo& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CriWare::CriAtomEx_WaveformInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETWAVEFORMINFO_1_OFFSET))(this, cueId, info);
		}

		::System::Int32 GetNumCuePlaying(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETNUMCUEPLAYING_OFFSET))(this, name);
		}

		::System::Int32 GetNumCuePlaying_1(::System::Int32 id)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETNUMCUEPLAYING_1_OFFSET))(this, id);
		}

		::System::Int32 GetBlockIndex(::System::String* cueName, ::System::String* blockName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETBLOCKINDEX_OFFSET))(this, cueName, blockName);
		}

		::System::Int32 GetBlockIndex_1(::System::Int32 cueId, ::System::String* blockName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETBLOCKINDEX_1_OFFSET))(this, cueId, blockName);
		}

		::System::Int32 GetNumUsableAisacControls(::System::String* cueName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLS_OFFSET))(this, cueName);
		}

		::System::Int32 GetNumUsableAisacControls_1(::System::Int32 cueId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLS_1_OFFSET))(this, cueId);
		}

		::System::Boolean GetUsableAisacControl(::System::String* cueName, ::System::Int32 index, ::CriWare::CriAtomEx_AisacControlInfo& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::CriWare::CriAtomEx_AisacControlInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROL_OFFSET))(this, cueName, index, info);
		}

		::System::Boolean GetUsableAisacControl_1(::System::Int32 cueId, ::System::Int32 index, ::CriWare::CriAtomEx_AisacControlInfo& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::CriWare::CriAtomEx_AisacControlInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROL_1_OFFSET))(this, cueId, index, info);
		}

		::Il2CppArray<::CriWare::CriAtomEx_AisacControlInfo>* GetUsableAisacControlList(::System::String* cueName)
		{
			return ((::Il2CppArray<::CriWare::CriAtomEx_AisacControlInfo>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROLLIST_OFFSET))(this, cueName);
		}

		::Il2CppArray<::CriWare::CriAtomEx_AisacControlInfo>* GetUsableAisacControlList_1(::System::Int32 cueId)
		{
			return ((::Il2CppArray<::CriWare::CriAtomEx_AisacControlInfo>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROLLIST_1_OFFSET))(this, cueId);
		}

		::System::Void ResetCueTypeState(::System::String* cueName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_RESETCUETYPESTATE_OFFSET))(this, cueName);
		}

		::System::Void ResetCueTypeState_1(::System::Int32 cueId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_RESETCUETYPESTATE_1_OFFSET))(this, cueId);
		}

		::System::Void AttachAwbFile(::CriWare::CriFsBinder* awb_binder, ::System::String* awb_path, ::System::String* awb_name)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_ATTACHAWBFILE_OFFSET))(this, awb_binder, awb_path, awb_name);
		}

		::System::Void DetachAwbFile(::System::String* awb_name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_DETACHAWBFILE_OFFSET))(this, awb_name);
		}

		::System::Boolean IsReadyToRelease()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_ISREADYTORELEASE_OFFSET))(this);
		}

		::System::Single GetLoadProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETLOADPROGRESS_OFFSET))(this);
		}

		::System::Void Decrypt(::System::UInt64 key, ::System::UInt64 nonce)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_DECRYPT_OFFSET))(this, key, nonce);
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

		static ::System::Int32 criAtomExAcb_GetNumCues(::System::IntPtr acb_hn)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMCUES_OFFSET))(acb_hn);
		}

		static ::System::Boolean criAtomExAcb_ExistsId(::System::IntPtr acb_hn, ::System::Int32 id)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_EXISTSID_OFFSET))(acb_hn, id);
		}

		static ::System::Boolean criAtomExAcb_ExistsName(::System::IntPtr acb_hn, ::System::String* name)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_EXISTSNAME_OFFSET))(acb_hn, name);
		}

		static ::System::Int32 criAtomExAcb_GetNumUsableAisacControlsById(::System::IntPtr acb_hn, ::System::Int32 id)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLSBYID_OFFSET))(acb_hn, id);
		}

		static ::System::Int32 criAtomExAcb_GetNumUsableAisacControlsByName(::System::IntPtr acb_hn, ::System::String* name)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLSBYNAME_OFFSET))(acb_hn, name);
		}

		static ::System::Boolean criAtomExAcb_GetUsableAisacControlById(::System::IntPtr acb_hn, ::System::Int32 id, ::System::UInt16 index, ::System::IntPtr info)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETUSABLEAISACCONTROLBYID_OFFSET))(acb_hn, id, index, info);
		}

		static ::System::Boolean criAtomExAcb_GetUsableAisacControlByName(::System::IntPtr acb_hn, ::System::String* name, ::System::UInt16 index, ::System::IntPtr info)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*, ::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETUSABLEAISACCONTROLBYNAME_OFFSET))(acb_hn, name, index, info);
		}

		static ::System::Boolean criAtomExAcb_GetWaveformInfoById(::System::IntPtr acb_hn, ::System::Int32 id, ::System::IntPtr waveform_info)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETWAVEFORMINFOBYID_OFFSET))(acb_hn, id, waveform_info);
		}

		static ::System::Boolean criAtomExAcb_GetWaveformInfoByName(::System::IntPtr acb_hn, ::System::String* name, ::System::IntPtr waveform_info)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETWAVEFORMINFOBYNAME_OFFSET))(acb_hn, name, waveform_info);
		}

		static ::System::Boolean criAtomExAcb_GetCueInfoByName(::System::IntPtr acb_hn, ::System::String* name, ::System::IntPtr info)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETCUEINFOBYNAME_OFFSET))(acb_hn, name, info);
		}

		static ::System::Boolean criAtomExAcb_GetCueInfoById(::System::IntPtr acb_hn, ::System::Int32 id, ::System::IntPtr info)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETCUEINFOBYID_OFFSET))(acb_hn, id, info);
		}

		static ::System::Boolean criAtomExAcb_GetCueInfoByIndex(::System::IntPtr acb_hn, ::System::Int32 index, ::System::IntPtr info)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETCUEINFOBYINDEX_OFFSET))(acb_hn, index, info);
		}

		static ::System::Int32 criAtomExAcb_GetNumCuePlayingCountByName(::System::IntPtr acb_hn, ::System::String* name)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMCUEPLAYINGCOUNTBYNAME_OFFSET))(acb_hn, name);
		}

		static ::System::Int32 criAtomExAcb_GetNumCuePlayingCountById(::System::IntPtr acb_hn, ::System::Int32 id)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMCUEPLAYINGCOUNTBYID_OFFSET))(acb_hn, id);
		}

		static ::System::Int32 criAtomExAcb_GetBlockIndexById(::System::IntPtr acb_hn, ::System::Int32 id, ::System::String* block_name)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETBLOCKINDEXBYID_OFFSET))(acb_hn, id, block_name);
		}

		static ::System::Int32 criAtomExAcb_GetBlockIndexByName(::System::IntPtr acb_hn, ::System::String* name, ::System::String* block_name)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETBLOCKINDEXBYNAME_OFFSET))(acb_hn, name, block_name);
		}

		static ::System::Void criAtomExAcb_ResetCueTypeStateByName(::System::IntPtr acb_hn, ::System::String* name)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_RESETCUETYPESTATEBYNAME_OFFSET))(acb_hn, name);
		}

		static ::System::Void criAtomExAcb_ResetCueTypeStateById(::System::IntPtr acb_hn, ::System::Int32 id)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_RESETCUETYPESTATEBYID_OFFSET))(acb_hn, id);
		}

		static ::System::Void criAtomExAcb_AttachAwbFile(::System::IntPtr acb_hn, ::System::IntPtr awb_binder, ::System::String* awb_path, ::System::String* awb_name, ::System::IntPtr work, ::System::Int32 work_size)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::String*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_ATTACHAWBFILE_OFFSET))(acb_hn, awb_binder, awb_path, awb_name, work, work_size);
		}

		static ::System::Void criAtomExAcb_DetachAwbFile(::System::IntPtr acb_hn, ::System::String* awb_name)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_DETACHAWBFILE_OFFSET))(acb_hn, awb_name);
		}

		static ::System::Boolean criAtomExAcb_IsReadyToRelease(::System::IntPtr acb_hn)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_ISREADYTORELEASE_OFFSET))(acb_hn);
		}
	};
}
