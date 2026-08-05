#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER_PAUSE_OFFSET UNITYSDK_OFFSET(0x19BD99C0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19BD9710)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER_RESUME_OFFSET UNITYSDK_OFFSET(0x19BD9950)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER_START_OFFSET UNITYSDK_OFFSET(0x19BD9A30)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19BD9AA0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD9B50)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_0_OFFSET UNITYSDK_OFFSET(0x19BD9B90)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_1_OFFSET UNITYSDK_OFFSET(0x19BD9C30)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_2_OFFSET UNITYSDK_OFFSET(0x19BD9CC0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_3_OFFSET UNITYSDK_OFFSET(0x19BD9D50)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_4_OFFSET UNITYSDK_OFFSET(0x19BD9D60)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_5_OFFSET UNITYSDK_OFFSET(0x19BD9D80)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameTimer_TypeDefinitionIndex = 45449;

	class HackerGameTimer : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::System::Single>* _deltaTimeFloat; // 0xA8
		::FlowCanvas::ValueOutput_1<::System::Int32>* _totalTimeOutputInt32; // 0xB0
		::FlowCanvas::ValueOutput_1<::System::Single>* _totalTimeOutput; // 0xB8
		::FlowCanvas::FlowInput* _resume; // 0xC0
		::FlowCanvas::FlowInput* _pause; // 0xC8
		::FlowCanvas::FlowOutput* _advance; // 0xD0
		::FlowCanvas::FlowInput* _start; // 0xD8
		::System::Single _deltaTime; // 0xE0
		::System::Boolean _isPaused; // 0xE4
		::System::Single _totalTime; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Resume(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER_RESUME_OFFSET))(this, flow);
		}

		::System::Void Pause(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER_PAUSE_OFFSET))(this, flow);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER_START_OFFSET))(this, flow);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER_UPDATE_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__0_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__0_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_2_OFFSET))(this, f);
		}

		::System::Single _RegisterPorts_b__0_3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_3_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__0_4()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_4_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__0_5()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMETIMER__REGISTERPORTS_B__0_5_OFFSET))(this);
		}
	};
}
