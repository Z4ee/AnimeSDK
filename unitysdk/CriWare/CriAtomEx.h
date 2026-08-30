#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomEx_GameVariableInfo.h"
#include "unitysdk/CriWare/CriAtomEx_PerformanceInfo.h"
#include "unitysdk/CriWare/CriAtomEx_Randomize3dCalcType.h"
#include "unitysdk/CriWare/CriAtomEx_Randomize3dParamType.h"
#include "unitysdk/CriWare/CriAtomEx_SoundRendererType.h"
#include "unitysdk/CriWare/CriAtomEx_SpeakerAngles6ch.h"
#include "unitysdk/CriWare/CriAtomEx_SpeakerAngles8ch.h"
#include "unitysdk/CriWare/CriAtomEx_SpeakerSystem.h"
#include "unitysdk/CriWare/CriAtom_HapticDeviceType_WASAPI.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtomEx_CueLinkCbFunc; }
namespace CriWare { class CriFsBinder; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text { class StringBuilder; }

#define CRIWARE_CRIATOMEX_ADD_ONCUELINKCALLBACK_OFFSET UNITYSDK_OFFSET(0x164A73A0)
#define CRIWARE_CRIATOMEX_APPLYDSPBUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x164A7A40)
#define CRIWARE_CRIATOMEX_ATTACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x164A19C0)
#define CRIWARE_CRIATOMEX_CONTROLVIRTUALSPEAKERSETTING_OFFSET UNITYSDK_OFFSET(0x164A7280)
#define CRIWARE_CRIATOMEX_CRIATOMEXACF_SETGLOBALLABELTOSELECTORBYINDEX_OFFSET UNITYSDK_OFFSET(0x164A89A0)
#define CRIWARE_CRIATOMEX_CRIATOMEXACF_SETGLOBALLABELTOSELECTORBYNAME_OFFSET UNITYSDK_OFFSET(0x164A8B00)
#define CRIWARE_CRIATOMEX_CRIATOMEX_APPLYDSPBUSSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x164A7B00)
#define CRIWARE_CRIATOMEX_CRIATOMEX_ATTACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x164A7910)
#define CRIWARE_CRIATOMEX_CRIATOMEX_CONTROLVIRTUALSPEAKERSETTING_OFFSET UNITYSDK_OFFSET(0x164A7320)
#define CRIWARE_CRIATOMEX_CRIATOMEX_DETACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x164A79C0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_ENABLEBUSSENDOFFSETWHENLEVELNOTEXIST_OFFSET UNITYSDK_OFFSET(0x164AA290)
#define CRIWARE_CRIATOMEX_CRIATOMEX_GETAPPLIEDDSPBUSSNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0x164A7890)
#define CRIWARE_CRIATOMEX_CRIATOMEX_GETGAMEVARIABLEBYID_OFFSET UNITYSDK_OFFSET(0x164A80E0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_GETGAMEVARIABLEBYNAME_OFFSET UNITYSDK_OFFSET(0x164A8230)
#define CRIWARE_CRIATOMEX_CRIATOMEX_GETGAMEVARIABLEINFO_OFFSET UNITYSDK_OFFSET(0x164A7EF0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_GETNUMGAMEVARIABLES_OFFSET UNITYSDK_OFFSET(0x164A7C40)
#define CRIWARE_CRIATOMEX_CRIATOMEX_LOCK_OFFSET UNITYSDK_OFFSET(0x164A8D80)
#define CRIWARE_CRIATOMEX_CRIATOMEX_PAUSETIMER_OFFSET UNITYSDK_OFFSET(0x164A8C60)
#define CRIWARE_CRIATOMEX_CRIATOMEX_REGISTERACFDATA_1_OFFSET UNITYSDK_OFFSET(0x164A76A0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_REGISTERACFDATA_OFFSET UNITYSDK_OFFSET(0x164A7530)
#define CRIWARE_CRIATOMEX_CRIATOMEX_REGISTERACFFILE_OFFSET UNITYSDK_OFFSET(0x164A73C0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_SETGAMEVARIABLEBYID_OFFSET UNITYSDK_OFFSET(0x164A8390)
#define CRIWARE_CRIATOMEX_CRIATOMEX_SETGAMEVARIABLEBYNAME_OFFSET UNITYSDK_OFFSET(0x164A84F0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_SETRANDOMSEED_OFFSET UNITYSDK_OFFSET(0x164A8640)
#define CRIWARE_CRIATOMEX_CRIATOMEX_SETSPEAKERANGLEARRAY_1_OFFSET UNITYSDK_OFFSET(0x164A6FC0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_SETSPEAKERANGLEARRAY_OFFSET UNITYSDK_OFFSET(0x164A6EA0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_SETVIRTUALSPEAKERANGLEARRAY_1_OFFSET UNITYSDK_OFFSET(0x164A7200)
#define CRIWARE_CRIATOMEX_CRIATOMEX_SETVIRTUALSPEAKERANGLEARRAY_OFFSET UNITYSDK_OFFSET(0x164A70E0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_UNLOCK_OFFSET UNITYSDK_OFFSET(0x164A8EA0)
#define CRIWARE_CRIATOMEX_CRIATOMEX_UNREGISTERACF_OFFSET UNITYSDK_OFFSET(0x164A7740)
#define CRIWARE_CRIATOMEX_CRIATOMUNITY_GETAUDIODEVICEID_PC_OFFSET UNITYSDK_OFFSET(0x164A9350)
#define CRIWARE_CRIATOMEX_CRIATOMUNITY_GETAUDIODEVICENAME_PC_OFFSET UNITYSDK_OFFSET(0x164A9F50)
#define CRIWARE_CRIATOMEX_CRIATOMUNITY_GETNUMAUDIODEVICES_PC_OFFSET UNITYSDK_OFFSET(0x164A9E00)
#define CRIWARE_CRIATOMEX_CRIATOMUNITY_LOADAUDIODEVICELIST_PC_OFFSET UNITYSDK_OFFSET(0x164A9D80)
#define CRIWARE_CRIATOMEX_CRIATOM_GETDEVICEID_WASAPI_OFFSET UNITYSDK_OFFSET(0x164A9790)
#define CRIWARE_CRIATOMEX_CRIATOM_GETPERFORMANCEINFO_OFFSET UNITYSDK_OFFSET(0x164A8880)
#define CRIWARE_CRIATOMEX_CRIATOM_RESETPERFORMANCEMONITOR_OFFSET UNITYSDK_OFFSET(0x164A8760)
#define CRIWARE_CRIATOMEX_CRIATOM_SETDEVICEID_WASAPI_1_OFFSET UNITYSDK_OFFSET(0x164AA0F0)
#define CRIWARE_CRIATOMEX_CRIATOM_SETDEVICEID_WASAPI_OFFSET UNITYSDK_OFFSET(0x164A9160)
#define CRIWARE_CRIATOMEX_CRIATOM_SETHAPTICDEVICEID_WASAPI_OFFSET UNITYSDK_OFFSET(0x164A93D0)
#define CRIWARE_CRIATOMEX_CRIATOM_SETVIRTUALSIDESPEAKERENABLED_WASAPI_OFFSET UNITYSDK_OFFSET(0x164A8FC0)
#define CRIWARE_CRIATOMEX_DETACHDSPBUSSETTING_OFFSET UNITYSDK_OFFSET(0x164A1A80)
#define CRIWARE_CRIATOMEX_DISABLEBACKGROUNDPLAYBACK_IOS_OFFSET UNITYSDK_OFFSET(0x164AA1A0)
#define CRIWARE_CRIATOMEX_ENABLEAUDIOSESSIONRESTORATION_IOS_OFFSET UNITYSDK_OFFSET(0x164AA1E0)
#define CRIWARE_CRIATOMEX_ENABLEBACKGROUNDPLAYBACK_IOS_OFFSET UNITYSDK_OFFSET(0x164AA190)
#define CRIWARE_CRIATOMEX_ENABLEBUSSENDOFFSETWHENLEVELNOTEXIST_OFFSET UNITYSDK_OFFSET(0x164AA1F0)
#define CRIWARE_CRIATOMEX_GETAPPLIEDDSPBUSSNAPSHOTNAME_OFFSET UNITYSDK_OFFSET(0x164A77C0)
#define CRIWARE_CRIATOMEX_GETAUDIODEVICENAME_PC_OFFSET UNITYSDK_OFFSET(0x164A9E80)
#define CRIWARE_CRIATOMEX_GETGAMEVARIABLEINFO_OFFSET UNITYSDK_OFFSET(0x164A7CC0)
#define CRIWARE_CRIATOMEX_GETGAMEVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x164A8160)
#define CRIWARE_CRIATOMEX_GETGAMEVARIABLE_OFFSET UNITYSDK_OFFSET(0x164A8040)
#define CRIWARE_CRIATOMEX_GETNUMAUDIODEVICES_PC_OFFSET UNITYSDK_OFFSET(0x164A9C40)
#define CRIWARE_CRIATOMEX_GETNUMGAMEVARIABLES_OFFSET UNITYSDK_OFFSET(0x164A7BA0)
#define CRIWARE_CRIATOMEX_GETOUTPUTAUDIODEVICEID_PC_OFFSET UNITYSDK_OFFSET(0x164A9450)
#define CRIWARE_CRIATOMEX_GETOUTPUTAUDIODEVICEINDEX_PC_OFFSET UNITYSDK_OFFSET(0x164A9A30)
#define CRIWARE_CRIATOMEX_GETPERFORMANCEINFO_OFFSET UNITYSDK_OFFSET(0x164A87E0)
#define CRIWARE_CRIATOMEX_ISBGMPORTACQUIRED_VITA_OFFSET UNITYSDK_OFFSET(0x164AA180)
#define CRIWARE_CRIATOMEX_ISINTERRUPTEDOTHERAUDIO_IOS_OFFSET UNITYSDK_OFFSET(0x164AA1B0)
#define CRIWARE_CRIATOMEX_ISSOUNDSTOPPED_IOS_OFFSET UNITYSDK_OFFSET(0x164AA1D0)
#define CRIWARE_CRIATOMEX_LOADAUDIODEVICELIST_PC_OFFSET UNITYSDK_OFFSET(0x164A9CE0)
#define CRIWARE_CRIATOMEX_LOCK_OFFSET UNITYSDK_OFFSET(0x164A8CE0)
#define CRIWARE_CRIATOMEX_PAUSETIMER_OFFSET UNITYSDK_OFFSET(0x164A8BC0)
#define CRIWARE_CRIATOMEX_REGISTERACF_1_OFFSET UNITYSDK_OFFSET(0x164A7470)
#define CRIWARE_CRIATOMEX_REGISTERACF_2_OFFSET UNITYSDK_OFFSET(0x164A75D0)
#define CRIWARE_CRIATOMEX_REGISTERACF_OFFSET UNITYSDK_OFFSET(0x164A4120)
#define CRIWARE_CRIATOMEX_REMOVE_ONCUELINKCALLBACK_OFFSET UNITYSDK_OFFSET(0x164A73B0)
#define CRIWARE_CRIATOMEX_RESETPERFORMANCEMONITOR_OFFSET UNITYSDK_OFFSET(0x164A86C0)
#define CRIWARE_CRIATOMEX_RESUMEAUDIO_IOS_OFFSET UNITYSDK_OFFSET(0x164AA1C0)
#define CRIWARE_CRIATOMEX_SETGAMEVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x164A8420)
#define CRIWARE_CRIATOMEX_SETGAMEVARIABLE_OFFSET UNITYSDK_OFFSET(0x164A82E0)
#define CRIWARE_CRIATOMEX_SETGLOBALLABELTOSELECTORBYINDEX_OFFSET UNITYSDK_OFFSET(0x164A8900)
#define CRIWARE_CRIATOMEX_SETGLOBALLABELTOSELECTORBYNAME_OFFSET UNITYSDK_OFFSET(0x164A8A20)
#define CRIWARE_CRIATOMEX_SETOUTPUTAUDIODEVICE_PC_1_OFFSET UNITYSDK_OFFSET(0x164A9FD0)
#define CRIWARE_CRIATOMEX_SETOUTPUTAUDIODEVICE_PC_OFFSET UNITYSDK_OFFSET(0x164A9040)
#define CRIWARE_CRIATOMEX_SETOUTPUTHAPTICDEVICE_PC_OFFSET UNITYSDK_OFFSET(0x164A91F0)
#define CRIWARE_CRIATOMEX_SETOUTPUTVOLUME_VITA_OFFSET UNITYSDK_OFFSET(0x164AA170)
#define CRIWARE_CRIATOMEX_SETRANDOMSEED_OFFSET UNITYSDK_OFFSET(0x164A85A0)
#define CRIWARE_CRIATOMEX_SETSPEAKERANGLE_1_OFFSET UNITYSDK_OFFSET(0x164A6F20)
#define CRIWARE_CRIATOMEX_SETSPEAKERANGLE_OFFSET UNITYSDK_OFFSET(0x164A6E00)
#define CRIWARE_CRIATOMEX_SETVIRTUALSIDESPEAKERENABLED_PC_OFFSET UNITYSDK_OFFSET(0x164A8F20)
#define CRIWARE_CRIATOMEX_SETVIRTUALSPEAKERANGLE_1_OFFSET UNITYSDK_OFFSET(0x164A7160)
#define CRIWARE_CRIATOMEX_SETVIRTUALSPEAKERANGLE_OFFSET UNITYSDK_OFFSET(0x164A7040)
#define CRIWARE_CRIATOMEX_UNLOCK_OFFSET UNITYSDK_OFFSET(0x164A8E00)
#define CRIWARE_CRIATOMEX_UNREGISTERACF_OFFSET UNITYSDK_OFFSET(0x164A4080)
#define CRIWARE_CRIATOMEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x164AA310)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomEx_TypeDefinitionIndex = 38651;

