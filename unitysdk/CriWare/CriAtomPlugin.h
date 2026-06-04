#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/Common_CpuUsage.h"
#include "unitysdk/CriWare/CriAtomConfig_LinuxOutput.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtomConfig; }
namespace CriWare { class CriAtomPlugin_CallbackFromNativeDelegate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CRIWARE_CRIATOMPLUGIN_CALLBACKFROMNATIVE_OFFSET UNITYSDK_OFFSET(0x146B5D30)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE009CE561_OFFSET UNITYSDK_OFFSET(0x146B36A0)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE15B0037A_OFFSET UNITYSDK_OFFSET(0x146B5E70)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE15F30D07_OFFSET UNITYSDK_OFFSET(0x146B6010)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE237CA5E3_OFFSET UNITYSDK_OFFSET(0x146B3A80)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE2626EF5B_OFFSET UNITYSDK_OFFSET(0x146B4EC0)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE28E5ABA4_OFFSET UNITYSDK_OFFSET(0x146B5F10)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE2CFF30B7_OFFSET UNITYSDK_OFFSET(0x146B4130)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE2F034134_OFFSET UNITYSDK_OFFSET(0x146B3DF0)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE5B1C5B3B_OFFSET UNITYSDK_OFFSET(0x146B5A60)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE5BC8942D_OFFSET UNITYSDK_OFFSET(0x146B5C90)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE63E1F278_OFFSET UNITYSDK_OFFSET(0x146B5170)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE70981A20_OFFSET UNITYSDK_OFFSET(0x146B3F70)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE7581CF8C_OFFSET UNITYSDK_OFFSET(0x146B2E00)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE780E6ED2_OFFSET UNITYSDK_OFFSET(0x146B3BA0)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE797E0462_OFFSET UNITYSDK_OFFSET(0x146B6090)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE8384362B_OFFSET UNITYSDK_OFFSET(0x146B3950)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE88175F19_OFFSET UNITYSDK_OFFSET(0x146B5F90)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE98A6BE5C_OFFSET UNITYSDK_OFFSET(0x146B59D0)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREA703719E_OFFSET UNITYSDK_OFFSET(0x146B5D70)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREB64E0C3B_OFFSET UNITYSDK_OFFSET(0x146B5510)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREBF97E87F_OFFSET UNITYSDK_OFFSET(0x146B5DF0)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREC176B113_OFFSET UNITYSDK_OFFSET(0x146B5030)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREC54D0552_OFFSET UNITYSDK_OFFSET(0x146B6110)
#define CRIWARE_CRIATOMPLUGIN_CRIWARECCA1268B_OFFSET UNITYSDK_OFFSET(0x146B2CE0)
#define CRIWARE_CRIATOMPLUGIN_CRIWARED1FD92AA_OFFSET UNITYSDK_OFFSET(0x146B2BC0)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREE097EA6E_OFFSET UNITYSDK_OFFSET(0x146B6190)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREE320F01B_OFFSET UNITYSDK_OFFSET(0x146B58B0)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREE996B258_OFFSET UNITYSDK_OFFSET(0x146B3CC0)
#define CRIWARE_CRIATOMPLUGIN_DECRYPTACB_OFFSET UNITYSDK_OFFSET(0x146B5AE0)
#define CRIWARE_CRIATOMPLUGIN_EXECUTEQUEUEDBEATSYNCCALLBACKS_OFFSET UNITYSDK_OFFSET(0x146B2D60)
#define CRIWARE_CRIATOMPLUGIN_EXECUTEQUEUEDCUELINKCALLBACKS_OFFSET UNITYSDK_OFFSET(0x146B2B20)
#define CRIWARE_CRIATOMPLUGIN_EXECUTEQUEUEDEVENTCALLBACKS_OFFSET UNITYSDK_OFFSET(0x146B2C40)
#define CRIWARE_CRIATOMPLUGIN_FINALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x146B4860)
#define CRIWARE_CRIATOMPLUGIN_GETAUDIOEFFECTINTERFACELIST_OFFSET UNITYSDK_OFFSET(0x146B2E80)
#define CRIWARE_CRIATOMPLUGIN_GETCPUUSAGE_OFFSET UNITYSDK_OFFSET(0x146B5590)
#define CRIWARE_CRIATOMPLUGIN_GETLOOPCOUNTPARAMETERID_OFFSET UNITYSDK_OFFSET(0x146AD5A0)
#define CRIWARE_CRIATOMPLUGIN_GETOUTPUTCHANNELS_OFFSET UNITYSDK_OFFSET(0x146B5930)
#define CRIWARE_CRIATOMPLUGIN_GETOUTPUTSAMPLINGRATE_OFFSET UNITYSDK_OFFSET(0x146B5810)
#define CRIWARE_CRIATOMPLUGIN_GETREQUIREDMAXVIRTUALVOICES_OFFSET UNITYSDK_OFFSET(0x146B41B0)
#define CRIWARE_CRIATOMPLUGIN_GETSPATIALIZERCOREINTERFACEFROMATOMOCULUSAUDIOBRIDGE_OFFSET UNITYSDK_OFFSET(0x146B3030)
#define CRIWARE_CRIATOMPLUGIN_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x146B2AF0)
#define CRIWARE_CRIATOMPLUGIN_INITIALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x146B41F0)
#define CRIWARE_CRIATOMPLUGIN_ISINITIALIZEDFORPCMOUTPUT_OFFSET UNITYSDK_OFFSET(0x146B5A50)
#define CRIWARE_CRIATOMPLUGIN_ISLIBRARYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x146A6320)
#define CRIWARE_CRIATOMPLUGIN_LOG_OFFSET UNITYSDK_OFFSET(0x146B2AE0)
#define CRIWARE_CRIATOMPLUGIN_PAUSE_OFFSET UNITYSDK_OFFSET(0x146B5430)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_ANDROID_OFFSET UNITYSDK_OFFSET(0x146B3E80)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_EDITOR_OFFSET UNITYSDK_OFFSET(0x146B39E0)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_IOS_OFFSET UNITYSDK_OFFSET(0x146B3D40)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_LINUX_OFFSET UNITYSDK_OFFSET(0x146B3C20)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PC_OFFSET UNITYSDK_OFFSET(0x146B3B00)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PS4_OFFSET UNITYSDK_OFFSET(0x146B4050)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PS5_OFFSET UNITYSDK_OFFSET(0x146B4060)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_SWITCH_OFFSET UNITYSDK_OFFSET(0x146B4070)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_VITA_OFFSET UNITYSDK_OFFSET(0x146B4040)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_WEBGL_OFFSET UNITYSDK_OFFSET(0x146B4080)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGMONITORPARAMETES_OFFSET UNITYSDK_OFFSET(0x146B38A0)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x146B3440)
#define CRIWARE_CRIATOMPLUGIN_SETMAXSAMPLINGRATEFORSTANDARDVOICEPOOL_OFFSET UNITYSDK_OFFSET(0x146B4090)
#define CRIWARE_CRIATOMPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x146B6210)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomPlugin_TypeDefinitionIndex = 36975;

