#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedFieldNodeWrapper_AccessMode.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowNode; }
namespace System::Reflection { class FieldInfo; }

#define FLOWCANVAS_NODES_LEGACY_REFLECTEDFIELDNODE_CREATE_OFFSET UNITYSDK_OFFSET(0x1E8B7EA0)
#define FLOWCANVAS_NODES_LEGACY_REFLECTEDFIELDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B7EE0)

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedFieldNode_TypeDefinitionIndex = 30397;

	class ReflectedFieldNode : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_REFLECTEDFIELDNODE__CTOR_OFFSET))(this);
		}

		static ::FlowCanvas::Nodes::Legacy::ReflectedFieldNode* Create(::System::Reflection::FieldInfo* field)
		{
			return ((::FlowCanvas::Nodes::Legacy::ReflectedFieldNode*(*)(::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_REFLECTEDFIELDNODE_CREATE_OFFSET))(field);
		}
	};
}
