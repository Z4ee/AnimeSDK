#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_5.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREARANDOMNOWITHJUMPANDRANGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1541C800)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREARANDOMNOWITHJUMPANDRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1541CC80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetAreaRandomNoWithJumpAndRange_TypeDefinitionIndex = 43001;

	class LD_AbyssS2_GetAreaRandomNoWithJumpAndRange : public ::FlowCanvas::Nodes::PureFunctionNode_5<::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREARANDOMNOWITHJUMPANDRANGE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Boolean isShared, ::System::Int32 jumpCount, ::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREARANDOMNOWITHJUMPANDRANGE_INVOKE_OFFSET))(this, isShared, jumpCount, min, max);
		}
	};
}
