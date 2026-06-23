#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class FlowOutput; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAIN_INVOKE_OFFSET UNITYSDK_OFFSET(0x12BB1570)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAIN_ONREGISTEREXTRAPORTS_OFFSET UNITYSDK_OFFSET(0x12BB1850)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB18E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAIN___BASE_ONREGISTEREXTRAPORTS_OFFSET UNITYSDK_OFFSET(0x12BB1900)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDEnableBlackCurtain_TypeDefinitionIndex = 43905;

	class LDEnableBlackCurtain : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*>
	{
	public:
		::FlowCanvas::FlowOutput* _onFinish; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAIN__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Single duration, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAIN_INVOKE_OFFSET))(this, duration, curve);
		}

		::System::Void OnRegisterExtraPorts(::FlowCanvas::FlowNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAIN_ONREGISTEREXTRAPORTS_OFFSET))(this, node);
		}

		::System::Void __base_OnRegisterExtraPorts(::FlowCanvas::FlowNode* P0)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENABLEBLACKCURTAIN___BASE_ONREGISTEREXTRAPORTS_OFFSET))(this, P0);
		}
	};
}
