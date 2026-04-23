#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/SkillUseType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELENTITYUSESKILL_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6D80A0)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6D8050)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB6D8170)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_GET_SKILLCONFIGID_OFFSET UNITYSDK_OFFSET(0xB6D8190)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xB6D8110)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_GET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xB6D81B0)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_GET_SKILLTARGETS_OFFSET UNITYSDK_OFFSET(0xB6D81D0)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xB6D8130)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0xB6D80F0)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_GET_USETYPE_OFFSET UNITYSDK_OFFSET(0xB6D8150)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_INIT_OFFSET UNITYSDK_OFFSET(0xB6D7F80)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB6D8180)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_SET_SKILLCONFIGID_OFFSET UNITYSDK_OFFSET(0xB6D81A0)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xB6D8120)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_SET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0xB6D81C0)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_SET_SKILLTARGETS_OFFSET UNITYSDK_OFFSET(0xB6D81E0)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_SET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xB6D8140)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0xB6D8100)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_SET_USETYPE_OFFSET UNITYSDK_OFFSET(0xB6D8160)
#define RPG_GAMECORE_LEVELENTITYUSESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D81F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityUseSkill_TypeDefinitionIndex = 52298;

	class LevelEntityUseSkill : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _SkillTargets_k__BackingField; // 0x18
		::System::String* _SkillID_k__BackingField; // 0x20
		::RPG::GameCore::SkillUseType _UseType_k__BackingField; // 0x28
		::RPG::GameCore::SkillType _SkillType_k__BackingField; // 0x2C
		::System::Int32 _Index_k__BackingField; // 0x30
		::System::UInt32 _TargetID_k__BackingField; // 0x34
		::System::UInt32 _SkillLevel_k__BackingField; // 0x38
		::System::UInt32 _SkillConfigID_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityUseSkill* Init(::System::UInt32 nTargetId, ::System::String* sSkillId, ::System::Int32 nSkillIndex, ::RPG::GameCore::SkillType pSkillType, ::RPG::GameCore::SkillUseType useType, ::System::UInt32 configID, ::System::UInt32 level, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* skillTargets)
		{
			return ((::RPG::GameCore::LevelEntityUseSkill*(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int32, ::RPG::GameCore::SkillType, ::RPG::GameCore::SkillUseType, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_INIT_OFFSET))(this, nTargetId, sSkillId, nSkillIndex, pSkillType, useType, configID, level, skillTargets);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 get_TargetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_GET_TARGETID_OFFSET))(this);
		}

		::System::Void set_TargetID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_SET_TARGETID_OFFSET))(this, value);
		}

		::System::String* get_SkillID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_SET_SKILLID_OFFSET))(this, value);
		}

		::RPG::GameCore::SkillType get_SkillType()
		{
			return ((::RPG::GameCore::SkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_GET_SKILLTYPE_OFFSET))(this);
		}

		::System::Void set_SkillType(::RPG::GameCore::SkillType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_SET_SKILLTYPE_OFFSET))(this, value);
		}

		::RPG::GameCore::SkillUseType get_UseType()
		{
			return ((::RPG::GameCore::SkillUseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_GET_USETYPE_OFFSET))(this);
		}

		::System::Void set_UseType(::RPG::GameCore::SkillUseType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillUseType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_SET_USETYPE_OFFSET))(this, value);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_SET_INDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_SkillConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_GET_SKILLCONFIGID_OFFSET))(this);
		}

		::System::Void set_SkillConfigID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_SET_SKILLCONFIGID_OFFSET))(this, value);
		}

		::System::UInt32 get_SkillLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_GET_SKILLLEVEL_OFFSET))(this);
		}

		::System::Void set_SkillLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_SET_SKILLLEVEL_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_SkillTargets()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_GET_SKILLTARGETS_OFFSET))(this);
		}

		::System::Void set_SkillTargets(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_SET_SKILLTARGETS_OFFSET))(this, value);
		}
	};
}
