#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4CD8A1ACD565F336.h"

namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameFlow; }
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameSession; }
namespace UnityEngine { class Transform; }

#define CLASS_2_729CB240C8551284_CLEAR_OFFSET UNITYSDK_OFFSET(0xC529B00)
#define CLASS_2_729CB240C8551284__CTOR_OFFSET UNITYSDK_OFFSET(0xC529B90)

inline static constexpr unsigned int Class_2_729CB240C8551284_TypeDefinitionIndex = 77326;

class Class_2_729CB240C8551284 : public ::Class_1_4CD8A1ACD565F336
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameFlow* PHHMFBDDAHK; // 0x28
	::RPG::Client::ChenLingBattle::ChenLingBattleGameSession* KFNEAFKEFJC; // 0x30
	::UnityEngine::Transform* HADMOPFHPPF; // 0x38
	::System::Int32 PMIPHKEANNP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_729CB240C8551284__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_729CB240C8551284_CLEAR_OFFSET))(this);
	}
};
