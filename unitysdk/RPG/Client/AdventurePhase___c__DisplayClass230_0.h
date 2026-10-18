#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS230_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC612840)
#define RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS230_0___PRELOAD_B__0_OFFSET UNITYSDK_OFFSET(0xC612850)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhase___c__DisplayClass230_0_TypeDefinitionIndex = 60122;

	class AdventurePhase___c__DisplayClass230_0 : public ::System::Object
	{
	public:
		::System::Boolean isPreBattlePreloadFinish; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS230_0__CTOR_OFFSET))(this);
		}

		::System::Void __Preload_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS230_0___PRELOAD_B__0_OFFSET))(this);
		}
	};
}
