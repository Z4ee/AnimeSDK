#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowNode; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Reflection { class ParameterInfo; }
namespace UnityEngine { class Coroutine; }

#define FLOWCANVAS_NODES_SIMPLEXNODE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E7A7590)
#define FLOWCANVAS_NODES_SIMPLEXNODE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E7A7490)
#define FLOWCANVAS_NODES_SIMPLEXNODE_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E7A7630)
#define FLOWCANVAS_NODES_SIMPLEXNODE_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x1E7A7470)
#define FLOWCANVAS_NODES_SIMPLEXNODE_ONGRAPHPAUSED_OFFSET UNITYSDK_OFFSET(0x1E7A7B90)
#define FLOWCANVAS_NODES_SIMPLEXNODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1E7A7B80)
#define FLOWCANVAS_NODES_SIMPLEXNODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1E7A7BB0)
#define FLOWCANVAS_NODES_SIMPLEXNODE_ONGRAPHUNPAUSED_OFFSET UNITYSDK_OFFSET(0x1E7A7BA0)
#define FLOWCANVAS_NODES_SIMPLEXNODE_ONREGISTEREXTRAPORTS_OFFSET UNITYSDK_OFFSET(0x1E7A7B70)
#define FLOWCANVAS_NODES_SIMPLEXNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1E7A7790)
#define FLOWCANVAS_NODES_SIMPLEXNODE_SETDEFAULTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E7A7950)
#define FLOWCANVAS_NODES_SIMPLEXNODE_SET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x1E7A7480)
#define FLOWCANVAS_NODES_SIMPLEXNODE_STARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1E7A7B50)
#define FLOWCANVAS_NODES_SIMPLEXNODE_STOPCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1E7A7B60)
#define FLOWCANVAS_NODES_SIMPLEXNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A7BC0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SimplexNode_TypeDefinitionIndex = 30864;

	class SimplexNode : public ::System::Object
	{
	public:
		::System::String* _description; // 0x10
		::System::String* _name; // 0x18
		::FlowCanvas::FlowNode* _parentNode_k__BackingField; // 0x20
		::Il2CppArray<::System::Reflection::ParameterInfo*>* _parameters; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIMPLEXNODE__CTOR_OFFSET))(this);
		}

		::FlowCanvas::FlowNode* get_parentNode()
		{
			return ((::FlowCanvas::FlowNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIMPLEXNODE_GET_PARENTNODE_OFFSET))(this);
		}

		::System::Void set_parentNode(::FlowCanvas::FlowNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIMPLEXNODE_SET_PARENTNODE_OFFSET))(this, value);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIMPLEXNODE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIMPLEXNODE_GET_DESCRIPTION_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* get_parameters()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIMPLEXNODE_GET_PARAMETERS_OFFSET))(this);
		}

		::System::Void RegisterPorts(::FlowCanvas::FlowNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIMPLEXNODE_REGISTERPORTS_OFFSET))(this, node);
		}

		::System::Void SetDefaultParameters(::FlowCanvas::FlowNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIMPLEXNODE_SETDEFAULTPARAMETERS_OFFSET))(this, node);
		}

		::UnityEngine::Coroutine* StartCoroutine(::System::Collections::IEnumerator* coroutine)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIMPLEXNODE_STARTCOROUTINE_OFFSET))(this, coroutine);
		}

		::System::Void StopCoroutine(::UnityEngine::Coroutine* coroutine)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Coroutine*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIMPLEXNODE_STOPCOROUTINE_OFFSET))(this, coroutine);
		}

		::System::Void OnRegisterExtraPorts(::FlowCanvas::FlowNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIMPLEXNODE_ONREGISTEREXTRAPORTS_OFFSET))(this, node);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIMPLEXNODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphPaused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIMPLEXNODE_ONGRAPHPAUSED_OFFSET))(this);
		}

		::System::Void OnGraphUnpaused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIMPLEXNODE_ONGRAPHUNPAUSED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SIMPLEXNODE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
