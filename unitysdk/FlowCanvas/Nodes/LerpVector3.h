#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_5.h"
#include "unitysdk/ParadoxNotion/Animation/EaseType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_LERPVECTOR3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B49BC30)
#define FLOWCANVAS_NODES_LERPVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x1B49BD20)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LerpVector3_TypeDefinitionIndex = 28005;

	class LerpVector3 : public ::FlowCanvas::Nodes::PureFunctionNode_5<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::ParadoxNotion::Animation::EaseType>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LERPVECTOR3__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Invoke(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::System::Single t, ::ParadoxNotion::Animation::EaseType interpolation)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::ParadoxNotion::Animation::EaseType))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LERPVECTOR3_INVOKE_OFFSET))(this, a, b, t, interpolation);
		}
	};
}
