#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/SkillUseType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_LEVELENTITYUSESKILL_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BDFC190)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BDFC140)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1BDFC260)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_GET_SKILLCONFIGID_OFFSET UNITYSDK_OFFSET(0x1BDFC280)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x1BDFC200)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_GET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1BDFC2A0)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_GET_SKILLTARGETS_OFFSET UNITYSDK_OFFSET(0x1BDFC2C0)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1BDFC220)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1BDFC1E0)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_GET_USETYPE_OFFSET UNITYSDK_OFFSET(0x1BDFC240)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_INIT_OFFSET UNITYSDK_OFFSET(0x1BDFC070)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1BDFC270)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_SET_SKILLCONFIGID_OFFSET UNITYSDK_OFFSET(0x1BDFC290)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0x1BDFC210)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_SET_SKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x1BDFC2B0)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_SET_SKILLTARGETS_OFFSET UNITYSDK_OFFSET(0x1BDFC2D0)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_SET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0x1BDFC230)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x1BDFC1F0)
#define RPG_GAMECORE_LEVELENTITYUSESKILL_SET_USETYPE_OFFSET UNITYSDK_OFFSET(0x1BDFC250)
#define RPG_GAMECORE_LEVELENTITYUSESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDFC2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityUseSkill_TypeDefinitionIndex = 54208;

	class LevelEntityUseSkill : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _SkillTargets_k__BackingField; // 0x18
		::System::String* _SkillID_k__BackingField; // 0x20
		::System::UInt32 _SkillLevel_k__BackingField; // 0x28
		::RPG::GameCore::SkillUseType _UseType_k__BackingField; // 0x2C
		::System::UInt32 _SkillConfigID_k__BackingField; // 0x30
		::System::Int32 _Index_k__BackingField; // 0x34
		::RPG::GameCore::SkillType _SkillType_k__BackingField; // 0x38
		::System::UInt32 _TargetID_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityUseSkill* Init(::System::UInt32 a1, ::System::String* a2, ::System::Int32 a3, ::RPG::GameCore::SkillType a4, ::RPG::GameCore::SkillUseType a5, ::System::UInt32 a6, ::System::UInt32 a7, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a8)
		{
			return ((::RPG::GameCore::LevelEntityUseSkill*(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int32, ::RPG::GameCore::SkillType, ::RPG::GameCore::SkillUseType, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_INIT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
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

		::System::Void set_TargetID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_SET_TARGETID_OFFSET))(this, a1);
		}

		::System::String* get_SkillID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_SET_SKILLID_OFFSET))(this, a1);
		}

		::RPG::GameCore::SkillType get_SkillType()
		{
			return ((::RPG::GameCore::SkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_GET_SKILLTYPE_OFFSET))(this);
		}

		::System::Void set_SkillType(::RPG::GameCore::SkillType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_SET_SKILLTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::SkillUseType get_UseType()
		{
			return ((::RPG::GameCore::SkillUseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_GET_USETYPE_OFFSET))(this);
		}

		::System::Void set_UseType(::RPG::GameCore::SkillUseType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillUseType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_SET_USETYPE_OFFSET))(this, a1);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_SET_INDEX_OFFSET))(this, a1);
		}

		::System::UInt32 get_SkillConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_GET_SKILLCONFIGID_OFFSET))(this);
		}

		::System::Void set_SkillConfigID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_SET_SKILLCONFIGID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SkillLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_GET_SKILLLEVEL_OFFSET))(this);
		}

		::System::Void set_SkillLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_SET_SKILLLEVEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_SkillTargets()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_GET_SKILLTARGETS_OFFSET))(this);
		}

		::System::Void set_SkillTargets(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYUSESKILL_SET_SKILLTARGETS_OFFSET))(this, a1);
		}
	};
}
