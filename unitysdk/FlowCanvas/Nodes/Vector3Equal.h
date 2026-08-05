#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_VECTOR3EQUAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DAD7FE0)
#define FLOWCANVAS_NODES_VECTOR3EQUAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD8030)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Vector3Equal_TypeDefinitionIndex = 31385;

	class Vector3Equal : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VECTOR3EQUAL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VECTOR3EQUAL_INVOKE_OFFSET))(this, a, b);
		}
	};
}
