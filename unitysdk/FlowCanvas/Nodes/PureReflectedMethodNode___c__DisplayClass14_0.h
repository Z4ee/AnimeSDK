#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class PureReflectedMethodNode; }

#define FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B9280)
#define FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS14_0__REGISTEROUTPUT_B__0_OFFSET UNITYSDK_OFFSET(0x1D7B9290)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int PureReflectedMethodNode___c__DisplayClass14_0_TypeDefinitionIndex = 29633;

	class PureReflectedMethodNode___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::PureReflectedMethodNode* __4__this; // 0x10
		::System::Int32 idx; // 0x18
		::System::Boolean callable; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Object* _RegisterOutput_b__0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTEDMETHODNODE___C__DISPLAYCLASS14_0__REGISTEROUTPUT_B__0_OFFSET))(this);
		}
	};
}
