#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYSKILLPROPERTYCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x106CEB90)
#define RPG_GAMECORE_ABILITYSKILLPROPERTYCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x106CEB50)
#define RPG_GAMECORE_ABILITYSKILLPROPERTYCHANGE_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x106CEBE0)
#define RPG_GAMECORE_ABILITYSKILLPROPERTYCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x106CEAE0)
#define RPG_GAMECORE_ABILITYSKILLPROPERTYCHANGE_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x106CEBF0)
#define RPG_GAMECORE_ABILITYSKILLPROPERTYCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x106CEC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilitySkillPropertyChange_TypeDefinitionIndex = 54054;

	class AbilitySkillPropertyChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::UInt32 _EntityRuntimeID; // 0x18
		::RPG::GameCore::SkillPropertyType _PropertyType_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSKILLPROPERTYCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilitySkillPropertyChange* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillPropertyType a2)
		{
			return ((::RPG::GameCore::AbilitySkillPropertyChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillPropertyType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSKILLPROPERTYCHANGE_INIT_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSKILLPROPERTYCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSKILLPROPERTYCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::SkillPropertyType get_PropertyType()
		{
			return ((::RPG::GameCore::SkillPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSKILLPROPERTYCHANGE_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::RPG::GameCore::SkillPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillPropertyType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSKILLPROPERTYCHANGE_SET_PROPERTYTYPE_OFFSET))(this, a1);
		}
	};
}
