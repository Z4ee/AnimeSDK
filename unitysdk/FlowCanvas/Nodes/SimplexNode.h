#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowNode; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Reflection { class ParameterInfo; }
namespace UnityEngine { class Coroutine; }

#define FLOWCANVAS_NODES_SIMPLEXNODE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1AFC1ED0)
#define FLOWCANVAS_NODES_SIMPLEXNODE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AFC1DD0)
#define FLOWCANVAS_NODES_SIMPLEXNODE_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1AFC1F70)
#define FLOWCANVAS_NODES_SIMPLEXNODE_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x1AFC1DB0)
#define FLOWCANVAS_NODES_SIMPLEXNODE_ONGRAPHPAUSED_OFFSET UNITYSDK_OFFSET(0x1AFC24E0)
#define FLOWCANVAS_NODES_SIMPLEXNODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1AFC24D0)
#define FLOWCANVAS_NODES_SIMPLEXNODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1AFC2500)
#define FLOWCANVAS_NODES_SIMPLEXNODE_ONGRAPHUNPAUSED_OFFSET UNITYSDK_OFFSET(0x1AFC24F0)
#define FLOWCANVAS_NODES_SIMPLEXNODE_ONREGISTEREXTRAPORTS_OFFSET UNITYSDK_OFFSET(0x1AFC24C0)
#define FLOWCANVAS_NODES_SIMPLEXNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1AFC20D0)
#define FLOWCANVAS_NODES_SIMPLEXNODE_SETDEFAULTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1AFC2290)
#define FLOWCANVAS_NODES_SIMPLEXNODE_SET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x1AFC1DC0)
#define FLOWCANVAS_NODES_SIMPLEXNODE_STARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1AFC2490)
#define FLOWCANVAS_NODES_SIMPLEXNODE_STOPCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1AFC24B0)
#define FLOWCANVAS_NODES_SIMPLEXNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC2510)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SimplexNode_TypeDefinitionIndex = 26846;

	class SimplexNode : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Reflection::ParameterInfo*>* _parameters; // 0x10
		::System::String* _description; // 0x18
		::System::String* _name; // 0x20
		::FlowCanvas::FlowNode* _parentNode_k__BackingField; // 0x28

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
