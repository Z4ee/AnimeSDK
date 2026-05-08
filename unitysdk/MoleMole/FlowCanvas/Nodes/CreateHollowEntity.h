#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableFunctionNode_3.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CREATEHOLLOWENTITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x170C0890)
#define MOLEMOLE_FLOWCANVAS_NODES_CREATEHOLLOWENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x170C0A40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CreateHollowEntity_TypeDefinitionIndex = 60371;

	class CreateHollowEntity : public ::MoleMole::FlowCanvas::ChessboardCallableFunctionNode_3<::System::UInt32, ::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CREATEHOLLOWENTITY__CTOR_OFFSET))(this);
		}

		::System::UInt32 Invoke(::System::Int32 entityID, ::System::Int32 index)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CREATEHOLLOWENTITY_INVOKE_OFFSET))(this, entityID, index);
		}
	};
}
