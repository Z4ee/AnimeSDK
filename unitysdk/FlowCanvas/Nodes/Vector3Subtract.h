#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_VECTOR3SUBTRACT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EBB5980)
#define FLOWCANVAS_NODES_VECTOR3SUBTRACT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB59B0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Vector3Subtract_TypeDefinitionIndex = 30302;

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
