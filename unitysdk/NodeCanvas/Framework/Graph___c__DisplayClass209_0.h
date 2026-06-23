#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Node; }

#define NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS209_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C4870)
#define NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS209_0__GETNODEWITHID_B__0_OFFSET UNITYSDK_OFFSET(0x1D7C4880)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Graph___c__DisplayClass209_0_TypeDefinitionIndex = 29258;

	class Graph___c__DisplayClass209_0 : public ::System::Object
	{
	public:
		::System::Int32 searchID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS209_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetNodeWithID_b__0(::NodeCanvas::Framework::Node* n)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS209_0__GETNODEWITHID_B__0_OFFSET))(this, n);
		}
	};
}
