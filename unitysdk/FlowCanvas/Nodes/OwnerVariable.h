#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define FLOWCANVAS_NODES_OWNERVARIABLE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CC349E0)
#define FLOWCANVAS_NODES_OWNERVARIABLE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1CC34A20)
#define FLOWCANVAS_NODES_OWNERVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC34AA0)
#define FLOWCANVAS_NODES_OWNERVARIABLE__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1CC34AE0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int OwnerVariable_TypeDefinitionIndex = 29769;

	class OwnerVariable : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OWNERVARIABLE__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OWNERVARIABLE_GET_NAME_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OWNERVARIABLE_REGISTERPORTS_OFFSET))(this);
		}

		::UnityEngine::GameObject* _RegisterPorts_b__2_0()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OWNERVARIABLE__REGISTERPORTS_B__2_0_OFFSET))(this);
		}
	};
}
