#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWERGUIDEPRIORITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x144CA6E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWERGUIDEPRIORITY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x144CA5A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWERGUIDEPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x144CA900)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWERGUIDEPRIORITY__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x144CA940)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWERGUIDEPRIORITY__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x144CA950)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetFollowerGuidePriority_TypeDefinitionIndex = 67559;

	class LDSetFollowerGuidePriority : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::ValueOutput_1<::System::String*>* targetValueOutput; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::String*>*>* paramInput; // 0xB8
		::System::String* currTarget; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWERGUIDEPRIORITY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWERGUIDEPRIORITY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWERGUIDEPRIORITY_INVOKE_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__4_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWERGUIDEPRIORITY__REGISTERPORTS_B__4_0_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__4_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETFOLLOWERGUIDEPRIORITY__REGISTERPORTS_B__4_1_OFFSET))(this, f);
		}
	};
}
