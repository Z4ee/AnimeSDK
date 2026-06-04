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

#define CRIWARE_CRIATOMEXACB_ATTACHAWBFILE_OFFSET UNITYSDK_OFFSET(0x146911B0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_ATTACHAWBFILE_OFFSET UNITYSDK_OFFSET(0x146912B0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_DETACHAWBFILE_OFFSET UNITYSDK_OFFSET(0x14691450)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_EXISTSID_OFFSET UNITYSDK_OFFSET(0x1468EE10)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_EXISTSNAME_OFFSET UNITYSDK_OFFSET(0x1468ECE0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETBLOCKINDEXBYID_OFFSET UNITYSDK_OFFSET(0x146903F0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETBLOCKINDEXBYNAME_OFFSET UNITYSDK_OFFSET(0x14690280)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETCUEINFOBYID_OFFSET UNITYSDK_OFFSET(0x1468F430)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETCUEINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x1468F720)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETCUEINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x1468F120)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMCUEPLAYINGCOUNTBYID_OFFSET UNITYSDK_OFFSET(0x14690130)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMCUEPLAYINGCOUNTBYNAME_OFFSET UNITYSDK_OFFSET(0x14690000)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMCUES_OFFSET UNITYSDK_OFFSET(0x1468F8E0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLSBYID_OFFSET UNITYSDK_OFFSET(0x14690670)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLSBYNAME_OFFSET UNITYSDK_OFFSET(0x14690540)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETUSABLEAISACCONTROLBYID_OFFSET UNITYSDK_OFFSET(0x14690C50)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETUSABLEAISACCONTROLBYNAME_OFFSET UNITYSDK_OFFSET(0x14690950)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETWAVEFORMINFOBYID_OFFSET UNITYSDK_OFFSET(0x1468FED0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETWAVEFORMINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x1468FBD0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_ISREADYTORELEASE_OFFSET UNITYSDK_OFFSET(0x14691580)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_LOADACBDATA_OFFSET UNITYSDK_OFFSET(0x1468E9E0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_LOADACBFILE_OFFSET UNITYSDK_OFFSET(0x1468E860)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_RELEASE_OFFSET UNITYSDK_OFFSET(0x1468EBB0)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_RESETCUETYPESTATEBYID_OFFSET UNITYSDK_OFFSET(0x14691130)
#define CRIWARE_CRIATOMEXACB_CRIATOMEXACB_RESETCUETYPESTATEBYNAME_OFFSET UNITYSDK_OFFSET(0x14691010)
#define CRIWARE_CRIATOMEXACB_DECRYPT_OFFSET UNITYSDK_OFFSET(0x14691610)
#define CRIWARE_CRIATOMEXACB_DETACHAWBFILE_OFFSET UNITYSDK_OFFSET(0x146913A0)
#define CRIWARE_CRIATOMEXACB_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1468EAB0)
#define CRIWARE_CRIATOMEXACB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14682620)
#define CRIWARE_CRIATOMEXACB_EXISTS_1_OFFSET UNITYSDK_OFFSET(0x1468ED80)
#define CRIWARE_CRIATOMEXACB_EXISTS_OFFSET UNITYSDK_OFFSET(0x1468EC30)
#define CRIWARE_CRIATOMEXACB_FINALIZE_OFFSET UNITYSDK_OFFSET(0x14691660)
#define CRIWARE_CRIATOMEXACB_GETBLOCKINDEX_1_OFFSET UNITYSDK_OFFSET(0x14690340)
#define CRIWARE_CRIATOMEXACB_GETBLOCKINDEX_OFFSET UNITYSDK_OFFSET(0x146901C0)
#define CRIWARE_CRIATOMEXACB_GETCUEINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x1468F4C0)
#define CRIWARE_CRIATOMEXACB_GETCUEINFOLIST_OFFSET UNITYSDK_OFFSET(0x1468F7B0)
#define CRIWARE_CRIATOMEXACB_GETCUEINFO_1_OFFSET UNITYSDK_OFFSET(0x1468F1D0)
#define CRIWARE_CRIATOMEXACB_GETCUEINFO_OFFSET UNITYSDK_OFFSET(0x1468EEA0)
#define CRIWARE_CRIATOMEXACB_GETLOADPROGRESS_OFFSET UNITYSDK_OFFSET(0x14691600)
#define CRIWARE_CRIATOMEXACB_GETNUMCUEPLAYING_1_OFFSET UNITYSDK_OFFSET(0x146900A0)
#define CRIWARE_CRIATOMEXACB_GETNUMCUEPLAYING_OFFSET UNITYSDK_OFFSET(0x1468FF60)
#define CRIWARE_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLS_1_OFFSET UNITYSDK_OFFSET(0x146905E0)
#define CRIWARE_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLS_OFFSET UNITYSDK_OFFSET(0x146904A0)
#define CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROLLIST_1_OFFSET UNITYSDK_OFFSET(0x14690E40)
#define CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROLLIST_OFFSET UNITYSDK_OFFSET(0x14690CF0)
#define CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROL_1_OFFSET UNITYSDK_OFFSET(0x14690A10)
#define CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROL_OFFSET UNITYSDK_OFFSET(0x14690700)
#define CRIWARE_CRIATOMEXACB_GETWAVEFORMINFO_1_OFFSET UNITYSDK_OFFSET(0x1468FC80)
#define CRIWARE_CRIATOMEXACB_GETWAVEFORMINFO_OFFSET UNITYSDK_OFFSET(0x1468F960)
#define CRIWARE_CRIATOMEXACB_GET_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1468E850)
#define CRIWARE_CRIATOMEXACB_GET_NATIVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1468E840)
#define CRIWARE_CRIATOMEXACB_ISREADYTORELEASE_OFFSET UNITYSDK_OFFSET(0x146914F0)
#define CRIWARE_CRIATOMEXACB_LOADACBDATA_OFFSET UNITYSDK_OFFSET(0x14683170)
#define CRIWARE_CRIATOMEXACB_LOADACBFILE_OFFSET UNITYSDK_OFFSET(0x14682EE0)
#define CRIWARE_CRIATOMEXACB_RESETCUETYPESTATE_1_OFFSET UNITYSDK_OFFSET(0x146910B0)
#define CRIWARE_CRIATOMEXACB_RESETCUETYPESTATE_OFFSET UNITYSDK_OFFSET(0x14690F70)
#define CRIWARE_CRIATOMEXACB__CTOR_OFFSET UNITYSDK_OFFSET(0x1468E950)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcb_TypeDefinitionIndex = 37064;

	class CriAtomExAcb : public ::CriWare::CriDisposable
	{
	public:
		::System::IntPtr handle; // 0x20
		::System::Runtime::InteropServices::GCHandle dataHandle; // 0x28

		::System::Void _ctor(::System::IntPtr a1, ::System::Nullable_1<::System::Runtime::InteropServices::GCHandle> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Nullable_1<::System::Runtime::InteropServices::GCHandle>))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB__CTOR_OFFSET))(this, a1, a2);
		}

		::System::IntPtr get_nativeHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GET_NATIVEHANDLE_OFFSET))(this);
		}

		::System::Boolean get_isAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GET_ISAVAILABLE_OFFSET))(this);
		}

		static ::CriWare::CriAtomExAcb* LoadAcbFile(::CriWare::CriFsBinder* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::CriWare::CriAtomExAcb*(*)(::CriWare::CriFsBinder*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_LOADACBFILE_OFFSET))(a1, a2, a3);
		}

		static ::CriWare::CriAtomExAcb* LoadAcbData(::Il2CppArray<::System::Byte>* a1, ::CriWare::CriFsBinder* a2, ::System::String* a3)
		{
			return ((::CriWare::CriAtomExAcb*(*)(::Il2CppArray<::System::Byte>*, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_LOADACBDATA_OFFSET))(a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Boolean Exists(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_EXISTS_OFFSET))(this, a1);
		}

		::System::Boolean Exists_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_EXISTS_1_OFFSET))(this, a1);
		}

		::System::Boolean GetCueInfo(::System::String* a1, ::CriWare::CriAtomEx_CueInfo& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::CriWare::CriAtomEx_CueInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETCUEINFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetCueInfo_1(::System::Int32 a1, ::CriWare::CriAtomEx_CueInfo& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CriWare::CriAtomEx_CueInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETCUEINFO_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetCueInfoByIndex(::System::Int32 a1, ::CriWare::CriAtomEx_CueInfo& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CriWare::CriAtomEx_CueInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETCUEINFOBYINDEX_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::CriWare::CriAtomEx_CueInfo>* GetCueInfoList()
		{
			return ((::Il2CppArray<::CriWare::CriAtomEx_CueInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETCUEINFOLIST_OFFSET))(this);
		}

		::System::Boolean GetWaveFormInfo(::System::String* a1, ::CriWare::CriAtomEx_WaveformInfo& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::CriWare::CriAtomEx_WaveformInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETWAVEFORMINFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetWaveFormInfo_1(::System::Int32 a1, ::CriWare::CriAtomEx_WaveformInfo& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CriWare::CriAtomEx_WaveformInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETWAVEFORMINFO_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetNumCuePlaying(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETNUMCUEPLAYING_OFFSET))(this, a1);
		}

		::System::Int32 GetNumCuePlaying_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETNUMCUEPLAYING_1_OFFSET))(this, a1);
		}

		::System::Int32 GetBlockIndex(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETBLOCKINDEX_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetBlockIndex_1(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETBLOCKINDEX_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetNumUsableAisacControls(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLS_OFFSET))(this, a1);
		}

		::System::Int32 GetNumUsableAisacControls_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLS_1_OFFSET))(this, a1);
		}

		::System::Boolean GetUsableAisacControl(::System::String* a1, ::System::Int32 a2, ::CriWare::CriAtomEx_AisacControlInfo& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::CriWare::CriAtomEx_AisacControlInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GetUsableAisacControl_1(::System::Int32 a1, ::System::Int32 a2, ::CriWare::CriAtomEx_AisacControlInfo& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::CriWare::CriAtomEx_AisacControlInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROL_1_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::CriWare::CriAtomEx_AisacControlInfo>* GetUsableAisacControlList(::System::String* a1)
		{
			return ((::Il2CppArray<::CriWare::CriAtomEx_AisacControlInfo>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROLLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::CriWare::CriAtomEx_AisacControlInfo>* GetUsableAisacControlList_1(::System::Int32 a1)
		{
			return ((::Il2CppArray<::CriWare::CriAtomEx_AisacControlInfo>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETUSABLEAISACCONTROLLIST_1_OFFSET))(this, a1);
		}

		::System::Void ResetCueTypeState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_RESETCUETYPESTATE_OFFSET))(this, a1);
		}

		::System::Void ResetCueTypeState_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_RESETCUETYPESTATE_1_OFFSET))(this, a1);
		}

		::System::Void AttachAwbFile(::CriWare::CriFsBinder* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_ATTACHAWBFILE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DetachAwbFile(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_DETACHAWBFILE_OFFSET))(this, a1);
		}

		::System::Boolean IsReadyToRelease()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_ISREADYTORELEASE_OFFSET))(this);
		}

		::System::Single GetLoadProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_GETLOADPROGRESS_OFFSET))(this);
		}

		::System::Void Decrypt(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_DECRYPT_OFFSET))(this, a1, a2);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_FINALIZE_OFFSET))(this);
		}

		static ::System::IntPtr criAtomExAcb_LoadAcbFile(::System::IntPtr a1, ::System::String* a2, ::System::IntPtr a3, ::System::String* a4, ::System::IntPtr a5, ::System::Int32 a6)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_LOADACBFILE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::IntPtr criAtomExAcb_LoadAcbData(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3, ::System::String* a4, ::System::IntPtr a5, ::System::Int32 a6)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_LOADACBDATA_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void criAtomExAcb_Release(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_RELEASE_OFFSET))(a1);
		}

		static ::System::Int32 criAtomExAcb_GetNumCues(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMCUES_OFFSET))(a1);
		}

		static ::System::Boolean criAtomExAcb_ExistsId(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_EXISTSID_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExAcb_ExistsName(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_EXISTSNAME_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcb_GetNumUsableAisacControlsById(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLSBYID_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcb_GetNumUsableAisacControlsByName(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMUSABLEAISACCONTROLSBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExAcb_GetUsableAisacControlById(::System::IntPtr a1, ::System::Int32 a2, ::System::UInt16 a3, ::System::IntPtr a4)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETUSABLEAISACCONTROLBYID_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean criAtomExAcb_GetUsableAisacControlByName(::System::IntPtr a1, ::System::String* a2, ::System::UInt16 a3, ::System::IntPtr a4)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*, ::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETUSABLEAISACCONTROLBYNAME_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean criAtomExAcb_GetWaveformInfoById(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETWAVEFORMINFOBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExAcb_GetWaveformInfoByName(::System::IntPtr a1, ::System::String* a2, ::System::IntPtr a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETWAVEFORMINFOBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExAcb_GetCueInfoByName(::System::IntPtr a1, ::System::String* a2, ::System::IntPtr a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETCUEINFOBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExAcb_GetCueInfoById(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETCUEINFOBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean criAtomExAcb_GetCueInfoByIndex(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETCUEINFOBYINDEX_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criAtomExAcb_GetNumCuePlayingCountByName(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMCUEPLAYINGCOUNTBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcb_GetNumCuePlayingCountById(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETNUMCUEPLAYINGCOUNTBYID_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtomExAcb_GetBlockIndexById(::System::IntPtr a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETBLOCKINDEXBYID_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 criAtomExAcb_GetBlockIndexByName(::System::IntPtr a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_GETBLOCKINDEXBYNAME_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomExAcb_ResetCueTypeStateByName(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_RESETCUETYPESTATEBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExAcb_ResetCueTypeStateById(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_RESETCUETYPESTATEBYID_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExAcb_AttachAwbFile(::System::IntPtr a1, ::System::IntPtr a2, ::System::String* a3, ::System::String* a4, ::System::IntPtr a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::String*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_ATTACHAWBFILE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void criAtomExAcb_DetachAwbFile(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_DETACHAWBFILE_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomExAcb_IsReadyToRelease(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACB_CRIATOMEXACB_ISREADYTORELEASE_OFFSET))(a1);
		}
	};
}