	class CriAtomPlugin : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::IntPtr>** StaticGet_effectInterfaceList()
		{
			return (::System::Collections::Generic::List_1<::System::IntPtr>**)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x7400);
		}
		static ::System::Boolean* StaticGet_isConfigured()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x3540);
		}
		static ::System::UInt16* StaticGet_CRIATOMPARAMETER2_ID_INVALID()
		{
			return (::System::UInt16*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x3542);
		}
		static ::System::Int32* StaticGet_CRIATOMUNITY_PARAMETER_ID_LOOP_COUNT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x3544);
		}
		static ::System::Int32* StaticGet_initializationCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x3548);
		}
		static ::System::Single* StaticGet_timeSinceStartup()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x354C);
		}
		static ::CriWare::Common_CpuUsage* StaticGet_cpuUsage()
		{
			return (::CriWare::Common_CpuUsage*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x3550);
		}
		static ::System::UInt64* StaticGet_temporalStorage()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x3560);
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

		static ::System::IntPtr GetSpatializerCoreInterfaceFromAtomOculusAudioBridge()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_GETSPATIALIZERCOREINTERFACEFROMATOMOCULUSAUDIOBRIDGE_OFFSET))();
		}

		static ::System::Void SetConfigParameters(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Int32 a12, ::System::Int32 a13, ::System::Int32 a14, ::System::Boolean a15, ::System::Single a16, ::System::Int32 a17, ::System::Int32 a18, ::System::Int32 a19, ::System::Int32 a20, ::System::Boolean a21)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGPARAMETERS_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21);
		}

		static ::System::Void SetConfigMonitorParametes(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGMONITORPARAMETES_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetConfigAdditionalParameters_EDITOR(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_EDITOR_OFFSET))(a1, a2);
		}

		static ::System::Void SetConfigAdditionalParameters_PC(::System::Int64 a1)
		{
			return ((::System::Void(*)(::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PC_OFFSET))(a1);
		}

		static ::System::Void SetConfigAdditionalParameters_LINUX(::CriWare::CriAtomConfig_LinuxOutput a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::CriWare::CriAtomConfig_LinuxOutput, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_LINUX_OFFSET))(a1, a2);
		}

		static ::System::Void SetConfigAdditionalParameters_IOS(::System::Boolean a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_IOS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetConfigAdditionalParameters_ANDROID(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_ANDROID_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void SetConfigAdditionalParameters_VITA(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_VITA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetConfigAdditionalParameters_PS4(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PS4_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void SetConfigAdditionalParameters_PS5(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PS5_OFFSET))(a1, a2);
		}

		static ::System::Void SetConfigAdditionalParameters_SWITCH(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_SWITCH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SetConfigAdditionalParameters_WEBGL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_WEBGL_OFFSET))(a1);
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

		static ::System::Void DecryptAcb(::System::IntPtr a1, ::System::UInt64 a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_DECRYPTACB_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt64 CallbackFromNative(::System::IntPtr a1)
		{
			return ((::System::UInt64(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CALLBACKFROMNATIVE_OFFSET))(a1);
		}

		static ::System::Void CRIWARE009CE561(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Int32 a12, ::System::Int32 a13, ::System::Int32 a14, ::System::Boolean a15, ::System::Single a16, ::System::Int32 a17, ::System::Int32 a18, ::System::Int32 a19, ::System::Int32 a20, ::System::Boolean a21, ::System::IntPtr a22)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE009CE561_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22);
		}

		static ::System::Void CRIWARE8384362B(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE8384362B_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CRIWARE237CA5E3(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE237CA5E3_OFFSET))(a1);
		}

		static ::System::Void CRIWARE780E6ED2(::System::Int64 a1)
		{
			return ((::System::Void(*)(::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE780E6ED2_OFFSET))(a1);
		}

		static ::System::Void CRIWAREE996B258(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREE996B258_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWARE2F034134(::System::Boolean a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE2F034134_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CRIWARE70981A20(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE70981A20_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void CRIWARE2626EF5B()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE2626EF5B_OFFSET))();
		}

		static ::System::Boolean CRIWAREC176B113()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREC176B113_OFFSET))();
		}

		static ::System::Void CRIWARE63E1F278()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE63E1F278_OFFSET))();
		}

		static ::System::Void CRIWAREB64E0C3B(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREB64E0C3B_OFFSET))(a1);
		}

		static ::System::UInt32 CRIWAREA703719E()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREA703719E_OFFSET))();
		}

		static ::System::Void CRIWAREBF97E87F(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREBF97E87F_OFFSET))(a1);
		}

		static ::System::Void CRIWARE15B0037A(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE15B0037A_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWARE28E5ABA4(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE28E5ABA4_OFFSET))(a1);
		}

		static ::System::Void CRIWARECCA1268B()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARECCA1268B_OFFSET))();
		}

		static ::System::Void CRIWARE88175F19(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE88175F19_OFFSET))(a1);
		}

		static ::System::Void CRIWARE7581CF8C()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE7581CF8C_OFFSET))();
		}

		static ::System::Void CRIWARE15F30D07(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE15F30D07_OFFSET))(a1);
		}

		static ::System::Void CRIWARED1FD92AA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARED1FD92AA_OFFSET))();
		}

		static ::System::Void CRIWARE2CFF30B7(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE2CFF30B7_OFFSET))(a1, a2);
		}

		static ::System::Void CRIWARE797E0462()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE797E0462_OFFSET))();
		}

		static ::System::Void CRIWAREC54D0552()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREC54D0552_OFFSET))();
		}

		static ::System::Void CRIWARE5BC8942D(::System::IntPtr a1, ::CriWare::CriAtomPlugin_CallbackFromNativeDelegate* a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::CriWare::CriAtomPlugin_CallbackFromNativeDelegate*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE5BC8942D_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt16 CRIWARE5B1C5B3B(::System::Int32 a1)
		{
			return ((::System::UInt16(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE5B1C5B3B_OFFSET))(a1);
		}

		static ::System::Boolean CRIWAREE097EA6E()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREE097EA6E_OFFSET))();
		}

		static ::System::Int32 CRIWAREE320F01B()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREE320F01B_OFFSET))();
		}

		static ::System::Int32 CRIWARE98A6BE5C()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE98A6BE5C_OFFSET))();
		}
	};
}
