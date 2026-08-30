#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/Common_CpuUsage.h"
#include "unitysdk/CriWare/CriAtomConfig_LinuxOutput.h"
#include "unitysdk/CriWare/CriAtomEx_SoundRendererType.h"
#include "unitysdk/CriWare/CriAtomPlugin_FileOpenCondition.h"
#include "unitysdk/CriWare/CriAtom_SpeakerMapping.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtomConfig; }
namespace CriWare { class CriAtomExAcb; }
namespace CriWare { class CriAtomPlugin_CallbackFromNativeDelegate; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CRIWARE_CRIATOMPLUGIN_ADD_ONBEFOREFINALIZE_OFFSET UNITYSDK_OFFSET(0x164DD5F0)
#define CRIWARE_CRIATOMPLUGIN_ADD_ONBEFOREINITIALIZE_OFFSET UNITYSDK_OFFSET(0x164DD370)
#define CRIWARE_CRIATOMPLUGIN_ADD_ONFINALIZED_OFFSET UNITYSDK_OFFSET(0x164DD730)
#define CRIWARE_CRIATOMPLUGIN_ADD_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x164DD4B0)
#define CRIWARE_CRIATOMPLUGIN_CALLBACKFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x164E0A30)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE01A2ECB0_OFFSET UNITYSDK_OFFSET(0x164DFF60)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE041B62AF_OFFSET UNITYSDK_OFFSET(0x164E0AF0)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE0B886AF3_OFFSET UNITYSDK_OFFSET(0x164DE570)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE0C534427_OFFSET UNITYSDK_OFFSET(0x164DE310)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE10ED6C77_OFFSET UNITYSDK_OFFSET(0x164DEB20)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE1E06F107_OFFSET UNITYSDK_OFFSET(0x164DE030)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE36F4C206_OFFSET UNITYSDK_OFFSET(0x164E0E90)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE380D96FC_OFFSET UNITYSDK_OFFSET(0x164DFA60)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE3B3A1489_OFFSET UNITYSDK_OFFSET(0x164DE7D0)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE43F8CB5E_OFFSET UNITYSDK_OFFSET(0x164DFBC0)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE503D6EC0_OFFSET UNITYSDK_OFFSET(0x164DE440)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE65F3B261_OFFSET UNITYSDK_OFFSET(0x164E0580)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE6B9656CC_OFFSET UNITYSDK_OFFSET(0x164DD920)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE6C6D06F3_OFFSET UNITYSDK_OFFSET(0x164E0C10)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE7ABCA0A2_OFFSET UNITYSDK_OFFSET(0x164DDA50)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE80CA213E_OFFSET UNITYSDK_OFFSET(0x164DE690)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE813CFB49_OFFSET UNITYSDK_OFFSET(0x164E0D90)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE874EDA5D_OFFSET UNITYSDK_OFFSET(0x164DF7B0)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE98DA093D_OFFSET UNITYSDK_OFFSET(0x164E0E10)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREAB4E051A_OFFSET UNITYSDK_OFFSET(0x164DE950)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREAEE98D7A_OFFSET UNITYSDK_OFFSET(0x164DF920)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREB05B3403_OFFSET UNITYSDK_OFFSET(0x164E0080)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREB2956D4E_OFFSET UNITYSDK_OFFSET(0x164E0A70)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREB59406BB_OFFSET UNITYSDK_OFFSET(0x164E0B70)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREBA22AA6A_OFFSET UNITYSDK_OFFSET(0x164E0110)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREC5F8065D_OFFSET UNITYSDK_OFFSET(0x164E0D10)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREDCA2E8D4_OFFSET UNITYSDK_OFFSET(0x164E0310)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREE4D1D1E7_OFFSET UNITYSDK_OFFSET(0x164E0C90)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREF0082817_OFFSET UNITYSDK_OFFSET(0x164DDB80)
#define CRIWARE_CRIATOMPLUGIN_DECRYPTACB_OFFSET UNITYSDK_OFFSET(0x164E03D0)
#define CRIWARE_CRIATOMPLUGIN_EXECUTEQUEUEDBEATSYNCCALLBACKS_OFFSET UNITYSDK_OFFSET(0x164DDAD0)
#define CRIWARE_CRIATOMPLUGIN_EXECUTEQUEUEDCUELINKCALLBACKS_OFFSET UNITYSDK_OFFSET(0x164DD870)
#define CRIWARE_CRIATOMPLUGIN_EXECUTEQUEUEDEVENTCALLBACKS_OFFSET UNITYSDK_OFFSET(0x164DD9A0)
#define CRIWARE_CRIATOMPLUGIN_FINALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x164DF2F0)
#define CRIWARE_CRIATOMPLUGIN_GETAUDIOEFFECTINTERFACELIST_OFFSET UNITYSDK_OFFSET(0x164DDC00)
#define CRIWARE_CRIATOMPLUGIN_GETCPUUSAGE_OFFSET UNITYSDK_OFFSET(0x164DFC40)
#define CRIWARE_CRIATOMPLUGIN_GETFILEOPENCONDITION_OFFSET UNITYSDK_OFFSET(0x164E0620)
#define CRIWARE_CRIATOMPLUGIN_GETLOOPCOUNTPARAMETERID_OFFSET UNITYSDK_OFFSET(0x164D5FC0)
#define CRIWARE_CRIATOMPLUGIN_GETOUTPUTCHANNELS_OFFSET UNITYSDK_OFFSET(0x164DFFE0)
#define CRIWARE_CRIATOMPLUGIN_GETOUTPUTSAMPLINGRATE_OFFSET UNITYSDK_OFFSET(0x164DFEC0)
#define CRIWARE_CRIATOMPLUGIN_GETREQUIREDMAXVIRTUALVOICES_OFFSET UNITYSDK_OFFSET(0x164DEBA0)
#define CRIWARE_CRIATOMPLUGIN_GETWAVESAMPLES_OFFSET UNITYSDK_OFFSET(0x164E0190)
#define CRIWARE_CRIATOMPLUGIN_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x164DD1D0)
#define CRIWARE_CRIATOMPLUGIN_GET_USESINGAMEPREVIEW_OFFSET UNITYSDK_OFFSET(0x164DD200)
#define CRIWARE_CRIATOMPLUGIN_INITIALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x164DEBE0)
#define CRIWARE_CRIATOMPLUGIN_ISINITIALIZEDFORPCMOUTPUT_OFFSET UNITYSDK_OFFSET(0x164E0100)
#define CRIWARE_CRIATOMPLUGIN_ISLIBRARYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x164CBC30)
#define CRIWARE_CRIATOMPLUGIN_LOG_OFFSET UNITYSDK_OFFSET(0x164DD1C0)
#define CRIWARE_CRIATOMPLUGIN_PAUSE_OFFSET UNITYSDK_OFFSET(0x164DFAE0)
#define CRIWARE_CRIATOMPLUGIN_PREPAREACBDATAFORLOAD_OFFSET UNITYSDK_OFFSET(0x164DD270)
#define CRIWARE_CRIATOMPLUGIN_REMOVE_ONBEFOREFINALIZE_OFFSET UNITYSDK_OFFSET(0x164DD690)
#define CRIWARE_CRIATOMPLUGIN_REMOVE_ONBEFOREINITIALIZE_OFFSET UNITYSDK_OFFSET(0x164DD410)
#define CRIWARE_CRIATOMPLUGIN_REMOVE_ONFINALIZED_OFFSET UNITYSDK_OFFSET(0x164DD7D0)
#define CRIWARE_CRIATOMPLUGIN_REMOVE_ONINITIALIZED_OFFSET UNITYSDK_OFFSET(0x164DD550)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_ANDROID_OFFSET UNITYSDK_OFFSET(0x164DE860)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_EDITOR_OFFSET UNITYSDK_OFFSET(0x164DE3A0)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_IOS_OFFSET UNITYSDK_OFFSET(0x164DE710)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_LINUX_OFFSET UNITYSDK_OFFSET(0x164DE5F0)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PC_OFFSET UNITYSDK_OFFSET(0x164DE4C0)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PS4_OFFSET UNITYSDK_OFFSET(0x164DEA30)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PS5_OFFSET UNITYSDK_OFFSET(0x164DEA40)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_SWITCH2_OFFSET UNITYSDK_OFFSET(0x164DEA60)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_SWITCH_OFFSET UNITYSDK_OFFSET(0x164DEA50)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_VITA_OFFSET UNITYSDK_OFFSET(0x164DEA20)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_WEBGL_OFFSET UNITYSDK_OFFSET(0x164DEA70)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGMONITORPARAMETES_OFFSET UNITYSDK_OFFSET(0x164DE260)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x164DDDB0)
#define CRIWARE_CRIATOMPLUGIN_SETMAXSAMPLINGRATEFORSTANDARDVOICEPOOL_OFFSET UNITYSDK_OFFSET(0x164DEA80)
#define CRIWARE_CRIATOMPLUGIN_SET_USESINGAMEPREVIEW_OFFSET UNITYSDK_OFFSET(0x164DD240)
#define CRIWARE_CRIATOMPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x164E0F10)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomPlugin_TypeDefinitionIndex = 38632;

