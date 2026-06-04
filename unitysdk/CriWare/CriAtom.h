#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAsr_BusAnalyzerInfo.h"
#include "unitysdk/CriWare/CriAtomExBeatSync_Info.h"
#include "unitysdk/CriWare/CriAtomExSequencer_CriAtomExSequenceEventInfo.h"
#include "unitysdk/CriWare/CriAtomEx_CueLinkInfo.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"

namespace CriWare { class CriAtomCueSheet; }
namespace CriWare { class CriAtomExAcb; }
namespace CriWare { class CriAtomExBeatSync_CbFunc; }
namespace CriWare { class CriAtomExSequencer_EventCallback; }
namespace CriWare { class CriAtomExSequencer_EventCbFunc; }
namespace CriWare { class CriAtomEx_CueLinkCbFunc; }
namespace CriWare { class CriFsBinder; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define CRIWARE_CRIATOM_ADDCUESHEETASYNC_1_OFFSET UNITYSDK_OFFSET(0x146806E0)
#define CRIWARE_CRIATOM_ADDCUESHEETASYNC_OFFSET UNITYSDK_OFFSET(0x146803B0)
#define CRIWARE_CRIATOM_ADDCUESHEETINTERNAL_OFFSET UNITYSDK_OFFSET(0x14680140)
#define CRIWARE_CRIATOM_ADDCUESHEET_1_OFFSET UNITYSDK_OFFSET(0x14680540)
#define CRIWARE_CRIATOM_ADDCUESHEET_OFFSET UNITYSDK_OFFSET(0x146800B0)
#define CRIWARE_CRIATOM_ADD_BEATSYNCUSERCBFUNC_OFFSET UNITYSDK_OFFSET(0x1467F160)
#define CRIWARE_CRIATOM_ADD_CUELINKUSERCBFUNC_OFFSET UNITYSDK_OFFSET(0x1467F610)
#define CRIWARE_CRIATOM_ADD_ONBEATSYNCCALLBACK_OFFSET UNITYSDK_OFFSET(0x1467F2C0)
#define CRIWARE_CRIATOM_ADD_ONCUELINKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1467F770)
#define CRIWARE_CRIATOM_ADD_ONEVENTSEQUENCERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1467EE90)
#define CRIWARE_CRIATOM_ATTACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x1467FAE0)
#define CRIWARE_CRIATOM_AWAKE_OFFSET UNITYSDK_OFFSET(0x146826D0)
#define CRIWARE_CRIATOM_BEATSYNCCALLBACKFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x1467EE30)
#define CRIWARE_CRIATOM_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14682E90)
#define CRIWARE_CRIATOM_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x14682E80)
#define CRIWARE_CRIATOM_CUELINKCALLBACKFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x1467EE60)
#define CRIWARE_CRIATOM_DETACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x1467FDF0)
#define CRIWARE_CRIATOM_GETACB_OFFSET UNITYSDK_OFFSET(0x14680B50)
#define CRIWARE_CRIATOM_GETBUSANALYZERINFO_1_OFFSET UNITYSDK_OFFSET(0x14681DD0)
#define CRIWARE_CRIATOM_GETBUSANALYZERINFO_OFFSET UNITYSDK_OFFSET(0x14681B70)
#define CRIWARE_CRIATOM_GETCATEGORYVOLUME_1_OFFSET UNITYSDK_OFFSET(0x146810F0)
#define CRIWARE_CRIATOM_GETCATEGORYVOLUME_OFFSET UNITYSDK_OFFSET(0x14680F90)
#define CRIWARE_CRIATOM_GETCUESHEETINTERNAL_OFFSET UNITYSDK_OFFSET(0x1467FFD0)
#define CRIWARE_CRIATOM_GETCUESHEET_OFFSET UNITYSDK_OFFSET(0x1467FED0)
#define CRIWARE_CRIATOM_GET_CUESHEETSARELOADING_OFFSET UNITYSDK_OFFSET(0x14680AC0)
#define CRIWARE_CRIATOM_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1467FAC0)
#define CRIWARE_CRIATOM_LOADACBDATAASYNC_OFFSET UNITYSDK_OFFSET(0x146807C0)
#define CRIWARE_CRIATOM_LOADACBDATACOROUTINE_OFFSET UNITYSDK_OFFSET(0x146834D0)
#define CRIWARE_CRIATOM_LOADACBDATA_OFFSET UNITYSDK_OFFSET(0x14680640)
#define CRIWARE_CRIATOM_LOADACBFILEASYNC_OFFSET UNITYSDK_OFFSET(0x14680490)
#define CRIWARE_CRIATOM_LOADACBFILECOROUTINE_OFFSET UNITYSDK_OFFSET(0x14683440)
#define CRIWARE_CRIATOM_LOADACBFILE_OFFSET UNITYSDK_OFFSET(0x146802B0)
#define CRIWARE_CRIATOM_MARGECUESHEET_OFFSET UNITYSDK_OFFSET(0x146828C0)
#define CRIWARE_CRIATOM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14682C70)
#define CRIWARE_CRIATOM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x14682C00)
#define CRIWARE_CRIATOM_REGISTERBEATSYNCCALLBACKCHAIN_OFFSET UNITYSDK_OFFSET(0x1467F2D0)
#define CRIWARE_CRIATOM_REGISTERCUELINKCALLBACKCHAIN_OFFSET UNITYSDK_OFFSET(0x1467F780)
#define CRIWARE_CRIATOM_REGISTEREVENTCALLBACKCHAIN_OFFSET UNITYSDK_OFFSET(0x1467EEA0)
#define CRIWARE_CRIATOM_REMOVECUESHEETINTERNAL_OFFSET UNITYSDK_OFFSET(0x14680880)
#define CRIWARE_CRIATOM_REMOVECUESHEET_OFFSET UNITYSDK_OFFSET(0x14680850)
#define CRIWARE_CRIATOM_REMOVE_BEATSYNCUSERCBFUNC_OFFSET UNITYSDK_OFFSET(0x1467F210)
#define CRIWARE_CRIATOM_REMOVE_CUELINKUSERCBFUNC_OFFSET UNITYSDK_OFFSET(0x1467F6C0)
#define CRIWARE_CRIATOM_REMOVE_ONBEATSYNCCALLBACK_OFFSET UNITYSDK_OFFSET(0x1467F4B0)
#define CRIWARE_CRIATOM_REMOVE_ONCUELINKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1467F960)
#define CRIWARE_CRIATOM_REMOVE_ONEVENTSEQUENCERCALLBACK_OFFSET UNITYSDK_OFFSET(0x1467F030)
#define CRIWARE_CRIATOM_SEQUENCECALLBACKFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x1467EE00)
#define CRIWARE_CRIATOM_SEQUENCEEVENTCALLBACKFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x1467EDD0)
#define CRIWARE_CRIATOM_SETBEATSYNCCALLBACK_OFFSET UNITYSDK_OFFSET(0x14683700)
#define CRIWARE_CRIATOM_SETBUSANALYZER_1_OFFSET UNITYSDK_OFFSET(0x14681460)
#define CRIWARE_CRIATOM_SETBUSANALYZER_OFFSET UNITYSDK_OFFSET(0x146811F0)
#define CRIWARE_CRIATOM_SETCATEGORYVOLUME_1_OFFSET UNITYSDK_OFFSET(0x14680E70)
#define CRIWARE_CRIATOM_SETCATEGORYVOLUME_OFFSET UNITYSDK_OFFSET(0x14680D10)
#define CRIWARE_CRIATOM_SETEVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x14683580)
#define CRIWARE_CRIATOM_SETUP_OFFSET UNITYSDK_OFFSET(0x14682020)
#define CRIWARE_CRIATOM_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1467FAD0)
#define CRIWARE_CRIATOM_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x14682310)
#define CRIWARE_CRIATOM_UNREGISTERBEATSYNCCALLBACKCHAIN_OFFSET UNITYSDK_OFFSET(0x1467F4C0)
#define CRIWARE_CRIATOM_UNREGISTERCUELINKCALLBACKCHAIN_OFFSET UNITYSDK_OFFSET(0x1467F970)
#define CRIWARE_CRIATOM_UNREGISTEREVENTCALLBACKCHAIN_OFFSET UNITYSDK_OFFSET(0x1467F040)
#define CRIWARE_CRIATOM__CTOR_OFFSET UNITYSDK_OFFSET(0x14683820)

namespace CriWare
{
	inline static constexpr unsigned int CriAtom_TypeDefinitionIndex = 36979;

