#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/NPCSubType.h"

namespace RPG::GameCore { class AdventureCharacterConfig; }
namespace RPG::GameCore { class AvatarSkillRow; }
namespace RPG::GameCore { class MazeSkillRow; }
namespace RPG::GameCore { class StoryCharacterRow; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA840F60)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GETENTITYTAG_OFFSET UNITYSDK_OFFSET(0xA840A40)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GETMAZESKILLEXCELCONFIG_OFFSET UNITYSDK_OFFSET(0xA840560)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GETMAZESKILLEXCELINDEX_OFFSET UNITYSDK_OFFSET(0xA840890)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GETMAZESKILLIDLIST_OFFSET UNITYSDK_OFFSET(0xA840740)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GETMAZESKILLRELATEDCONFIG_OFFSET UNITYSDK_OFFSET(0xA840490)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xA840FB0)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xA841010)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_DEFAULTMODELPATH_OFFSET UNITYSDK_OFFSET(0xA841030)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0xA840FD0)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_JSONCONFIG_OFFSET UNITYSDK_OFFSET(0xA840FF0)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_LOCATEAREA_OFFSET UNITYSDK_OFFSET(0xA841050)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_STORYNPCROW_OFFSET UNITYSDK_OFFSET(0xA841090)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_STORYNPCSUBTYPE_OFFSET UNITYSDK_OFFSET(0xA841070)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA840400)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_ISCONTAINENTITYTAG_1_OFFSET UNITYSDK_OFFSET(0xA840EE0)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_ISCONTAINENTITYTAG_OFFSET UNITYSDK_OFFSET(0xA840E90)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xA840FC0)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xA841020)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_DEFAULTMODELPATH_OFFSET UNITYSDK_OFFSET(0xA841040)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0xA840FE0)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_JSONCONFIG_OFFSET UNITYSDK_OFFSET(0xA841000)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_LOCATEAREA_OFFSET UNITYSDK_OFFSET(0xA841060)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_STORYNPCROW_OFFSET UNITYSDK_OFFSET(0xA8410A0)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_STORYNPCSUBTYPE_OFFSET UNITYSDK_OFFSET(0xA841080)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA8410B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterDataComponent_TypeDefinitionIndex = 45793;

	class AdventureCharacterDataComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::String* _DefaultModelPath_k__BackingField; // 0x18
		::RPG::GameCore::StoryCharacterRow* _StoryNpcRow_k__BackingField; // 0x20
		::RPG::GameCore::AdventureCharacterConfig* _JsonConfig_k__BackingField; // 0x28
		::System::String* _LocateArea_k__BackingField; // 0x30
		::System::UInt32 _EnhancedID_k__BackingField; // 0x38
		::RPG::GameCore::AttackDamageType _DamageType_k__BackingField; // 0x3C
		::System::UInt32 _CharacterID_k__BackingField; // 0x40
		::System::Int32 _EntityTag; // 0x44
		::RPG::GameCore::NPCSubType _StoryNpcSubType_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void InitComponent(::System::UInt32 characterID, ::RPG::GameCore::AdventureCharacterConfig* JsonConfig, ::System::String* modelPath, ::System::UInt32 enhancedID, ::RPG::GameCore::AttackDamageType damageType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::AdventureCharacterConfig*, ::System::String*, ::System::UInt32, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_INITCOMPONENT_OFFSET))(this, characterID, JsonConfig, modelPath, enhancedID, damageType);
		}

		::RPG::GameCore::AvatarSkillRow* GetMazeSkillRelatedConfig(::System::Int32 nSkillIndex)
		{
			return ((::RPG::GameCore::AvatarSkillRow*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GETMAZESKILLRELATEDCONFIG_OFFSET))(this, nSkillIndex);
		}

		::Il2CppArray<::System::UInt32>* GetMazeSkillIdList(::System::Int32 nSkillIndex)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GETMAZESKILLIDLIST_OFFSET))(this, nSkillIndex);
		}

		::System::Int32 GetMazeSkillExcelIndex(::System::Int32 nSkillIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GETMAZESKILLEXCELINDEX_OFFSET))(this, nSkillIndex);
		}

		::RPG::GameCore::MazeSkillRow* GetMazeSkillExcelConfig(::System::Int32 nSkillIndex)
		{
			return ((::RPG::GameCore::MazeSkillRow*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GETMAZESKILLEXCELCONFIG_OFFSET))(this, nSkillIndex);
		}

		::System::Int32 GetEntityTag()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GETENTITYTAG_OFFSET))(this);
		}

		::System::Boolean IsContainEntityTag(::Il2CppArray<::RPG::GameCore::EntityTag>* tags)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::EntityTag>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_ISCONTAINENTITYTAG_OFFSET))(this, tags);
		}

		::System::Boolean IsContainEntityTag_1(::System::Int32 otherTag)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_ISCONTAINENTITYTAG_1_OFFSET))(this, otherTag);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 get_CharacterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_CHARACTERID_OFFSET))(this);
		}

		::System::Void set_CharacterID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_CHARACTERID_OFFSET))(this, value);
		}

		::System::UInt32 get_EnhancedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_ENHANCEDID_OFFSET))(this);
		}

		::System::Void set_EnhancedID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_ENHANCEDID_OFFSET))(this, value);
		}

		::RPG::GameCore::AdventureCharacterConfig* get_JsonConfig()
		{
			return ((::RPG::GameCore::AdventureCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_JSONCONFIG_OFFSET))(this);
		}

		::System::Void set_JsonConfig(::RPG::GameCore::AdventureCharacterConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_JSONCONFIG_OFFSET))(this, value);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_DAMAGETYPE_OFFSET))(this);
		}

		::System::Void set_DamageType(::RPG::GameCore::AttackDamageType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_DAMAGETYPE_OFFSET))(this, value);
		}

		::System::String* get_DefaultModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_DEFAULTMODELPATH_OFFSET))(this);
		}

		::System::Void set_DefaultModelPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_DEFAULTMODELPATH_OFFSET))(this, value);
		}

		::System::String* get_LocateArea()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_LOCATEAREA_OFFSET))(this);
		}

		::System::Void set_LocateArea(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_LOCATEAREA_OFFSET))(this, value);
		}

		::RPG::GameCore::NPCSubType get_StoryNpcSubType()
		{
			return ((::RPG::GameCore::NPCSubType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_STORYNPCSUBTYPE_OFFSET))(this);
		}

		::System::Void set_StoryNpcSubType(::RPG::GameCore::NPCSubType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCSubType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_STORYNPCSUBTYPE_OFFSET))(this, value);
		}

		::RPG::GameCore::StoryCharacterRow* get_StoryNpcRow()
		{
			return ((::RPG::GameCore::StoryCharacterRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_STORYNPCROW_OFFSET))(this);
		}

		::System::Void set_StoryNpcRow(::RPG::GameCore::StoryCharacterRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StoryCharacterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_STORYNPCROW_OFFSET))(this, value);
		}
	};
}
