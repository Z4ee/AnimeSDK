#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_ASSETPATHCONSTANTS_FORMATBYTEPATH_OFFSET UNITYSDK_OFFSET(0x1E1E9AC0)
#define FOUNDATION_ASSETPATHCONSTANTS_FORMATICONPATH_OFFSET UNITYSDK_OFFSET(0x1E1E9840)
#define FOUNDATION_ASSETPATHCONSTANTS_FORMATJSONPATH_OFFSET UNITYSDK_OFFSET(0x1E1E9980)
#define FOUNDATION_ASSETPATHCONSTANTS_FORMATPATH_OFFSET UNITYSDK_OFFSET(0x1E1E94B0)
#define FOUNDATION_ASSETPATHCONSTANTS_FORMATPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1E1E95C0)
#define FOUNDATION_ASSETPATHCONSTANTS_FORMATSCRIPTASSETPATH_OFFSET UNITYSDK_OFFSET(0x1E1E9700)
#define FOUNDATION_ASSETPATHCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E9C00)

namespace Foundation
{
	inline static constexpr unsigned int AssetPathConstants_TypeDefinitionIndex = 8240;

	class AssetPathConstants : public ::System::Object
	{
	public:
		static ::Foundation::AssetPath* StaticGet_DISPLAYCASE_WEAPON_BASE()
		{
			return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstants_TypeDefinitionIndex)->GetStaticField(0x6FA0);
		}
		static ::Foundation::AssetPath* StaticGet_CONFIG_DISPLAYCASE_PATH()
		{
			return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstants_TypeDefinitionIndex)->GetStaticField(0x6FB0);
		}
		static ::Foundation::AssetPath* StaticGet_CONFIG_PHOTOWALL_PATH()
		{
			return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstants_TypeDefinitionIndex)->GetStaticField(0x6FC0);
		}
		static ::Foundation::AssetPath* StaticGet_PHOTOWALL_OBJECT_DATA_PATH()
		{
			return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstants_TypeDefinitionIndex)->GetStaticField(0x6FD0);
		}
		static ::Foundation::AssetPath* StaticGet_OneWayDoorParticlePrefabAssetPath()
		{
			return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstants_TypeDefinitionIndex)->GetStaticField(0x6FE0);
		}
		static ::Foundation::AssetPath* StaticGet_META_CONFIG_PATH()
		{
			return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstants_TypeDefinitionIndex)->GetStaticField(0x6FF0);
		}
		static ::Foundation::AssetPath* StaticGet_UISimpleParkourConfigAssetPath()
		{
			return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstants_TypeDefinitionIndex)->GetStaticField(0x7000);
		}
		static ::Foundation::AssetPath* StaticGet_DoorNormalDroneFencePrefabAssetPath()
		{
			return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstants_TypeDefinitionIndex)->GetStaticField(0x7010);
		}
		static ::Foundation::AssetPath* StaticGet_DoorNormalNoEffectPrefabAssetPath()
		{
			return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstants_TypeDefinitionIndex)->GetStaticField(0x7020);
		}
		static ::Foundation::AssetPath* StaticGet_CameraPrefabPath()
		{
			return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstants_TypeDefinitionIndex)->GetStaticField(0x7030);
		}
		static ::Foundation::AssetPath* StaticGet_AsistantCameraPrefabPath()
		{
			return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstants_TypeDefinitionIndex)->GetStaticField(0x7040);
		}
		static ::Foundation::AssetPath* StaticGet_AUTO_META_CONFIG_PATH()
		{
			return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstants_TypeDefinitionIndex)->GetStaticField(0x7050);
		}
		static ::Foundation::AssetPath* StaticGet_GameplayTagSettingPath()
		{
			return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstants_TypeDefinitionIndex)->GetStaticField(0x7060);
		}
		static ::Foundation::AssetPath* StaticGet_DoorNormalParticlePrefabAssetPath()
		{
			return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstants_TypeDefinitionIndex)->GetStaticField(0x7070);
		}
		static ::Foundation::AssetPath* StaticGet_InLevelScoreUIRatingConfigAssetPath()
		{
			return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstants_TypeDefinitionIndex)->GetStaticField(0x7080);
		}
		static ::Foundation::AssetPath* StaticGet_CameraGlobalConfigPath()
		{
			return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(AssetPathConstants_TypeDefinitionIndex)->GetStaticField(0x7090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATHCONSTANTS__CCTOR_OFFSET))();
		}

		static ::Foundation::AssetPath FormatPath(::System::String* path)
		{
			return ((::Foundation::AssetPath(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATHCONSTANTS_FORMATPATH_OFFSET))(path);
		}

		static ::Foundation::AssetPath FormatPrefabPath(::System::String* path)
		{
			return ((::Foundation::AssetPath(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATHCONSTANTS_FORMATPREFABPATH_OFFSET))(path);
		}

		static ::Foundation::AssetPath FormatScriptAssetPath(::System::String* path)
		{
			return ((::Foundation::AssetPath(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATHCONSTANTS_FORMATSCRIPTASSETPATH_OFFSET))(path);
		}

		static ::Foundation::AssetPath FormatIconPath(::System::String* path)
		{
			return ((::Foundation::AssetPath(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATHCONSTANTS_FORMATICONPATH_OFFSET))(path);
		}

		static ::Foundation::AssetPath FormatJsonPath(::System::String* path)
		{
			return ((::Foundation::AssetPath(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATHCONSTANTS_FORMATJSONPATH_OFFSET))(path);
		}

		static ::Foundation::AssetPath FormatBytePath(::System::String* path)
		{
			return ((::Foundation::AssetPath(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPATHCONSTANTS_FORMATBYTEPATH_OFFSET))(path);
		}
	};
}
