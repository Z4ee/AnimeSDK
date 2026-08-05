#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CRIWARE_CRIMANAPLUGIN_ADD_ONBEFOREINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FBC39E0)
#define CRIWARE_CRIMANAPLUGIN_CRIMANAUNITY_USELEGACYDECODER_PC_OFFSET UNITYSDK_OFFSET(0x1FBC3FD0)
#define CRIWARE_CRIMANAPLUGIN_CRIMANA_USESTREAMERMANAGER_OFFSET UNITYSDK_OFFSET(0x1FBC4C10)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE2348B5C8_OFFSET UNITYSDK_OFFSET(0x1FBC4AB0)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE356279DC_OFFSET UNITYSDK_OFFSET(0x1FBC4A30)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE3D003B8C_OFFSET UNITYSDK_OFFSET(0x1FBC3E70)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE4084722B_OFFSET UNITYSDK_OFFSET(0x1FBC4D60)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE5013D8DF_OFFSET UNITYSDK_OFFSET(0x1FBC3D00)
#define CRIWARE_CRIMANAPLUGIN_CRIWARE88224C7A_OFFSET UNITYSDK_OFFSET(0x1FBC49B0)
#define CRIWARE_CRIMANAPLUGIN_FINALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x1FBC45B0)
#define CRIWARE_CRIMANAPLUGIN_GETPRIMEBUFFERALIGNMENTSIZE_OFFSET UNITYSDK_OFFSET(0x1FBC4C90)
#define CRIWARE_CRIMANAPLUGIN_INITIALIZELIBRARY_OFFSET UNITYSDK_OFFSET(0x1FBC4050)
#define CRIWARE_CRIMANAPLUGIN_ISLIBRARYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1FBC44E0)
#define CRIWARE_CRIMANAPLUGIN_REMOVE_ONBEFOREINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FBC3AC0)
#define CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_PC_OFFSET UNITYSDK_OFFSET(0x1FBC3D90)
#define CRIWARE_CRIMANAPLUGIN_SETCONFIGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1FBC3BA0)
#define CRIWARE_CRIMANAPLUGIN_USELEGACYDECODER_PC_OFFSET UNITYSDK_OFFSET(0x1FBC3EF0)
#define CRIWARE_CRIMANAPLUGIN_USESTREAMERMANAGER_OFFSET UNITYSDK_OFFSET(0x1FBC4B30)
#define CRIWARE_CRIMANAPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBC4DF0)
#define CRIWARE_CRIMANAPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBC4DE0)

namespace CriWare
{
	inline static constexpr unsigned int CriManaPlugin_TypeDefinitionIndex = 34976;

	class CriManaPlugin : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_OnBeforeInitialize()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CriManaPlugin_TypeDefinitionIndex)->GetStaticField(0x29300);
		}
		static ::System::Action** StaticGet_OnInitialized()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CriManaPlugin_TypeDefinitionIndex)->GetStaticField(0x29308);
		}
		static ::System::Action** StaticGet_OnBeforeFinalize()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CriManaPlugin_TypeDefinitionIndex)->GetStaticField(0x29310);
		}
		static ::System::Action** StaticGet_OnFinalized()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CriManaPlugin_TypeDefinitionIndex)->GetStaticField(0x29318);
		}
		static ::System::Boolean* StaticGet_enabledMultithreadedRendering()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriManaPlugin_TypeDefinitionIndex)->GetStaticField(0x84D0);
		}
		static ::System::Boolean* StaticGet_isConfigured()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CriManaPlugin_TypeDefinitionIndex)->GetStaticField(0x84D1);
		}
		static ::System::Int32* StaticGet_renderingEventOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriManaPlugin_TypeDefinitionIndex)->GetStaticField(0x84D4);
		}
		static ::System::Int32* StaticGet_initializationCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriManaPlugin_TypeDefinitionIndex)->GetStaticField(0x84D8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN__CCTOR_OFFSET))();
		}

		static ::System::Void add_OnBeforeInitialize(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_ADD_ONBEFOREINITIALIZE_OFFSET))(value);
		}

		static ::System::Void remove_OnBeforeInitialize(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_REMOVE_ONBEFOREINITIALIZE_OFFSET))(value);
		}

		static ::System::Void SetConfigParameters(::System::Boolean graphicsMultiThreaded, ::System::Int32 num_decoders, ::System::Int32 max_num_of_entries)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETCONFIGPARAMETERS_OFFSET))(graphicsMultiThreaded, num_decoders, max_num_of_entries);
		}

		static ::System::Void SetConfigAdditonalParameters_PC(::System::Boolean use_h264_playback)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_SETCONFIGADDITONALPARAMETERS_PC_OFFSET))(use_h264_playback);
		}

		static ::System::Void UseLegacyDecoder_PC(::System::Boolean useLegacyDecoder)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_USELEGACYDECODER_PC_OFFSET))(useLegacyDecoder);
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

		static ::System::Void UseStreamerManager(::System::Boolean flag)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_USESTREAMERMANAGER_OFFSET))(flag);
		}

		static ::System::UInt32 GetPrimeBufferAlignmentSize()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_GETPRIMEBUFFERALIGNMENTSIZE_OFFSET))();
		}

		static ::System::Void CRIWARE5013D8DF(::System::Int32 graphics_api, ::System::Boolean graphics_multi_threaded, ::System::Int32 num_decoders, ::System::Int32 num_of_max_entries)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE5013D8DF_OFFSET))(graphics_api, graphics_multi_threaded, num_decoders, num_of_max_entries);
		}

		static ::System::Void CRIWARE88224C7A()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE88224C7A_OFFSET))();
		}

		static ::System::Boolean CRIWARE356279DC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE356279DC_OFFSET))();
		}

		static ::System::Void CRIWARE2348B5C8()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE2348B5C8_OFFSET))();
		}

		static ::System::UInt32 CRIWARE4084722B()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE4084722B_OFFSET))();
		}

		static ::System::Void criMana_UseStreamerManager(::System::Boolean flag)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIMANA_USESTREAMERMANAGER_OFFSET))(flag);
		}

		static ::System::Void criManaUnity_UseLegacyDecoder_PC(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIMANAUNITY_USELEGACYDECODER_PC_OFFSET))(enable);
		}

		static ::System::Void CRIWARE3D003B8C(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANAPLUGIN_CRIWARE3D003B8C_OFFSET))(enable);
		}
	};
}
