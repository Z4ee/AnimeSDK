#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ABILITYSKILLPROPERTYCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB5166D0)
#define RPG_GAMECORE_ABILITYSKILLPROPERTYCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB516690)
#define RPG_GAMECORE_ABILITYSKILLPROPERTYCHANGE_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xB516720)
#define RPG_GAMECORE_ABILITYSKILLPROPERTYCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xB516620)
#define RPG_GAMECORE_ABILITYSKILLPROPERTYCHANGE_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0xB516730)
#define RPG_GAMECORE_ABILITYSKILLPROPERTYCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB516740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilitySkillPropertyChange_TypeDefinitionIndex = 52145;

	class AbilitySkillPropertyChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::SkillPropertyType _PropertyType_k__BackingField; // 0x18
		::System::UInt32 _EntityRuntimeID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSKILLPROPERTYCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AbilitySkillPropertyChange* Init(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::SkillPropertyType propertyType)
		{
			return ((::RPG::GameCore::AbilitySkillPropertyChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillPropertyType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSKILLPROPERTYCHANGE_INIT_OFFSET))(this, entity, propertyType);
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

		::System::Void set_PropertyType(::RPG::GameCore::SkillPropertyType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillPropertyType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYSKILLPROPERTYCHANGE_SET_PROPERTYTYPE_OFFSET))(this, value);
		}
	};
}
