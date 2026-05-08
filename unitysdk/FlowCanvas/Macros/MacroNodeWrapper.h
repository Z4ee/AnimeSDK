#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas::Macros { class Macro; }
namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework::Internal { class BBMappingParameter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1B0E9150)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_GET_MACRO_OFFSET UNITYSDK_OFFSET(0x1B0E9350)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B0E8FA0)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_MAKEINSTANCEWITHOUTGATHERPORTS_OFFSET UNITYSDK_OFFSET(0x1B0E97D0)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_MAKEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B0E97B0)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_GET_CURRENTINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B0E9580)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_GET_INSTANCES_OFFSET UNITYSDK_OFFSET(0x1B0E9660)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_GET_SUBGRAPHPARAMETER_OFFSET UNITYSDK_OFFSET(0x1B0E9650)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_GET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1B0E94F0)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_GET_VARIABLESMAP_OFFSET UNITYSDK_OFFSET(0x1B0E9630)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_SET_CURRENTINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B0E9590)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_SET_INSTANCES_OFFSET UNITYSDK_OFFSET(0x1B0E9760)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_SET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1B0E9500)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_SET_VARIABLESMAP_OFFSET UNITYSDK_OFFSET(0x1B0E9640)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B0E9A60)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B0E9C00)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B0E9E60)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_SET_MACRO_OFFSET UNITYSDK_OFFSET(0x1B0E9360)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER_SET_TMACRO_OFFSET UNITYSDK_OFFSET(0x1B0E94E0)
#define FLOWCANVAS_MACROS_MACRONODEWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0EA710)

namespace FlowCanvas::Macros
{
	inline static constexpr unsigned int MacroNodeWrapper_TypeDefinitionIndex = 27152;

	class MacroNodeWrapper : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::Macros::Macro* _currentInstance; // 0xA8
		::FlowCanvas::Macros::Macro* _macro; // 0xB0
		::System::Boolean hasInstanced; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_GET_NAME_OFFSET))(this);
		}

		::System::String* get_description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_GET_DESCRIPTION_OFFSET))(this);
		}

		::FlowCanvas::Macros::Macro* get_macro()
		{
			return ((::FlowCanvas::Macros::Macro*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_GET_MACRO_OFFSET))(this);
		}

		::System::Void set_macro(::FlowCanvas::Macros::Macro* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Macros::Macro*))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_SET_MACRO_OFFSET))(this, value);
		}

		::System::Void set_TMacro(::FlowCanvas::Macros::Macro* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Macros::Macro*))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_SET_TMACRO_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Graph* NodeCanvas_Framework_IGraphAssignable_get_subGraph()
		{
			return ((::NodeCanvas::Framework::Graph*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_GET_SUBGRAPH_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IGraphAssignable_set_subGraph(::NodeCanvas::Framework::Graph* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_SET_SUBGRAPH_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Graph* NodeCanvas_Framework_IGraphAssignable_get_currentInstance()
		{
			return ((::NodeCanvas::Framework::Graph*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_GET_CURRENTINSTANCE_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IGraphAssignable_set_currentInstance(::NodeCanvas::Framework::Graph* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_SET_CURRENTINSTANCE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Internal::BBMappingParameter*>* NodeCanvas_Framework_IGraphAssignable_get_variablesMap()
		{
			return ((::System::Collections::Generic::List_1<::NodeCanvas::Framework::Internal::BBMappingParameter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_GET_VARIABLESMAP_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IGraphAssignable_set_variablesMap(::System::Collections::Generic::List_1<::NodeCanvas::Framework::Internal::BBMappingParameter*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NodeCanvas::Framework::Internal::BBMappingParameter*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_SET_VARIABLESMAP_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::BBParameter* NodeCanvas_Framework_IGraphAssignable_get_subGraphParameter()
		{
			return ((::NodeCanvas::Framework::BBParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_GET_SUBGRAPHPARAMETER_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::NodeCanvas::Framework::Graph*, ::NodeCanvas::Framework::Graph*>* NodeCanvas_Framework_IGraphAssignable_get_instances()
		{
			return ((::System::Collections::Generic::Dictionary_2<::NodeCanvas::Framework::Graph*, ::NodeCanvas::Framework::Graph*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_GET_INSTANCES_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IGraphAssignable_set_instances(::System::Collections::Generic::Dictionary_2<::NodeCanvas::Framework::Graph*, ::NodeCanvas::Framework::Graph*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::NodeCanvas::Framework::Graph*, ::NodeCanvas::Framework::Graph*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLE_SET_INSTANCES_OFFSET))(this, value);
		}

		::System::Void MakeInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_MAKEINSTANCE_OFFSET))(this);
		}

		::System::Void MakeInstanceWithoutGatherPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_MAKEINSTANCEWITHOUTGATHERPORTS_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IUpdatable_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_MACROS_MACRONODEWRAPPER_REGISTERPORTS_OFFSET))(this);
		}
	};
}
