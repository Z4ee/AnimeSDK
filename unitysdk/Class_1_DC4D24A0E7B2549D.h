#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleModelResultType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_DC4D24A0E7B2549D__CTOR_OFFSET UNITYSDK_OFFSET(0x156D36A0)

inline static constexpr unsigned int Class_1_DC4D24A0E7B2549D_TypeDefinitionIndex = 53711;

class Class_1_DC4D24A0E7B2549D : public ::System::Object
{
public:
	::RPG::GameCore::TeamType HJJKMPOCPOE; // 0x10
	::RPG::GameCore::BattleModelResultType JCHFCNFHCMM; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC4D24A0E7B2549D__CTOR_OFFSET))(this);
	}
};