	class CriAtom : public ::CriWare::CriMonoBehaviour
	{
	public:
		static ::CriWare::CriAtomEx_CueLinkCbFunc** StaticGet_cueLinkUserCbFunc()
		{
			return (::CriWare::CriAtomEx_CueLinkCbFunc**)Il2CppClass::FromTypeDefinitionIndex(CriAtom_TypeDefinitionIndex)->GetStaticField(0x5D60);
		}
		static ::CriWare::CriAtomExBeatSync_CbFunc** StaticGet_obsoleteBeatSyncFunc()
		{
			return (::CriWare::CriAtomExBeatSync_CbFunc**)Il2CppClass::FromTypeDefinitionIndex(CriAtom_TypeDefinitionIndex)->GetStaticField(0x5D68);
		}
		static ::CriWare::CriAtomExSequencer_EventCallback** StaticGet_eventUserCallback()
		{
			return (::CriWare::CriAtomExSequencer_EventCallback**)Il2CppClass::FromTypeDefinitionIndex(CriAtom_TypeDefinitionIndex)->GetStaticField(0x5D70);
		}
		static ::CriWare::CriAtomExSequencer_EventCbFunc** StaticGet_eventUserCbFunc()
		{
			return (::CriWare::CriAtomExSequencer_EventCbFunc**)Il2CppClass::FromTypeDefinitionIndex(CriAtom_TypeDefinitionIndex)->GetStaticField(0x5D78);
		}
		static ::CriWare::CriAtomExBeatSync_CbFunc** StaticGet_beatsyncUserCbFunc()
		{
			return (::CriWare::CriAtomExBeatSync_CbFunc**)Il2CppClass::FromTypeDefinitionIndex(CriAtom_TypeDefinitionIndex)->GetStaticField(0x5D80);
		}
		static ::CriWare::CriAtom** StaticGet__instance_k__BackingField()
		{
			return (::CriWare::CriAtom**)Il2CppClass::FromTypeDefinitionIndex(CriAtom_TypeDefinitionIndex)->GetStaticField(0x5D88);
		}
		::System::String* acfFile; // 0x28
		::System::Boolean acfIsLoading; // 0x30
		::Il2CppArray<::CriWare::CriAtomCueSheet*>* cueSheets; // 0x38
		::System::String* dspBusSetting; // 0x40
		::System::Boolean dontDestroyOnLoad; // 0x48
		::System::Runtime::InteropServices::GCHandle acfRegisterGCHandle; // 0x4C
		::System::Boolean dontRemoveExistsCueSheet; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM__CTOR_OFFSET))(this);
		}

		static ::System::Void add_OnEventSequencerCallback(::CriWare::CriAtomExSequencer_EventCallback* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExSequencer_EventCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ADD_ONEVENTSEQUENCERCALLBACK_OFFSET))(a1);
		}

		static ::System::Void remove_OnEventSequencerCallback(::CriWare::CriAtomExSequencer_EventCallback* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExSequencer_EventCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_REMOVE_ONEVENTSEQUENCERCALLBACK_OFFSET))(a1);
		}

		static ::System::Void add_beatsyncUserCbFunc(::CriWare::CriAtomExBeatSync_CbFunc* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ADD_BEATSYNCUSERCBFUNC_OFFSET))(a1);
		}

		static ::System::Void remove_beatsyncUserCbFunc(::CriWare::CriAtomExBeatSync_CbFunc* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_REMOVE_BEATSYNCUSERCBFUNC_OFFSET))(a1);
		}

		static ::System::Void add_OnBeatSyncCallback(::CriWare::CriAtomExBeatSync_CbFunc* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ADD_ONBEATSYNCCALLBACK_OFFSET))(a1);
		}

		static ::System::Void remove_OnBeatSyncCallback(::CriWare::CriAtomExBeatSync_CbFunc* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_REMOVE_ONBEATSYNCCALLBACK_OFFSET))(a1);
		}

		static ::System::Void add_cueLinkUserCbFunc(::CriWare::CriAtomEx_CueLinkCbFunc* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_CueLinkCbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ADD_CUELINKUSERCBFUNC_OFFSET))(a1);
		}

		static ::System::Void remove_cueLinkUserCbFunc(::CriWare::CriAtomEx_CueLinkCbFunc* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_CueLinkCbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_REMOVE_CUELINKUSERCBFUNC_OFFSET))(a1);
		}

		static ::System::Void add_OnCueLinkCallback(::CriWare::CriAtomEx_CueLinkCbFunc* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_CueLinkCbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ADD_ONCUELINKCALLBACK_OFFSET))(a1);
		}

		static ::System::Void remove_OnCueLinkCallback(::CriWare::CriAtomEx_CueLinkCbFunc* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_CueLinkCbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_REMOVE_ONCUELINKCALLBACK_OFFSET))(a1);
		}

		static ::CriWare::CriAtom* get_instance()
		{
			return ((::CriWare::CriAtom*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_instance(::CriWare::CriAtom* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtom*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SET_INSTANCE_OFFSET))(a1);
		}

		static ::System::Void AttachDspBusSetting(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ATTACHDSPBUSSETTING_OFFSET))(a1);
		}

		static ::System::Void DetachDspBusSetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_DETACHDSPBUSSETTING_OFFSET))();
		}

		static ::CriWare::CriAtomCueSheet* GetCueSheet(::System::String* a1)
		{
			return ((::CriWare::CriAtomCueSheet*(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_GETCUESHEET_OFFSET))(a1);
		}

		static ::CriWare::CriAtomCueSheet* AddCueSheet(::System::String* a1, ::System::String* a2, ::System::String* a3, ::CriWare::CriFsBinder* a4)
		{
			return ((::CriWare::CriAtomCueSheet*(*)(::System::String*, ::System::String*, ::System::String*, ::CriWare::CriFsBinder*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ADDCUESHEET_OFFSET))(a1, a2, a3, a4);
		}

		static ::CriWare::CriAtomCueSheet* AddCueSheetAsync(::System::String* a1, ::System::String* a2, ::System::String* a3, ::CriWare::CriFsBinder* a4, ::System::Boolean a5)
		{
			return ((::CriWare::CriAtomCueSheet*(*)(::System::String*, ::System::String*, ::System::String*, ::CriWare::CriFsBinder*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ADDCUESHEETASYNC_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::CriWare::CriAtomCueSheet* AddCueSheet_1(::System::String* a1, ::Il2CppArray<::System::Byte>* a2, ::System::String* a3, ::CriWare::CriFsBinder* a4)
		{
			return ((::CriWare::CriAtomCueSheet*(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::CriWare::CriFsBinder*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ADDCUESHEET_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::CriWare::CriAtomCueSheet* AddCueSheetAsync_1(::System::String* a1, ::Il2CppArray<::System::Byte>* a2, ::System::String* a3, ::CriWare::CriFsBinder* a4, ::System::Boolean a5)
		{
			return ((::CriWare::CriAtomCueSheet*(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::String*, ::CriWare::CriFsBinder*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ADDCUESHEETASYNC_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void RemoveCueSheet(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_REMOVECUESHEET_OFFSET))(a1);
		}

		static ::System::Boolean get_CueSheetsAreLoading()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_GET_CUESHEETSARELOADING_OFFSET))();
		}

		static ::CriWare::CriAtomExAcb* GetAcb(::System::String* a1)
		{
			return ((::CriWare::CriAtomExAcb*(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_GETACB_OFFSET))(a1);
		}

		static ::System::Void SetCategoryVolume(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SETCATEGORYVOLUME_OFFSET))(a1, a2);
		}

		static ::System::Void SetCategoryVolume_1(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SETCATEGORYVOLUME_1_OFFSET))(a1, a2);
		}

		static ::System::Single GetCategoryVolume(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_GETCATEGORYVOLUME_OFFSET))(a1);
		}

		static ::System::Single GetCategoryVolume_1(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_GETCATEGORYVOLUME_1_OFFSET))(a1);
		}

		static ::System::Void SetBusAnalyzer(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SETBUSANALYZER_OFFSET))(a1, a2);
		}

		static ::System::Void SetBusAnalyzer_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SETBUSANALYZER_1_OFFSET))(a1);
		}

		static ::CriWare::CriAtomExAsr_BusAnalyzerInfo GetBusAnalyzerInfo(::System::String* a1)
		{
			return ((::CriWare::CriAtomExAsr_BusAnalyzerInfo(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_GETBUSANALYZERINFO_OFFSET))(a1);
		}

		static ::CriWare::CriAtomExAsr_BusAnalyzerInfo GetBusAnalyzerInfo_1(::System::Int32 a1)
		{
			return ((::CriWare::CriAtomExAsr_BusAnalyzerInfo(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_GETBUSANALYZERINFO_1_OFFSET))(a1);
		}

		::System::Void Setup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SETUP_OFFSET))(this);
		}

		::System::Void Shutdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SHUTDOWN_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ONDESTROY_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Void CriInternalLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_CRIINTERNALLATEUPDATE_OFFSET))(this);
		}

		::CriWare::CriAtomCueSheet* GetCueSheetInternal(::System::String* a1)
		{
			return ((::CriWare::CriAtomCueSheet*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_GETCUESHEETINTERNAL_OFFSET))(this, a1);
		}

		::CriWare::CriAtomCueSheet* AddCueSheetInternal(::System::String* a1, ::System::String* a2, ::System::String* a3, ::CriWare::CriFsBinder* a4)
		{
			return ((::CriWare::CriAtomCueSheet*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::CriWare::CriFsBinder*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_ADDCUESHEETINTERNAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RemoveCueSheetInternal(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_REMOVECUESHEETINTERNAL_OFFSET))(this, a1);
		}

		::System::Void MargeCueSheet(::Il2CppArray<::CriWare::CriAtomCueSheet*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::CriWare::CriAtomCueSheet*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_MARGECUESHEET_OFFSET))(this, a1, a2);
		}

		::CriWare::CriAtomExAcb* LoadAcbFile(::CriWare::CriFsBinder* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::CriWare::CriAtomExAcb*(*)(::PVOID, ::CriWare::CriFsBinder*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_LOADACBFILE_OFFSET))(this, a1, a2, a3);
		}

		::CriWare::CriAtomExAcb* LoadAcbData(::Il2CppArray<::System::Byte>* a1, ::CriWare::CriFsBinder* a2, ::System::String* a3)
		{
			return ((::CriWare::CriAtomExAcb*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_LOADACBDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LoadAcbFileAsync(::CriWare::CriAtomCueSheet* a1, ::CriWare::CriFsBinder* a2, ::System::String* a3, ::System::String* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomCueSheet*, ::CriWare::CriFsBinder*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_LOADACBFILEASYNC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::IEnumerator* LoadAcbFileCoroutine(::CriWare::CriAtomCueSheet* a1, ::CriWare::CriFsBinder* a2, ::System::String* a3, ::System::String* a4, ::System::Boolean a5)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::CriWare::CriAtomCueSheet*, ::CriWare::CriFsBinder*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_LOADACBFILECOROUTINE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LoadAcbDataAsync(::CriWare::CriAtomCueSheet* a1, ::Il2CppArray<::System::Byte>* a2, ::CriWare::CriFsBinder* a3, ::System::String* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomCueSheet*, ::Il2CppArray<::System::Byte>*, ::CriWare::CriFsBinder*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_LOADACBDATAASYNC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::IEnumerator* LoadAcbDataCoroutine(::CriWare::CriAtomCueSheet* a1, ::Il2CppArray<::System::Byte>* a2, ::CriWare::CriFsBinder* a3, ::System::String* a4, ::System::Boolean a5)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::CriWare::CriAtomCueSheet*, ::Il2CppArray<::System::Byte>*, ::CriWare::CriFsBinder*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_LOADACBDATACOROUTINE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void SequenceEventCallbackFromNative(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SEQUENCEEVENTCALLBACKFROMNATIVE_OFFSET))(a1);
		}

		static ::System::Void SequenceCallbackFromNative(::CriWare::CriAtomExSequencer_CriAtomExSequenceEventInfo& a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExSequencer_CriAtomExSequenceEventInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SEQUENCECALLBACKFROMNATIVE_OFFSET))(a1);
		}

		static ::System::Void BeatSyncCallbackFromNative(::CriWare::CriAtomExBeatSync_Info& a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_Info&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_BEATSYNCCALLBACKFROMNATIVE_OFFSET))(a1);
		}

		static ::System::Void CueLinkCallbackFromNative(::CriWare::CriAtomEx_CueLinkInfo& a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_CueLinkInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_CUELINKCALLBACKFROMNATIVE_OFFSET))(a1);
		}

		static ::System::Void SetEventCallback(::CriWare::CriAtomExSequencer_EventCbFunc* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExSequencer_EventCbFunc*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SETEVENTCALLBACK_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterEventCallbackChain(::CriWare::CriAtomExSequencer_EventCallback* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExSequencer_EventCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_REGISTEREVENTCALLBACKCHAIN_OFFSET))(a1);
		}

		static ::System::Void UnregisterEventCallbackChain(::CriWare::CriAtomExSequencer_EventCallback* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExSequencer_EventCallback*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_UNREGISTEREVENTCALLBACKCHAIN_OFFSET))(a1);
		}

		static ::System::Void SetBeatSyncCallback(::CriWare::CriAtomExBeatSync_CbFunc* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_SETBEATSYNCCALLBACK_OFFSET))(a1);
		}

		static ::System::Void RegisterBeatSyncCallbackChain(::CriWare::CriAtomExBeatSync_CbFunc* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_REGISTERBEATSYNCCALLBACKCHAIN_OFFSET))(a1);
		}

		static ::System::Void UnregisterBeatSyncCallbackChain(::CriWare::CriAtomExBeatSync_CbFunc* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomExBeatSync_CbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_UNREGISTERBEATSYNCCALLBACKCHAIN_OFFSET))(a1);
		}

		static ::System::Void RegisterCueLinkCallbackChain(::CriWare::CriAtomEx_CueLinkCbFunc* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_CueLinkCbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_REGISTERCUELINKCALLBACKCHAIN_OFFSET))(a1);
		}

		static ::System::Void UnregisterCueLinkCallbackChain(::CriWare::CriAtomEx_CueLinkCbFunc* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_CueLinkCbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_UNREGISTERCUELINKCALLBACKCHAIN_OFFSET))(a1);
		}
	};
}
