#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_DELTATIMEDVECTOR3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B49B2A0)
#define FLOWCANVAS_NODES_DELTATIMEDVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x1B49B300)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int DeltaTimedVector3_TypeDefinitionIndex = 26573;

	class DeltaTimedVector3 : public ::FlowCanvas::Nodes::PureFunctionNode_3<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DELTATIMEDVECTOR3__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Invoke(::UnityEngine::Vector3 value, ::System::Single multiplier)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DELTATIMEDVECTOR3_INVOKE_OFFSET))(this, value, multiplier);
		}
	};
}
