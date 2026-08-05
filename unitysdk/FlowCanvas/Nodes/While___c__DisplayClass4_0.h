#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLOWCANVAS_NODES_WHILE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA95600)
#define FLOWCANVAS_NODES_WHILE___C__DISPLAYCLASS4_0__DOWHILE_B__0_OFFSET UNITYSDK_OFFSET(0x1EA95610)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int While___c__DisplayClass4_0_TypeDefinitionIndex = 30294;

	class While___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Boolean active; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WHILE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoWhile_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_WHILE___C__DISPLAYCLASS4_0__DOWHILE_B__0_OFFSET))(this);
		}
	};
}
