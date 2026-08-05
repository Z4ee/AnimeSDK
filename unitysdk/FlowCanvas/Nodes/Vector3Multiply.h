#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_VECTOR3MULTIPLY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EBB5940)
#define FLOWCANVAS_NODES_VECTOR3MULTIPLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB5960)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Vector3Multiply_TypeDefinitionIndex = 30153;

	class Vector3Multiply : public ::FlowCanvas::Nodes::PureFunctionNode_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VECTOR3MULTIPLY__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Invoke(::UnityEngine::Vector3 a, ::System::Single b)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VECTOR3MULTIPLY_INVOKE_OFFSET))(this, a, b);
		}
	};
}
