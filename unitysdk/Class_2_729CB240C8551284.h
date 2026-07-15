#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4CD8A1ACD565F336.h"

namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameFlow; }
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameSession; }
namespace UnityEngine { class Transform; }

#define CLASS_2_729CB240C8551284_CLEAR_OFFSET UNITYSDK_OFFSET(0x18BD9420)
#define CLASS_2_729CB240C8551284__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD94B0)

inline static constexpr unsigned int Class_2_729CB240C8551284_TypeDefinitionIndex = 73841;

class Class_2_729CB240C8551284 : public ::Class_1_4CD8A1ACD565F336
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameFlow* Field_2_0; // 0x28
	::RPG::Client::ChenLingBattle::ChenLingBattleGameSession* Field_2_1; // 0x30
	::UnityEngine::Transform* Field_2_2; // 0x38
	::System::Int32 Field_2_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_729CB240C8551284__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_729CB240C8551284_CLEAR_OFFSET))(this);
	}
};
