#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class Port; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections { class IEnumerable; }

#define FLOWCANVAS_NODES_FOREACH_GETNODEWILDDEFINITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1B457AD0)
#define FLOWCANVAS_NODES_FOREACH_ONPORTCONNECTED_OFFSET UNITYSDK_OFFSET(0x1B457B00)
#define FLOWCANVAS_NODES_FOREACH_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B457910)
#define FLOWCANVAS_NODES_FOREACH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B457CC0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ForEach_TypeDefinitionIndex = 27996;

	class ForEach : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Object* currentObject; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Collections::IEnumerable*>* enumerableInput; // 0xB0
		::System::Int32 currentIndex; // 0xB8
		::System::Boolean broken; // 0xBC

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
