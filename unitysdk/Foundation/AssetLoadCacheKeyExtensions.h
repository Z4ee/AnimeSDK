#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadCacheKey.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Foundation { class IAssetRequest; }
namespace System { class String; }
namespace System { class Type; }

#define FOUNDATION_ASSETLOADCACHEKEYEXTENSIONS_TOLOADCACHEKEY_1_OFFSET UNITYSDK_OFFSET(0x1BADEF00)
#define FOUNDATION_ASSETLOADCACHEKEYEXTENSIONS_TOLOADCACHEKEY_2_OFFSET UNITYSDK_OFFSET(0x1BADEF80)
#define FOUNDATION_ASSETLOADCACHEKEYEXTENSIONS_TOLOADCACHEKEY_OFFSET UNITYSDK_OFFSET(0x1BADEE70)

namespace Foundation
{
	inline static constexpr unsigned int AssetLoadCacheKeyExtensions_TypeDefinitionIndex = 7928;

	class AssetLoadCacheKeyExtensions : public ::System::Object
	{
	public:
		static ::Foundation::AssetLoadCacheKey ToLoadCacheKey(::Foundation::IAssetRequest* request)
		{
			return ((::Foundation::AssetLoadCacheKey(*)(::Foundation::IAssetRequest*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEYEXTENSIONS_TOLOADCACHEKEY_OFFSET))(request);
		}

		static ::Foundation::AssetLoadCacheKey ToLoadCacheKey_1(::System::ValueTuple_2<::Foundation::AssetPath, ::System::Type*> tuple)
		{
			return ((::Foundation::AssetLoadCacheKey(*)(::System::ValueTuple_2<::Foundation::AssetPath, ::System::Type*>))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEYEXTENSIONS_TOLOADCACHEKEY_1_OFFSET))(tuple);
		}

		static ::Foundation::AssetLoadCacheKey ToLoadCacheKey_2(::System::ValueTuple_2<::System::String*, ::System::Type*> tuple)
		{
			return ((::Foundation::AssetLoadCacheKey(*)(::System::ValueTuple_2<::System::String*, ::System::Type*>))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADCACHEKEYEXTENSIONS_TOLOADCACHEKEY_2_OFFSET))(tuple);
		}
	};
}
