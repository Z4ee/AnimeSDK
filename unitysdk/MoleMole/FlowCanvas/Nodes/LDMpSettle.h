#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B19F6F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE_SETTLECOROUTINE_OFFSET UNITYSDK_OFFSET(0x1B19F990)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE_SETTLE_OFFSET UNITYSDK_OFFSET(0x1B19F7E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B19FA40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1B19FA80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMpSettle_TypeDefinitionIndex = 60766;

	class LDMpSettle : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* finish; // 0xA8
		::FlowCanvas::FlowInput* input; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8
		::UnityEngine::Coroutine* coroutine; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Settle(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE_SETTLE_OFFSET))(this, f);
		}

		::System::Collections::IEnumerator* SettleCoroutine(::FlowCanvas::Flow f)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE_SETTLECOROUTINE_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__4_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPSETTLE__REGISTERPORTS_B__4_0_OFFSET))(this, f);
		}
	};
}
