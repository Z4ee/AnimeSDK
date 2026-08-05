#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/ConfigHollowAssetPath_HollowAssetPathKey.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWASSETPATH_GETASSETPATH_OFFSET UNITYSDK_OFFSET(0x14375C60)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWASSETPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x14375D10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowAssetPath_TypeDefinitionIndex = 84350;

	class ConfigHollowAssetPath : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ConfigHollowAssetPath_HollowAssetPathKey, ::Foundation::AssetPath>* AssetPaths; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWASSETPATH__CTOR_OFFSET))(this);
		}

		::Foundation::AssetPath GetAssetPath(::MoleMole::Config::ConfigHollowAssetPath_HollowAssetPathKey key)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::MoleMole::Config::ConfigHollowAssetPath_HollowAssetPathKey))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWASSETPATH_GETASSETPATH_OFFSET))(this, key);
		}
	};
}
