#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodRegistrationOptions.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class PureReflectionConstructorNode; }

#define FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7EA20)
#define FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE___C__DISPLAYCLASS10_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1EB7EA30)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int PureReflectionConstructorNode___c__DisplayClass10_0_TypeDefinitionIndex = 31285;

	class PureReflectionConstructorNode___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::PureReflectionConstructorNode* __4__this; // 0x10
		::FlowCanvas::Nodes::ReflectedMethodRegistrationOptions options; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Object* _RegisterPorts_b__0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PUREREFLECTIONCONSTRUCTORNODE___C__DISPLAYCLASS10_0__REGISTERPORTS_B__0_OFFSET))(this);
		}
	};
}
