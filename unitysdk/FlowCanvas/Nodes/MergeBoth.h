#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FLOWCANVAS_NODES_MERGEBOTH_GET_PORTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E8B7F20)
#define FLOWCANVAS_NODES_MERGEBOTH_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1E8B7F40)
#define FLOWCANVAS_NODES_MERGEBOTH_SET_PORTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E8B7F30)
#define FLOWCANVAS_NODES_MERGEBOTH__CHECKOUT_OFFSET UNITYSDK_OFFSET(0x1E8B80A0)
#define FLOWCANVAS_NODES_MERGEBOTH__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B82B0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int MergeBoth_TypeDefinitionIndex = 30006;

	class MergeBoth : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* _triggerPorts; // 0xA8
		::System::Collections::Generic::Dictionary_2<::FlowCanvas::FlowInput*, ::System::Int32>* _portStatus; // 0xB0
		::FlowCanvas::FlowOutput* _output; // 0xB8
		::System::Int32 _portCount; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MERGEBOTH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_PortCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MERGEBOTH_GET_PORTCOUNT_OFFSET))(this);
		}

		::System::Void set_PortCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MERGEBOTH_SET_PORTCOUNT_OFFSET))(this, value);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MERGEBOTH_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _CheckOut(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MERGEBOTH__CHECKOUT_OFFSET))(this, f);
		}
	};
}
