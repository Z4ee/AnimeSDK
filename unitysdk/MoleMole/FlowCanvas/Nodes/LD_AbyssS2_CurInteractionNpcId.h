#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURINTERACTIONNPCID_INVOKE_OFFSET UNITYSDK_OFFSET(0x1499BA90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURINTERACTIONNPCID__CTOR_OFFSET UNITYSDK_OFFSET(0x1499BB20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_CurInteractionNpcId_TypeDefinitionIndex = 57566;

	class LD_AbyssS2_CurInteractionNpcId : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURINTERACTIONNPCID__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CURINTERACTIONNPCID_INVOKE_OFFSET))(this);
		}
	};
}
