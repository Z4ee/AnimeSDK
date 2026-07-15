#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitComponent_OutfitPartAsset_2_TypeDefinitionIndex = 54654;

	template <typename TAsset, typename TUserData>
	class CharacterOutfitComponent_OutfitPartAsset_2 : public ::System::Object
	{
	public:
		::System::String* AssetPath; // 0x0
		TAsset Asset; // 0x0
		TUserData UserData; // 0x0
		::RPG::Client::IAssetOperation* Operation; // 0x0
		::RPG::Client::CachedAssetLogicType _LogicType_k__BackingField; // 0x0
	};
}
