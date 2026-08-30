#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StageBattleEventConfig; }
namespace RPG::GameCore { class StageBattleEventRow; }

#define CLASS_1_22A7296BC2301A4D_CLASS_1_80714773511AC362__CTOR_OFFSET UNITYSDK_OFFSET(0x16213540)

inline static constexpr unsigned int Class_1_22A7296BC2301A4D_Class_1_80714773511AC362_TypeDefinitionIndex = 56390;

class Class_1_22A7296BC2301A4D_Class_1_80714773511AC362 : public ::System::Object
{
public:
	::RPG::GameCore::StageBattleEventRow* FDKPNKAGNFO; // 0x10
	::RPG::GameCore::StageBattleEventConfig* EABKOHGCHFP; // 0x18
	::System::Int32 GGOOEIBFLAD; // 0x20
	::System::Int32 JAGAMOHBBMN; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22A7296BC2301A4D_CLASS_1_80714773511AC362__CTOR_OFFSET))(this);
	}
};
