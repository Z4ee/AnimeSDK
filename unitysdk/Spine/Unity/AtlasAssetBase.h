#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace Spine { class Atlas; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Material; }

#define SPINE_UNITY_ATLASASSETBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E2CD50)

namespace Spine::Unity
{
	inline static constexpr unsigned int AtlasAssetBase_TypeDefinitionIndex = 40552;

	class AtlasAssetBase : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_ATLASASSETBASE__CTOR_OFFSET))(this);
		}
	};
}
