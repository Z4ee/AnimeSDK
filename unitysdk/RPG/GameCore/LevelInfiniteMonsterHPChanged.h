#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELINFINITEMONSTERHPCHANGED_CLEAR_OFFSET UNITYSDK_OFFSET(0xA98E580)
#define RPG_GAMECORE_LEVELINFINITEMONSTERHPCHANGED_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA98E4E0)
#define RPG_GAMECORE_LEVELINFINITEMONSTERHPCHANGED_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA98E530)
#define RPG_GAMECORE_LEVELINFINITEMONSTERHPCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0xA98E5C0)
#define RPG_GAMECORE_LEVELINFINITEMONSTERHPCHANGED___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA98E5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelInfiniteMonsterHPChanged_TypeDefinitionIndex = 45632;

	class LevelInfiniteMonsterHPChanged : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* MonsterEntity; // 0x18

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

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEMONSTERHPCHANGED_CLEAR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELINFINITEMONSTERHPCHANGED___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
