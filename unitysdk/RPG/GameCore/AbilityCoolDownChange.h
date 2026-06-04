#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_ABILITYCOOLDOWNCHANGE_GETCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0xCC75B80)
#define RPG_GAMECORE_ABILITYCOOLDOWNCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCC75AF0)
#define RPG_GAMECORE_ABILITYCOOLDOWNCHANGE_GETSKILLINDEX_OFFSET UNITYSDK_OFFSET(0xCC75B40)
#define RPG_GAMECORE_ABILITYCOOLDOWNCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCC75AB0)
#define RPG_GAMECORE_ABILITYCOOLDOWNCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xCC75A50)
#define RPG_GAMECORE_ABILITYCOOLDOWNCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xCC75BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityCoolDownChange_TypeDefinitionIndex = 52823;

	class AbilityCoolDownChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::Int32 _SkillIndex; // 0x18
		::System::Int32 _ChangeValue; // 0x1C
		::System::UInt32 _EntityRuntimeID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOOLDOWNCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilityCoolDownChange* Init(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::RPG::GameCore::AbilityCoolDownChange*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOOLDOWNCHANGE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOOLDOWNCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOOLDOWNCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Int32 GetSkillIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOOLDOWNCHANGE_GETSKILLINDEX_OFFSET))(this);
		}

		::System::Int32 GetChangeValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOOLDOWNCHANGE_GETCHANGEVALUE_OFFSET))(this);
		}
	};
}
