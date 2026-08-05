#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SIRENIX_UTILITIES_SIRENIXASSETPATHS_TOPATHSAFESTRING_OFFSET UNITYSDK_OFFSET(0x1F263BD0)
#define SIRENIX_UTILITIES_SIRENIXASSETPATHS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F263AE0)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int SirenixAssetPaths_TypeDefinitionIndex = 6511;

	class SirenixAssetPaths : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_OdinResourcesPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SirenixAssetPaths_TypeDefinitionIndex)->GetStaticField(0x5A40);
		}
		static ::System::String** StaticGet_OdinPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SirenixAssetPaths_TypeDefinitionIndex)->GetStaticField(0x5A48);
		}
		static ::System::String** StaticGet_OdinResourcesConfigsPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SirenixAssetPaths_TypeDefinitionIndex)->GetStaticField(0x5A50);
		}
		static ::System::String** StaticGet_OdinTempPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SirenixAssetPaths_TypeDefinitionIndex)->GetStaticField(0x5A58);
		}
		static ::System::String** StaticGet_SirenixAssetsPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SirenixAssetPaths_TypeDefinitionIndex)->GetStaticField(0x5A60);
		}
		static ::System::String** StaticGet_OdinEditorConfigsPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SirenixAssetPaths_TypeDefinitionIndex)->GetStaticField(0x5A68);
		}
		static ::System::String** StaticGet_SirenixPluginPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SirenixAssetPaths_TypeDefinitionIndex)->GetStaticField(0x5A70);
		}
		static ::System::String** StaticGet_SirenixAssembliesPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SirenixAssetPaths_TypeDefinitionIndex)->GetStaticField(0x5A78);
		}
		// static const ::System::String* DefaultSirenixPluginPath; // 0x0
		// static const ::System::String* SirenixAssetPathsSOGuid; // 0x0
		// static const ::System::String* LookupAssetName; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_SIRENIXASSETPATHS__CCTOR_OFFSET))();
		}

		static ::System::String* ToPathSafeString(::System::String* name, ::System::Char replace)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_SIRENIXASSETPATHS_TOPATHSAFESTRING_OFFSET))(name, replace);
		}
	};
}
