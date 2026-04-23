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

#define CRIWARE_CRIATOMEXMIC_ATTACHEFFECT_OFFSET UNITYSDK_OFFSET(0x12BE3F80)
#define CRIWARE_CRIATOMEXMIC_CREATE_OFFSET UNITYSDK_OFFSET(0x12BE27B0)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMICUNITY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x12BE1E10)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMICUNITY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x12BE1B90)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_ATTACHEFFECT_OFFSET UNITYSDK_OFFSET(0x12BE4110)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_CALCULATEWORKSIZEFOREFFECT_OFFSET UNITYSDK_OFFSET(0x12BE48E0)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_CREATE_OFFSET UNITYSDK_OFFSET(0x12BE2AC0)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_DESTROY_OFFSET UNITYSDK_OFFSET(0x12BE2F20)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_DETACHEFFECT_OFFSET UNITYSDK_OFFSET(0x12BE4300)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETDEFAULTDEVICE_OFFSET UNITYSDK_OFFSET(0x12BE2550)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETDEVICE_OFFSET UNITYSDK_OFFSET(0x12BE21D0)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETEFFECTINSTANCE_OFFSET UNITYSDK_OFFSET(0x12BE41D0)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETEFFECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x12BE4570)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETNUMBUFFEREDSAMPLES_OFFSET UNITYSDK_OFFSET(0x12BE33A0)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETNUMCHANNELS_OFFSET UNITYSDK_OFFSET(0x12BE31A0)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETNUMDEVICES_OFFSET UNITYSDK_OFFSET(0x12BE2150)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETOUTPUTREADSTREAM_OFFSET UNITYSDK_OFFSET(0x12BE3F00)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETSAMPLINGRATE_OFFSET UNITYSDK_OFFSET(0x12BE32A0)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x12BE3530)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_ISFORMATSUPPORTED_OFFSET UNITYSDK_OFFSET(0x12BE2700)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_READDATA_OFFSET UNITYSDK_OFFSET(0x12BE4840)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_SETEFFECTBYPASS_OFFSET UNITYSDK_OFFSET(0x12BE46A0)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_SETEFFECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x12BE4430)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_SETOUTPUTWRITESTREAM_OFFSET UNITYSDK_OFFSET(0x12BE3DA0)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_START_OFFSET UNITYSDK_OFFSET(0x12BE3020)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_STOP_OFFSET UNITYSDK_OFFSET(0x12BE3120)
#define CRIWARE_CRIATOMEXMIC_CRIATOMMIC_UPDATEEFFECTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x12BE47C0)
#define CRIWARE_CRIATOMEXMIC_DETACHEFFECT_OFFSET UNITYSDK_OFFSET(0x12BE4270)
#define CRIWARE_CRIATOMEXMIC_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x12BE2E70)
#define CRIWARE_CRIATOMEXMIC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12BE2D80)
#define CRIWARE_CRIATOMEXMIC_FINALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x12BE1C10)
#define CRIWARE_CRIATOMEXMIC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x12BE2D10)
#define CRIWARE_CRIATOMEXMIC_GETDEFAULTDEVICE_OFFSET UNITYSDK_OFFSET(0x12BE2350)
#define CRIWARE_CRIATOMEXMIC_GETDEVICES_OFFSET UNITYSDK_OFFSET(0x12BE1EA0)
#define CRIWARE_CRIATOMEXMIC_GETEFFECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x12BE44D0)
#define CRIWARE_CRIATOMEXMIC_GETNUMBUFFEREDSAMPLES_OFFSET UNITYSDK_OFFSET(0x12BE3320)
#define CRIWARE_CRIATOMEXMIC_GETNUMBUFFERREDSAMPLES_OFFSET UNITYSDK_OFFSET(0x12BE3420)
#define CRIWARE_CRIATOMEXMIC_GETNUMCHANNELS_OFFSET UNITYSDK_OFFSET(0x12BE2C90)
#define CRIWARE_CRIATOMEXMIC_GETNUMDEVICES_OFFSET UNITYSDK_OFFSET(0x12BE22D0)
#define CRIWARE_CRIATOMEXMIC_GETOUTPUTREADSTREAM_OFFSET UNITYSDK_OFFSET(0x12BE3E30)
#define CRIWARE_CRIATOMEXMIC_GETSAMPLINGRATE_OFFSET UNITYSDK_OFFSET(0x12BE3220)
#define CRIWARE_CRIATOMEXMIC_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x12BE19A0)
#define CRIWARE_CRIATOMEXMIC_INITIALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x12BE1A10)
#define CRIWARE_CRIATOMEXMIC_INTERNALCLEARBUFFERS_OFFSET UNITYSDK_OFFSET(0x12BE3780)
#define CRIWARE_CRIATOMEXMIC_INTERNALREADDATAFROMBUFFERPOINTERS_OFFSET UNITYSDK_OFFSET(0x12BE36E0)
#define CRIWARE_CRIATOMEXMIC_ISAVAILABLE_OFFSET UNITYSDK_OFFSET(0x12BE34A0)
#define CRIWARE_CRIATOMEXMIC_ISFORMATSUPPORTED_OFFSET UNITYSDK_OFFSET(0x12BE2650)
#define CRIWARE_CRIATOMEXMIC_READDATA_1_OFFSET UNITYSDK_OFFSET(0x12BE35D0)
#define CRIWARE_CRIATOMEXMIC_READDATA_2_OFFSET UNITYSDK_OFFSET(0x12BE3860)
#define CRIWARE_CRIATOMEXMIC_READDATA_3_OFFSET UNITYSDK_OFFSET(0x12BE3880)
#define CRIWARE_CRIATOMEXMIC_READDATA_4_OFFSET UNITYSDK_OFFSET(0x12BE3A90)
#define CRIWARE_CRIATOMEXMIC_READDATA_5_OFFSET UNITYSDK_OFFSET(0x12BE3AE0)
#define CRIWARE_CRIATOMEXMIC_READDATA_OFFSET UNITYSDK_OFFSET(0x12BE35B0)
#define CRIWARE_CRIATOMEXMIC_SETEFFECTBYPASS_OFFSET UNITYSDK_OFFSET(0x12BE4600)
#define CRIWARE_CRIATOMEXMIC_SETEFFECTPARAMETER_OFFSET UNITYSDK_OFFSET(0x12BE4380)
#define CRIWARE_CRIATOMEXMIC_SETOUTPUTWRITESTREAM_OFFSET UNITYSDK_OFFSET(0x12BE3CA0)
#define CRIWARE_CRIATOMEXMIC_SETUPOUTPUTCATEGORYFORMIC_IOS_OFFSET UNITYSDK_OFFSET(0x12BE1E90)
#define CRIWARE_CRIATOMEXMIC_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x12BE19E0)
#define CRIWARE_CRIATOMEXMIC_START_OFFSET UNITYSDK_OFFSET(0x12BE2FA0)
#define CRIWARE_CRIATOMEXMIC_STOP_OFFSET UNITYSDK_OFFSET(0x12BE30A0)
#define CRIWARE_CRIATOMEXMIC_UPDATEEFFECTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x12BE4730)
#define CRIWARE_CRIATOMEXMIC__CTOR_OFFSET UNITYSDK_OFFSET(0x12BE2B80)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExMic_TypeDefinitionIndex = 36790;

	class CriAtomExMic : public ::CriWare::CriDisposable
	{
	public:
		static ::System::Int32* StaticGet__initializationCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriAtomExMic_TypeDefinitionIndex)->GetStaticField(0x43C0);
		}
		static ::System::Boolean* StaticGet__isInitialized_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriAtomExMic_TypeDefinitionIndex)->GetStaticField(0x43C4);
		}
		// static const ::System::String* errorInvalidHandle; // 0x0
		// static const ::System::String* errorInvalidBufferLength; // 0x0
		// static const ::System::String* errorInvalidNumBuffers; // 0x0
		// static const ::System::String* errorAlreadyInitialized; // 0x0
		// static const ::System::String* errorNotInitialized; // 0x0
		::CriWare::CriAudioWriteStream* outputWriteStream; // 0x20
		::Il2CppArray<::System::IntPtr>* bufferPointers; // 0x28
		::Il2CppArray<::System::Runtime::InteropServices::GCHandle>* gcHandles; // 0x30
		::System::IntPtr handle; // 0x38

		::System::Void _ctor(::System::IntPtr handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC__CTOR_OFFSET))(this, handle);
		}

		static ::System::Boolean get_isInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_GET_ISINITIALIZED_OFFSET))();
		}

		static ::System::Void set_isInitialized(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_SET_ISINITIALIZED_OFFSET))(value);
		}

		static ::System::Void InitializeModule()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_INITIALIZEMODULE_OFFSET))();
		}

		static ::System::Void FinalizeModule()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_FINALIZEMODULE_OFFSET))();
		}

		static ::System::Void SetupOutputCategoryForMic_IOS(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_SETUPOUTPUTCATEGORYFORMIC_IOS_OFFSET))(enable);
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

		static ::System::Boolean IsFormatSupported(::CriWare::CriAtomExMic_Config config)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExMic_Config))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_ISFORMATSUPPORTED_OFFSET))(config);
		}

		static ::CriWare::CriAtomExMic* Create(::System::Nullable_1<::CriWare::CriAtomExMic_Config> config)
		{
			return ((::CriWare::CriAtomExMic*(*)(::System::Nullable_1<::CriWare::CriAtomExMic_Config>))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CREATE_OFFSET))(config);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_DISPOSE_1_OFFSET))(this, disposing);
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

		::System::UInt32 ReadData(::Il2CppArray<::System::Single>* bufferMono)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_READDATA_OFFSET))(this, bufferMono);
		}

		::System::UInt32 ReadData_1(::Il2CppArray<::System::Single>* bufferMono, ::System::UInt32 numToRead)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_READDATA_1_OFFSET))(this, bufferMono, numToRead);
		}

		::System::UInt32 ReadData_2(::Il2CppArray<::System::Single>* bufferL, ::Il2CppArray<::System::Single>* bufferR)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_READDATA_2_OFFSET))(this, bufferL, bufferR);
		}

		::System::UInt32 ReadData_3(::Il2CppArray<::System::Single>* bufferL, ::Il2CppArray<::System::Single>* bufferR, ::System::UInt32 numToRead)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_READDATA_3_OFFSET))(this, bufferL, bufferR, numToRead);
		}

		::System::UInt32 ReadData_4(::Il2CppArray<::Il2CppArray<::System::Single>*>* buffers)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::Il2CppArray<::System::Single>*>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_READDATA_4_OFFSET))(this, buffers);
		}

		::System::UInt32 ReadData_5(::Il2CppArray<::Il2CppArray<::System::Single>*>* buffers, ::System::UInt32 numToRead)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::Il2CppArray<::System::Single>*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_READDATA_5_OFFSET))(this, buffers, numToRead);
		}

		::System::Void SetOutputWriteStream(::CriWare::CriAudioWriteStream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAudioWriteStream*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_SETOUTPUTWRITESTREAM_OFFSET))(this, stream);
		}

		::CriWare::CriAudioReadStream* GetOutputReadStream()
		{
			return ((::CriWare::CriAudioReadStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_GETOUTPUTREADSTREAM_OFFSET))(this);
		}

		::CriWare::CriAtomExMic_Effect* AttachEffect(::System::IntPtr afxInterface, ::Il2CppArray<::System::Single>* configParameters)
		{
			return ((::CriWare::CriAtomExMic_Effect*(*)(::PVOID, ::System::IntPtr, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_ATTACHEFFECT_OFFSET))(this, afxInterface, configParameters);
		}

		::System::Void DetachEffect(::CriWare::CriAtomExMic_Effect* effect)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExMic_Effect*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_DETACHEFFECT_OFFSET))(this, effect);
		}

		::System::Void SetEffectParameter(::CriWare::CriAtomExMic_Effect* effect, ::System::Int32 parameterIndex, ::System::Single parameterValue)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExMic_Effect*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_SETEFFECTPARAMETER_OFFSET))(this, effect, parameterIndex, parameterValue);
		}

		::System::Single GetEffectParameter(::CriWare::CriAtomExMic_Effect* effect, ::System::Int32 parameterIndex)
		{
			return ((::System::Single(*)(::PVOID, ::CriWare::CriAtomExMic_Effect*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_GETEFFECTPARAMETER_OFFSET))(this, effect, parameterIndex);
		}

		::System::Void SetEffectBypass(::CriWare::CriAtomExMic_Effect* effect, ::System::Boolean bypass)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExMic_Effect*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_SETEFFECTBYPASS_OFFSET))(this, effect, bypass);
		}

		::System::Void UpdateEffectParameters(::CriWare::CriAtomExMic_Effect* effect)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomExMic_Effect*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_UPDATEEFFECTPARAMETERS_OFFSET))(this, effect);
		}

		::System::UInt32 InternalReadDataFromBufferPointers(::System::UInt32 numToRead)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_INTERNALREADDATAFROMBUFFERPOINTERS_OFFSET))(this, numToRead);
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

		static ::System::Boolean criAtomMic_GetDevice(::System::Int32 index, ::CriWare::CriAtomExMic_DeviceInfo& info)
		{
			return ((::System::Boolean(*)(::System::Int32, ::CriWare::CriAtomExMic_DeviceInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETDEVICE_OFFSET))(index, info);
		}

		static ::System::Boolean criAtomMic_GetDefaultDevice(::CriWare::CriAtomExMic_DeviceInfo& info)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExMic_DeviceInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETDEFAULTDEVICE_OFFSET))(info);
		}

		static ::System::Boolean criAtomMic_IsFormatSupported(::CriWare::CriAtomExMic_Config& config)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExMic_Config&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_ISFORMATSUPPORTED_OFFSET))(config);
		}

		static ::System::IntPtr criAtomMic_Create(::CriWare::CriAtomExMic_Config& config, ::System::IntPtr work, ::System::Int32 work_size)
		{
			return ((::System::IntPtr(*)(::CriWare::CriAtomExMic_Config&, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_CREATE_OFFSET))(config, work, work_size);
		}

		static ::System::Void criAtomMic_Destroy(::System::IntPtr mic)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_DESTROY_OFFSET))(mic);
		}

		static ::System::Void criAtomMic_Start(::System::IntPtr mic)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_START_OFFSET))(mic);
		}

		static ::System::Void criAtomMic_Stop(::System::IntPtr mic)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_STOP_OFFSET))(mic);
		}

		static ::System::Int32 criAtomMic_GetNumChannels(::System::IntPtr mic)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETNUMCHANNELS_OFFSET))(mic);
		}

		static ::System::Int32 criAtomMic_GetSamplingRate(::System::IntPtr mic)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETSAMPLINGRATE_OFFSET))(mic);
		}

		static ::System::UInt32 criAtomMic_GetNumBufferedSamples(::System::IntPtr mic)
		{
			return ((::System::UInt32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETNUMBUFFEREDSAMPLES_OFFSET))(mic);
		}

		static ::System::Boolean criAtomMic_IsAvailable(::System::IntPtr mic)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_ISAVAILABLE_OFFSET))(mic);
		}

		static ::System::UInt32 criAtomMic_ReadData(::System::IntPtr mic, ::Il2CppArray<::System::IntPtr>* data, ::System::UInt32 num_samples)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::Il2CppArray<::System::IntPtr>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_READDATA_OFFSET))(mic, data, num_samples);
		}

		static ::System::Void criAtomMic_SetOutputWriteStream(::System::IntPtr mic, ::System::IntPtr stream_cbfunc, ::System::IntPtr stream_ptr)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_SETOUTPUTWRITESTREAM_OFFSET))(mic, stream_cbfunc, stream_ptr);
		}

		static ::System::IntPtr criAtomMic_GetOutputReadStream()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETOUTPUTREADSTREAM_OFFSET))();
		}

		static ::System::Int32 criAtomMic_CalculateWorkSizeForEffect(::System::IntPtr mic, ::System::IntPtr afx_interface, ::Il2CppArray<::System::Single>* config_parameters, ::System::UInt32 num_config_parameters)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::System::Single>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_CALCULATEWORKSIZEFOREFFECT_OFFSET))(mic, afx_interface, config_parameters, num_config_parameters);
		}

		static ::System::IntPtr criAtomMic_AttachEffect(::System::IntPtr mic, ::System::IntPtr afx_interface, ::Il2CppArray<::System::Single>* config_parameters, ::System::UInt32 num_config_parameters, ::System::IntPtr work, ::System::Int32 work_size)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::System::Single>*, ::System::UInt32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_ATTACHEFFECT_OFFSET))(mic, afx_interface, config_parameters, num_config_parameters, work, work_size);
		}

		static ::System::Void criAtomMic_DetachEffect(::System::IntPtr mic, ::System::IntPtr effect)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_DETACHEFFECT_OFFSET))(mic, effect);
		}

		static ::System::IntPtr criAtomMic_GetEffectInstance(::System::IntPtr mic, ::System::IntPtr effect)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETEFFECTINSTANCE_OFFSET))(mic, effect);
		}

		static ::System::Void criAtomMic_SetEffectBypass(::System::IntPtr mic, ::System::IntPtr effect, ::System::Boolean bypass)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_SETEFFECTBYPASS_OFFSET))(mic, effect, bypass);
		}

		static ::System::Void criAtomMic_SetEffectParameter(::System::IntPtr mic, ::System::IntPtr effect, ::System::UInt32 parameter_index, ::System::Single parameter_value)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_SETEFFECTPARAMETER_OFFSET))(mic, effect, parameter_index, parameter_value);
		}

		static ::System::Single criAtomMic_GetEffectParameter(::System::IntPtr mic, ::System::IntPtr effect, ::System::UInt32 parameter_index)
		{
			return ((::System::Single(*)(::System::IntPtr, ::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_GETEFFECTPARAMETER_OFFSET))(mic, effect, parameter_index);
		}

		static ::System::Void criAtomMic_UpdateEffectParameters(::System::IntPtr mic, ::System::IntPtr effect)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXMIC_CRIATOMMIC_UPDATEEFFECTPARAMETERS_OFFSET))(mic, effect);
		}
	};
}
