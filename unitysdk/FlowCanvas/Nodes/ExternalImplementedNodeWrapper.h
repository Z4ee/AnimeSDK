#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas::Nodes { class IExternalImplementedNode; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define FLOWCANVAS_NODES_EXTERNALIMPLEMENTEDNODEWRAPPER_GETRUNTIMEICONTYPE_OFFSET UNITYSDK_OFFSET(0x1D51CCC0)
#define FLOWCANVAS_NODES_EXTERNALIMPLEMENTEDNODEWRAPPER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D51CB10)
#define FLOWCANVAS_NODES_EXTERNALIMPLEMENTEDNODEWRAPPER_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1D51CA40)
#define FLOWCANVAS_NODES_EXTERNALIMPLEMENTEDNODEWRAPPER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1D51CCE0)
#define FLOWCANVAS_NODES_EXTERNALIMPLEMENTEDNODEWRAPPER_SETTARGET_OFFSET UNITYSDK_OFFSET(0x1D51CEF0)
#define FLOWCANVAS_NODES_EXTERNALIMPLEMENTEDNODEWRAPPER_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x1D51CA80)
#define FLOWCANVAS_NODES_EXTERNALIMPLEMENTEDNODEWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D51CF80)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExternalImplementedNodeWrapper_TypeDefinitionIndex = 30659;

	class ExternalImplementedNodeWrapper : public ::FlowCanvas::FlowNode
	{
	public:
		::UnityEngine::Object* _target; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTERNALIMPLEMENTEDNODEWRAPPER__CTOR_OFFSET))(this);
		}

		::FlowCanvas::Nodes::IExternalImplementedNode* get_target()
		{
			return ((::FlowCanvas::Nodes::IExternalImplementedNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTERNALIMPLEMENTEDNODEWRAPPER_GET_TARGET_OFFSET))(this);
		}

		::System::Void set_target(::FlowCanvas::Nodes::IExternalImplementedNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::IExternalImplementedNode*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTERNALIMPLEMENTEDNODEWRAPPER_SET_TARGET_OFFSET))(this, value);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTERNALIMPLEMENTEDNODEWRAPPER_GET_NAME_OFFSET))(this);
		}

		::System::Type* GetRuntimeIconType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTERNALIMPLEMENTEDNODEWRAPPER_GETRUNTIMEICONTYPE_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTERNALIMPLEMENTEDNODEWRAPPER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void SetTarget(::FlowCanvas::Nodes::IExternalImplementedNode* target)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Nodes::IExternalImplementedNode*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTERNALIMPLEMENTEDNODEWRAPPER_SETTARGET_OFFSET))(this, target);
		}
	};
}
