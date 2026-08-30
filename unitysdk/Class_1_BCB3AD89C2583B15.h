#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_7567A2DA21501154;
class Class_1_CC9CE4D523046362;

#define CLASS_1_BCB3AD89C2583B15_METHOD_1_7A27F01C76791433_OFFSET UNITYSDK_OFFSET(0x19515340)
#define CLASS_1_BCB3AD89C2583B15__CTOR_OFFSET UNITYSDK_OFFSET(0x195152E0)

inline static constexpr unsigned int Class_1_BCB3AD89C2583B15_TypeDefinitionIndex = 63965;

class Class_1_BCB3AD89C2583B15 : public ::System::Object
{
public:
	::Class_1_CC9CE4D523046362* JIHBGMMGJCE; // 0x10
	::System::UInt32 BBJKFHDHCPK; // 0x18
	::System::UInt32 GKEIEIBAKBK; // 0x1C

	::System::Void _ctor(::Class_1_CC9CE4D523046362* a1, ::Class_1_7567A2DA21501154* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC9CE4D523046362*, ::Class_1_7567A2DA21501154*))((::PBYTE)hIl2Cpp + CLASS_1_BCB3AD89C2583B15__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_7A27F01C76791433(::RPG::GameCore::ExpeditionBattleFlowStateType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BCB3AD89C2583B15_METHOD_1_7A27F01C76791433_OFFSET))(this, a1, a2, a3, a4);
	}
};
