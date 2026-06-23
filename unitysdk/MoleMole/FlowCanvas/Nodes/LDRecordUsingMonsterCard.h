#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDRECORDUSINGMONSTERCARD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1710C1D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRECORDUSINGMONSTERCARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1710C520)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRecordUsingMonsterCard_TypeDefinitionIndex = 71893;

	class LDRecordUsingMonsterCard : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRECORDUSINGMONSTERCARD__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 monsterCardId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRECORDUSINGMONSTERCARD_INVOKE_OFFSET))(this, monsterCardId);
		}
	};
}
