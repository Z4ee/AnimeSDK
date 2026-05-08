#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/LatentActionNode_4.h"
#include "unitysdk/ParadoxNotion/Animation/EaseType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections { class IEnumerator; }

#define FLOWCANVAS_NODES_TWEENVECTOR3_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B326630)
#define FLOWCANVAS_NODES_TWEENVECTOR3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B326660)
#define FLOWCANVAS_NODES_TWEENVECTOR3_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B326650)
#define FLOWCANVAS_NODES_TWEENVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3266F0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TweenVector3_TypeDefinitionIndex = 28076;

	class TweenVector3 : public ::FlowCanvas::Nodes::LatentActionNode_4<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::ParadoxNotion::Animation::EaseType>
	{
	public:
		::UnityEngine::Vector3 _value_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENVECTOR3__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_value()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENVECTOR3_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENVECTOR3_SET_VALUE_OFFSET))(this, value);
		}

		::System::Collections::IEnumerator* Invoke(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::System::Single duration, ::ParadoxNotion::Animation::EaseType interpolation)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::ParadoxNotion::Animation::EaseType))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENVECTOR3_INVOKE_OFFSET))(this, from, to, duration, interpolation);
		}
	};
}
