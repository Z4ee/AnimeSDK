#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/LatentActionNode_4.h"
#include "unitysdk/ParadoxNotion/Animation/EaseType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace System::Collections { class IEnumerator; }

#define FLOWCANVAS_NODES_TWEENQUATERNION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B0EDC70)
#define FLOWCANVAS_NODES_TWEENQUATERNION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B0EDC90)
#define FLOWCANVAS_NODES_TWEENQUATERNION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B0EDC80)
#define FLOWCANVAS_NODES_TWEENQUATERNION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0EDD10)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TweenQuaternion_TypeDefinitionIndex = 27033;

	class TweenQuaternion : public ::FlowCanvas::Nodes::LatentActionNode_4<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::ParadoxNotion::Animation::EaseType>
	{
	public:
		::UnityEngine::Quaternion _value_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENQUATERNION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_value()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENQUATERNION_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENQUATERNION_SET_VALUE_OFFSET))(this, value);
		}

		::System::Collections::IEnumerator* Invoke(::UnityEngine::Quaternion from, ::UnityEngine::Quaternion to, ::System::Single duration, ::ParadoxNotion::Animation::EaseType interpolation)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::ParadoxNotion::Animation::EaseType))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENQUATERNION_INVOKE_OFFSET))(this, from, to, duration, interpolation);
		}
	};
}
