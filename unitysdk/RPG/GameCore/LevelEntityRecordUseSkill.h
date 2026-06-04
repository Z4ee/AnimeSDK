#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"

namespace System { class String; }

#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE44EB0)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE44E60)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_GET_SKILLINDEX_OFFSET UNITYSDK_OFFSET(0xCE44F60)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_GET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0xCE44F20)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xCE44F40)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0xCE44F00)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_INIT_OFFSET UNITYSDK_OFFSET(0xCE44DE0)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_SET_SKILLINDEX_OFFSET UNITYSDK_OFFSET(0xCE44F70)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_SET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0xCE44F30)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_SET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xCE44F50)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0xCE44F10)
#define RPG_GAMECORE_LEVELENTITYRECORDUSESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0xCE44F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityRecordUseSkill_TypeDefinitionIndex = 52992;

	class LevelEntityRecordUseSkill : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::String* _SkillName_k__BackingField; // 0x18
		::System::Int32 _SkillIndex_k__BackingField; // 0x20
		::RPG::GameCore::SkillType _SkillType_k__BackingField; // 0x24
		::System::UInt32 _TargetID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYRECORDUSESKILL__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityRecordUseSkill* Init(::System::UInt32 a1, ::System::String* a2, ::System::Int32 a3, ::RPG::GameCore::SkillType a4)
		{
			return ((::RPG::GameCore::LevelEntityRecordUseSkill*(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int32, ::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_INIT_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Void set_TargetID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_SET_TARGETID_OFFSET))(this, a1);
		}

		::System::String* get_SkillName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_GET_SKILLNAME_OFFSET))(this);
		}

		::System::Void set_SkillName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_SET_SKILLNAME_OFFSET))(this, a1);
		}

		::RPG::GameCore::SkillType get_SkillType()
		{
			return ((::RPG::GameCore::SkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_GET_SKILLTYPE_OFFSET))(this);
		}

		::System::Void set_SkillType(::RPG::GameCore::SkillType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_SET_SKILLTYPE_OFFSET))(this, a1);
		}

		::System::Int32 get_SkillIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_GET_SKILLINDEX_OFFSET))(this);
		}

		::System::Void set_SkillIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYRECORDUSESKILL_SET_SKILLINDEX_OFFSET))(this, a1);
		}
	};
}
