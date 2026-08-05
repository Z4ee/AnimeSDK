#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomConfig_LinuxOutput.h"
#include "unitysdk/CriWare/CriAtomEx_SoundRendererType.h"
#include "unitysdk/CriWare/CriAtom_SpeakerMapping.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriAtomConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CRIWARE_CRIATOMPLUGIN_CRIWARE00708574_OFFSET UNITYSDK_OFFSET(0x1F860510)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE160137DE_OFFSET UNITYSDK_OFFSET(0x1F85FAA0)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE19E45CEF_OFFSET UNITYSDK_OFFSET(0x1F85F4A0)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE1D440CAF_OFFSET UNITYSDK_OFFSET(0x1F85FF20)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE3557614D_OFFSET UNITYSDK_OFFSET(0x1F85F7D0)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE4CD0AFE6_OFFSET UNITYSDK_OFFSET(0x1F860110)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE51D3C1CB_OFFSET UNITYSDK_OFFSET(0x1F85FD70)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE69578D33_OFFSET UNITYSDK_OFFSET(0x1F85F940)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE77E886D0_OFFSET UNITYSDK_OFFSET(0x1F860090)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE8438FA6A_OFFSET UNITYSDK_OFFSET(0x1F85FC00)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE8B5DAE1F_OFFSET UNITYSDK_OFFSET(0x1F85E3C0)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE90383FA8_OFFSET UNITYSDK_OFFSET(0x1F85E6C0)
#define CRIWARE_CRIATOMPLUGIN_CRIWARE978552AA_OFFSET UNITYSDK_OFFSET(0x1F85E8A0)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREAD71D9F4_OFFSET UNITYSDK_OFFSET(0x1F85ED70)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREC203F238_OFFSET UNITYSDK_OFFSET(0x1F860190)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREDAD74A8E_OFFSET UNITYSDK_OFFSET(0x1F860370)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREDC8E49EA_OFFSET UNITYSDK_OFFSET(0x1F85EED0)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREE5B187C1_OFFSET UNITYSDK_OFFSET(0x1F85EC10)
#define CRIWARE_CRIATOMPLUGIN_CRIWAREF9DE2DE1_OFFSET UNITYSDK_OFFSET(0x1F85E760)
#define CRIWARE_CRIATOMPLUGIN_EXECUTEQUEUEDBEATSYNCCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1F85EDF0)
#define CRIWARE_CRIATOMPLUGIN_EXECUTEQUEUEDCUELINKCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1F85EB30)
#define CRIWARE_CRIATOMPLUGIN_EXECUTEQUEUEDEVENTCALLBACKS_OFFSET UNITYSDK_OFFSET(0x1F85EC90)
#define CRIWARE_CRIATOMPLUGIN_FINALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x1F85D310)
#define CRIWARE_CRIATOMPLUGIN_GETAUDIOEFFECTINTERFACELIST_OFFSET UNITYSDK_OFFSET(0x1F85EF50)
#define CRIWARE_CRIATOMPLUGIN_GETLOOPCOUNTPARAMETERID_OFFSET UNITYSDK_OFFSET(0x1F8603F0)
#define CRIWARE_CRIATOMPLUGIN_GETREQUIREDMAXVIRTUALVOICES_OFFSET UNITYSDK_OFFSET(0x1F860050)
#define CRIWARE_CRIATOMPLUGIN_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1F85EAD0)
#define CRIWARE_CRIATOMPLUGIN_INITIALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x1F85CC40)
#define CRIWARE_CRIATOMPLUGIN_ISLIBRARYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1F85F130)
#define CRIWARE_CRIATOMPLUGIN_PAUSE_OFFSET UNITYSDK_OFFSET(0x1F860210)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_ANDROID_OFFSET UNITYSDK_OFFSET(0x1F85FE00)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_EDITOR_OFFSET UNITYSDK_OFFSET(0x1F85F860)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_IOS_OFFSET UNITYSDK_OFFSET(0x1F85FC80)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_LINUX_OFFSET UNITYSDK_OFFSET(0x1F85FB20)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PC_OFFSET UNITYSDK_OFFSET(0x1F85F9C0)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PS4_OFFSET UNITYSDK_OFFSET(0x1F860000)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PS5_OFFSET UNITYSDK_OFFSET(0x1F860010)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_SWITCH2_OFFSET UNITYSDK_OFFSET(0x1F860030)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_SWITCH_OFFSET UNITYSDK_OFFSET(0x1F860020)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_VITA_OFFSET UNITYSDK_OFFSET(0x1F85FFF0)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_WEBGL_OFFSET UNITYSDK_OFFSET(0x1F860040)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGMONITORPARAMETES_OFFSET UNITYSDK_OFFSET(0x1F85F6E0)
#define CRIWARE_CRIATOMPLUGIN_SETCONFIGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1F85F200)
#define CRIWARE_CRIATOMPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F860590)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomPlugin_TypeDefinitionIndex = 34887;

	class CriAtomPlugin : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_OnInitialized()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x29280);
		}
		static ::System::Action** StaticGet_OnBeforeInitialize()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x29288);
		}
		static ::System::Action** StaticGet_OnBeforeFinalize()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x29290);
		}
		static ::System::Action** StaticGet_OnFinalized()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x29298);
		}
		static ::System::Collections::Generic::List_1<::System::IntPtr>** StaticGet_effectInterfaceList()
		{
			return (::System::Collections::Generic::List_1<::System::IntPtr>**)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x292A0);
		}
		static ::System::Single* StaticGet_timeSinceStartup()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x8460);
		}
		static ::System::UInt16* StaticGet_CRIATOMPARAMETER2_ID_INVALID()
		{
			return (::System::UInt16*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x8464);
		}
		static ::System::Boolean* StaticGet_isConfigured()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x8466);
		}
		static ::System::Int32* StaticGet_CRIATOMUNITY_PARAMETER_ID_LOOP_COUNT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x8468);
		}
		static ::System::Int32* StaticGet_initializationCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x846C);
		}
		static ::System::UInt64* StaticGet_temporalStorage()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(CriAtomPlugin_TypeDefinitionIndex)->GetStaticField(0x8470);
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

		static ::System::Void SetConfigParameters(::System::Int32 max_virtual_voices, ::System::Int32 max_voice_limit_groups, ::System::Int32 max_categories, ::System::Byte max_aisacs, ::System::Byte max_bus_sends, ::System::Int32 max_sequence_events_per_frame, ::System::Int32 max_beatsync_callbacks_per_frame, ::System::Int32 max_cuelink_callbacks_per_frame, ::System::Int32 num_standard_memory_voices, ::System::Int32 num_standard_streaming_voices, ::System::Int32 num_hca_mx_memory_voices, ::System::Int32 num_hca_mx_streaming_voices, ::System::Int32 output_sampling_rate, ::System::Int32 num_asr_output_channels, ::CriWare::CriAtom_SpeakerMapping speakerMapping, ::System::Boolean uses_in_game_preview, ::System::Single server_frequency, ::System::Int32 max_parameter_blocks, ::System::Int32 categories_per_playback, ::System::Int32 max_faders, ::System::Int32 num_buses, ::System::Single max_pitch, ::CriWare::CriAtomEx_SoundRendererType sound_renderer_type, ::System::Boolean enable_sonicsync_for_common, ::System::Boolean enable_atom_sound_disabled_mode)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte, ::System::Byte, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::CriWare::CriAtom_SpeakerMapping, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::CriWare::CriAtomEx_SoundRendererType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGPARAMETERS_OFFSET))(max_virtual_voices, max_voice_limit_groups, max_categories, max_aisacs, max_bus_sends, max_sequence_events_per_frame, max_beatsync_callbacks_per_frame, max_cuelink_callbacks_per_frame, num_standard_memory_voices, num_standard_streaming_voices, num_hca_mx_memory_voices, num_hca_mx_streaming_voices, output_sampling_rate, num_asr_output_channels, speakerMapping, uses_in_game_preview, server_frequency, max_parameter_blocks, categories_per_playback, max_faders, num_buses, max_pitch, sound_renderer_type, enable_sonicsync_for_common, enable_atom_sound_disabled_mode);
		}

		static ::System::Void SetConfigMonitorParametes(::System::Int32 max_preview_objects, ::System::Int32 communication_buffer_size, ::System::Int32 playback_position_update_interval)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGMONITORPARAMETES_OFFSET))(max_preview_objects, communication_buffer_size, playback_position_update_interval);
		}

		static ::System::Void SetConfigAdditionalParameters_EDITOR(::System::Boolean enable_user_pcm_output, ::System::Int32 user_pcm_buffer_length)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_EDITOR_OFFSET))(enable_user_pcm_output, user_pcm_buffer_length);
		}

		static ::System::Void SetConfigAdditionalParameters_PC(::System::Int64 buffering_time_pc, ::System::Boolean use_microsoft_spatial_sound)
		{
			return ((::System::Void(*)(::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PC_OFFSET))(buffering_time_pc, use_microsoft_spatial_sound);
		}

		static ::System::Void SetConfigAdditionalParameters_LINUX(::CriWare::CriAtomConfig_LinuxOutput output, ::System::Int32 pulse_latency_usec)
		{
			return ((::System::Void(*)(::CriWare::CriAtomConfig_LinuxOutput, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_LINUX_OFFSET))(output, pulse_latency_usec);
		}

		static ::System::Void SetConfigAdditionalParameters_IOS(::System::Boolean enable_sonicsync, ::System::UInt32 buffering_time_ios, ::System::Boolean override_ipod_music_ios, ::System::Boolean enable_os_notification_handling)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_IOS_OFFSET))(enable_sonicsync, buffering_time_ios, override_ipod_music_ios, enable_os_notification_handling);
		}

		static ::System::Void SetConfigAdditionalParameters_ANDROID(::System::Boolean enable_sonicsync, ::System::Int32 num_low_delay_memory_voices, ::System::Int32 num_low_delay_streaming_voices, ::System::Int32 sound_buffering_time, ::System::Int32 sound_start_buffering_time, ::System::Boolean use_fast_mixer, ::System::Boolean use_aaudio, ::System::Int32 stream_type)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_ANDROID_OFFSET))(enable_sonicsync, num_low_delay_memory_voices, num_low_delay_streaming_voices, sound_buffering_time, sound_start_buffering_time, use_fast_mixer, use_aaudio, stream_type);
		}

		static ::System::Void SetConfigAdditionalParameters_VITA(::System::Int32 num_atrac9_memory_voices, ::System::Int32 num_atrac9_streaming_voices, ::System::Int32 num_mana_decoders)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_VITA_OFFSET))(num_atrac9_memory_voices, num_atrac9_streaming_voices, num_mana_decoders);
		}

		static ::System::Void SetConfigAdditionalParameters_PS4(::System::Int32 num_atrac9_memory_voices, ::System::Int32 num_atrac9_streaming_voices, ::System::Boolean use_audio3d, ::System::Int32 num_audio3d_memory_voices, ::System::Int32 num_audio3d_streaming_voices, ::System::Int32 num_mp4_streaming_voices)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PS4_OFFSET))(num_atrac9_memory_voices, num_atrac9_streaming_voices, use_audio3d, num_audio3d_memory_voices, num_audio3d_streaming_voices, num_mp4_streaming_voices);
		}

		static ::System::Void SetConfigAdditionalParameters_PS5(::System::Int32 max_channel_ports, ::System::Int32 max_object_ports, ::System::Int32 num_mp4_streaming_voices)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_PS5_OFFSET))(max_channel_ports, max_object_ports, num_mp4_streaming_voices);
		}

		static ::System::Void SetConfigAdditionalParameters_SWITCH(::System::Boolean enable_sonicsync, ::System::Int32 num_opus_memory_voices, ::System::Int32 num_opus_streaming_voices, ::System::Boolean init_socket)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_SWITCH_OFFSET))(enable_sonicsync, num_opus_memory_voices, num_opus_streaming_voices, init_socket);
		}

		static ::System::Void SetConfigAdditionalParameters_SWITCH2(::System::Int32 num_opus_memory_voices, ::System::Int32 num_opus_streaming_voices, ::System::Boolean init_socket)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_SWITCH2_OFFSET))(num_opus_memory_voices, num_opus_streaming_voices, init_socket);
		}

		static ::System::Void SetConfigAdditionalParameters_WEBGL(::System::Int32 num_webaudio_voices, ::System::Boolean use_webaudio_mixer)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_SETCONFIGADDITIONALPARAMETERS_WEBGL_OFFSET))(num_webaudio_voices, use_webaudio_mixer);
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

		static ::System::Void CRIWARE19E45CEF(::System::Int32 max_virtual_voices, ::System::Int32 max_voice_limit_groups, ::System::Int32 max_categories, ::System::Byte max_aisacs, ::System::Byte max_bus_sends, ::System::Int32 max_sequence_events_per_frame, ::System::Int32 max_beatsync_callbacks_per_frame, ::System::Int32 max_cuelink_callbacks_per_frame, ::System::Int32 num_standard_memory_voices, ::System::Int32 num_standard_streaming_voices, ::System::Int32 num_hca_mx_memory_voices, ::System::Int32 num_hca_mx_streaming_voices, ::System::Int32 output_sampling_rate, ::System::Int32 num_asr_output_channels, ::CriWare::CriAtom_SpeakerMapping speakerMapping, ::System::Boolean uses_in_game_preview, ::System::Single server_frequency, ::System::Int32 max_parameter_blocks, ::System::Int32 categories_per_playback, ::System::Int32 max_faders, ::System::Int32 num_buses, ::System::Single max_pitch, ::CriWare::CriAtomEx_SoundRendererType sound_renderer_type, ::System::Boolean enable_sonicsync_for_common, ::System::Boolean enable_atom_sound_disabled_mode)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte, ::System::Byte, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::CriWare::CriAtom_SpeakerMapping, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::CriWare::CriAtomEx_SoundRendererType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE19E45CEF_OFFSET))(max_virtual_voices, max_voice_limit_groups, max_categories, max_aisacs, max_bus_sends, max_sequence_events_per_frame, max_beatsync_callbacks_per_frame, max_cuelink_callbacks_per_frame, num_standard_memory_voices, num_standard_streaming_voices, num_hca_mx_memory_voices, num_hca_mx_streaming_voices, output_sampling_rate, num_asr_output_channels, speakerMapping, uses_in_game_preview, server_frequency, max_parameter_blocks, categories_per_playback, max_faders, num_buses, max_pitch, sound_renderer_type, enable_sonicsync_for_common, enable_atom_sound_disabled_mode);
		}

		static ::System::Void CRIWARE3557614D(::System::UInt32 max_preivew_objects, ::System::UInt32 communication_buffer_size, ::System::Int32 playback_position_update_interval)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE3557614D_OFFSET))(max_preivew_objects, communication_buffer_size, playback_position_update_interval);
		}

		static ::System::Void CRIWARE69578D33(::System::Boolean enable_user_pcm_out_mode)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE69578D33_OFFSET))(enable_user_pcm_out_mode);
		}

		static ::System::Void CRIWARE160137DE(::System::Int64 buffering_time_pc, ::System::Boolean use_microsoft_spatial_sound)
		{
			return ((::System::Void(*)(::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE160137DE_OFFSET))(buffering_time_pc, use_microsoft_spatial_sound);
		}

		static ::System::Void CRIWARE8438FA6A(::System::Int32 output, ::System::Int32 pulse_latency_usec)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE8438FA6A_OFFSET))(output, pulse_latency_usec);
		}

		static ::System::Void CRIWARE51D3C1CB(::System::Boolean enable_sonicsync, ::System::UInt32 buffering_time_ios, ::System::Boolean override_ipod_music_ios, ::System::Boolean enable_os_notification_handling)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE51D3C1CB_OFFSET))(enable_sonicsync, buffering_time_ios, override_ipod_music_ios, enable_os_notification_handling);
		}

		static ::System::Void CRIWARE1D440CAF(::System::Boolean enable_sonicsync, ::System::Int32 num_low_delay_memory_voices, ::System::Int32 num_low_delay_streaming_voices, ::System::Int32 sound_buffering_time, ::System::Int32 sound_start_buffering_time, ::System::Boolean apply_hw_property, ::System::Int32 stream_type)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE1D440CAF_OFFSET))(enable_sonicsync, num_low_delay_memory_voices, num_low_delay_streaming_voices, sound_buffering_time, sound_start_buffering_time, apply_hw_property, stream_type);
		}

		static ::System::Void CRIWARE77E886D0()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE77E886D0_OFFSET))();
		}

		static ::System::Boolean CRIWARE4CD0AFE6()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE4CD0AFE6_OFFSET))();
		}

		static ::System::Void CRIWAREC203F238()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREC203F238_OFFSET))();
		}

		static ::System::Void CRIWAREDAD74A8E(::System::Boolean pause)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREDAD74A8E_OFFSET))(pause);
		}

		static ::System::Void CRIWARE90383FA8(::System::IntPtr cbfunc, ::System::String* separator_string)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE90383FA8_OFFSET))(cbfunc, separator_string);
		}

		static ::System::Void CRIWAREF9DE2DE1(::System::IntPtr cbfunc)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREF9DE2DE1_OFFSET))(cbfunc);
		}

		static ::System::Void CRIWAREAD71D9F4()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREAD71D9F4_OFFSET))();
		}

		static ::System::Void CRIWARE8B5DAE1F(::System::IntPtr cbfunc)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE8B5DAE1F_OFFSET))(cbfunc);
		}

		static ::System::Void CRIWAREDC8E49EA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREDC8E49EA_OFFSET))();
		}

		static ::System::Void CRIWARE978552AA(::System::IntPtr cbfunc)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE978552AA_OFFSET))(cbfunc);
		}

		static ::System::Void CRIWAREE5B187C1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWAREE5B187C1_OFFSET))();
		}

		static ::System::UInt16 CRIWARE00708574(::System::Int32 id)
		{
			return ((::System::UInt16(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMPLUGIN_CRIWARE00708574_OFFSET))(id);
		}
	};
}
