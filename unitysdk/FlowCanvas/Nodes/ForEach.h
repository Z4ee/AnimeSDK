#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class Port; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections { class IEnumerable; }

#define FLOWCANVAS_NODES_FOREACH_GETNODEWILDDEFINITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1EB8F780)
#define FLOWCANVAS_NODES_FOREACH_ONPORTCONNECTED_OFFSET UNITYSDK_OFFSET(0x1EB8F7B0)
#define FLOWCANVAS_NODES_FOREACH_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EB8F5B0)
#define FLOWCANVAS_NODES_FOREACH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8F970)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ForEach_TypeDefinitionIndex = 31144;

	class ForEach : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Collections::IEnumerable*>* enumerableInput; // 0xA8
		::System::Object* currentObject; // 0xB0
		::System::Boolean broken; // 0xB8
		::System::Int32 currentIndex; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FOREACH__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FOREACH_REGISTERPORTS_OFFSET))(this);
		}

		::System::Type* GetNodeWildDefinitionType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FOREACH_GETNODEWILDDEFINITIONTYPE_OFFSET))(this);
		}

		::System::Void OnPortConnected(::FlowCanvas::Port* port, ::FlowCanvas::Port* otherPort)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Port*, ::FlowCanvas::Port*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FOREACH_ONPORTCONNECTED_OFFSET))(this, port, otherPort);
		}
	};
}
