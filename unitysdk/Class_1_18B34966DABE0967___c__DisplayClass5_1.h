#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_838;
class Class_1_18B34966DABE0967___c__DisplayClass5_0;
class Class_1_811C21B122C8082C;

#define CLASS_1_18B34966DABE0967___C__DISPLAYCLASS5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x155F1080)
#define CLASS_1_18B34966DABE0967___C__DISPLAYCLASS5_1__PLAN_B__0_OFFSET UNITYSDK_OFFSET(0x155F13A0)

inline static constexpr unsigned int Class_1_18B34966DABE0967___c__DisplayClass5_1_TypeDefinitionIndex = 63970;

class Class_1_18B34966DABE0967___c__DisplayClass5_1 : public ::System::Object
{
public:
	::Class_1_811C21B122C8082C* routeCtx; // 0x10
	::Class_1_18B34966DABE0967___c__DisplayClass5_0* CS___8__locals1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18B34966DABE0967___C__DISPLAYCLASS5_1__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_838* _Plan_b__0(::RPG::GameCore::ExpeditionBattleFlowStateType a1)
	{
		return ((::Class_0_16E4307DCC419505_838*(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType))((::PBYTE)hIl2Cpp + CLASS_1_18B34966DABE0967___C__DISPLAYCLASS5_1__PLAN_B__0_OFFSET))(this, a1);
	}
};
