#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/ConfigUIScriptableAnimationV2IndexEntry.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGUISCRIPTABLEANIMATIONV2INDEX_GET_INDEXASSETPATH_OFFSET UNITYSDK_OFFSET(0x14384100)
#define MOLEMOLE_CONFIG_CONFIGUISCRIPTABLEANIMATIONV2INDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x14384150)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIScriptableAnimationV2Index_TypeDefinitionIndex = 65715;

	class ConfigUIScriptableAnimationV2Index : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		// static const ::System::String* ASSET_PATH; // 0x0
		::Il2CppArray<::MoleMole::Config::ConfigUIScriptableAnimationV2IndexEntry>* Entries; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISCRIPTABLEANIMATIONV2INDEX__CTOR_OFFSET))(this);
		}

		static ::Foundation::AssetPath get_IndexAssetPath()
		{
			return ((::Foundation::AssetPath(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISCRIPTABLEANIMATIONV2INDEX_GET_INDEXASSETPATH_OFFSET))();
		}
	};
}
