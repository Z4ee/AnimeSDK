#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDRECORDUSINGMONSTERCARD_INVOKE_OFFSET UNITYSDK_OFFSET(0x107D1080)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRECORDUSINGMONSTERCARD__CTOR_OFFSET UNITYSDK_OFFSET(0x107D13C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRecordUsingMonsterCard_TypeDefinitionIndex = 90884;

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
