#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_4.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_DAMPVECTOR3_INVOKE_OFFSET UNITYSDK_OFFSET(0x19846180)
#define FLOWCANVAS_NODES_DAMPVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x19846220)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int DampVector3_TypeDefinitionIndex = 27578;

	class DampVector3 : public ::FlowCanvas::Nodes::PureFunctionNode_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DAMPVECTOR3__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Invoke(::UnityEngine::Vector3 current, ::UnityEngine::Vector3 target, ::System::Single damp)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DAMPVECTOR3_INVOKE_OFFSET))(this, current, target, damp);
		}
	};
}
