#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDDISABLEBLACKCURTAIN_INVOKE_OFFSET UNITYSDK_OFFSET(0x19B0B9A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDISABLEBLACKCURTAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x19B0BAE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDDisableBlackCurtain_TypeDefinitionIndex = 50942;

	class LDDisableBlackCurtain : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDISABLEBLACKCURTAIN__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Single duration, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDISABLEBLACKCURTAIN_INVOKE_OFFSET))(this, duration, curve);
		}
	};
}
