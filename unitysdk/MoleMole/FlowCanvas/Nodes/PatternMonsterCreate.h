#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterCreateDataBase.h"

#define MOLEMOLE_FLOWCANVAS_NODES_PATTERNMONSTERCREATE__CTOR_OFFSET UNITYSDK_OFFSET(0x16E555D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int PatternMonsterCreate_TypeDefinitionIndex = 68697;

	class PatternMonsterCreate : public ::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase
	{
	public:
		::System::Int32 areaMaxAngle; // 0x48
		::System::Int32 areaMinAngle; // 0x4C
		::System::Single areaMaxRange; // 0x50
		::System::Single areaMinRange; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_PATTERNMONSTERCREATE__CTOR_OFFSET))(this);
		}
	};
}
