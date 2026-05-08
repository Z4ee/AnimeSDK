#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/BaseReflectedMethodNode.h"
#include "unitysdk/FlowCanvas/Nodes/ParamDef.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodRegistrationOptions.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class ValueInput; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }

#define FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE_CALL_OFFSET UNITYSDK_OFFSET(0x1AF21BA0)
#define FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AF21A80)
#define FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE_REGISTERINPUT_OFFSET UNITYSDK_OFFSET(0x1AF22500)
#define FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE_REGISTEROUTPUT_OFFSET UNITYSDK_OFFSET(0x1AF223B0)
#define FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1AF227B0)
#define FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF22BF0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int PureReflectedMethodNode_TypeDefinitionIndex = 27960;

	class PureReflectedMethodNode : public ::FlowCanvas::Nodes::BaseReflectedMethodNode
	{
	public:
		::Il2CppArray<::System::Object*>* callParams; // 0x98
		::System::Type* arrayParamsType; // 0xA0
		::Il2CppArray<::FlowCanvas::ValueInput*>* arrayInputs; // 0xA8
		::System::Object* resultObject; // 0xB0
		::FlowCanvas::ValueInput* instanceInput; // 0xB8
		::System::String* wrapOutNodeGraphName; // 0xC0
		::Il2CppArray<::FlowCanvas::ValueInput*>* inputs; // 0xC8
		::System::String* wrapInNodeGraphName; // 0xD0
		::System::Object* instanceObject; // 0xD8
		::System::Int32 arrayParamsInput; // 0xE0
		::System::Int32 wrapOutNodeIndex; // 0xE4
		::System::Int32 wrapInNodeIndex; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean InitInternal(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE_INITINTERNAL_OFFSET))(this, method);
		}

		::System::Void Call()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE_CALL_OFFSET))(this);
		}

		::System::Void RegisterOutput(::FlowCanvas::FlowNode* node, ::System::Boolean callable, ::FlowCanvas::Nodes::ParamDef def, ::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::System::Boolean, ::FlowCanvas::Nodes::ParamDef, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE_REGISTEROUTPUT_OFFSET))(this, node, callable, def, idx);
		}

		::System::Void RegisterInput(::FlowCanvas::FlowNode* node, ::FlowCanvas::Nodes::ParamDef def, ::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::FlowCanvas::Nodes::ParamDef, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE_REGISTERINPUT_OFFSET))(this, node, def, idx);
		}

		::System::Void RegisterPorts(::FlowCanvas::FlowNode* node, ::FlowCanvas::Nodes::ReflectedMethodRegistrationOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::FlowCanvas::Nodes::ReflectedMethodRegistrationOptions))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE_REGISTERPORTS_OFFSET))(this, node, options);
		}
	};
}
