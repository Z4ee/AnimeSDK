#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
#include "unitysdk/System/Object.h"

class Class_1_8E3C7CE527FAD01A;
namespace RPG::GameCore { class StageMonsterInvasionParamRow; }

#define CLASS_1_6EDF1562E8B73DA4__CTOR_OFFSET UNITYSDK_OFFSET(0x15C37200)

inline static constexpr unsigned int Class_1_6EDF1562E8B73DA4_TypeDefinitionIndex = 56181;

class Class_1_6EDF1562E8B73DA4 : public ::System::Object
{
public:
	::RPG::GameCore::StageMonsterInvasionParamRow* LEPBGJHDPLM; // 0x10
	::RPG::GameCore::StageInvasionMonsterUIData OHNNCOCDOED; // 0x18

	::System::Void _ctor(::Class_1_8E3C7CE527FAD01A* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8E3C7CE527FAD01A*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6EDF1562E8B73DA4__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
