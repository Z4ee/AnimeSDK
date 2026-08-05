#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_FLOWCANVAS_NODES_MONSTERRANDOMSELECTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x118C4D00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int MonsterRandomSelectItem_TypeDefinitionIndex = 46718;

	class MonsterRandomSelectItem : public ::System::Object
	{
	public:
		::System::Int32 monsterId; // 0x10
		::System::Int32 AIID; // 0x14
		::System::Single weight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONSTERRANDOMSELECTITEM__CTOR_OFFSET))(this);
		}
	};
}
