#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class Node; }

#define NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS238_0__CLONENODES_B__0_OFFSET UNITYSDK_OFFSET(0x1AFCF2A0)
#define NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS238_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFCF290)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Graph___c__DisplayClass238_0_TypeDefinitionIndex = 27751;

	class Graph___c__DisplayClass238_0 : public ::System::Object
	{
	public:
		::NodeCanvas::Framework::Graph* targetGraph; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS238_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CloneNodes_b__0(::NodeCanvas::Framework::Node* n)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS238_0__CLONENODES_B__0_OFFSET))(this, n);
		}
	};
}
