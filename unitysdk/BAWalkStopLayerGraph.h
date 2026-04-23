#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BANodeHash.h"
#include "unitysdk/UnityEngine/Rendering/BAParamRef.h"

namespace UnityEngine::Rendering { class BAGraphAsset; }
namespace UnityEngine::Rendering { class BAGraphLayerTemplate; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define BAWALKSTOPLAYERGRAPH_GETGRAPH_OFFSET UNITYSDK_OFFSET(0x180F7DA0)
#define BAWALKSTOPLAYERGRAPH_GETWALKSTOPSTATE_OFFSET UNITYSDK_OFFSET(0x180F7CD0)
#define BAWALKSTOPLAYERGRAPH_GET_OFFSET UNITYSDK_OFFSET(0x180F7AB0)
#define BAWALKSTOPLAYERGRAPH_INITCONDITIONS_OFFSET UNITYSDK_OFFSET(0x180F7AC0)
#define BAWALKSTOPLAYERGRAPH_INIT_OFFSET UNITYSDK_OFFSET(0x180F7470)
#define BAWALKSTOPLAYERGRAPH_SETSTATECLIP_OFFSET UNITYSDK_OFFSET(0x180F7CF0)
#define BAWALKSTOPLAYERGRAPH_STARTSTATE_OFFSET UNITYSDK_OFFSET(0x180F7CB0)
#define BAWALKSTOPLAYERGRAPH_TOSTOP_OFFSET UNITYSDK_OFFSET(0x180F7D70)
#define BAWALKSTOPLAYERGRAPH_TOWALK_OFFSET UNITYSDK_OFFSET(0x180F7D40)
#define BAWALKSTOPLAYERGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x180F7420)

inline static constexpr unsigned int BAWalkStopLayerGraph_TypeDefinitionIndex = 34855;

class BAWalkStopLayerGraph : public ::System::Object
{
public:
	static ::BAWalkStopLayerGraph** StaticGet__Graph()
	{
		return (::BAWalkStopLayerGraph**)Il2CppClass::FromTypeDefinitionIndex(BAWalkStopLayerGraph_TypeDefinitionIndex)->GetStaticField(0x658A0);
	}
	::Il2CppArray<::UnityEngine::Rendering::BANodeHash>* playNode; // 0x10
	::UnityEngine::Rendering::BAGraphAsset* _walkStopGraph; // 0x18
	::UnityEngine::Rendering::BAParamRef _WalkStopTimeCond; // 0x20
	::UnityEngine::Rendering::BAParamRef _IsMoveCond; // 0x24
	::UnityEngine::Rendering::BANodeHash walkStopRCondNode; // 0x28
	::UnityEngine::Rendering::BANodeHash walkCondNode; // 0x30
	::UnityEngine::Rendering::BANodeHash stateGroupNode; // 0x38
	::UnityEngine::Rendering::BAParamRef _StopIdleTimeCond; // 0x40
	::UnityEngine::Rendering::BANodeHash idleCondNode; // 0x44
	::UnityEngine::Rendering::BANodeHash walkStopLCondNode; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAWALKSTOPLAYERGRAPH__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAWALKSTOPLAYERGRAPH_INIT_OFFSET))(this);
	}

	::UnityEngine::Rendering::BAGraphAsset* Get()
	{
		return ((::UnityEngine::Rendering::BAGraphAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAWALKSTOPLAYERGRAPH_GET_OFFSET))(this);
	}

	::System::Void InitConditions(::UnityEngine::Rendering::BAGraphLayerTemplate* graphTemplate)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BAGraphLayerTemplate*))((::PBYTE)hIl2Cpp + BAWALKSTOPLAYERGRAPH_INITCONDITIONS_OFFSET))(this, graphTemplate);
	}

	::System::Void StartState(::UnityEngine::Rendering::BatchAnimationInstance* instance, ::System::Int32 state)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32))((::PBYTE)hIl2Cpp + BAWALKSTOPLAYERGRAPH_STARTSTATE_OFFSET))(this, instance, state);
	}

	::System::Int32 GetWalkStopState(::UnityEngine::Rendering::BatchAnimationInstance* instance)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + BAWALKSTOPLAYERGRAPH_GETWALKSTOPSTATE_OFFSET))(this, instance);
	}

	::System::Void SetStateClip(::UnityEngine::Rendering::BANodeHash& blendnode, ::System::Int32 state, ::System::Int32 clipIndex)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BANodeHash&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BAWALKSTOPLAYERGRAPH_SETSTATECLIP_OFFSET))(this, blendnode, state, clipIndex);
	}

	::System::Void ToWalk(::UnityEngine::Rendering::BatchAnimationInstance* instance)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + BAWALKSTOPLAYERGRAPH_TOWALK_OFFSET))(this, instance);
	}

	::System::Void ToStop(::UnityEngine::Rendering::BatchAnimationInstance* instance)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + BAWALKSTOPLAYERGRAPH_TOSTOP_OFFSET))(this, instance);
	}

	static ::BAWalkStopLayerGraph* GetGraph()
	{
		return ((::BAWalkStopLayerGraph*(*)())((::PBYTE)hIl2Cpp + BAWALKSTOPLAYERGRAPH_GETGRAPH_OFFSET))();
	}
};
