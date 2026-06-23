#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomConfig_LinuxOutput.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtomConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CRIWARE_CRIATOMPLUGIN_CRIWARE009CE561_OFFSET UNITYSDK_OFFSET(0x1E402710)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE15B0037A_OFFSET UNITYSDK_OFFSET(0x1E401560)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE15F30D07_OFFSET UNITYSDK_OFFSET(0x1E401740)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE237CA5E3_OFFSET UNITYSDK_OFFSET(0x1E402B70)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE2626EF5B_OFFSET UNITYSDK_OFFSET(0x1E4032B0)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE28E5ABA4_OFFSET UNITYSDK_OFFSET(0x1E401600)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE2F034134_OFFSET UNITYSDK_OFFSET(0x1E402FA0)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE5B1C5B3B_OFFSET UNITYSDK_OFFSET(0x1E403730)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE63E1F278_OFFSET UNITYSDK_OFFSET(0x1E4033B0)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE70981A20_OFFSET UNITYSDK_OFFSET(0x1E403150)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE7581CF8C_OFFSET UNITYSDK_OFFSET(0x1E401D40)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE780E6ED2_OFFSET UNITYSDK_OFFSET(0x1E402CD0)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE8384362B_OFFSET UNITYSDK_OFFSET(0x1E402A00)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE88175F19_OFFSET UNITYSDK_OFFSET(0x1E401260)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREB64E0C3B_OFFSET UNITYSDK_OFFSET(0x1E403590)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREC176B113_OFFSET UNITYSDK_OFFSET(0x1E403330)
#define CRIWARE_CRIATOMPLUGIN_CRIWARECCA1268B_OFFSET UNITYSDK_OFFSET(0x1E401BF0)
#define CRIWARE_CRIATOMPLUGIN_CRIWARED1FD92AA_OFFSET UNITYSDK_OFFSET(0x1E401AA0)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREE996B258_OFFSET UNITYSDK_OFFSET(0x1E402E30)
#define CRIWARE_CRIATOMPLUGIN_EXECUTEQUEUEDBEATSYNCCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1E401C70)
#define CRIWARE_CRIATOMPLUGIN_EXECUTEQUEUEDCUELINKCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1E4019D0)
#define CRIWARE_CRIATOMPLUGIN_EXECUTEQUEUEDEVENTCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1E401B20)
#define CRIWARE_CRIATOMPLUGIN_FINALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x1E400230)
#define CRIWARE_CRIATOMPLUGIN_GETAUDIOEFFECTINTERFACELIST_OFFSET UNITYSDK_OFFSET(0x1E401DC0)
#define CRIWARE_CRIATOMPLUGIN_GETLOOPCOUNTPARAMETERID_OFFSET UNITYSDK_OFFSET(0x1E403610)
#define CRIWARE_CRIATOMPLUGIN_GETREQUIREDMAXVIRTUALVOICES_OFFSET UNITYSDK_OFFSET(0x1E403270)
#define CRIWARE_CRIATOMPLUGIN_GETSPATIALIZERCOREINTERFACEFROMATOMOCULUSAUDIOBRIDGE_OFFSET UNITYSDK_OFFSET(0x1E402080)
#define CRIWARE_CRIATOMPLUGIN_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1E401970)
#define CRIWARE_CRIATOMPLUGIN_INITIALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x1E3FFCE0)
#define CRIWARE_CRIATOMPLUGIN_ISLIBRARYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1E401FA0)
#define CRIWARE_CRIATOMPLUGIN_PAUSE_OFFSET UNITYSDK_OFFSET(0x1E403430)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_ANDROID_OFFSET UNITYSDK_OFFSET(0x1E403030)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_EDITOR_OFFSET UNITYSDK_OFFSET(0x1E402A90)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_IOS_OFFSET UNITYSDK_OFFSET(0x1E402EB0)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_LINUX_OFFSET UNITYSDK_OFFSET(0x1E402D50)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PC_OFFSET UNITYSDK_OFFSET(0x1E402BF0)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PS4_OFFSET UNITYSDK_OFFSET(0x1E403230)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PS5_OFFSET UNITYSDK_OFFSET(0x1E403240)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_SWITCH_OFFSET UNITYSDK_OFFSET(0x1E403250)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_VITA_OFFSET UNITYSDK_OFFSET(0x1E403220)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_WEBGL_OFFSET UNITYSDK_OFFSET(0x1E403260)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGMONITORPARAMETES_OFFSET UNITYSDK_OFFSET(0x1E402910)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E402470)
#define CRIWARE_CRIATOMPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4037B0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomPlugin_TypeDefinitionIndex = 34238;

	class CriAtomPlugin : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::IntPtr>** StaticGet_effectInterfaceList()
		{
			return (::System::Collections::Generic::List_1<::System::IntPtr>**)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x279F0);
		}
		static ::System::Boolean* StaticGet_isConfigured()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x83A0);
		}
		static ::System::UInt16* StaticGet_CRIATOMPARAMETER2_ID_INVALID()
		{
			return (::System::UInt16*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x83A2);
		}
		static ::System::Int32* StaticGet_initializationCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x83A4);
		}
		static ::System::UInt64* StaticGet_temporalStorage()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x83A8);
		}
		static ::System::Int32* StaticGet_CRIATOMUNITY_PARAMETER_ID_LOOP_COUNT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x83B0);
		}
		static ::System::Single* StaticGet_timeSinceStartup()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x83B4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN__CCTOR_OFFSET))();
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

		static ::System::Boolean GetAudioEffectInterfaceList(::System::Collections::Generic::List_1<::System::IntPtr>*& effect_interface_list)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::IntPtr>*&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_GETAUDIOEFFECTINTERFACELIST_OFFSET))(effect_interface_list);
		}

		static ::System::IntPtr GetSpatializerCoreInterfaceFromAtomOculusAudioBridge()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_GETSPATIALIZERCOREINTERFACEFROMATOMOCULUSAUDIOBRIDGE_OFFSET))();
		}

		static ::System::Void SetConfigParameters(::System::Int32 max_virtual_voices, ::System::Int32 max_voice_limit_groups, ::System::Int32 max_categories, ::System::Int32 max_aisacs, ::System::Int32 max_bus_sends, ::System::Int32 max_sequence_events_per_frame, ::System::Int32 max_beatsync_callbacks_per_frame, ::System::Int32 max_cuelink_callbacks_per_frame, ::System::Int32 num_standard_memory_voices, ::System::Int32 num_standard_streaming_voices, ::System::Int32 num_hca_mx_memory_voices, ::System::Int32 num_hca_mx_streaming_voices, ::System::Int32 output_sampling_rate, ::System::Int32 num_asr_output_channels, ::System::Boolean uses_in_game_preview, ::System::Single server_frequency, ::System::Int32 max_parameter_blocks, ::System::Int32 categories_per_playback, ::System::Int32 max_faders, ::System::Int32 num_buses, ::System::Boolean vr_mode)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGPARAMETERS_OFFSET))(max_virtual_voices, max_voice_limit_groups, max_categories, max_aisacs, max_bus_sends, max_sequence_events_per_frame, max_beatsync_callbacks_per_frame, max_cuelink_callbacks_per_frame, num_standard_memory_voices, num_standard_streaming_voices, num_hca_mx_memory_voices, num_hca_mx_streaming_voices, output_sampling_rate, num_asr_output_channels, uses_in_game_preview, server_frequency, max_parameter_blocks, categories_per_playback, max_faders, num_buses, vr_mode);
		}

		static ::System::Void SetConfigMonitorParametes(::System::Int32 max_preview_objects, ::System::Int32 communication_buffer_size, ::System::Int32 playback_position_update_interval)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGMONITORPARAMETES_OFFSET))(max_preview_objects, communication_buffer_size, playback_position_update_interval);
		}

		static ::System::Void SetConfigAdditionalParameters_EDITOR(::System::Boolean enable_user_pcm_output, ::System::Int32 user_pcm_buffer_length)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_EDITOR_OFFSET))(enable_user_pcm_output, user_pcm_buffer_length);
		}

		static ::System::Void SetConfigAdditionalParameters_PC(::System::Int64 buffering_time_pc)
		{
			return ((::System::Void(*)(::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PC_OFFSET))(buffering_time_pc);
		}

		static ::System::Void SetConfigAdditionalParameters_LINUX(::CriWare::CriAtomConfig_LinuxOutput output, ::System::Int32 pulse_latency_usec)
		{
			return ((::System::Void(*)(::CriWare::CriAtomConfig_LinuxOutput, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_LINUX_OFFSET))(output, pulse_latency_usec);
		}

		static ::System::Void SetConfigAdditionalParameters_IOS(::System::Boolean enable_sonicsync, ::System::UInt32 buffering_time_ios, ::System::Boolean override_ipod_music_ios)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_IOS_OFFSET))(enable_sonicsync, buffering_time_ios, override_ipod_music_ios);
		}

		static ::System::Void SetConfigAdditionalParameters_ANDROID(::System::Boolean enable_sonicsync, ::System::Int32 num_low_delay_memory_voices, ::System::Int32 num_low_delay_streaming_voices, ::System::Int32 sound_buffering_time, ::System::Int32 sound_start_buffering_time, ::System::Boolean use_fast_mixer, ::System::Boolean use_aaudio, ::System::Int32 stream_type)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_ANDROID_OFFSET))(enable_sonicsync, num_low_delay_memory_voices, num_low_delay_streaming_voices, sound_buffering_time, sound_start_buffering_time, use_fast_mixer, use_aaudio, stream_type);
		}

		static ::System::Void SetConfigAdditionalParameters_VITA(::System::Int32 num_atrac9_memory_voices, ::System::Int32 num_atrac9_streaming_voices, ::System::Int32 num_mana_decoders)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_VITA_OFFSET))(num_atrac9_memory_voices, num_atrac9_streaming_voices, num_mana_decoders);
		}

		static ::System::Void SetConfigAdditionalParameters_PS4(::System::Int32 num_atrac9_memory_voices, ::System::Int32 num_atrac9_streaming_voices, ::System::Boolean use_audio3d, ::System::Int32 num_audio3d_memory_voices, ::System::Int32 num_audio3d_streaming_voices)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PS4_OFFSET))(num_atrac9_memory_voices, num_atrac9_streaming_voices, use_audio3d, num_audio3d_memory_voices, num_audio3d_streaming_voices);
		}

		static ::System::Void SetConfigAdditionalParameters_PS5(::System::Int32 max_channel_ports, ::System::Int32 max_object_ports)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PS5_OFFSET))(max_channel_ports, max_object_ports);
		}

		static ::System::Void SetConfigAdditionalParameters_SWITCH(::System::Boolean enable_sonicsync, ::System::Int32 num_opus_memory_voices, ::System::Int32 num_opus_streaming_voices, ::System::Boolean init_socket)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_SWITCH_OFFSET))(enable_sonicsync, num_opus_memory_voices, num_opus_streaming_voices, init_socket);
		}

		static ::System::Void SetConfigAdditionalParameters_WEBGL(::System::Int32 num_webaudio_voices)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_WEBGL_OFFSET))(num_webaudio_voices);
		}

		static ::System::Int32 GetRequiredMaxVirtualVoices(::CriWare::CriAtomConfig* atomConfig)
		{
			return ((::System::Int32(*)(::CriWare::CriAtomConfig*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_GETREQUIREDMAXVIRTUALVOICES_OFFSET))(atomConfig);
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

		static ::System::Void Pause(::System::Boolean pause)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_PAUSE_OFFSET))(pause);
		}

		static ::System::UInt16 GetLoopCountParameterId()
		{
			return ((::System::UInt16(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_GETLOOPCOUNTPARAMETERID_OFFSET))();
		}

		static ::System::Void CRIWARE009CE561(::System::Int32 max_virtual_voices, ::System::Int32 max_voice_limit_groups, ::System::Int32 max_categories, ::System::Int32 max_aisacs, ::System::Int32 max_bus_sends, ::System::Int32 max_sequence_events_per_frame, ::System::Int32 max_beatsync_callbacks_per_frame, ::System::Int32 max_cuelink_callbacks_per_frame, ::System::Int32 num_standard_memory_voices, ::System::Int32 num_standard_streaming_voices, ::System::Int32 num_hca_mx_memory_voices, ::System::Int32 num_hca_mx_streaming_voices, ::System::Int32 output_sampling_rate, ::System::Int32 num_asr_output_channels, ::System::Boolean uses_in_game_preview, ::System::Single server_frequency, ::System::Int32 max_parameter_blocks, ::System::Int32 categories_per_playback, ::System::Int32 max_faders, ::System::Int32 num_buses, ::System::Boolean use_ambisonics, ::System::IntPtr spatializer_core_interface)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE009CE561_OFFSET))(max_virtual_voices, max_voice_limit_groups, max_categories, max_aisacs, max_bus_sends, max_sequence_events_per_frame, max_beatsync_callbacks_per_frame, max_cuelink_callbacks_per_frame, num_standard_memory_voices, num_standard_streaming_voices, num_hca_mx_memory_voices, num_hca_mx_streaming_voices, output_sampling_rate, num_asr_output_channels, uses_in_game_preview, server_frequency, max_parameter_blocks, categories_per_playback, max_faders, num_buses, use_ambisonics, spatializer_core_interface);
		}

		static ::System::Void CRIWARE8384362B(::System::UInt32 max_preivew_objects, ::System::UInt32 communication_buffer_size, ::System::Int32 playback_position_update_interval)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE8384362B_OFFSET))(max_preivew_objects, communication_buffer_size, playback_position_update_interval);
		}

		static ::System::Void CRIWARE237CA5E3(::System::Boolean enable_user_pcm_out_mode)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE237CA5E3_OFFSET))(enable_user_pcm_out_mode);
		}

		static ::System::Void CRIWARE780E6ED2(::System::Int64 buffering_time_pc)
		{
			return ((::System::Void(*)(::System::Int64))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE780E6ED2_OFFSET))(buffering_time_pc);
		}

		static ::System::Void CRIWAREE996B258(::System::Int32 output, ::System::Int32 pulse_latency_usec)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREE996B258_OFFSET))(output, pulse_latency_usec);
		}

		static ::System::Void CRIWARE2F034134(::System::Boolean enable_sonicsync, ::System::UInt32 buffering_time_ios, ::System::Boolean override_ipod_music_ios)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE2F034134_OFFSET))(enable_sonicsync, buffering_time_ios, override_ipod_music_ios);
		}

		static ::System::Void CRIWARE70981A20(::System::Boolean enable_sonicsync, ::System::Int32 num_low_delay_memory_voices, ::System::Int32 num_low_delay_streaming_voices, ::System::Int32 sound_buffering_time, ::System::Int32 sound_start_buffering_time, ::System::Boolean apply_hw_property, ::System::Int32 stream_type)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE70981A20_OFFSET))(enable_sonicsync, num_low_delay_memory_voices, num_low_delay_streaming_voices, sound_buffering_time, sound_start_buffering_time, apply_hw_property, stream_type);
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

		static ::System::Void CRIWAREB64E0C3B(::System::Boolean pause)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREB64E0C3B_OFFSET))(pause);
		}

		static ::System::Void CRIWARE15B0037A(::System::IntPtr cbfunc, ::System::String* separator_string)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE15B0037A_OFFSET))(cbfunc, separator_string);
		}

		static ::System::Void CRIWARE28E5ABA4(::System::IntPtr cbfunc)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE28E5ABA4_OFFSET))(cbfunc);
		}

		static ::System::Void CRIWARECCA1268B()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARECCA1268B_OFFSET))();
		}

		static ::System::Void CRIWARE88175F19(::System::IntPtr cbfunc)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE88175F19_OFFSET))(cbfunc);
		}

		static ::System::Void CRIWARE7581CF8C()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE7581CF8C_OFFSET))();
		}

		static ::System::Void CRIWARE15F30D07(::System::IntPtr cbfunc)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE15F30D07_OFFSET))(cbfunc);
		}

		static ::System::Void CRIWARED1FD92AA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARED1FD92AA_OFFSET))();
		}

		static ::System::UInt16 CRIWARE5B1C5B3B(::System::Int32 id)
		{
			return ((::System::UInt16(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE5B1C5B3B_OFFSET))(id);
		}
	};
}
