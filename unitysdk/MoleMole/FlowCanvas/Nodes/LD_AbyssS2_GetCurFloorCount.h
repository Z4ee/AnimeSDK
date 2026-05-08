#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURFLOORCOUNT_INVOKE_OFFSET UNITYSDK_OFFSET(0x170CB560)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURFLOORCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x170CB690)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetCurFloorCount_TypeDefinitionIndex = 61605;

	class LD_AbyssS2_GetCurFloorCount : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURFLOORCOUNT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETCURFLOORCOUNT_INVOKE_OFFSET))(this);
		}
	};
}
