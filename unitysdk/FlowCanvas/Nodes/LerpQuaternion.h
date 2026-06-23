#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_5.h"
#include "unitysdk/ParadoxNotion/Animation/EaseType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define FLOWCANVAS_NODES_LERPQUATERNION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BC41B10)
#define FLOWCANVAS_NODES_LERPQUATERNION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC41BE0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LerpQuaternion_TypeDefinitionIndex = 29485;

	class LerpQuaternion : public ::FlowCanvas::Nodes::PureFunctionNode_5<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::ParadoxNotion::Animation::EaseType>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LERPQUATERNION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion Invoke(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b, ::System::Single t, ::ParadoxNotion::Animation::EaseType interpolation)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::ParadoxNotion::Animation::EaseType))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LERPQUATERNION_INVOKE_OFFSET))(this, a, b, t, interpolation);
		}
	};
}