	class CriAtomEx : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::CriWare::CriAtomEx_Randomize3dCalcType, ::Il2CppArray<::CriWare::CriAtomEx_Randomize3dParamType>*>** StaticGet_randomize3dParamTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::CriWare::CriAtomEx_Randomize3dCalcType, ::Il2CppArray<::CriWare::CriAtomEx_Randomize3dParamType>*>**)Il2CppClass::FromTypeDefinitionIndex(CriAtomEx_TypeDefinitionIndex)->GetStaticField(0x55A10);
		}
		// static const ::System::UInt32 InvalidAisacControlId = 0xFFFFFFFF; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX__CCTOR_OFFSET))();
		}

		static ::System::Void SetSpeakerAngle(::CriWare::CriAtomEx_SpeakerAngles6ch a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_SpeakerAngles6ch))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETSPEAKERANGLE_OFFSET))(a1);
		}

		static ::System::Void SetSpeakerAngle_1(::CriWare::CriAtomEx_SpeakerAngles8ch a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_SpeakerAngles8ch))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETSPEAKERANGLE_1_OFFSET))(a1);
		}

		static ::System::Void SetVirtualSpeakerAngle(::CriWare::CriAtomEx_SpeakerAngles6ch a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_SpeakerAngles6ch))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETVIRTUALSPEAKERANGLE_OFFSET))(a1);
		}

		static ::System::Void SetVirtualSpeakerAngle_1(::CriWare::CriAtomEx_SpeakerAngles8ch a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_SpeakerAngles8ch))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETVIRTUALSPEAKERANGLE_1_OFFSET))(a1);
		}

		static ::System::Void ControlVirtualSpeakerSetting(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CONTROLVIRTUALSPEAKERSETTING_OFFSET))(a1);
		}

		static ::System::Void add_OnCueLinkCallback(::CriWare::CriAtomEx_CueLinkCbFunc* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_CueLinkCbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_ADD_ONCUELINKCALLBACK_OFFSET))(a1);
		}

		static ::System::Void remove_OnCueLinkCallback(::CriWare::CriAtomEx_CueLinkCbFunc* a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_CueLinkCbFunc*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_REMOVE_ONCUELINKCALLBACK_OFFSET))(a1);
		}

		static ::System::Boolean RegisterAcf(::CriWare::CriFsBinder* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::CriWare::CriFsBinder*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_REGISTERACF_OFFSET))(a1, a2);
		}

		static ::System::Boolean RegisterAcf_1(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_REGISTERACF_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean RegisterAcf_2(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_REGISTERACF_2_OFFSET))(a1);
		}

		static ::System::Void UnregisterAcf()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_UNREGISTERACF_OFFSET))();
		}

		static ::System::String* GetAppliedDspBusSnapshotName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_GETAPPLIEDDSPBUSSNAPSHOTNAME_OFFSET))();
		}

		static ::System::Void AttachDspBusSetting(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_ATTACHDSPBUSSETTING_OFFSET))(a1);
		}

		static ::System::Void DetachDspBusSetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_DETACHDSPBUSSETTING_OFFSET))();
		}

		static ::System::Void ApplyDspBusSnapshot(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_APPLYDSPBUSSNAPSHOT_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetNumGameVariables()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_GETNUMGAMEVARIABLES_OFFSET))();
		}

		static ::System::Boolean GetGameVariableInfo(::System::UInt16 a1, ::CriWare::CriAtomEx_GameVariableInfo& a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomEx_GameVariableInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_GETGAMEVARIABLEINFO_OFFSET))(a1, a2);
		}

		static ::System::Single GetGameVariable(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_GETGAMEVARIABLE_OFFSET))(a1);
		}

		static ::System::Single GetGameVariable_1(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_GETGAMEVARIABLE_1_OFFSET))(a1);
		}

		static ::System::Void SetGameVariable(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETGAMEVARIABLE_OFFSET))(a1, a2);
		}

		static ::System::Void SetGameVariable_1(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETGAMEVARIABLE_1_OFFSET))(a1, a2);
		}

		static ::System::Void SetRandomSeed(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETRANDOMSEED_OFFSET))(a1);
		}

		static ::System::Void ResetPerformanceMonitor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RESETPERFORMANCEMONITOR_OFFSET))();
		}

		static ::System::Void GetPerformanceInfo(::CriWare::CriAtomEx_PerformanceInfo& a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_PerformanceInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_GETPERFORMANCEINFO_OFFSET))(a1);
		}

		static ::System::Void SetGlobalLabelToSelectorByIndex(::System::UInt16 a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETGLOBALLABELTOSELECTORBYINDEX_OFFSET))(a1, a2);
		}

		static ::System::Void SetGlobalLabelToSelectorByName(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETGLOBALLABELTOSELECTORBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void PauseTimer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_PAUSETIMER_OFFSET))(a1);
		}

		static ::System::Void Lock()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_LOCK_OFFSET))();
		}

		static ::System::Void Unlock()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_UNLOCK_OFFSET))();
		}

		static ::System::Void SetVirtualSideSpeakerEnabled_PC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETVIRTUALSIDESPEAKERENABLED_PC_OFFSET))(a1);
		}

		static ::System::Void SetOutputAudioDevice_PC(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETOUTPUTAUDIODEVICE_PC_OFFSET))(a1);
		}

		static ::System::Void SetOutputHapticDevice_PC(::System::Int32 a1, ::CriWare::CriAtom_HapticDeviceType_WASAPI a2)
		{
			return ((::System::Void(*)(::System::Int32, ::CriWare::CriAtom_HapticDeviceType_WASAPI))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETOUTPUTHAPTICDEVICE_PC_OFFSET))(a1, a2);
		}

		static ::System::String* GetOutputAudioDeviceId_PC(::System::Boolean& a1)
		{
			return ((::System::String*(*)(::System::Boolean&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_GETOUTPUTAUDIODEVICEID_PC_OFFSET))(a1);
		}

		static ::System::Int32 GetOutputAudioDeviceIndex_PC(::System::Boolean& a1)
		{
			return ((::System::Int32(*)(::System::Boolean&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_GETOUTPUTAUDIODEVICEINDEX_PC_OFFSET))(a1);
		}

		static ::System::Boolean LoadAudioDeviceList_PC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_LOADAUDIODEVICELIST_PC_OFFSET))();
		}

		static ::System::Int32 GetNumAudioDevices_PC()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_GETNUMAUDIODEVICES_PC_OFFSET))();
		}

		static ::System::String* GetAudioDeviceName_PC(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_GETAUDIODEVICENAME_PC_OFFSET))(a1);
		}

		static ::System::Void SetOutputAudioDevice_PC_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETOUTPUTAUDIODEVICE_PC_1_OFFSET))(a1);
		}

		static ::System::Void SetOutputVolume_VITA(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_SETOUTPUTVOLUME_VITA_OFFSET))(a1);
		}

		static ::System::Boolean IsBgmPortAcquired_VITA()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_ISBGMPORTACQUIRED_VITA_OFFSET))();
		}

		static ::System::Void EnableBackgroundPlayback_IOS()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_ENABLEBACKGROUNDPLAYBACK_IOS_OFFSET))();
		}

		static ::System::Void DisableBackgroundPlayback_IOS()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_DISABLEBACKGROUNDPLAYBACK_IOS_OFFSET))();
		}

		static ::System::Boolean IsInterruptedOtherAudio_IOS()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_ISINTERRUPTEDOTHERAUDIO_IOS_OFFSET))();
		}

		static ::System::Void ResumeAudio_IOS()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_RESUMEAUDIO_IOS_OFFSET))();
		}

		static ::System::Boolean IsSoundStopped_IOS()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_ISSOUNDSTOPPED_IOS_OFFSET))();
		}

		static ::System::Void EnableAudioSessionRestoration_IOS(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_ENABLEAUDIOSESSIONRESTORATION_IOS_OFFSET))(a1);
		}

		static ::System::Void EnableBusSendOffsetWhenLevelNotExist(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_ENABLEBUSSENDOFFSETWHENLEVELNOTEXIST_OFFSET))(a1);
		}

		static ::System::Boolean criAtomEx_RegisterAcfFile(::System::IntPtr a1, ::System::String* a2, ::System::IntPtr a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_REGISTERACFFILE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean criAtomEx_RegisterAcfData(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_REGISTERACFDATA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean criAtomEx_RegisterAcfData_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::IntPtr a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_REGISTERACFDATA_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void criAtomEx_UnregisterAcf()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_UNREGISTERACF_OFFSET))();
		}

		static ::System::Void criAtomEx_AttachDspBusSetting(::System::String* a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_ATTACHDSPBUSSETTING_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomEx_DetachDspBusSetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_DETACHDSPBUSSETTING_OFFSET))();
		}

		static ::System::Void criAtomEx_ApplyDspBusSnapshot(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_APPLYDSPBUSSNAPSHOT_OFFSET))(a1, a2);
		}

		static ::System::IntPtr criAtomEx_GetAppliedDspBusSnapshotName()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_GETAPPLIEDDSPBUSSNAPSHOTNAME_OFFSET))();
		}

		static ::System::Int32 criAtomEx_GetNumGameVariables()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_GETNUMGAMEVARIABLES_OFFSET))();
		}

		static ::System::Boolean criAtomEx_GetGameVariableInfo(::System::UInt16 a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_GETGAMEVARIABLEINFO_OFFSET))(a1, a2);
		}

		static ::System::Single criAtomEx_GetGameVariableById(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_GETGAMEVARIABLEBYID_OFFSET))(a1);
		}

		static ::System::Single criAtomEx_GetGameVariableByName(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_GETGAMEVARIABLEBYNAME_OFFSET))(a1);
		}

		static ::System::Void criAtomEx_SetGameVariableById(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_SETGAMEVARIABLEBYID_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx_SetGameVariableByName(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_SETGAMEVARIABLEBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx_SetRandomSeed(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_SETRANDOMSEED_OFFSET))(a1);
		}

		static ::System::Void criAtomEx_PauseTimer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_PAUSETIMER_OFFSET))(a1);
		}

		static ::System::Void criAtomEx_Lock()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_LOCK_OFFSET))();
		}

		static ::System::Void criAtomEx_Unlock()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_UNLOCK_OFFSET))();
		}

		static ::System::Void criAtom_ResetPerformanceMonitor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOM_RESETPERFORMANCEMONITOR_OFFSET))();
		}

		static ::System::Void criAtom_GetPerformanceInfo(::CriWare::CriAtomEx_PerformanceInfo& a1)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_PerformanceInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOM_GETPERFORMANCEINFO_OFFSET))(a1);
		}

		static ::System::Void criAtomExAcf_SetGlobalLabelToSelectorByIndex(::System::UInt16 a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEXACF_SETGLOBALLABELTOSELECTORBYINDEX_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomExAcf_SetGlobalLabelToSelectorByName(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEXACF_SETGLOBALLABELTOSELECTORBYNAME_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx_SetSpeakerAngleArray(::CriWare::CriAtomEx_SpeakerSystem a1, ::CriWare::CriAtomEx_SpeakerAngles6ch& a2)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_SpeakerSystem, ::CriWare::CriAtomEx_SpeakerAngles6ch&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_SETSPEAKERANGLEARRAY_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx_SetSpeakerAngleArray_1(::CriWare::CriAtomEx_SpeakerSystem a1, ::CriWare::CriAtomEx_SpeakerAngles8ch& a2)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_SpeakerSystem, ::CriWare::CriAtomEx_SpeakerAngles8ch&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_SETSPEAKERANGLEARRAY_1_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx_SetVirtualSpeakerAngleArray(::CriWare::CriAtomEx_SpeakerSystem a1, ::CriWare::CriAtomEx_SpeakerAngles6ch& a2)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_SpeakerSystem, ::CriWare::CriAtomEx_SpeakerAngles6ch&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_SETVIRTUALSPEAKERANGLEARRAY_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx_SetVirtualSpeakerAngleArray_1(::CriWare::CriAtomEx_SpeakerSystem a1, ::CriWare::CriAtomEx_SpeakerAngles8ch& a2)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_SpeakerSystem, ::CriWare::CriAtomEx_SpeakerAngles8ch&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_SETVIRTUALSPEAKERANGLEARRAY_1_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomEx_ControlVirtualSpeakerSetting(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_CONTROLVIRTUALSPEAKERSETTING_OFFSET))(a1);
		}

		static ::System::Void criAtomEx_EnableBusSendOffsetWhenLevelNotExist(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMEX_ENABLEBUSSENDOFFSETWHENLEVELNOTEXIST_OFFSET))(a1);
		}

		static ::System::Void criAtom_SetVirtualSideSpeakerEnabled_WASAPI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOM_SETVIRTUALSIDESPEAKERENABLED_WASAPI_OFFSET))(a1);
		}

		static ::System::Void criAtom_SetDeviceId_WASAPI(::CriWare::CriAtomEx_SoundRendererType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_SoundRendererType, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOM_SETDEVICEID_WASAPI_OFFSET))(a1, a2);
		}

		static ::System::Int32 criAtom_GetDeviceId_WASAPI(::CriWare::CriAtomEx_SoundRendererType a1, ::System::Text::StringBuilder* a2, ::System::Int32 a3, ::System::Int32& a4)
		{
			return ((::System::Int32(*)(::CriWare::CriAtomEx_SoundRendererType, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOM_GETDEVICEID_WASAPI_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void criAtom_SetDeviceId_WASAPI_1(::CriWare::CriAtomEx_SoundRendererType a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::CriWare::CriAtomEx_SoundRendererType, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOM_SETDEVICEID_WASAPI_1_OFFSET))(a1, a2);
		}

		static ::System::Void criAtom_SetHapticDeviceId_WASAPI(::System::IntPtr a1, ::CriWare::CriAtom_HapticDeviceType_WASAPI a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtom_HapticDeviceType_WASAPI))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOM_SETHAPTICDEVICEID_WASAPI_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomUnity_LoadAudioDeviceList_PC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMUNITY_LOADAUDIODEVICELIST_PC_OFFSET))();
		}

		static ::System::Int32 criAtomUnity_GetNumAudioDevices_PC()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMUNITY_GETNUMAUDIODEVICES_PC_OFFSET))();
		}

		static ::System::IntPtr criAtomUnity_GetAudioDeviceName_PC(::System::Int32 a1)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMUNITY_GETAUDIODEVICENAME_PC_OFFSET))(a1);
		}

		static ::System::IntPtr criAtomUnity_GetAudioDeviceId_PC(::System::Int32 a1)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEX_CRIATOMUNITY_GETAUDIODEVICEID_PC_OFFSET))(a1);
		}
	};
}
