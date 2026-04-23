#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleActionType.h"
#include "unitysdk/System/Object.h"

class Class_2_7AF1D57CA4301272;

#define CLASS_1_708D79563A9AA08E_METHOD_1_64359CF21C5B4F74_OFFSET UNITYSDK_OFFSET(0x123E1A10)
#define CLASS_1_708D79563A9AA08E__CTOR_OFFSET UNITYSDK_OFFSET(0x123E1A70)

inline static constexpr unsigned int Class_1_708D79563A9AA08E_TypeDefinitionIndex = 69703;

class Class_1_708D79563A9AA08E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_708D79563A9AA08E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_64359CF21C5B4F74(::RPG::GameCore::ChimeraBattleActionType a1, ::Class_2_7AF1D57CA4301272* a2, ::Class_2_7AF1D57CA4301272* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleActionType, ::Class_2_7AF1D57CA4301272*, ::Class_2_7AF1D57CA4301272*))((::PBYTE)hIl2Cpp + CLASS_1_708D79563A9AA08E_METHOD_1_64359CF21C5B4F74_OFFSET))(this, a1, a2, a3);
	}
};
