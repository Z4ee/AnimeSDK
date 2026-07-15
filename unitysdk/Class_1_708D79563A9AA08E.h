#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleActionType.h"
#include "unitysdk/System/Object.h"

class Class_2_C01BA129C3E40259;

#define CLASS_1_708D79563A9AA08E_METHOD_1_64359CF21C5B4F74_OFFSET UNITYSDK_OFFSET(0x13A52D30)
#define CLASS_1_708D79563A9AA08E__CTOR_OFFSET UNITYSDK_OFFSET(0x13A52D90)

inline static constexpr unsigned int Class_1_708D79563A9AA08E_TypeDefinitionIndex = 72038;

class Class_1_708D79563A9AA08E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_708D79563A9AA08E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_64359CF21C5B4F74(::RPG::GameCore::ChimeraBattleActionType a1, ::Class_2_C01BA129C3E40259* a2, ::Class_2_C01BA129C3E40259* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleActionType, ::Class_2_C01BA129C3E40259*, ::Class_2_C01BA129C3E40259*))((::PBYTE)hIl2Cpp + CLASS_1_708D79563A9AA08E_METHOD_1_64359CF21C5B4F74_OFFSET))(this, a1, a2, a3);
	}
};
