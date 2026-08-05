#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes::Legacy { class PureReflectedMethodNode___c__DisplayClass8_0; }

#define FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E536700)
#define FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS8_1__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x1E536710)

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int PureReflectedMethodNode___c__DisplayClass8_1_TypeDefinitionIndex = 30330;

	class PureReflectedMethodNode___c__DisplayClass8_1 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::Legacy::PureReflectedMethodNode___c__DisplayClass8_0* CS___8__locals1; // 0x10
		::FlowCanvas::FlowOutput* o; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS8_1__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS8_1__REGISTERPORTS_B__2_OFFSET))(this, f);
		}
	};
}
