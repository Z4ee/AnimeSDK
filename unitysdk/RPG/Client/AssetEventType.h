#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AssetEventType_TypeDefinitionIndex = 39225;

	enum class AssetEventType : ::System::Int32
	{
		BundleLoadSync = 0,
		BundleLoadAsync = 1,
		BundleLoadForce = 2,
		BundleLoadWait = 3,
		BundleUnload = 4,
		AssetLoadSync = 5,
		AssetLoadAsync = 6,
		AssetLoadForce = 7,
		BundleLoadFailed = 8,
		BundleLoadTry = 9,
		Count = 10,
	};
}
