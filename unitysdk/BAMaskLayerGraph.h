#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BANodeHash.h"

class BADefaultGraph;
namespace UnityEngine::Rendering { class BAGraphAsset; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define BAMASKLAYERGRAPH_GETGRAPH_OFFSET UNITYSDK_OFFSET(0x180F73A0)
#define BAMASKLAYERGRAPH_GET_OFFSET UNITYSDK_OFFSET(0x180F7240)
#define BAMASKLAYERGRAPH_INIT_OFFSET UNITYSDK_OFFSET(0x180F7090)
#define BAMASKLAYERGRAPH_PLAYCLIP_OFFSET UNITYSDK_OFFSET(0x180F7250)
#define BAMASKLAYERGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x180F7080)

inline static constexpr unsigned int BAMaskLayerGraph_TypeDefinitionIndex = 34853;

class BAMaskLayerGraph : public ::System::Object
{
public:
	static ::BAMaskLayerGraph** StaticGet__Graph()
	{
		return (::BAMaskLayerGraph**)Il2CppClass::FromTypeDefinitionIndex(BAMaskLayerGraph_TypeDefinitionIndex)->GetStaticField(0x65840);
	}
	::UnityEngine::Rendering::BAGraphAsset* _boneMaskGraph; // 0x10
	::UnityEngine::Rendering::BANodeHash sampleMaskNode; // 0x18
	::UnityEngine::Rendering::BANodeHash maskClipNode; // 0x20
	::UnityEngine::Rendering::BANodeHash outputNode; // 0x28

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

	::System::Void PlayClip(::UnityEngine::Rendering::BatchAnimationInstance* instance, ::System::Int32 clipIndex, ::System::Int32 maskindex, ::System::Boolean play, ::BADefaultGraph* defaultGraph, ::System::Int32 layer)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32, ::System::Int32, ::System::Boolean, ::BADefaultGraph*, ::System::Int32))((::PBYTE)hIl2Cpp + BAMASKLAYERGRAPH_PLAYCLIP_OFFSET))(this, instance, clipIndex, maskindex, play, defaultGraph, layer);
	}

	static ::BAMaskLayerGraph* GetGraph()
	{
		return ((::BAMaskLayerGraph*(*)())((::PBYTE)hIl2Cpp + BAMASKLAYERGRAPH_GETGRAPH_OFFSET))();
	}
};
