#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_ASSETPRESETUTILITY_LOADPRESETFILEINTOASSETANDCOOK_OFFSET UNITYSDK_OFFSET(0x1B8A5BA0)
#define HOUDINIENGINEUNITY_HEU_ASSETPRESETUTILITY_SAVEASSETPRESETTOFILE_OFFSET UNITYSDK_OFFSET(0x1B8A56D0)
#define HOUDINIENGINEUNITY_HEU_ASSETPRESETUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8A61E0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetPresetUtility_TypeDefinitionIndex = 40372;

	class HEU_AssetPresetUtility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_PRESET_IDENTIFIER()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(HEU_AssetPresetUtility_TypeDefinitionIndex)->GetStaticField(0x5AEF0);
		}
		static ::System::Int32* StaticGet_PRESET_VERSION()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HEU_AssetPresetUtility_TypeDefinitionIndex)->GetStaticField(0x13AA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETPRESETUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Void SaveAssetPresetToFile(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETPRESETUTILITY_SAVEASSETPRESETTOFILE_OFFSET))(a1, a2);
		}

		static ::System::Void LoadPresetFileIntoAssetAndCook(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETPRESETUTILITY_LOADPRESETFILEINTOASSETANDCOOK_OFFSET))(a1, a2);
		}
	};
}
