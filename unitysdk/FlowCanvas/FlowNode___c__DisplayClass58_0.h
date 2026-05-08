#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class Port; }
namespace System { class String; }

#define FLOWCANVAS_FLOWNODE___C__DISPLAYCLASS58_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2926C0)
#define FLOWCANVAS_FLOWNODE___C__DISPLAYCLASS58_0__GETOUTPUTPORT_B__0_OFFSET UNITYSDK_OFFSET(0x1A2926D0)

namespace FlowCanvas
{
	inline static constexpr unsigned int FlowNode___c__DisplayClass58_0_TypeDefinitionIndex = 27878;

	class FlowNode___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::System::String* ID; // 0x10
		::FlowCanvas::FlowNode* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE___C__DISPLAYCLASS58_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetOutputPort_b__0(::FlowCanvas::Port* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::Port*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWNODE___C__DISPLAYCLASS58_0__GETOUTPUTPORT_B__0_OFFSET))(this, p);
		}
	};
}
