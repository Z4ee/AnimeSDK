#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Object; }

#define RPG_CLIENT_CACHEDASSETLOADER_ASSETOBJECTNODE_CLEAR_OFFSET UNITYSDK_OFFSET(0xC8D5E70)
#define RPG_CLIENT_CACHEDASSETLOADER_ASSETOBJECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0xC8D5EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int CachedAssetLoader_AssetObjectNode_TypeDefinitionIndex = 59433;

	class CachedAssetLoader_AssetObjectNode : public ::System::Object
	{
	public:
		::UnityEngine::Object* AssetObject; // 0x10
		::RPG::Client::CachedAssetLoader_AssetObjectNode* NextNode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_ASSETOBJECTNODE__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CACHEDASSETLOADER_ASSETOBJECTNODE_CLEAR_OFFSET))(this);
		}
	};
}
