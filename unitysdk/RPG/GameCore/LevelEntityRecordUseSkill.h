#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

namespace System { class String; }

#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA988E70)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA988E20)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_GET_SKILLINDEX_OFFSET UNITYSDK_OFFSET(0xA988F20)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_GET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0xA988EE0)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xA988F00)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0xA988EC0)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_INIT_OFFSET UNITYSDK_OFFSET(0xA988DA0)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_SET_SKILLINDEX_OFFSET UNITYSDK_OFFSET(0xA988F30)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_SET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0xA988EF0)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_SET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xA988F10)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0xA988ED0)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0xA988F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityRecordUseSkill_TypeDefinitionIndex = 45644;

	class LevelEntityRecordUseSkill : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::String* _SkillName_k__BackingField; // 0x18
		::System::UInt32 _TargetID_k__BackingField; // 0x20
		::RPG::GameCore::SkillType _SkillType_k__BackingField; // 0x24
		::System::Int32 _SkillIndex_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYRECORDUSESKILL__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityRecordUseSkill* Init(::System::UInt32 nTargetId, ::System::String* sSkillName, ::System::Int32 nSkillIndex, ::RPG::GameCore::SkillType pSkillType)
		{
			return ((::RPG::GameCore::LevelEntityRecordUseSkill*(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int32, ::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_INIT_OFFSET))(this, nTargetId, sSkillName, nSkillIndex, pSkillType);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 get_TargetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_GET_TARGETID_OFFSET))(this);
		}

		::System::Void set_TargetID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_SET_TARGETID_OFFSET))(this, value);
		}

		::System::String* get_SkillName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_GET_SKILLNAME_OFFSET))(this);
		}

		::System::Void set_SkillName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_SET_SKILLNAME_OFFSET))(this, value);
		}

		::RPG::GameCore::SkillType get_SkillType()
		{
			return ((::RPG::GameCore::SkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_GET_SKILLTYPE_OFFSET))(this);
		}

		::System::Void set_SkillType(::RPG::GameCore::SkillType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_SET_SKILLTYPE_OFFSET))(this, value);
		}

		::System::Int32 get_SkillIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_GET_SKILLINDEX_OFFSET))(this);
		}

		::System::Void set_SkillIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_SET_SKILLINDEX_OFFSET))(this, value);
		}
	};
}
