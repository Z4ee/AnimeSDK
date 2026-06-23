#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_VECTOR3SUBTRACT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D7FF260)
#define FLOWCANVAS_NODES_VECTOR3SUBTRACT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FF290)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Vector3Subtract_TypeDefinitionIndex = 29322;

	class Vector3Subtract : public ::FlowCanvas::Nodes::PureFunctionNode_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VECTOR3SUBTRACT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Invoke(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VECTOR3SUBTRACT_INVOKE_OFFSET))(this, a, b);
		}
	};
}
