#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/AssetRequestStatus.h"

namespace Foundation { class AssetRequestCompleteDel; }
namespace Foundation { class AssetRequestDestroyDel; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

namespace Foundation
{
	inline static constexpr unsigned int IAssetRequest_TypeDefinitionIndex = 8200;

	class IAssetRequest
	{
	public:
	};
}
