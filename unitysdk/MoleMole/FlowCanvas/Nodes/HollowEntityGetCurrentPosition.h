#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardPureFunctionNode_2.h"
#include "unitysdk/MoleMole/Vector2Int.h"

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCURRENTPOSITION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A01E440)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCURRENTPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A01E720)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityGetCurrentPosition_TypeDefinitionIndex = 81167;

	class HollowEntityGetCurrentPosition : public ::MoleMole::FlowCanvas::ChessboardPureFunctionNode_2<::MoleMole::Vector2Int, ::System::UInt32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCURRENTPOSITION__CTOR_OFFSET))(this);
		}

		::MoleMole::Vector2Int Invoke(::System::UInt32 entityRuntimeID)
		{
			return ((::MoleMole::Vector2Int(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCURRENTPOSITION_INVOKE_OFFSET))(this, entityRuntimeID);
		}
	};
}
