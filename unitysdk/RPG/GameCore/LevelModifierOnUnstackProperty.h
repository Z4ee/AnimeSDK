#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BE01E70)
#define RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BE01F10)
#define RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BE01EC0)
#define RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_INIT_OFFSET UNITYSDK_OFFSET(0x1BE01E20)
#define RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE01F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelModifierOnUnstackProperty_TypeDefinitionIndex = 54236;

	class LevelModifierOnUnstackProperty : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* ModifierInstance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelModifierOnUnstackProperty* Init(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::RPG::GameCore::LevelModifierOnUnstackProperty*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMODIFIERONUNSTACKPROPERTY_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
