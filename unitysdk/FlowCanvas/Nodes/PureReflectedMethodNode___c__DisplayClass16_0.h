#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodRegistrationOptions.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class PureReflectedMethodNode; }

#define FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6C120)
#define FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS16_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1EB6C130)
#define FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS16_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x1EB6C150)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int PureReflectedMethodNode___c__DisplayClass16_0_TypeDefinitionIndex = 30116;

	class PureReflectedMethodNode___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::PureReflectedMethodNode* __4__this; // 0x10
		::FlowCanvas::Nodes::ReflectedMethodRegistrationOptions options; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Object* _RegisterPorts_b__0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS16_0__REGISTERPORTS_B__0_OFFSET))(this);
		}

		::System::Object* _RegisterPorts_b__1()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS16_0__REGISTERPORTS_B__1_OFFSET))(this);
		}
	};
}
