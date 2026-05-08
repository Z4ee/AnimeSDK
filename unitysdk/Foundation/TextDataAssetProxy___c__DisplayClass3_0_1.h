#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

namespace Foundation
{
	inline static constexpr unsigned int TextDataAssetProxy___c__DisplayClass3_0_1_TypeDefinitionIndex = 75745;

	template <typename T>
	class TextDataAssetProxy___c__DisplayClass3_0_1 : public ::System::Object
	{
	public:
		::System::Action_1<T>* complete; // 0x0
		::Foundation::AssetPath configPath; // 0x0
	};
}
