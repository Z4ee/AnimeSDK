#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Internal/GraphLoadData.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Graph; }

#define NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS178_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA9BE00)
#define NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS178_0__LOADOVERWRITEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1EA9BE10)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Graph___c__DisplayClass178_0_TypeDefinitionIndex = 29743;

	class Graph___c__DisplayClass178_0 : public ::System::Object
	{
	public:
		::NodeCanvas::Framework::Internal::GraphLoadData data; // 0x10
		::NodeCanvas::Framework::Graph* __4__this; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS178_0__CTOR_OFFSET))(this);
		}

		::System::Void _LoadOverwriteAsync_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_GRAPH___C__DISPLAYCLASS178_0__LOADOVERWRITEASYNC_B__0_OFFSET))(this);
		}
	};
}
