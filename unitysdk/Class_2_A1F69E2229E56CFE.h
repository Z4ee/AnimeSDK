#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47EE63CB5C4DC8FC_19.h"

namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtBattleMode; }

#define CLASS_2_A1F69E2229E56CFE__CTOR_OFFSET UNITYSDK_OFFSET(0x14202130)

inline static constexpr unsigned int Class_2_A1F69E2229E56CFE_TypeDefinitionIndex = 50733;

class Class_2_A1F69E2229E56CFE : public ::Class_1_47EE63CB5C4DC8FC_19
{
public:
	::RPG::GameCore::RtBattleMode* Field_2_0; // 0x18
	::RPG::GameCore::GameWorld* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1F69E2229E56CFE__CTOR_OFFSET))(this);
	}
};
