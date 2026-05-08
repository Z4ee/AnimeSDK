#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class AssetRequestCompleteDel; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

namespace Foundation
{
	inline static constexpr unsigned int MihoyoSerializedSOAssetProxy___c__DisplayClass15_0_1_TypeDefinitionIndex = 7884;

	template <typename T>
	class MihoyoSerializedSOAssetProxy___c__DisplayClass15_0_1 : public ::System::Object
	{
	public:
		::System::Action_1<T>* complete; // 0x0
		::System::Action_1<::Foundation::AssetRequestHandle>* __9__3; // 0x0
		::Foundation::AssetRequestCompleteDel* __9__2; // 0x0
	};
}
