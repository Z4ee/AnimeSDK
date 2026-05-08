#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_QUERYNPCID_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x16045800)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_QUERYNPCID__CTOR_OFFSET UNITYSDK_OFFSET(0x160458D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_QUERYNPCID__REGISTERPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x16045910)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_QueryNpcID_TypeDefinitionIndex = 40924;

	class LD_AbyssS2_QueryNpcID : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* _cityNpcID; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_QUERYNPCID__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_QUERYNPCID_REGISTERPORTS_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__1_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_QUERYNPCID__REGISTERPORTS_B__1_0_OFFSET))(this);
		}
	};
}
