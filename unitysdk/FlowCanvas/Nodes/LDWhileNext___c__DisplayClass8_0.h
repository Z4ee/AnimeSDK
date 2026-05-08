#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLOWCANVAS_NODES_LDWHILENEXT___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11F47F00)
#define FLOWCANVAS_NODES_LDWHILENEXT___C__DISPLAYCLASS8_0__DOWHILE_B__0_OFFSET UNITYSDK_OFFSET(0x11F47F10)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWhileNext___c__DisplayClass8_0_TypeDefinitionIndex = 46803;

	class LDWhileNext___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Boolean active; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDWHILENEXT___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoWhile_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LDWHILENEXT___C__DISPLAYCLASS8_0__DOWHILE_B__0_OFFSET))(this);
		}
	};
}
