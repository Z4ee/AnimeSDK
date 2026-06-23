#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_VECTOR3NOTEQUAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C6205B0)
#define FLOWCANVAS_NODES_VECTOR3NOTEQUAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C620600)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Vector3NotEqual_TypeDefinitionIndex = 29853;

	class Vector3NotEqual : public ::FlowCanvas::Nodes::PureFunctionNode_3<::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VECTOR3NOTEQUAL__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_VECTOR3NOTEQUAL_INVOKE_OFFSET))(this, a, b);
		}
	};
}
