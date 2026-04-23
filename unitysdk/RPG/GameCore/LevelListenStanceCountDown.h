#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6DD4D0)
#define RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6DD570)
#define RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6DD520)
#define RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN_INIT_OFFSET UNITYSDK_OFFSET(0xB6DD460)
#define RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DD5C0)
#define RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6DD5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelListenStanceCountDown_TypeDefinitionIndex = 52332;

	class LevelListenStanceCountDown : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::RPG::GameCore::GameEntity* Source; // 0x20
		::System::Boolean IsExtraStance; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelListenStanceCountDown* Init(::RPG::GameCore::GameEntity* pSource, ::RPG::GameCore::GameEntity* pTarget, ::System::Boolean isExtraStance)
		{
			return ((::RPG::GameCore::LevelListenStanceCountDown*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN_INIT_OFFSET))(this, pSource, pTarget, isExtraStance);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
