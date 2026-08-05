#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Connection; }
namespace NodeCanvas::Framework { class Node; }

#define NODECANVAS_FRAMEWORK_NODE___C__DISPLAYCLASS108_0__ARENODESCONNECTED_B__0_OFFSET UNITYSDK_OFFSET(0x1EF91700)
#define NODECANVAS_FRAMEWORK_NODE___C__DISPLAYCLASS108_0__ARENODESCONNECTED_B__1_OFFSET UNITYSDK_OFFSET(0x1EF91720)
#define NODECANVAS_FRAMEWORK_NODE___C__DISPLAYCLASS108_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF916F0)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Node___c__DisplayClass108_0_TypeDefinitionIndex = 30210;

	class Node___c__DisplayClass108_0 : public ::System::Object
	{
	public:
		::NodeCanvas::Framework::Node* a; // 0x10
		::NodeCanvas::Framework::Node* b; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE___C__DISPLAYCLASS108_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AreNodesConnected_b__0(::NodeCanvas::Framework::Connection* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::Connection*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE___C__DISPLAYCLASS108_0__ARENODESCONNECTED_B__0_OFFSET))(this, c);
		}

		::System::Boolean _AreNodesConnected_b__1(::NodeCanvas::Framework::Connection* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::Connection*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE___C__DISPLAYCLASS108_0__ARENODESCONNECTED_B__1_OFFSET))(this, c);
		}
	};
}
