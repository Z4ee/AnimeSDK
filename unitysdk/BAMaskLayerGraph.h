#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BANodeHash.h"

namespace UnityEngine::Rendering { class BAGraphAsset; }

#define BAMASKLAYERGRAPH_GET_OFFSET UNITYSDK_OFFSET(0x16A57320)
#define BAMASKLAYERGRAPH_INIT_OFFSET UNITYSDK_OFFSET(0x16A571D0)
#define BAMASKLAYERGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x16A57330)

inline static constexpr unsigned int BAMaskLayerGraph_TypeDefinitionIndex = 29115;

class BAMaskLayerGraph : public ::System::Object
{
public:
	::UnityEngine::Rendering::BAGraphAsset* _boneMaskGraph; // 0x10
	::UnityEngine::Rendering::BANodeHash maskClipNode; // 0x18
	::UnityEngine::Rendering::BANodeHash outputNode; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMASKLAYERGRAPH__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMASKLAYERGRAPH_INIT_OFFSET))(this);
	}

	::UnityEngine::Rendering::BAGraphAsset* Get()
	{
		return ((::UnityEngine::Rendering::BAGraphAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMASKLAYERGRAPH_GET_OFFSET))(this);
	}
};
