#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLazyLoadItem_1_TypeDefinitionIndex = 59448;

	template <typename SoType>
	class ConfigLazyLoadItem_1 : public ::System::Object
	{
	public:
		::Foundation::AssetPath _assetPath; // 0x0
		SoType _config; // 0x0
	};
}
