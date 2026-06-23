#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableFunctionNode_3.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CREATEHOLLOWENTITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x19119FA0)
#define MOLEMOLE_FLOWCANVAS_NODES_CREATEHOLLOWENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1911A150)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CreateHollowEntity_TypeDefinitionIndex = 53177;

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
