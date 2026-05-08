#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class ORMerge; }

#define FLOWCANVAS_NODES_ORMERGE___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B417450)
#define FLOWCANVAS_NODES_ORMERGE___C__DISPLAYCLASS6_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1B417460)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ORMerge___c__DisplayClass6_0_TypeDefinitionIndex = 27321;

	class ORMerge___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::ORMerge* __4__this; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ORMERGE___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ORMERGE___C__DISPLAYCLASS6_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}
	};
}
