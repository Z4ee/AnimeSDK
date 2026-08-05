#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAITUNTIL_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B528F00)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAITUNTIL_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1B5290B0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAITUNTIL_START_OFFSET UNITYSDK_OFFSET(0x1B528FF0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAITUNTIL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B529100)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAITUNTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B529260)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAITUNTIL__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1B5292A0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameWaitUntil_TypeDefinitionIndex = 41386;

	class HackerGameWaitUntil : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::FlowInput* _start; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* _condition; // 0xB0
		::FlowCanvas::Flow _flow; // 0xB8
		::FlowCanvas::FlowOutput* _invokeFinish; // 0xE0
		::System::Boolean _isActive; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAITUNTIL__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAITUNTIL_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAITUNTIL_START_OFFSET))(this, flow);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAITUNTIL_UPDATE_OFFSET))(this);
		}

		::System::Void SetActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAITUNTIL_SETACTIVE_OFFSET))(this, value);
		}

		::System::Void _RegisterPorts_b__5_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAITUNTIL__REGISTERPORTS_B__5_0_OFFSET))(this, f);
		}
	};
}
