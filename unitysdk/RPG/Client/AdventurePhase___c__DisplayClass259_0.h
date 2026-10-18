#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ToastPile; }

#define RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS259_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC60B0B0)
#define RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS259_0___ONMAZEREFRESCHARACTERHP_B__0_OFFSET UNITYSDK_OFFSET(0xC60C390)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhase___c__DisplayClass259_0_TypeDefinitionIndex = 60123;

	class AdventurePhase___c__DisplayClass259_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::ToastPile* info; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS259_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnMazeRefresCharacterHP_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASE___C__DISPLAYCLASS259_0___ONMAZEREFRESCHARACTERHP_B__0_OFFSET))(this);
		}
	};
}
