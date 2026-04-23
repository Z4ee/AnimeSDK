#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_UI3DGAME_CHIMERABATTLEGAMECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB3AE0A0)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int ChimeraBattleGameController_TypeDefinitionIndex = 69693;

	class ChimeraBattleGameController : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLEGAMECONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
