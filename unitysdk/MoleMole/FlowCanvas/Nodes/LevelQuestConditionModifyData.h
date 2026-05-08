#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/LevelQuestConditionOperation.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LEVELQUESTCONDITIONMODIFYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16E554C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LevelQuestConditionModifyData_TypeDefinitionIndex = 46991;

	class LevelQuestConditionModifyData : public ::System::Object
	{
	public:
		::MoleMole::Battle::LevelQuestConditionOperation operation; // 0x10
		::System::Int32 value; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LEVELQUESTCONDITIONMODIFYDATA__CTOR_OFFSET))(this);
		}
	};
}
