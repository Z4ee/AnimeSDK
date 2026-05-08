#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class Port; }
namespace System { class String; }

#define FLOWCANVAS_FLOWNODE___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E1280)
#define FLOWCANVAS_FLOWNODE___C__DISPLAYCLASS57_0__GETINPUTPORT_B__0_OFFSET UNITYSDK_OFFSET(0x1B7E1290)

namespace FlowCanvas
{
	inline static constexpr unsigned int FlowNode___c__DisplayClass57_0_TypeDefinitionIndex = 27884;

	class FlowNode___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::FlowCanvas::FlowNode* __4__this; // 0x10
		::System::String* ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetInputPort_b__0(::FlowCanvas::Port* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::Port*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE___C__DISPLAYCLASS57_0__GETINPUTPORT_B__0_OFFSET))(this, p);
		}
	};
}
