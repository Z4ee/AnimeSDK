#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/BaseReflectedExtractorNode.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class ValueHandlerObject; }
namespace FlowCanvas { class ValueInput; }
namespace System { class Object; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }

#define FLOWCANVAS_NODES_PUREREFLECTEDEXTRACTORNODE_GETPORTHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1EB6BC40)
#define FLOWCANVAS_NODES_PUREREFLECTEDEXTRACTORNODE_GETPORTHANDLER_OFFSET UNITYSDK_OFFSET(0x1EB6BBB0)
#define FLOWCANVAS_NODES_PUREREFLECTEDEXTRACTORNODE_INITINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EB6BBA0)
#define FLOWCANVAS_NODES_PUREREFLECTEDEXTRACTORNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EB6BCF0)
#define FLOWCANVAS_NODES_PUREREFLECTEDEXTRACTORNODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB6C050)
#define FLOWCANVAS_NODES_PUREREFLECTEDEXTRACTORNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6C040)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int PureReflectedExtractorNode_TypeDefinitionIndex = 31075;

	class PureReflectedExtractorNode : public ::FlowCanvas::Nodes::BaseReflectedExtractorNode
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_EmptyParams()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(PureReflectedExtractorNode_TypeDefinitionIndex)->GetStaticField(0x25530);
		}
		::FlowCanvas::ValueInput* instanceInput; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDEXTRACTORNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDEXTRACTORNODE__CCTOR_OFFSET))();
		}

		::System::Boolean InitInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDEXTRACTORNODE_INITINTERNAL_OFFSET))(this);
		}

		::FlowCanvas::ValueHandlerObject* GetPortHandler(::System::Reflection::FieldInfo* info)
		{
			return ((::FlowCanvas::ValueHandlerObject*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDEXTRACTORNODE_GETPORTHANDLER_OFFSET))(this, info);
		}

		::FlowCanvas::ValueHandlerObject* GetPortHandler_1(::System::Reflection::MethodInfo* info)
		{
			return ((::FlowCanvas::ValueHandlerObject*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDEXTRACTORNODE_GETPORTHANDLER_1_OFFSET))(this, info);
		}

		::System::Void RegisterPorts(::FlowCanvas::FlowNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDEXTRACTORNODE_REGISTERPORTS_OFFSET))(this, node);
		}
	};
}
