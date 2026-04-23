#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E0403D2B5AD79E8;
class Class_1_E754E66360B8422F;

#define RPG_GAMECORE_RTBATTLEMODE___C__DISPLAYCLASS79_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB726D80)
#define RPG_GAMECORE_RTBATTLEMODE___C__DISPLAYCLASS79_0___INITTEAMCHARACTERS_B__0_OFFSET UNITYSDK_OFFSET(0xB728A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleMode___c__DisplayClass79_0_TypeDefinitionIndex = 50052;

	class RtBattleMode___c__DisplayClass79_0 : public ::System::Object
	{
	public:
		::Class_1_E754E66360B8422F* data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___C__DISPLAYCLASS79_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __InitTeamCharacters_b__0(::Class_1_0E0403D2B5AD79E8* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0E0403D2B5AD79E8*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEMODE___C__DISPLAYCLASS79_0___INITTEAMCHARACTERS_B__0_OFFSET))(this, x);
		}
	};
}
