#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNodeBase.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_5_FCAF801AC482D3B5;
namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATEAREA_GET_CURRENTCHESSBOARD_OFFSET UNITYSDK_OFFSET(0x12607E80)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATEAREA_INVOKE_OFFSET UNITYSDK_OFFSET(0x126080D0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATEAREA_ONREGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12607F90)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATEAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x12608840)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATEAREA__ONREGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x12608850)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATEAREA__ONREGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x12608870)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameIterateArea_TypeDefinitionIndex = 69498;

	class HackerGameIterateArea : public ::FlowCanvas::Nodes::CallableFunctionNodeBase
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* _bound; // 0x38
		::FlowCanvas::FlowOutput* _output; // 0x40
		::MoleMole::HollowChessboard::HollowCell cell; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATEAREA__CTOR_OFFSET))(this);
		}

		::Class_5_FCAF801AC482D3B5* get_CurrentChessboard()
		{
			return ((::Class_5_FCAF801AC482D3B5*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATEAREA_GET_CURRENTCHESSBOARD_OFFSET))(this);
		}

		::System::Void OnRegisterPorts(::FlowCanvas::FlowNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATEAREA_ONREGISTERPORTS_OFFSET))(this, node);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATEAREA_INVOKE_OFFSET))(this);
		}

		::MoleMole::HollowChessboard::HollowCell _OnRegisterPorts_b__5_0()
		{
			return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATEAREA__ONREGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::System::Void _OnRegisterPorts_b__5_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEITERATEAREA__ONREGISTERPORTS_B__5_1_OFFSET))(this, f);
		}
	};
}
