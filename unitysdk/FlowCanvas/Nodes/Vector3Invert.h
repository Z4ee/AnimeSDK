#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_VECTOR3INVERT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D7BBE50)
#define FLOWCANVAS_NODES_VECTOR3INVERT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BBE80)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Vector3Invert_TypeDefinitionIndex = 29592;

	class Vector3Invert : public ::FlowCanvas::Nodes::PureFunctionNode_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VECTOR3INVERT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Invoke(::UnityEngine::Vector3 value)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VECTOR3INVERT_INVOKE_OFFSET))(this, value);
		}
	};
}
