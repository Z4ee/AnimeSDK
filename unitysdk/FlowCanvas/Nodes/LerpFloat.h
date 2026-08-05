#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_5.h"
#include "unitysdk/ParadoxNotion/Animation/EaseType.h"

#define FLOWCANVAS_NODES_LERPFLOAT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E7226E0)
#define FLOWCANVAS_NODES_LERPFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E722820)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LerpFloat_TypeDefinitionIndex = 31263;

	class LerpFloat : public ::FlowCanvas::Nodes::PureFunctionNode_5<::System::Single, ::System::Single, ::System::Single, ::System::Single, ::ParadoxNotion::Animation::EaseType>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LERPFLOAT__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::Single a, ::System::Single b, ::System::Single t, ::ParadoxNotion::Animation::EaseType interpolation)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::ParadoxNotion::Animation::EaseType))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LERPFLOAT_INVOKE_OFFSET))(this, a, b, t, interpolation);
		}
	};
}
