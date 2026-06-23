#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class CSharpAutoCallbackEvent; }

#define FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC31B40)
#define FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT___C__DISPLAYCLASS14_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1CC31B50)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CSharpAutoCallbackEvent___c__DisplayClass14_0_TypeDefinitionIndex = 29969;

	class CSharpAutoCallbackEvent___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::CSharpAutoCallbackEvent* __4__this; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Object* _RegisterPorts_b__0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT___C__DISPLAYCLASS14_0__REGISTERPORTS_B__0_OFFSET))(this);
		}
	};
}
