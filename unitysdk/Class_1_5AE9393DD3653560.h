#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleBranchConditionKey.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_B21BB5859936C97D;

#define CLASS_1_5AE9393DD3653560_METHOD_1_2960A8BAD559D127_OFFSET UNITYSDK_OFFSET(0x16925170)
#define CLASS_1_5AE9393DD3653560__CTOR_OFFSET UNITYSDK_OFFSET(0x169253D0)

inline static constexpr unsigned int Class_1_5AE9393DD3653560_TypeDefinitionIndex = 63945;

class Class_1_5AE9393DD3653560 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AE9393DD3653560__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_2960A8BAD559D127(::Class_1_B21BB5859936C97D* a1, ::RPG::GameCore::ExpeditionBattleBranchConditionKey a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_1_B21BB5859936C97D*, ::RPG::GameCore::ExpeditionBattleBranchConditionKey))((::PBYTE)hIl2Cpp + CLASS_1_5AE9393DD3653560_METHOD_1_2960A8BAD559D127_OFFSET))(this, a1, a2);
	}
};
