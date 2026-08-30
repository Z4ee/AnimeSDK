#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class FastDeliverPuzzleBoard; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD___C__DISPLAYCLASS105_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A91F290)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD___C__DISPLAYCLASS105_0__TICKPUZZLE_B__0_OFFSET UNITYSDK_OFFSET(0x1A9220B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int FastDeliverPuzzleBoard___c__DisplayClass105_0_TypeDefinitionIndex = 78110;

	class FastDeliverPuzzleBoard___c__DisplayClass105_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::FastDeliverPuzzleBoard* __4__this; // 0x10
		::UnityEngine::Camera* camera; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD___C__DISPLAYCLASS105_0__CTOR_OFFSET))(this);
		}

		::System::Void _TickPuzzle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD___C__DISPLAYCLASS105_0__TICKPUZZLE_B__0_OFFSET))(this);
		}
	};
}
