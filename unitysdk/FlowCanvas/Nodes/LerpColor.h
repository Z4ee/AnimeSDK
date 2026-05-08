#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_5.h"
#include "unitysdk/ParadoxNotion/Animation/EaseType.h"
#include "unitysdk/UnityEngine/Color.h"

#define FLOWCANVAS_NODES_LERPCOLOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AFC1CC0)
#define FLOWCANVAS_NODES_LERPCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC1D90)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LerpColor_TypeDefinitionIndex = 26824;

	class LerpColor : public ::FlowCanvas::Nodes::PureFunctionNode_5<::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single, ::ParadoxNotion::Animation::EaseType>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LERPCOLOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color Invoke(::UnityEngine::Color a, ::UnityEngine::Color b, ::System::Single t, ::ParadoxNotion::Animation::EaseType interpolation)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Single, ::ParadoxNotion::Animation::EaseType))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LERPCOLOR_INVOKE_OFFSET))(this, a, b, t, interpolation);
		}
	};
}
