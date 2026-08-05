#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }

namespace MoleMole
{
	inline static constexpr unsigned int UIRABAutoBattleBase3DModelController_SAssetInfo_TypeDefinitionIndex = 86933;

	struct alignas(8) UIRABAutoBattleBase3DModelController_SAssetInfo
	{
		::Foundation::AssetPath AssetPath; // 0x10
		::Foundation::AssetRequestHandle AssetRequestHandle; // 0x20
		::UnityEngine::GameObject* Model; // 0x40
	};
}
