#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELINFINITEMONSTERHPCHANGED_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE4A940)
#define RPG_GAMECORE_LEVELINFINITEMONSTERHPCHANGED_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE4A990)
#define RPG_GAMECORE_LEVELINFINITEMONSTERHPCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0xCE4A9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelInfiniteMonsterHPChanged_TypeDefinitionIndex = 52980;

	class LevelInfiniteMonsterHPChanged : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* MonsterEntity; // 0x10
		::System::Boolean IsMonsterOfWave; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEMONSTERHPCHANGED__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEMONSTERHPCHANGED_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEMONSTERHPCHANGED_GETSOURCERUNTIMEID_OFFSET))(this);
		}
	};
}
