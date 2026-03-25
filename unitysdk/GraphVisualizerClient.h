#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GRAPHVISUALIZERCLIENT_CLEARGRAPHS_OFFSET UNITYSDK_OFFSET(0x187B0460)
#define GRAPHVISUALIZERCLIENT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x187B02B0)
#define GRAPHVISUALIZERCLIENT_GETGRAPHS_OFFSET UNITYSDK_OFFSET(0x187B04B0)
#define GRAPHVISUALIZERCLIENT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x187B00F0)
#define GRAPHVISUALIZERCLIENT_HIDE_OFFSET UNITYSDK_OFFSET(0x187B03C0)
#define GRAPHVISUALIZERCLIENT_SHOW_OFFSET UNITYSDK_OFFSET(0x187B0340)
#define GRAPHVISUALIZERCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x187B0210)

inline static constexpr unsigned int GraphVisualizerClient_TypeDefinitionIndex = 35062;

class GraphVisualizerClient : public ::System::Object
{
public:
	static ::GraphVisualizerClient** StaticGet_s_Instance()
	{
		return (::GraphVisualizerClient**)Il2CppClass::FromTypeDefinitionIndex(GraphVisualizerClient_TypeDefinitionIndex)->GetStaticField(0x10C0);
	}
	::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableGraph>* m_Graphs; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHVISUALIZERCLIENT__CTOR_OFFSET))(this);
	}

	static ::GraphVisualizerClient* get_instance()
	{
		return ((::GraphVisualizerClient*(*)())((::PBYTE)hIl2Cpp + GRAPHVISUALIZERCLIENT_GET_INSTANCE_OFFSET))();
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRAPHVISUALIZERCLIENT_FINALIZE_OFFSET))(this);
	}

	static ::System::Void Show(::UnityEngine::Playables::PlayableGraph graph)
	{
		return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + GRAPHVISUALIZERCLIENT_SHOW_OFFSET))(graph);
	}

	static ::System::Void Hide(::UnityEngine::Playables::PlayableGraph graph)
	{
		return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph))((::PBYTE)hIl2Cpp + GRAPHVISUALIZERCLIENT_HIDE_OFFSET))(graph);
	}

	static ::System::Void ClearGraphs()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GRAPHVISUALIZERCLIENT_CLEARGRAPHS_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableGraph>* GetGraphs()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableGraph>*(*)())((::PBYTE)hIl2Cpp + GRAPHVISUALIZERCLIENT_GETGRAPHS_OFFSET))();
	}
};
