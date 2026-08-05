#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class PureReflectionConstructorNode; }

#define FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E536850)
#define FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE___C__DISPLAYCLASS8_0__REGISTEROUTPUT_B__0_OFFSET UNITYSDK_OFFSET(0x1E536860)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int PureReflectionConstructorNode___c__DisplayClass8_0_TypeDefinitionIndex = 31286;

	class PureReflectionConstructorNode___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::PureReflectionConstructorNode* __4__this; // 0x10
		::System::Boolean callable; // 0x18
		::System::Int32 idx; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Object* _RegisterOutput_b__0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE___C__DISPLAYCLASS8_0__REGISTEROUTPUT_B__0_OFFSET))(this);
		}
	};
}
