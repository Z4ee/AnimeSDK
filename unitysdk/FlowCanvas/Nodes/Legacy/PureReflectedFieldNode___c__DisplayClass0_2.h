#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class ValueInput; }
namespace FlowCanvas::Nodes::Legacy { class PureReflectedFieldNode___c__DisplayClass0_0; }

#define FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDFIELDNODE___C__DISPLAYCLASS0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1DA7A0)
#define FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDFIELDNODE___C__DISPLAYCLASS0_2__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x1D1DA7B0)

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int PureReflectedFieldNode___c__DisplayClass0_2_TypeDefinitionIndex = 29707;

	class PureReflectedFieldNode___c__DisplayClass0_2 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::Legacy::PureReflectedFieldNode___c__DisplayClass0_0* CS___8__locals1; // 0x10
		::FlowCanvas::ValueInput* instanceInput; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDFIELDNODE___C__DISPLAYCLASS0_2__CTOR_OFFSET))(this);
		}

		::System::Object* _RegisterPorts_b__1()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDFIELDNODE___C__DISPLAYCLASS0_2__REGISTERPORTS_B__1_OFFSET))(this);
		}
	};
}
