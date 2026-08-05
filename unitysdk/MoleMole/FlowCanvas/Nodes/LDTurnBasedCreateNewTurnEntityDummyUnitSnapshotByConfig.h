#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

class Class_3_1A1D7F575F611658;

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYDUMMYUNITSNAPSHOTBYCONFIG_INVOKE_OFFSET UNITYSDK_OFFSET(0x118BD6A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYDUMMYUNITSNAPSHOTBYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x118BD730)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedCreateNewTurnEntityDummyUnitSnapshotByConfig_TypeDefinitionIndex = 76601;

	class LDTurnBasedCreateNewTurnEntityDummyUnitSnapshotByConfig : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::Class_3_1A1D7F575F611658*, ::System::UInt32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYDUMMYUNITSNAPSHOTBYCONFIG__CTOR_OFFSET))(this);
		}

		::Class_3_1A1D7F575F611658* Invoke(::System::UInt32 entityID, ::System::Int32 configID)
		{
			return ((::Class_3_1A1D7F575F611658*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDCREATENEWTURNENTITYDUMMYUNITSNAPSHOTBYCONFIG_INVOKE_OFFSET))(this, entityID, configID);
		}
	};
}
