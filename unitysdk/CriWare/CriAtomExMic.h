#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExMic_Config.h"
#include "unitysdk/CriWare/CriAtomExMic_DeviceInfo.h"
#include "unitysdk/CriWare/CriDisposable.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"

namespace CriWare { class CriAtomExMic_Effect; }
namespace CriWare { class CriAudioReadStream; }
namespace CriWare { class CriAudioWriteStream; }
namespace System { class String; }

#define CRIWARE_CRIATOMEXMIC_ATTACHEFFECT_OFFSET UNITYSDK_OFFSET(0x146A1730)
#define CRIWARE_CRIATOMEXMIC_CREATE_OFFSET UNITYSDK_OFFSET(0x146A0020)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMICUNITY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1469F6E0)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMICUNITY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1469F4D0)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_ATTACHEFFECT_OFFSET UNITYSDK_OFFSET(0x146A18C0)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_CALCULATEWORKSIZEFOREFFECT_OFFSET UNITYSDK_OFFSET(0x146A2090)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_CREATE_OFFSET UNITYSDK_OFFSET(0x146A0310)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_DESTROY_OFFSET UNITYSDK_OFFSET(0x146A0790)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_DETACHEFFECT_OFFSET UNITYSDK_OFFSET(0x146A1AB0)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETDEFAULTDEVICE_OFFSET UNITYSDK_OFFSET(0x1469FDC0)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETDEVICE_OFFSET UNITYSDK_OFFSET(0x1469FA70)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETEFFECTINSTANCE_OFFSET UNITYSDK_OFFSET(0x146A1980)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETEFFECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x146A1D20)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETNUMBUFFEREDSAMPLES_OFFSET UNITYSDK_OFFSET(0x146A0C10)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETNUMCHANNELS_OFFSET UNITYSDK_OFFSET(0x146A0A10)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETNUMDEVICES_OFFSET UNITYSDK_OFFSET(0x1469F9F0)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETOUTPUTREADSTREAM_OFFSET UNITYSDK_OFFSET(0x146A16B0)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETSAMPLINGRATE_OFFSET UNITYSDK_OFFSET(0x146A0B10)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x146A0DA0)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_ISFORMATSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1469FF70)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_READDATA_OFFSET UNITYSDK_OFFSET(0x146A1FF0)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_SETEFFECTBYPASS_OFFSET UNITYSDK_OFFSET(0x146A1E50)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_SETEFFECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x146A1BE0)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_SETOUTPUTWRITESTREAM_OFFSET UNITYSDK_OFFSET(0x146A1550)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_START_OFFSET UNITYSDK_OFFSET(0x146A0890)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_STOP_OFFSET UNITYSDK_OFFSET(0x146A0990)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_UPDATEEFFECTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x146A1F70)
#define CRIWARE_CRIATOMEXMIC_DETACHEFFECT_OFFSET UNITYSDK_OFFSET(0x146A1A20)
#define CRIWARE_CRIATOMEXMIC_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x146A06E0)
#define CRIWARE_CRIATOMEXMIC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x146A05D0)
#define CRIWARE_CRIATOMEXMIC_FINALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x1469F550)
#define CRIWARE_CRIATOMEXMIC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x146A0560)
#define CRIWARE_CRIATOMEXMIC_GETDEFAULTDEVICE_OFFSET UNITYSDK_OFFSET(0x1469FBF0)
#define CRIWARE_CRIATOMEXMIC_GETDEVICES_OFFSET UNITYSDK_OFFSET(0x1469F770)
#define CRIWARE_CRIATOMEXMIC_GETEFFECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x146A1C80)
#define CRIWARE_CRIATOMEXMIC_GETNUMBUFFEREDSAMPLES_OFFSET UNITYSDK_OFFSET(0x146A0B90)
#define CRIWARE_CRIATOMEXMIC_GETNUMBUFFERREDSAMPLES_OFFSET UNITYSDK_OFFSET(0x146A0C90)
#define CRIWARE_CRIATOMEXMIC_GETNUMCHANNELS_OFFSET UNITYSDK_OFFSET(0x146A04E0)
#define CRIWARE_CRIATOMEXMIC_GETNUMDEVICES_OFFSET UNITYSDK_OFFSET(0x1469FB70)
#define CRIWARE_CRIATOMEXMIC_GETOUTPUTREADSTREAM_OFFSET UNITYSDK_OFFSET(0x146A15E0)
#define CRIWARE_CRIATOMEXMIC_GETSAMPLINGRATE_OFFSET UNITYSDK_OFFSET(0x146A0A90)
#define CRIWARE_CRIATOMEXMIC_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1469F360)
#define CRIWARE_CRIATOMEXMIC_INITIALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x1469F380)
#define CRIWARE_CRIATOMEXMIC_INTERNALCLEARBUFFERS_OFFSET UNITYSDK_OFFSET(0x146A0FE0)
#define CRIWARE_CRIATOMEXMIC_INTERNALREADDATAFROMBUFFERPOINTERS_OFFSET UNITYSDK_OFFSET(0x146A0F40)
#define CRIWARE_CRIATOMEXMIC_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x146A0D10)
#define CRIWARE_CRIATOMEXMIC_ISFORMATSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1469FEC0)
#define CRIWARE_CRIATOMEXMIC_READDATA_1_OFFSET UNITYSDK_OFFSET(0x146A0E40)
#define CRIWARE_CRIATOMEXMIC_READDATA_2_OFFSET UNITYSDK_OFFSET(0x146A10A0)
#define CRIWARE_CRIATOMEXMIC_READDATA_3_OFFSET UNITYSDK_OFFSET(0x146A10C0)
#define CRIWARE_CRIATOMEXMIC_READDATA_4_OFFSET UNITYSDK_OFFSET(0x146A1280)
#define CRIWARE_CRIATOMEXMIC_READDATA_5_OFFSET UNITYSDK_OFFSET(0x146A12D0)
#define CRIWARE_CRIATOMEXMIC_READDATA_OFFSET UNITYSDK_OFFSET(0x146A0E20)
#define CRIWARE_CRIATOMEXMIC_SETEFFECTBYPASS_OFFSET UNITYSDK_OFFSET(0x146A1DB0)
#define CRIWARE_CRIATOMEXMIC_SETEFFECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x146A1B30)
#define CRIWARE_CRIATOMEXMIC_SETOUTPUTWRITESTREAM_OFFSET UNITYSDK_OFFSET(0x146A1450)
#define CRIWARE_CRIATOMEXMIC_SETUPOUTPUTCATEGORYFORMIC_IOS_OFFSET UNITYSDK_OFFSET(0x1469F760)
#define CRIWARE_CRIATOMEXMIC_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1469F370)
#define CRIWARE_CRIATOMEXMIC_START_OFFSET UNITYSDK_OFFSET(0x146A0810)
#define CRIWARE_CRIATOMEXMIC_STOP_OFFSET UNITYSDK_OFFSET(0x146A0910)
#define CRIWARE_CRIATOMEXMIC_UPDATEEFFECTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x146A1EE0)
#define CRIWARE_CRIATOMEXMIC__CTOR_OFFSET UNITYSDK_OFFSET(0x146A03D0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExMic_TypeDefinitionIndex = 37090;

	class CriAtomExMic : public ::CriWare::CriDisposable
	{
	public:
		static ::System::Boolean* StaticGet__isInitialized_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriAtomExMic_TypeDefinitionIndex)->GetStaticField(0x3450);
		}
		static ::System::Int32* StaticGet__initializationCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriAtomExMic_TypeDefinitionIndex)->GetStaticField(0x3454);
		}
		// static const ::System::String* errorInvalidHandle; // 0x0
		// static const ::System::String* errorInvalidBufferLength; // 0x0
		// static const ::System::String* errorInvalidNumBuffers; // 0x0
		// static const ::System::String* errorAlreadyInitialized; // 0x0
		// static const ::System::String* errorNotInitialized; // 0x0
		::Il2CppArray<::System::Runtime::InteropServices::GCHandle>* gcHandles; // 0x20
		::Il2CppArray<::System::IntPtr>* bufferPointers; // 0x28
		::CriWare::CriAudioWriteStream* outputWriteStream; // 0x30
		::System::IntPtr handle; // 0x38

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC__CTOR_OFFSET))(this, a1);
		}

		static ::System::Boolean get_isInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_GET_ISINITIALIZED_OFFSET))();
		}

		static ::System::Void set_isInitialized(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_SET_ISINITIALIZED_OFFSET))(a1);
		}

		static ::System::Void InitializeModule()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_INITIALIZEMODULE_OFFSET))();
		}

		static ::System::Void FinalizeModule()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_FINALIZEMODULE_OFFSET))();
		}

		static ::System::Void SetupOutputCategoryForMic_IOS(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_SETUPOUTPUTCATEGORYFORMIC_IOS_OFFSET))(a1);
		}

		static ::Il2CppArray<::CriWare::CriAtomExMic_DeviceInfo>* GetDevices()
		{
			return ((::Il2CppArray<::CriWare::CriAtomExMic_DeviceInfo>*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_GETDEVICES_OFFSET))();
		}

		static ::System::Int32 GetNumDevices()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_GETNUMDEVICES_OFFSET))();
		}

		static ::System::Nullable_1<::CriWare::CriAtomExMic_DeviceInfo> GetDefaultDevice()
		{
			return ((::System::Nullable_1<::CriWare::CriAtomExMic_DeviceInfo>(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_GETDEFAULTDEVICE_OFFSET))();
		}

		static ::System::Boolean IsFormatSupported(::CriWare::CriAtomExMic_Config a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExMic_Config))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_ISFORMATSUPPORTED_OFFSET))(a1);
		}

		static ::CriWare::CriAtomExMic* Create(::System::Nullable_1<::CriWare::CriAtomExMic_Config> a1)
		{
			return ((::CriWare::CriAtomExMic*(*)(::System::Nullable_1<::CriWare::CriAtomExMic_Config>))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CREATE_OFFSET))(a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_STOP_OFFSET))(this);
		}

		::System::Int32 GetNumChannels()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_GETNUMCHANNELS_OFFSET))(this);
		}

		::System::Int32 GetSamplingRate()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_GETSAMPLINGRATE_OFFSET))(this);
		}

		::System::UInt32 GetNumBufferedSamples()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_GETNUMBUFFEREDSAMPLES_OFFSET))(this);
		}

		::System::UInt32 GetNumBufferredSamples()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_GETNUMBUFFERREDSAMPLES_OFFSET))(this);
		}

		::System::Boolean IsAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_ISAVAILABLE_OFFSET))(this);
		}

		::System::UInt32 ReadData(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_READDATA_OFFSET))(this, a1);
		}

		::System::UInt32 ReadData_1(::Il2CppArray<::System::Single>* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_READDATA_1_OFFSET))(this, a1, a2);
		}

		::System::UInt32 ReadData_2(::Il2CppArray<::System::Single>* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_READDATA_2_OFFSET))(this, a1, a2);
		}

		::System::UInt32 ReadData_3(::Il2CppArray<::System::Single>* a1, ::Il2CppArray<::System::Single>* a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_READDATA_3_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 ReadData_4(::Il2CppArray<::Il2CppArray<::System::Single>*>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::Il2CppArray<::System::Single>*>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_READDATA_4_OFFSET))(this, a1);
		}

		::System::UInt32 ReadData_5(::Il2CppArray<::Il2CppArray<::System::Single>*>* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::Il2CppArray<::System::Single>*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_READDATA_5_OFFSET))(this, a1, a2);
		}

		::System::Void SetOutputWriteStream(::CriWare::CriAudioWriteStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAudioWriteStream*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_SETOUTPUTWRITESTREAM_OFFSET))(this, a1);
		}

		::CriWare::CriAudioReadStream* GetOutputReadStream()
		{
			return ((::CriWare::CriAudioReadStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_GETOUTPUTREADSTREAM_OFFSET))(this);
		}

		::CriWare::CriAtomExMic_Effect* AttachEffect(::System::IntPtr a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::CriWare::CriAtomExMic_Effect*(*)(::PVOID, ::System::IntPtr, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_ATTACHEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void DetachEffect(::CriWare::CriAtomExMic_Effect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExMic_Effect*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_DETACHEFFECT_OFFSET))(this, a1);
		}

		::System::Void SetEffectParameter(::CriWare::CriAtomExMic_Effect* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExMic_Effect*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_SETEFFECTPARAMETER_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetEffectParameter(::CriWare::CriAtomExMic_Effect* a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::CriWare::CriAtomExMic_Effect*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_GETEFFECTPARAMETER_OFFSET))(this, a1, a2);
		}

		::System::Void SetEffectBypass(::CriWare::CriAtomExMic_Effect* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExMic_Effect*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_SETEFFECTBYPASS_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateEffectParameters(::CriWare::CriAtomExMic_Effect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExMic_Effect*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_UPDATEEFFECTPARAMETERS_OFFSET))(this, a1);
		}

		::System::UInt32 InternalReadDataFromBufferPointers(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_INTERNALREADDATAFROMBUFFERPOINTERS_OFFSET))(this, a1);
		}

		::System::Void InternalClearBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_INTERNALCLEARBUFFERS_OFFSET))(this);
		}

		static ::System::Void criAtomMicUnity_Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMICUNITY_INITIALIZE_OFFSET))();
		}

		static ::System::Void criAtomMicUnity_Finalize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMICUNITY_FINALIZE_OFFSET))();
		}

		static ::System::Int32 criAtomMic_GetNumDevices()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETNUMDEVICES_OFFSET))();
		}

		static ::System::Boolean criAtomMic_GetDevice(::System::Int32 a1, ::CriWare::CriAtomExMic_DeviceInfo& a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::CriWare::CriAtomExMic_DeviceInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETDEVICE_OFFSET))(a1, a2);
		}

		static ::System::Boolean criAtomMic_GetDefaultDevice(::CriWare::CriAtomExMic_DeviceInfo& a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExMic_DeviceInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETDEFAULTDEVICE_OFFSET))(a1);
		}

		static ::System::Boolean criAtomMic_IsFormatSupported(::CriWare::CriAtomExMic_Config& a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExMic_Config&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_ISFORMATSUPPORTED_OFFSET))(a1);
		}

		static ::System::IntPtr criAtomMic_Create(::CriWare::CriAtomExMic_Config& a1, ::System::IntPtr a2, ::System::Int32 a3)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExMic_Config&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomMic_Destroy(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_DESTROY_OFFSET))(a1);
		}

		static ::System::Void criAtomMic_Start(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_START_OFFSET))(a1);
		}

		static ::System::Void criAtomMic_Stop(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_STOP_OFFSET))(a1);
		}

		static ::System::Int32 criAtomMic_GetNumChannels(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETNUMCHANNELS_OFFSET))(a1);
		}

		static ::System::Int32 criAtomMic_GetSamplingRate(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETSAMPLINGRATE_OFFSET))(a1);
		}

		static ::System::UInt32 criAtomMic_GetNumBufferedSamples(::System::IntPtr a1)
		{
			return ((::System::UInt32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETNUMBUFFEREDSAMPLES_OFFSET))(a1);
		}

		static ::System::Boolean criAtomMic_IsAvailable(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_ISAVAILABLE_OFFSET))(a1);
		}

		static ::System::UInt32 criAtomMic_ReadData(::System::IntPtr a1, ::Il2CppArray<::System::IntPtr>* a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::Il2CppArray<::System::IntPtr>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_READDATA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomMic_SetOutputWriteStream(::System::IntPtr a1, ::System::IntPtr a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_SETOUTPUTWRITESTREAM_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr criAtomMic_GetOutputReadStream()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETOUTPUTREADSTREAM_OFFSET))();
		}

		static ::System::Int32 criAtomMic_CalculateWorkSizeForEffect(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::System::Single>* a3, ::System::UInt32 a4)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::System::Single>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_CALCULATEWORKSIZEFOREFFECT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::IntPtr criAtomMic_AttachEffect(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::System::Single>* a3, ::System::UInt32 a4, ::System::IntPtr a5, ::System::Int32 a6)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::System::Single>*, ::System::UInt32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_ATTACHEFFECT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void criAtomMic_DetachEffect(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_DETACHEFFECT_OFFSET))(a1, a2);
		}

		static ::System::IntPtr criAtomMic_GetEffectInstance(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETEFFECTINSTANCE_OFFSET))(a1, a2);
		}

		static ::System::Void criAtomMic_SetEffectBypass(::System::IntPtr a1, ::System::IntPtr a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_SETEFFECTBYPASS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomMic_SetEffectParameter(::System::IntPtr a1, ::System::IntPtr a2, ::System::UInt32 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_SETEFFECTPARAMETER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single criAtomMic_GetEffectParameter(::System::IntPtr a1, ::System::IntPtr a2, ::System::UInt32 a3)
		{
			return ((::System::Single(*)(::System::IntPtr, ::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETEFFECTPARAMETER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void criAtomMic_UpdateEffectParameters(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_UPDATEEFFECTPARAMETERS_OFFSET))(a1, a2);
		}
	};
}
