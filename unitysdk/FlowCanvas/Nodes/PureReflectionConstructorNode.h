#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/BaseReflectedConstructorNode.h"
#include "unitysdk/FlowCanvas/Nodes/ParamDef.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodRegistrationOptions.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class ValueInput; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Reflection { class ConstructorInfo; }

#define FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE_CALL_OFFSET UNITYSDK_OFFSET(0x1DB25980)
#define FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x1DB23E60)
#define FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE_REGISTERINPUT_OFFSET UNITYSDK_OFFSET(0x1DB25DE0)
#define FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE_REGISTEROUTPUT_OFFSET UNITYSDK_OFFSET(0x1DB25D00)
#define FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1DB26090)
#define FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB23E50)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int PureReflectionConstructorNode_TypeDefinitionIndex = 31284;

	class PureReflectionConstructorNode : public ::FlowCanvas::Nodes::BaseReflectedConstructorNode
	{
	public:
		::Il2CppArray<::FlowCanvas::ValueInput*>* arrayInputs; // 0x98
		::System::Type* arrayParamsType; // 0xA0
		::System::Object* resultObject; // 0xA8
		::Il2CppArray<::System::Object*>* callParams; // 0xB0
		::Il2CppArray<::FlowCanvas::ValueInput*>* inputs; // 0xB8
		::System::Int32 arrayParamsInput; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean InitInternal(::System::Reflection::ConstructorInfo* constructor)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE_INITINTERNAL_OFFSET))(this, constructor);
		}

		::System::Void Call()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE_CALL_OFFSET))(this);
		}

		::System::Void RegisterOutput(::FlowCanvas::FlowNode* node, ::System::Boolean callable, ::FlowCanvas::Nodes::ParamDef def, ::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::System::Boolean, ::FlowCanvas::Nodes::ParamDef, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE_REGISTEROUTPUT_OFFSET))(this, node, callable, def, idx);
		}

		::System::Void RegisterInput(::FlowCanvas::FlowNode* node, ::FlowCanvas::Nodes::ParamDef def, ::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::FlowCanvas::Nodes::ParamDef, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE_REGISTERINPUT_OFFSET))(this, node, def, idx);
		}

		::System::Void RegisterPorts(::FlowCanvas::FlowNode* node, ::FlowCanvas::Nodes::ReflectedMethodRegistrationOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::FlowCanvas::Nodes::ReflectedMethodRegistrationOptions))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE_REGISTERPORTS_OFFSET))(this, node, options);
		}
	};
}
