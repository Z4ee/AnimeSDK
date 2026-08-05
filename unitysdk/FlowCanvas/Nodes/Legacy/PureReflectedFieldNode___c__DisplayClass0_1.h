#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDFIELDNODE___C__DISPLAYCLASS0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6BA90)
#define FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDFIELDNODE___C__DISPLAYCLASS0_1__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1EB6BAA0)

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int PureReflectedFieldNode___c__DisplayClass0_1_TypeDefinitionIndex = 30438;

	class PureReflectedFieldNode___c__DisplayClass0_1 : public ::System::Object
	{
	public:
		::System::Object* constantValue; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDFIELDNODE___C__DISPLAYCLASS0_1__CTOR_OFFSET))(this);
		}

		::System::Object* _RegisterPorts_b__0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LEGACY_PUREREFLECTEDFIELDNODE___C__DISPLAYCLASS0_1__REGISTERPORTS_B__0_OFFSET))(this);
		}
	};
}
