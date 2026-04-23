#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DelayExecuteOnNextWave_1.h"

class Class_3_4301E738C7509E8E_Class_1_42B54E988F80C53A;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_3_4301E738C7509E8E_METHOD_3_EAA76DD2AE71C42F_OFFSET UNITYSDK_OFFSET(0x8FCB250)
#define CLASS_3_4301E738C7509E8E_METHOD_3_F75E953D2B462939_OFFSET UNITYSDK_OFFSET(0x8FCB190)
#define CLASS_3_4301E738C7509E8E__CTOR_OFFSET UNITYSDK_OFFSET(0x8FCB230)

inline static constexpr unsigned int Class_3_4301E738C7509E8E_TypeDefinitionIndex = 50818;

class Class_3_4301E738C7509E8E : public ::RPG::GameCore::DelayExecuteOnNextWave_1<::Class_3_4301E738C7509E8E_Class_1_42B54E988F80C53A*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4301E738C7509E8E__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_F75E953D2B462939(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_4301E738C7509E8E_METHOD_3_F75E953D2B462939_OFFSET))(this, a1);
	}

	::System::Void Method_3_EAA76DD2AE71C42F(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_4301E738C7509E8E_METHOD_3_EAA76DD2AE71C42F_OFFSET))(this, P0);
	}
};
