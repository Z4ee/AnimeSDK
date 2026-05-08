#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/LevelZeroMonsterCreateDataBase.h"

#define MOLEMOLE_FLOWCANVAS_LEVELZERORANDOMPOSMONSTERCREATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18411590)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int LevelZeroRandomPosMonsterCreateData_TypeDefinitionIndex = 45235;

	class LevelZeroRandomPosMonsterCreateData : public ::MoleMole::FlowCanvas::LevelZeroMonsterCreateDataBase
	{
	public:
		::System::Int32 monsterCount; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LEVELZERORANDOMPOSMONSTERCREATEDATA__CTOR_OFFSET))(this);
		}
	};
}
