#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BANodeHash.h"
#include "unitysdk/UnityEngine/Rendering/BAParamRef.h"

namespace UnityEngine::Rendering { class BAGraphAsset; }
namespace UnityEngine::Rendering { class BAGraphLayerTemplate; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define BAWALKSTOPLAYERGRAPH_GETGRAPH_OFFSET UNITYSDK_OFFSET(0x18E9ABA0)
#define BAWALKSTOPLAYERGRAPH_GETWALKSTOPSTATE_OFFSET UNITYSDK_OFFSET(0x18E9AAD0)
#define BAWALKSTOPLAYERGRAPH_GET_OFFSET UNITYSDK_OFFSET(0x18E9A8B0)
#define BAWALKSTOPLAYERGRAPH_INITCONDITIONS_OFFSET UNITYSDK_OFFSET(0x18E9A8C0)
#define BAWALKSTOPLAYERGRAPH_INIT_OFFSET UNITYSDK_OFFSET(0x18E9A2B0)
#define BAWALKSTOPLAYERGRAPH_SETSTATECLIP_OFFSET UNITYSDK_OFFSET(0x18E9AAF0)
#define BAWALKSTOPLAYERGRAPH_STARTSTATE_OFFSET UNITYSDK_OFFSET(0x18E9AAB0)
#define BAWALKSTOPLAYERGRAPH_TOSTOP_OFFSET UNITYSDK_OFFSET(0x18E9AB70)
#define BAWALKSTOPLAYERGRAPH_TOWALK_OFFSET UNITYSDK_OFFSET(0x18E9AB40)
#define BAWALKSTOPLAYERGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x18E9A260)

inline static constexpr unsigned int BAWalkStopLayerGraph_TypeDefinitionIndex = 35138;

class BAWalkStopLayerGraph : public ::System::Object
{
public:
	static ::BAWalkStopLayerGraph** StaticGet__Graph()
	{
		return (::BAWalkStopLayerGraph**)Il2CppClass::FromTypeDefinitionIndex(BAWalkStopLayerGraph_TypeDefinitionIndex)->GetStaticField(0x60530);
	}
	::Il2CppArray<::UnityEngine::Rendering::BANodeHash>* playNode; // 0x10
	::UnityEngine::Rendering::BAGraphAsset* _walkStopGraph; // 0x18
	::UnityEngine::Rendering::BAParamRef _WalkStopTimeCond; // 0x20
	::UnityEngine::Rendering::BANodeHash walkStopRCondNode; // 0x24
	::UnityEngine::Rendering::BANodeHash walkStopLCondNode; // 0x2C
	::UnityEngine::Rendering::BANodeHash idleCondNode; // 0x34
	::UnityEngine::Rendering::BANodeHash stateGroupNode; // 0x3C
	::UnityEngine::Rendering::BANodeHash walkCondNode; // 0x44
	::UnityEngine::Rendering::BAParamRef _IsMoveCond; // 0x4C
	::UnityEngine::Rendering::BAParamRef _StopIdleTimeCond; // 0x50

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

	::System::Void InitConditions(::UnityEngine::Rendering::BAGraphLayerTemplate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BAGraphLayerTemplate*))((::PBYTE)hIl2Cpp + BAWALKSTOPLAYERGRAPH_INITCONDITIONS_OFFSET))(this, a1);
	}

	::System::Void StartState(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32))((::PBYTE)hIl2Cpp + BAWALKSTOPLAYERGRAPH_STARTSTATE_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetWalkStopState(::UnityEngine::Rendering::BatchAnimationInstance* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + BAWALKSTOPLAYERGRAPH_GETWALKSTOPSTATE_OFFSET))(this, a1);
	}

	::System::Void SetStateClip(::UnityEngine::Rendering::BANodeHash& a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BANodeHash&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BAWALKSTOPLAYERGRAPH_SETSTATECLIP_OFFSET))(this, a1, a2, a3);
	}

	::System::Void ToWalk(::UnityEngine::Rendering::BatchAnimationInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + BAWALKSTOPLAYERGRAPH_TOWALK_OFFSET))(this, a1);
	}

	::System::Void ToStop(::UnityEngine::Rendering::BatchAnimationInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + BAWALKSTOPLAYERGRAPH_TOSTOP_OFFSET))(this, a1);
	}

	static ::BAWalkStopLayerGraph* GetGraph()
	{
		return ((::BAWalkStopLayerGraph*(*)())((::PBYTE)hIl2Cpp + BAWALKSTOPLAYERGRAPH_GETGRAPH_OFFSET))();
	}
};
