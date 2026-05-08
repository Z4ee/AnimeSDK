#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodRegistrationOptions.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes::Legacy { class PureReflectedMethodNode; }

#define FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADADF00)
#define FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS8_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1ADADF10)
#define FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS8_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x1ADADF30)

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int PureReflectedMethodNode___c__DisplayClass8_0_TypeDefinitionIndex = 26591;

	class PureReflectedMethodNode___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::Legacy::PureReflectedMethodNode* __4__this; // 0x10
		::FlowCanvas::Nodes::ReflectedMethodRegistrationOptions options; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Object* _RegisterPorts_b__0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS8_0__REGISTERPORTS_B__0_OFFSET))(this);
		}

		::System::Object* _RegisterPorts_b__1()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS8_0__REGISTERPORTS_B__1_OFFSET))(this);
		}
	};
}
