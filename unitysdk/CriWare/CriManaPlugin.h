#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/CodecType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsDeviceType.h"

namespace System { class String; }
namespace System { class Type; }

#define CRIWARE_CRIMANAPLUGIN_CRIMANAUNITY_GETPRIMEBUFFERALIGNMENTSIZE_OFFSET UNITYSDK_OFFSET(0x11A51C20)
#define CRIWARE_CRIMANAPLUGIN_CRIMANA_ISSTREAMERMANAGERUSED_OFFSET UNITYSDK_OFFSET(0x11A51D20)
#define CRIWARE_CRIMANAPLUGIN_CRIMANA_USESTREAMERMANAGER_OFFSET UNITYSDK_OFFSET(0x11A51CA0)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE06C87176_OFFSET UNITYSDK_OFFSET(0x11A51A80)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE257CA763_OFFSET UNITYSDK_OFFSET(0x11A51DA0)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE46E1A37B_OFFSET UNITYSDK_OFFSET(0x11A51BA0)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE611B78A5_OFFSET UNITYSDK_OFFSET(0x11A51750)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE62B7B053_OFFSET UNITYSDK_OFFSET(0x11A51090)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE7BFC56AA_OFFSET UNITYSDK_OFFSET(0x11A516D0)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE9F182D39_OFFSET UNITYSDK_OFFSET(0x11A4C9F0)
#define CRIWARE_CRIMANAPLUGIN_CRIWARECFA78B41_OFFSET UNITYSDK_OFFSET(0x11A50A10)
#define CRIWARE_CRIMANAPLUGIN_CRIWARED672C36F_OFFSET UNITYSDK_OFFSET(0x11A517D0)
#define CRIWARE_CRIMANAPLUGIN_FINALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x11A51410)
#define CRIWARE_CRIMANAPLUGIN_GETPRIMEBUFFERALIGNMENTSIZE_OFFSET UNITYSDK_OFFSET(0x11A430F0)
#define CRIWARE_CRIMANAPLUGIN_GETVP9EXPANSIONCLASS_OFFSET UNITYSDK_OFFSET(0x11A50D10)
#define CRIWARE_CRIMANAPLUGIN_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x11A50860)
#define CRIWARE_CRIMANAPLUGIN_GET_ISMULTITHREADEDRENDERINGENABLED_OFFSET UNITYSDK_OFFSET(0x11A50890)
#define CRIWARE_CRIMANAPLUGIN_INITIALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x11A51130)
#define CRIWARE_CRIMANAPLUGIN_ISCODECSUPPORTED_OFFSET UNITYSDK_OFFSET(0x11A51850)
#define CRIWARE_CRIMANAPLUGIN_ISH264CODECSUPPORTED_OFFSET UNITYSDK_OFFSET(0x11A519B0)
#define CRIWARE_CRIMANAPLUGIN_ISLIBRARYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x11A43A30)
#define CRIWARE_CRIMANAPLUGIN_ISVP9CODECSUPPORTED_OFFSET UNITYSDK_OFFSET(0x11A50D80)
#define CRIWARE_CRIMANAPLUGIN_LOCK_OFFSET UNITYSDK_OFFSET(0x11A519E0)
#define CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_ANDROID_OFFSET UNITYSDK_OFFSET(0x11A51110)
#define CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_PC_OFFSET UNITYSDK_OFFSET(0x11A50FF0)
#define CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_VITA_OFFSET UNITYSDK_OFFSET(0x11A50FE0)
#define CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_WEBGL_OFFSET UNITYSDK_OFFSET(0x11A51120)
#define CRIWARE_CRIMANAPLUGIN_SETCONFIGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x11A508D0)
#define CRIWARE_CRIMANAPLUGIN_SETDECODETHREADPRIORITYANDROIDEXPERIMENTAL_OFFSET UNITYSDK_OFFSET(0x11A519C0)
#define CRIWARE_CRIMANAPLUGIN_SETUPVP9_OFFSET UNITYSDK_OFFSET(0x11A50AA0)
#define CRIWARE_CRIMANAPLUGIN_SHOULDSAMPLERED_OFFSET UNITYSDK_OFFSET(0x11A519D0)
#define CRIWARE_CRIMANAPLUGIN_UNLOCK_OFFSET UNITYSDK_OFFSET(0x11A51B00)
#define CRIWARE_CRIMANAPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A51E30)
#define CRIWARE_CRIMANAPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x11A51E20)

namespace CriWare
{
	inline static constexpr unsigned int CriManaPlugin_TypeDefinitionIndex = 31147;

