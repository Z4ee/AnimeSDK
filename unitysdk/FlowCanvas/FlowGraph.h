#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Graph.h"

namespace FlowCanvas::Macros { class MacroNodeWrapper; }
namespace NodeCanvas::Framework { class IInvokable; }
namespace NodeCanvas::Framework { class IUpdatable; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Object; }

#define FLOWCANVAS_FLOWGRAPH_CALLFUNCTIONASYNC_OFFSET UNITYSDK_OFFSET(0x1B0A9BA0)
#define FLOWCANVAS_FLOWGRAPH_CALLFUNCTION_OFFSET UNITYSDK_OFFSET(0x1B0A9AC0)
#define FLOWCANVAS_FLOWGRAPH_GETAGENTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B0A9D30)
#define FLOWCANVAS_FLOWGRAPH_GET_ALLOWBLACKBOARDOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1B0A9A70)
#define FLOWCANVAS_FLOWGRAPH_GET_BASENODETYPE_OFFSET UNITYSDK_OFFSET(0x1B0A9A40)
#define FLOWCANVAS_FLOWGRAPH_GET_CANACCEPTVARIABLEDROPS_OFFSET UNITYSDK_OFFSET(0x1B0A9AB0)
#define FLOWCANVAS_FLOWGRAPH_GET_ISTREE_OFFSET UNITYSDK_OFFSET(0x1B0A9AA0)
#define FLOWCANVAS_FLOWGRAPH_GET_REQUIRESAGENT_OFFSET UNITYSDK_OFFSET(0x1B0A9A80)
#define FLOWCANVAS_FLOWGRAPH_GET_REQUIRESPRIMENODE_OFFSET UNITYSDK_OFFSET(0x1B0A9A90)
#define FLOWCANVAS_FLOWGRAPH_INITIALIZEMACRO_OFFSET UNITYSDK_OFFSET(0x1B0AA190)
#define FLOWCANVAS_FLOWGRAPH_INITSECONDPASS_OFFSET UNITYSDK_OFFSET(0x1B0AA790)
#define FLOWCANVAS_FLOWGRAPH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B0AAE30)
#define FLOWCANVAS_FLOWGRAPH_ONGRAPHINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B0AA440)
#define FLOWCANVAS_FLOWGRAPH_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1B0AA870)
#define FLOWCANVAS_FLOWGRAPH_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1B0AAC60)
#define FLOWCANVAS_FLOWGRAPH_ONGRAPHUPDATE_OFFSET UNITYSDK_OFFSET(0x1B0AAB10)
#define FLOWCANVAS_FLOWGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0AAF90)

namespace FlowCanvas
{
	inline static constexpr unsigned int FlowGraph_TypeDefinitionIndex = 27340;

	class FlowGraph : public ::NodeCanvas::Framework::Graph
	{
	public:
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::IUpdatable*>* updatableNodes; // 0xC0
		::System::Collections::Generic::List_1<::FlowCanvas::Macros::MacroNodeWrapper*>* macroWrappers; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeCanvas::Framework::IInvokable*>* functions; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Component*>* cachedAgentComponents; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWGRAPH__CTOR_OFFSET))(this);
		}

		::System::Type* get_baseNodeType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWGRAPH_GET_BASENODETYPE_OFFSET))(this);
		}

		::System::Boolean get_allowBlackboardOverrides()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWGRAPH_GET_ALLOWBLACKBOARDOVERRIDES_OFFSET))(this);
		}

		::System::Boolean get_requiresAgent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWGRAPH_GET_REQUIRESAGENT_OFFSET))(this);
		}

		::System::Boolean get_requiresPrimeNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWGRAPH_GET_REQUIRESPRIMENODE_OFFSET))(this);
		}

		::System::Boolean get_isTree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWGRAPH_GET_ISTREE_OFFSET))(this);
		}

		::System::Boolean get_canAcceptVariableDrops()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWGRAPH_GET_CANACCEPTVARIABLEDROPS_OFFSET))(this);
		}

		::System::Object* CallFunction(::System::String* name, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWGRAPH_CALLFUNCTION_OFFSET))(this, name, args);
		}

		::System::Void CallFunctionAsync(::System::String* name, ::System::Action_1<::System::Object*>* callback, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Object*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWGRAPH_CALLFUNCTIONASYNC_OFFSET))(this, name, callback, args);
		}

		::UnityEngine::Object* GetAgentComponent(::System::Type* type)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWGRAPH_GETAGENTCOMPONENT_OFFSET))(this, type);
		}

		::System::Void InitializeMacro(::System::Boolean gatherPorts)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWGRAPH_INITIALIZEMACRO_OFFSET))(this, gatherPorts);
		}

		::System::Void OnGraphInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWGRAPH_ONGRAPHINITIALIZE_OFFSET))(this);
		}

		::System::Void InitSecondPass()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWGRAPH_INITSECONDPASS_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWGRAPH_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWGRAPH_ONGRAPHUPDATE_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWGRAPH_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWGRAPH_ONDESTROY_OFFSET))(this);
		}
	};
}
