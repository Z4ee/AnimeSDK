#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Node; }

#define NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS235_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DB0A0)
#define NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS235_0__REMOVENODE_B__0_OFFSET UNITYSDK_OFFSET(0x1E6DB0B0)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Graph___c__DisplayClass235_0_TypeDefinitionIndex = 29741;

	class Graph___c__DisplayClass235_0 : public ::System::Object
	{
	public:
		::NodeCanvas::Framework::Node* node; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS235_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveNode_b__0(::NodeCanvas::Framework::Node* n)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS235_0__REMOVENODE_B__0_OFFSET))(this, n);
		}
	};
}
