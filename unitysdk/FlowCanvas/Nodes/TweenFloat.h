#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/LatentActionNode_4.h"
#include "unitysdk/ParadoxNotion/Animation/EaseType.h"

namespace System::Collections { class IEnumerator; }

#define FLOWCANVAS_NODES_TWEENFLOAT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1DFCBB40)
#define FLOWCANVAS_NODES_TWEENFLOAT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DFCBB60)
#define FLOWCANVAS_NODES_TWEENFLOAT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1DFCBB50)
#define FLOWCANVAS_NODES_TWEENFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFCBBF0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TweenFloat_TypeDefinitionIndex = 31210;

	class TweenFloat : public ::FlowCanvas::Nodes::LatentActionNode_4<::System::Single, ::System::Single, ::System::Single, ::ParadoxNotion::Animation::EaseType>
	{
	public:
		::System::Single _value_k__BackingField; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENFLOAT__CTOR_OFFSET))(this);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENFLOAT_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENFLOAT_SET_VALUE_OFFSET))(this, value);
		}

		::System::Collections::IEnumerator* Invoke(::System::Single from, ::System::Single to, ::System::Single duration, ::ParadoxNotion::Animation::EaseType interpolation)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::ParadoxNotion::Animation::EaseType))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TWEENFLOAT_INVOKE_OFFSET))(this, from, to, duration, interpolation);
		}
	};
}
