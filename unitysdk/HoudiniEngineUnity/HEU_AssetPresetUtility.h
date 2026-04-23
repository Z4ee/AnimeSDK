#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_ASSETPRESETUTILITY_LOADPRESETFILEINTOASSETANDCOOK_OFFSET UNITYSDK_OFFSET(0x8C2F7D0)
#define HOUDINIENGINEUNITY_HEU_ASSETPRESETUTILITY_SAVEASSETPRESETTOFILE_OFFSET UNITYSDK_OFFSET(0x8C2F3F0)
#define HOUDINIENGINEUNITY_HEU_ASSETPRESETUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x8C2FD90)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetPresetUtility_TypeDefinitionIndex = 43486;

	class HEU_AssetPresetUtility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_PRESET_IDENTIFIER()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(HEU_AssetPresetUtility_TypeDefinitionIndex)->GetStaticField(0x3D4B0);
		}
		static ::System::Int32* StaticGet_PRESET_VERSION()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HEU_AssetPresetUtility_TypeDefinitionIndex)->GetStaticField(0xD9C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETPRESETUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Void SaveAssetPresetToFile(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::String* filePath)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETPRESETUTILITY_SAVEASSETPRESETTOFILE_OFFSET))(asset, filePath);
		}

		static ::System::Void LoadPresetFileIntoAssetAndCook(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::System::String* filePath)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETPRESETUTILITY_LOADPRESETFILEINTOASSETANDCOOK_OFFSET))(asset, filePath);
		}
	};
}
