#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLOWCANVAS_NODES_INPUTCUSTOMAXISEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1DFC9B80)
#define FLOWCANVAS_NODES_INPUTCUSTOMAXISEVENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DFC9DA0)
#define FLOWCANVAS_NODES_INPUTCUSTOMAXISEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC9DB0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int InputCustomAxisEvent_TypeDefinitionIndex = 30697;

	class InputCustomAxisEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::Il2CppArray<::System::Single>* axisValues; // 0xA8
		::FlowCanvas::FlowOutput* o; // 0xB0
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::System::String*>*>* axis; // 0xB8
		::System::Boolean calledLastFrame; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INPUTCUSTOMAXISEVENT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INPUTCUSTOMAXISEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INPUTCUSTOMAXISEVENT_UPDATE_OFFSET))(this);
		}
	};
}
