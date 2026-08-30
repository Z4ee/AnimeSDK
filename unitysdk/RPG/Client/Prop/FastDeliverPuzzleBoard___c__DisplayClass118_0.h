#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterVisibleComponent; }

#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD___C__DISPLAYCLASS118_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A920B60)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD___C__DISPLAYCLASS118_0__ONPUZZLEPREFINISH_B__0_OFFSET UNITYSDK_OFFSET(0x1A922230)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int FastDeliverPuzzleBoard___c__DisplayClass118_0_TypeDefinitionIndex = 78111;

	class FastDeliverPuzzleBoard___c__DisplayClass118_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterVisibleComponent* visCmpt; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD___C__DISPLAYCLASS118_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnPuzzlePreFinish_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD___C__DISPLAYCLASS118_0__ONPUZZLEPREFINISH_B__0_OFFSET))(this);
		}
	};
}
