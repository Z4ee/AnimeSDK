#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableFunctionNode_4.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CREATEHOLLOWENTITYV2_INVOKE_OFFSET UNITYSDK_OFFSET(0x14278EE0)
#define MOLEMOLE_FLOWCANVAS_NODES_CREATEHOLLOWENTITYV2__CTOR_OFFSET UNITYSDK_OFFSET(0x142790A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CreateHollowEntityV2_TypeDefinitionIndex = 39852;

	class CreateHollowEntityV2 : public ::MoleMole::FlowCanvas::ChessboardCallableFunctionNode_4<::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CREATEHOLLOWENTITYV2__CTOR_OFFSET))(this);
		}

		::System::UInt32 Invoke(::System::Int32 entityID, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CREATEHOLLOWENTITYV2_INVOKE_OFFSET))(this, entityID, x, y);
		}
	};
}
