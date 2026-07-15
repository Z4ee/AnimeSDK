#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F8006A7C557D3FC4__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7F450)

inline static constexpr unsigned int Class_1_F8006A7C557D3FC4_TypeDefinitionIndex = 75623;

class Class_1_F8006A7C557D3FC4 : public ::System::Object
{
public:
	::RPG::GameCore::InsertActionType Field_1_0; // 0x10
	::RPG::GameCore::TurnState Field_1_1; // 0x14

	::System::Void _ctor(::RPG::GameCore::TurnState a1, ::RPG::GameCore::InsertActionType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState, ::RPG::GameCore::InsertActionType))((::PBYTE)hIl2Cpp + CLASS_1_F8006A7C557D3FC4__CTOR_OFFSET))(this, a1, a2);
	}
};
