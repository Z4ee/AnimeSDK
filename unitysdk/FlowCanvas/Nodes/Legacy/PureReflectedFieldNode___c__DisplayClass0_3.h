#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { class ValueInput; }
namespace FlowCanvas::Nodes::Legacy { class PureReflectedFieldNode___c__DisplayClass0_0; }

#define FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDFIELDNODE___C__DISPLAYCLASS0_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1B324540)
#define FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDFIELDNODE___C__DISPLAYCLASS0_3__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x1B324550)
#define FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDFIELDNODE___C__DISPLAYCLASS0_3__REGISTERPORTS_B__3_OFFSET UNITYSDK_OFFSET(0x1B324560)

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int PureReflectedFieldNode___c__DisplayClass0_3_TypeDefinitionIndex = 27646;

	class PureReflectedFieldNode___c__DisplayClass0_3 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::Legacy::PureReflectedFieldNode___c__DisplayClass0_0* CS___8__locals2; // 0x10
		::System::Object* instance; // 0x18
		::FlowCanvas::ValueInput* instanceInput; // 0x20
		::FlowCanvas::FlowOutput* flowOut; // 0x28
		::FlowCanvas::ValueInput* valueInput; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDFIELDNODE___C__DISPLAYCLASS0_3__CTOR_OFFSET))(this);
		}

		::System::Object* _RegisterPorts_b__2()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDFIELDNODE___C__DISPLAYCLASS0_3__REGISTERPORTS_B__2_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__3(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDFIELDNODE___C__DISPLAYCLASS0_3__REGISTERPORTS_B__3_OFFSET))(this, f);
		}
	};
}
