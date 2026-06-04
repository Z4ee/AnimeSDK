#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/CodecType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsDeviceType.h"

namespace System { class String; }
namespace System { class Type; }

#define CRIWARE_CRIMANAPLUGIN_CRIMANAUNITY_GETPRIMEBUFFERALIGNMENTSIZE_OFFSET UNITYSDK_OFFSET(0x146D9870)
#define CRIWARE_CRIMANAPLUGIN_CRIMANA_ISSTREAMERMANAGERUSED_OFFSET UNITYSDK_OFFSET(0x146D9970)
#define CRIWARE_CRIMANAPLUGIN_CRIMANA_USESTREAMERMANAGER_OFFSET UNITYSDK_OFFSET(0x146D98F0)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE06C87176_OFFSET UNITYSDK_OFFSET(0x146D96D0)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE257CA763_OFFSET UNITYSDK_OFFSET(0x146D99F0)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE46E1A37B_OFFSET UNITYSDK_OFFSET(0x146D97F0)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE611B78A5_OFFSET UNITYSDK_OFFSET(0x146D93A0)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE62B7B053_OFFSET UNITYSDK_OFFSET(0x146D8CE0)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE7BFC56AA_OFFSET UNITYSDK_OFFSET(0x146D9320)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE9F182D39_OFFSET UNITYSDK_OFFSET(0x146D4C20)
#define CRIWARE_CRIMANAPLUGIN_CRIWARECFA78B41_OFFSET UNITYSDK_OFFSET(0x146D8660)
#define CRIWARE_CRIMANAPLUGIN_CRIWARED672C36F_OFFSET UNITYSDK_OFFSET(0x146D9420)
#define CRIWARE_CRIMANAPLUGIN_FINALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x146D9060)
#define CRIWARE_CRIMANAPLUGIN_GETPRIMEBUFFERALIGNMENTSIZE_OFFSET UNITYSDK_OFFSET(0x146CBED0)
#define CRIWARE_CRIMANAPLUGIN_GETVP9EXPANSIONCLASS_OFFSET UNITYSDK_OFFSET(0x146D8960)
#define CRIWARE_CRIMANAPLUGIN_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x146D84B0)
#define CRIWARE_CRIMANAPLUGIN_GET_ISMULTITHREADEDRENDERINGENABLED_OFFSET UNITYSDK_OFFSET(0x146D84E0)
#define CRIWARE_CRIMANAPLUGIN_INITIALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x146D8D80)
#define CRIWARE_CRIMANAPLUGIN_ISCODECSUPPORTED_OFFSET UNITYSDK_OFFSET(0x146D94A0)
#define CRIWARE_CRIMANAPLUGIN_ISH264CODECSUPPORTED_OFFSET UNITYSDK_OFFSET(0x146D9600)
#define CRIWARE_CRIMANAPLUGIN_ISLIBRARYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x146CC800)
#define CRIWARE_CRIMANAPLUGIN_ISVP9CODECSUPPORTED_OFFSET UNITYSDK_OFFSET(0x146D89D0)
#define CRIWARE_CRIMANAPLUGIN_LOCK_OFFSET UNITYSDK_OFFSET(0x146D9630)
#define CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_ANDROID_OFFSET UNITYSDK_OFFSET(0x146D8D60)
#define CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_PC_OFFSET UNITYSDK_OFFSET(0x146D8C40)
#define CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_VITA_OFFSET UNITYSDK_OFFSET(0x146D8C30)
#define CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_WEBGL_OFFSET UNITYSDK_OFFSET(0x146D8D70)
#define CRIWARE_CRIMANAPLUGIN_SETCONFIGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x146D8520)
#define CRIWARE_CRIMANAPLUGIN_SETDECODETHREADPRIORITYANDROIDEXPERIMENTAL_OFFSET UNITYSDK_OFFSET(0x146D9610)
#define CRIWARE_CRIMANAPLUGIN_SETUPVP9_OFFSET UNITYSDK_OFFSET(0x146D86F0)
#define CRIWARE_CRIMANAPLUGIN_SHOULDSAMPLERED_OFFSET UNITYSDK_OFFSET(0x146D9620)
#define CRIWARE_CRIMANAPLUGIN_UNLOCK_OFFSET UNITYSDK_OFFSET(0x146D9750)
#define CRIWARE_CRIMANAPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x146D9A80)
#define CRIWARE_CRIMANAPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x146D9A70)

namespace CriWare
{
	inline static constexpr unsigned int CriManaPlugin_TypeDefinitionIndex = 37167;

	class CriManaPlugin : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_isConfigured()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriManaPlugin_TypeDefinitionIndex)->GetStaticField(0x3790);
		}
		static ::System::Boolean* StaticGet_enabledMultithreadedRendering()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriManaPlugin_TypeDefinitionIndex)->GetStaticField(0x3791);
		}
		static ::System::Int32* StaticGet_initializationCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriManaPlugin_TypeDefinitionIndex)->GetStaticField(0x3794);
		}
		static ::System::Int32* StaticGet_renderingEventOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriManaPlugin_TypeDefinitionIndex)->GetStaticField(0x3798);
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

		static ::System::Void SetConfigParameters(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETCONFIGPARAMETERS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetupVp9()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETUPVP9_OFFSET))();
		}

		static ::System::Void SetConfigAdditonalParameters_VITA(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_VITA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetConfigAdditonalParameters_PC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_PC_OFFSET))(a1);
		}

		static ::System::Void SetConfigAdditonalParameters_ANDROID(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_ANDROID_OFFSET))(a1, a2);
		}

		static ::System::Void SetConfigAdditonalParameters_WEBGL(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_WEBGL_OFFSET))(a1, a2);
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

		static ::System::Boolean IsCodecSupported(::CriWare::CriMana::CodecType a1)
		{
			return ((::System::Boolean(*)(::CriWare::CriMana::CodecType))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_ISCODECSUPPORTED_OFFSET))(a1);
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

		static ::System::Void SetDecodeThreadPriorityAndroidExperimental(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETDECODETHREADPRIORITYANDROIDEXPERIMENTAL_OFFSET))(a1);
		}

		static ::System::Boolean ShouldSampleRed(::UnityEngine::Rendering::GraphicsDeviceType a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::GraphicsDeviceType, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SHOULDSAMPLERED_OFFSET))(a1, a2);
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

		static ::System::Void CRIWARECFA78B41(::System::Int32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARECFA78B41_OFFSET))(a1, a2, a3, a4);
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

		static ::System::Void CRIWARE9F182D39(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE9F182D39_OFFSET))(a1);
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

		static ::System::Void criMana_UseStreamerManager(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIMANA_USESTREAMERMANAGER_OFFSET))(a1);
		}

		static ::System::Boolean criMana_IsStreamerManagerUsed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIMANA_ISSTREAMERMANAGERUSED_OFFSET))();
		}

		static ::System::UInt32 CRIWARE257CA763()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE257CA763_OFFSET))();
		}

		static ::System::Void CRIWARE62B7B053(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE62B7B053_OFFSET))(a1);
		}
	};
}
