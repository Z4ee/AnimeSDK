#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BANodeHash.h"

class BADefaultGraph;
namespace UnityEngine::Rendering { class BAGraphAsset; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define BAMASKLAYERGRAPH_GETGRAPH_OFFSET UNITYSDK_OFFSET(0x1C65F260)
#define BAMASKLAYERGRAPH_GET_OFFSET UNITYSDK_OFFSET(0x1C65F100)
#define BAMASKLAYERGRAPH_INIT_OFFSET UNITYSDK_OFFSET(0x1C65EF70)
#define BAMASKLAYERGRAPH_PLAYCLIP_OFFSET UNITYSDK_OFFSET(0x1C65F110)
#define BAMASKLAYERGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C65EF60)

inline static constexpr unsigned int BAMaskLayerGraph_TypeDefinitionIndex = 36779;

class BAMaskLayerGraph : public ::System::Object
{
public:
	static ::BAMaskLayerGraph** StaticGet__Graph()
	{
		return (::BAMaskLayerGraph**)Il2CppClass::FromTypeDefinitionIndex(BAMaskLayerGraph_TypeDefinitionIndex)->GetStaticField(0x2F0A0);
	}
	::UnityEngine::Rendering::BAGraphAsset* _boneMaskGraph; // 0x10
	::UnityEngine::Rendering::BANodeHash outputNode; // 0x18
	::UnityEngine::Rendering::BANodeHash maskClipNode; // 0x20
	::UnityEngine::Rendering::BANodeHash sampleMaskNode; // 0x28

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

	::System::Void PlayClip(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::BADefaultGraph* a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32, ::System::Int32, ::System::Boolean, ::BADefaultGraph*, ::System::Int32))((::PBYTE)hIl2Cpp + BAMASKLAYERGRAPH_PLAYCLIP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::BAMaskLayerGraph* GetGraph()
	{
		return ((::BAMaskLayerGraph*(*)())((::PBYTE)hIl2Cpp + BAMASKLAYERGRAPH_GETGRAPH_OFFSET))();
	}
};
