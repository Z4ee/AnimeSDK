#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
#include "unitysdk/System/Object.h"

class Class_1_4FBAE6148E0D2FAE;
namespace RPG::GameCore { class StageMonsterInvasionParamRow; }

#define CLASS_1_6EDF1562E8B73DA4__CTOR_OFFSET UNITYSDK_OFFSET(0x199652F0)

inline static constexpr unsigned int Class_1_6EDF1562E8B73DA4_TypeDefinitionIndex = 56368;

class Class_1_6EDF1562E8B73DA4 : public ::System::Object
{
public:
	::RPG::GameCore::StageMonsterInvasionParamRow* LEPBGJHDPLM; // 0x10
	::RPG::GameCore::StageInvasionMonsterUIData OHNNCOCDOED; // 0x18

	::System::Void _ctor(::Class_1_4FBAE6148E0D2FAE* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4FBAE6148E0D2FAE*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6EDF1562E8B73DA4__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