	class CriAtomPlugin : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_OnBeforeInitialize()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x59740);
		}
		static ::System::Action** StaticGet_OnBeforeFinalize()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x59748);
		}
		static ::System::Action** StaticGet_OnInitialized()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x59750);
		}
		static ::System::Collections::Generic::List_1<::System::IntPtr>** StaticGet_effectInterfaceList()
		{
			return (::System::Collections::Generic::List_1<::System::IntPtr>**)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x59758);
		}
		static ::System::Action** StaticGet_OnFinalized()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x59760);
		}
		static ::System::Int32* StaticGet_initializationCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x12950);
		}
		static ::System::UInt16* StaticGet_CRIATOMPARAMETER2_ID_INVALID()
		{
			return (::System::UInt16*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x12954);
		}
		static ::System::Boolean* StaticGet__UsesInGamePreview_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x12956);
		}
		static ::System::Boolean* StaticGet_isConfigured()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x12957);
		}
		static ::System::Int32* StaticGet_CRIATOMUNITY_PARAMETER_ID_LOOP_COUNT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x12958);
		}
		static ::CriWare::Common_CpuUsage* StaticGet_cpuUsage()
		{
			return (::CriWare::Common_CpuUsage*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x1295C);
		}
		static ::System::Single* StaticGet_timeSinceStartup()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x12968);
		}
		static ::System::UInt64* StaticGet_temporalStorage()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x12970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN__CCTOR_OFFSET))();
		}

		static ::System::Void Log(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_LOG_OFFSET))(a1);
		}

		static ::System::Boolean get_isInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_GET_ISINITIALIZED_OFFSET))();
		}

		static ::System::Boolean get_UsesInGamePreview()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_GET_USESINGAMEPREVIEW_OFFSET))();
		}

		static ::System::Void set_UsesInGamePreview(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SET_USESINGAMEPREVIEW_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* PrepareAcbDataForLoad(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_PREPAREACBDATAFORLOAD_OFFSET))(a1);
		}

		static ::System::Void add_OnBeforeInitialize(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_ADD_ONBEFOREINITIALIZE_OFFSET))(a1);
		}

		static ::System::Void remove_OnBeforeInitialize(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_REMOVE_ONBEFOREINITIALIZE_OFFSET))(a1);
		}

		static ::System::Void add_OnInitialized(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_ADD_ONINITIALIZED_OFFSET))(a1);
		}

		static ::System::Void remove_OnInitialized(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_REMOVE_ONINITIALIZED_OFFSET))(a1);
		}

		static ::System::Void add_OnBeforeFinalize(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_ADD_ONBEFOREFINALIZE_OFFSET))(a1);
		}

		static ::System::Void remove_OnBeforeFinalize(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_REMOVE_ONBEFOREFINALIZE_OFFSET))(a1);
		}

		static ::System::Void add_OnFinalized(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_ADD_ONFINALIZED_OFFSET))(a1);
		}

		static ::System::Void remove_OnFinalized(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_REMOVE_ONFINALIZED_OFFSET))(a1);
		}

		static ::System::Void ExecuteQueuedCueLinkCallbacks()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_EXECUTEQUEUEDCUELINKCALLBACKS_OFFSET))();
		}

		static ::System::Void ExecuteQueuedEventCallbacks()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_EXECUTEQUEUEDEVENTCALLBACKS_OFFSET))();
		}

		static ::System::Void ExecuteQueuedBeatSyncCallbacks()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_EXECUTEQUEUEDBEATSYNCCALLBACKS_OFFSET))();
		}

		static ::System::Boolean GetAudioEffectInterfaceList(::System::Collections::Generic::List_1<::System::IntPtr>*& a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::IntPtr>*&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_GETAUDIOEFFECTINTERFACELIST_OFFSET))(a1);
		}

		static ::System::Void SetConfigParameters(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Byte a4, ::System::Byte a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Int32 a12, ::System::Int32 a13, ::System::Int32 a14, ::CriWare::CriAtom_SpeakerMapping a15, ::System::Boolean a16, ::System::Single a17, ::System::Int32 a18, ::System::Int32 a19, ::System::Int32 a20, ::System::Int32 a21, ::System::Single a22, ::CriWare::CriAtomEx_SoundRendererType a23, ::System::Boolean a24, ::System::Boolean a25)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte, ::System::Byte, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::CriWare::CriAtom_SpeakerMapping, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::CriWare::CriAtomEx_SoundRendererType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGPARAMETERS_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25);
		}

		static ::System::Void SetConfigMonitorParametes(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGMONITORPARAMETES_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetConfigAdditionalParameters_EDITOR(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_EDITOR_OFFSET))(a1, a2);
		}

		static ::System::Void SetConfigAdditionalParameters_PC(::System::Int64 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PC_OFFSET))(a1, a2);
		}

		static ::System::Void SetConfigAdditionalParameters_LINUX(::CriWare::CriAtomConfig_LinuxOutput a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::CriWare::CriAtomConfig_LinuxOutput, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_LINUX_OFFSET))(a1, a2);
		}

		static ::System::Void SetConfigAdditionalParameters_IOS(::System::Boolean a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_IOS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetConfigAdditionalParameters_ANDROID(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_ANDROID_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void SetConfigAdditionalParameters_VITA(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_VITA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetConfigAdditionalParameters_PS4(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PS4_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void SetConfigAdditionalParameters_PS5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PS5_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetConfigAdditionalParameters_SWITCH(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_SWITCH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetConfigAdditionalParameters_SWITCH2(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_SWITCH2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetConfigAdditionalParameters_WEBGL(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_WEBGL_OFFSET))(a1, a2);
		}

		static ::System::Void SetMaxSamplingRateForStandardVoicePool(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETMAXSAMPLINGRATEFORSTANDARDVOICEPOOL_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetRequiredMaxVirtualVoices(::CriWare::CriAtomConfig* a1)
		{
			return ((::System::Int32(*)(::CriWare::CriAtomConfig*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_GETREQUIREDMAXVIRTUALVOICES_OFFSET))(a1);
		}

		static ::System::Void InitializeLibrary()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_INITIALIZELIBRARY_OFFSET))();
		}

		static ::System::Boolean IsLibraryInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_ISLIBRARYINITIALIZED_OFFSET))();
		}

		static ::System::Void FinalizeLibrary()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_FINALIZELIBRARY_OFFSET))();
		}

		static ::System::Void Pause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_PAUSE_OFFSET))(a1);
		}

		static ::CriWare::Common_CpuUsage GetCpuUsage()
		{
			return ((::CriWare::Common_CpuUsage(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_GETCPUUSAGE_OFFSET))();
		}

		static ::System::Int32 GetOutputSamplingRate()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_GETOUTPUTSAMPLINGRATE_OFFSET))();
		}

		static ::System::Int32 GetOutputChannels()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_GETOUTPUTCHANNELS_OFFSET))();
		}

		static ::System::Boolean IsInitializedForPcmOutput()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_ISINITIALIZEDFORPCMOUTPUT_OFFSET))();
		}

		static ::System::UInt16 GetLoopCountParameterId()
		{
			return ((::System::UInt16(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_GETLOOPCOUNTPARAMETERID_OFFSET))();
		}

		static ::System::Boolean GetWaveSamples(::CriWare::CriAtomExAcb* a1, ::System::String* a2, ::Il2CppArray<::System::Int16>* a3)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExAcb*, ::System::String*, ::Il2CppArray<::System::Int16>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_GETWAVESAMPLES_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DecryptAcb(::System::IntPtr a1, ::System::UInt64 a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_DECRYPTACB_OFFSET))(a1, a2, a3);
		}

		static ::CriWare::CriAtomPlugin_FileOpenCondition GetFileOpenCondition()
		{
			return ((::CriWare::CriAtomPlugin_FileOpenCondition(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_GETFILEOPENCONDITION_OFFSET))();
		}

		static ::System::UInt64 CallbackFromNative(::System::IntPtr a1)
		{
			return ((::System::UInt64(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CALLBACKFROMNATIVE_OFFSET))(a1);
		}

		static ::System::Boolean CRIWAREDCA2E8D4(::System::IntPtr a1, ::System::String* a2, ::System::IntPtr a3, ::System::Int64 a4)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::String*, ::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREDCA2E8D4_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CRIWARE1E06F107(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Byte a4, ::System::Byte a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Int32 a12, ::System::Int32 a13, ::System::Int32 a14, ::CriWare::CriAtom_SpeakerMapping a15, ::System::Boolean a16, ::System::Single a17, ::System::Int32 a18, ::System::Int32 a19, ::System::Int32 a20, ::System::Int32 a21, ::System::Single a22, ::CriWare::CriAtomEx_SoundRendererType a23, ::System::Boolean a24, ::System::Boolean a25)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte, ::System::Byte, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::CriWare::CriAtom_SpeakerMapping, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::CriWare::CriAtomEx_SoundRendererType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE1E06F107_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25);
		}

		static ::System::Void CRIWARE0C534427(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE0C534427_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CRIWARE503D6EC0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE503D6EC0_OFFSET))(a1);
		}

		static ::System::Void CRIWARE0B886AF3(::System::Int64 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE0B886AF3_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWARE80CA213E(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE80CA213E_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWARE3B3A1489(::System::Boolean a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE3B3A1489_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CRIWAREAB4E051A(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREAB4E051A_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void CRIWARE874EDA5D()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE874EDA5D_OFFSET))();
		}

		static ::System::Boolean CRIWAREAEE98D7A()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREAEE98D7A_OFFSET))();
		}

		static ::System::Void CRIWARE380D96FC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE380D96FC_OFFSET))();
		}

		static ::System::Void CRIWARE43F8CB5E(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE43F8CB5E_OFFSET))(a1);
		}

		static ::System::UInt32 CRIWAREB2956D4E()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREB2956D4E_OFFSET))();
		}

		static ::System::Void CRIWARE041B62AF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE041B62AF_OFFSET))(a1);
		}

		static ::System::Void CRIWAREB59406BB(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREB59406BB_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWARE6C6D06F3(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE6C6D06F3_OFFSET))(a1);
		}

		static ::System::Void CRIWARE7ABCA0A2()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE7ABCA0A2_OFFSET))();
		}

		static ::System::Void CRIWAREE4D1D1E7(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREE4D1D1E7_OFFSET))(a1);
		}

		static ::System::Void CRIWAREF0082817()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREF0082817_OFFSET))();
		}

		static ::System::Void CRIWAREC5F8065D(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREC5F8065D_OFFSET))(a1);
		}

		static ::System::Void CRIWARE6B9656CC()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE6B9656CC_OFFSET))();
		}

		static ::System::Void CRIWARE10ED6C77(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE10ED6C77_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWARE813CFB49()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE813CFB49_OFFSET))();
		}

		static ::System::Void CRIWARE98DA093D()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE98DA093D_OFFSET))();
		}

		static ::System::Void CRIWARE65F3B261(::System::IntPtr a1, ::CriWare::CriAtomPlugin_CallbackFromNativeDelegate* a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomPlugin_CallbackFromNativeDelegate*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE65F3B261_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt16 CRIWAREBA22AA6A(::System::Int32 a1)
		{
			return ((::System::UInt16(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREBA22AA6A_OFFSET))(a1);
		}

		static ::System::Boolean CRIWARE36F4C206()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE36F4C206_OFFSET))();
		}

		static ::System::Int32 CRIWARE01A2ECB0()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE01A2ECB0_OFFSET))();
		}

		static ::System::Int32 CRIWAREB05B3403()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREB05B3403_OFFSET))();
		}
	};
}
