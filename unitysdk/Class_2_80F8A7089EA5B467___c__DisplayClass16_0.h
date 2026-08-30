#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_80F8A7089EA5B467;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_80F8A7089EA5B467___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBE9F420)
#define CLASS_2_80F8A7089EA5B467___C__DISPLAYCLASS16_0__SETUPBOSSENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xBEA07D0)

inline static constexpr unsigned int Class_2_80F8A7089EA5B467___c__DisplayClass16_0_TypeDefinitionIndex = 71685;

class Class_2_80F8A7089EA5B467___c__DisplayClass16_0 : public ::System::Object
{
public:
	::Class_2_80F8A7089EA5B467* __4__this; // 0x10
	::RPG::GameCore::GameEntity* entity; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetupBossEntity_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80F8A7089EA5B467___C__DISPLAYCLASS16_0__SETUPBOSSENTITY_B__0_OFFSET))(this);
	}
};
