#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDINITCAMERADATANODE_INITCAMERACOMPONENT_OFFSET UNITYSDK_OFFSET(0x13691290)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINITCAMERADATANODE_INITCAMERADATA_OFFSET UNITYSDK_OFFSET(0x13691190)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINITCAMERADATANODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x136912D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINITCAMERADATANODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13691340)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDInitCameraDataNode_TypeDefinitionIndex = 89982;

	class LDInitCameraDataNode : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINITCAMERADATANODE__CTOR_OFFSET))(this);
		}

		::System::Void InitCameraData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINITCAMERADATANODE_INITCAMERADATA_OFFSET))(this);
		}

		::System::Void InitCameraComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINITCAMERADATANODE_INITCAMERACOMPONENT_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINITCAMERADATANODE_INVOKE_OFFSET))(this);
		}
	};
}
