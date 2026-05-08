#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/LatentActionNode_5.h"
#include "unitysdk/ParadoxNotion/Animation/EaseType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Transform; }

#define FLOWCANVAS_NODES_TWEENPOSITION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ADAF620)
#define FLOWCANVAS_NODES_TWEENPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADAF6B0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TweenPosition_TypeDefinitionIndex = 27469;

	class TweenPosition : public ::FlowCanvas::Nodes::LatentActionNode_5<::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::ParadoxNotion::Animation::EaseType, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENPOSITION__CTOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Invoke(::UnityEngine::Transform* transform, ::UnityEngine::Vector3 position, ::System::Single duration, ::ParadoxNotion::Animation::EaseType interpolation, ::System::Boolean relative)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single, ::ParadoxNotion::Animation::EaseType, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENPOSITION_INVOKE_OFFSET))(this, transform, position, duration, interpolation, relative);
		}
	};
}
