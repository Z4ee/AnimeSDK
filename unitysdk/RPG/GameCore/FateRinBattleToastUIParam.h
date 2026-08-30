#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_FATERINBATTLETOASTUIPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xE643A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinBattleToastUIParam_TypeDefinitionIndex = 53062;

	class FateRinBattleToastUIParam : public ::System::Object
	{
	public:
		::System::Boolean IsEnemy; // 0x10
		::RPG::Client::TextID Text; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINBATTLETOASTUIPARAM__CTOR_OFFSET))(this);
		}
	};
}
