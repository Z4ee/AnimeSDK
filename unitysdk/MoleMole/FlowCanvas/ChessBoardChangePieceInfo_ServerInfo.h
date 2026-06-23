#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E87E347C649FDDBC_Enum_3_9CA0D4E7230BAB54.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_1.h"
#include "unitysdk/Enum_3_7CF131C413C919AF.h"
#include "unitysdk/MoleMole/FlowCanvas/Optional_1.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/ProtoScript/NodeVisible.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardChangePieceInfo_ServerInfo_TypeDefinitionIndex = 84213;

	struct alignas(4) ChessBoardChangePieceInfo_ServerInfo
	{
		::System::Int32 Index; // 0x10
		::MoleMole::FlowCanvas::Optional_1<::System::Int32> EventID; // 0x14
		::MoleMole::FlowCanvas::Optional_1<::Enum_3_7CF131C413C919AF> Flag; // 0x1C
		::MoleMole::FlowCanvas::Optional_1<::ProtoScript::NodeState> NodeState; // 0x24
		::MoleMole::FlowCanvas::Optional_1<::ProtoScript::NodeVisible> VisibleState; // 0x2C
		::MoleMole::FlowCanvas::Optional_1<::Enum_3_4608E37A1B3D374A_1> GridType; // 0x34
		::Class_1_E87E347C649FDDBC_Enum_3_9CA0D4E7230BAB54 ChangeType; // 0x3C
	};
}
