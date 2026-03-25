#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_75C90E178B164D38.h"

namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameFlow; }
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameSession; }
namespace UnityEngine { class Transform; }

#define CLASS_2_729CB240C8551284_CLEAR_OFFSET UNITYSDK_OFFSET(0x11865610)
#define CLASS_2_729CB240C8551284__CTOR_OFFSET UNITYSDK_OFFSET(0x118656A0)
#define CLASS_2_729CB240C8551284___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x118656B0)

inline static constexpr unsigned int Class_2_729CB240C8551284_TypeDefinitionIndex = 63254;

class Class_2_729CB240C8551284 : public ::Class_1_75C90E178B164D38
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameSession* Field_2_1; // 0x28
	::UnityEngine::Transform* Field_2_0; // 0x30
	::RPG::Client::ChenLingBattle::ChenLingBattleGameFlow* Field_2_2; // 0x38
	::System::Int32 Field_2_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_729CB240C8551284__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_729CB240C8551284_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_729CB240C8551284___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
