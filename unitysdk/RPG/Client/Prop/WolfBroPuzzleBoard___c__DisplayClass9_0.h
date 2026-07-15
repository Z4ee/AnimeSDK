#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1612B820)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WolfBroPuzzleBoard___c__DisplayClass9_0_TypeDefinitionIndex = 74737;

	class WolfBroPuzzleBoard___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* bullet; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WOLFBROPUZZLEBOARD___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}
	};
}
