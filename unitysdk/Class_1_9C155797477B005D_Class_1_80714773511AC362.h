#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StageBattleEventConfig; }
namespace RPG::GameCore { class StageBattleEventRow; }

#define CLASS_1_9C155797477B005D_CLASS_1_80714773511AC362__CTOR_OFFSET UNITYSDK_OFFSET(0xD17EDD0)

inline static constexpr unsigned int Class_1_9C155797477B005D_Class_1_80714773511AC362_TypeDefinitionIndex = 45044;

class Class_1_9C155797477B005D_Class_1_80714773511AC362 : public ::System::Object
{
public:
	::RPG::GameCore::StageBattleEventRow* Field_1_1; // 0x10
	::RPG::GameCore::StageBattleEventConfig* Field_1_0; // 0x18
	::System::Int32 Field_1_3; // 0x20
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C155797477B005D_CLASS_1_80714773511AC362__CTOR_OFFSET))(this);
	}
};