	class CriManaPlugin : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_renderingEventOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriManaPlugin_TypeDefinitionIndex)->GetStaticField(0x10A80);
		}
		static ::System::Int32* StaticGet_initializationCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriManaPlugin_TypeDefinitionIndex)->GetStaticField(0x10A84);
		}
		static ::System::Boolean* StaticGet_enabledMultithreadedRendering()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriManaPlugin_TypeDefinitionIndex)->GetStaticField(0x10A88);
		}
		static ::System::Boolean* StaticGet_isConfigured()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriManaPlugin_TypeDefinitionIndex)->GetStaticField(0x10A89);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_isInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_GET_ISINITIALIZED_OFFSET))();
		}

		static ::System::Boolean get_isMultithreadedRenderingEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_GET_ISMULTITHREADEDRENDERINGENABLED_OFFSET))();
		}

		static ::System::Void SetConfigParameters(::System::Boolean graphicsMultiThreaded, ::System::Int32 num_decoders, ::System::Int32 max_num_of_entries)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETCONFIGPARAMETERS_OFFSET))(graphicsMultiThreaded, num_decoders, max_num_of_entries);
		}

		static ::System::Void SetupVp9()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETUPVP9_OFFSET))();
		}

		static ::System::Void SetConfigAdditonalParameters_VITA(::System::Boolean use_h264_playback, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_VITA_OFFSET))(use_h264_playback, width, height);
		}

		static ::System::Void SetConfigAdditonalParameters_PC(::System::Boolean use_h264_playback)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_PC_OFFSET))(use_h264_playback);
		}

		static ::System::Void SetConfigAdditonalParameters_ANDROID(::System::Boolean enable_buffer_output_for_h264, ::System::Boolean enable_buffer_output_for_vp9)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_ANDROID_OFFSET))(enable_buffer_output_for_h264, enable_buffer_output_for_vp9);
		}

		static ::System::Void SetConfigAdditonalParameters_WEBGL(::System::String* webworkerPath, ::System::UInt32 heapSize)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_WEBGL_OFFSET))(webworkerPath, heapSize);
		}

		static ::System::Void InitializeLibrary()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_INITIALIZELIBRARY_OFFSET))();
		}

		static ::System::Boolean IsLibraryInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_ISLIBRARYINITIALIZED_OFFSET))();
		}

		static ::System::Void FinalizeLibrary()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_FINALIZELIBRARY_OFFSET))();
		}

		static ::System::Boolean IsCodecSupported(::CriWare::CriMana::CodecType codecType)
		{
			return ((::System::Boolean(*)(::CriWare::CriMana::CodecType))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_ISCODECSUPPORTED_OFFSET))(codecType);
		}

		static ::System::Type* GetVp9ExpansionClass()
		{
			return ((::System::Type*(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_GETVP9EXPANSIONCLASS_OFFSET))();
		}

		static ::System::Boolean IsVp9CodecSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_ISVP9CODECSUPPORTED_OFFSET))();
		}

		static ::System::Boolean IsH264CodecSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_ISH264CODECSUPPORTED_OFFSET))();
		}

		static ::System::Void SetDecodeThreadPriorityAndroidExperimental(::System::Int32 prio)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETDECODETHREADPRIORITYANDROIDEXPERIMENTAL_OFFSET))(prio);
		}

		static ::System::Boolean ShouldSampleRed(::UnityEngine::Rendering::GraphicsDeviceType type, ::System::IntPtr tex_ptr)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::GraphicsDeviceType, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SHOULDSAMPLERED_OFFSET))(type, tex_ptr);
		}

		static ::System::Void Lock()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_LOCK_OFFSET))();
		}

		static ::System::Void Unlock()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_UNLOCK_OFFSET))();
		}

		static ::System::UInt32 GetPrimeBufferAlignmentSize()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_GETPRIMEBUFFERALIGNMENTSIZE_OFFSET))();
		}

		static ::System::Void CRIWARECFA78B41(::System::Int32 graphics_api, ::System::Boolean graphics_multi_threaded, ::System::Int32 num_decoders, ::System::Int32 num_of_max_entries)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARECFA78B41_OFFSET))(graphics_api, graphics_multi_threaded, num_decoders, num_of_max_entries);
		}

		static ::System::Void CRIWARE7BFC56AA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE7BFC56AA_OFFSET))();
		}

		static ::System::Boolean CRIWARE611B78A5()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE611B78A5_OFFSET))();
		}

		static ::System::Void CRIWARED672C36F()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARED672C36F_OFFSET))();
		}

		static ::System::Void CRIWARE9F182D39(::System::Boolean flag)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE9F182D39_OFFSET))(flag);
		}

		static ::System::Void CRIWARE06C87176()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE06C87176_OFFSET))();
		}

		static ::System::Void CRIWARE46E1A37B()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE46E1A37B_OFFSET))();
		}

		static ::System::UInt32 criManaUnity_GetPrimeBufferAlignmentSize()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIMANAUNITY_GETPRIMEBUFFERALIGNMENTSIZE_OFFSET))();
		}

		static ::System::Void criMana_UseStreamerManager(::System::Boolean flag)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIMANA_USESTREAMERMANAGER_OFFSET))(flag);
		}

		static ::System::Boolean criMana_IsStreamerManagerUsed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIMANA_ISSTREAMERMANAGERUSED_OFFSET))();
		}

		static ::System::UInt32 CRIWARE257CA763()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE257CA763_OFFSET))();
		}

		static ::System::Void CRIWARE62B7B053(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE62B7B053_OFFSET))(enable);
		}
	};
}
