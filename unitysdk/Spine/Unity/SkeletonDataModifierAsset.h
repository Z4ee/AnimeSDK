#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace Spine { class SkeletonData; }

#define SPINE_UNITY_SKELETONDATAMODIFIERASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x168A1830)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonDataModifierAsset_TypeDefinitionIndex = 42204;

	class SkeletonDataModifierAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONDATAMODIFIERASSET__CTOR_OFFSET))(this);
		}
	};
}
