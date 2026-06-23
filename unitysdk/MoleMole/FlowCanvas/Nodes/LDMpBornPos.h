#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMPBORNPOS_CALCBORNPOS_OFFSET UNITYSDK_OFFSET(0x182D73E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPBORNPOS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x182D71D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPBORNPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x182D77C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPBORNPOS__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0x182D7840)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPBORNPOS__REGISTERPORTS_B__11_1_OFFSET UNITYSDK_OFFSET(0x182D7870)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMPBORNPOS__REGISTERPORTS_B__11_2_OFFSET UNITYSDK_OFFSET(0x182D7880)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMpBornPos_TypeDefinitionIndex = 54539;

	class LDMpBornPos : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* valueInputPos2BornPos; // 0xA8
		::FlowCanvas::ValueOutput_1<::System::Boolean>* valueOutputIsSuccess; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Int32>* valueInputCurrent; // 0xB8
		::FlowCanvas::FlowInput* input; // 0xC0
		::FlowCanvas::ValueOutput_1<::System::String*>* valueOutputBornPos; // 0xC8
		::System::String* bornPos; // 0xD0
		::FlowCanvas::ValueInput_1<::System::String*>* valueInputPos3BornPos; // 0xD8
		::FlowCanvas::FlowOutput* output; // 0xE0
		::FlowCanvas::FlowOutput* finish; // 0xE8
		::FlowCanvas::ValueInput_1<::System::String*>* valueInputPos1BornPos; // 0xF0
		::System::Boolean isSuccess; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPBORNPOS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPBORNPOS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void calcBornPos(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPBORNPOS_CALCBORNPOS_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__11_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPBORNPOS__REGISTERPORTS_B__11_0_OFFSET))(this, f);
		}

		::System::String* _RegisterPorts_b__11_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPBORNPOS__REGISTERPORTS_B__11_1_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__11_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMPBORNPOS__REGISTERPORTS_B__11_2_OFFSET))(this);
		}
	};
}
