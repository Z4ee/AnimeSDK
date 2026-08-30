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

#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x193F8680)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GETENTITYTAG_OFFSET UNITYSDK_OFFSET(0x193F81C0)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GETMAZESKILLEXCELCONFIG_OFFSET UNITYSDK_OFFSET(0x193F7A80)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GETMAZESKILLEXCELINDEX_OFFSET UNITYSDK_OFFSET(0x193F8020)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GETMAZESKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x193F7C40)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GETMAZESKILLRELATEDCONFIG_OFFSET UNITYSDK_OFFSET(0x193F79B0)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x193F86D0)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x193F8730)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_DEFAULTMODELPATH_OFFSET UNITYSDK_OFFSET(0x193F8750)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0x193F86F0)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_JSONCONFIG_OFFSET UNITYSDK_OFFSET(0x193F8710)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_LOCATEAREA_OFFSET UNITYSDK_OFFSET(0x193F8770)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_STORYNPCROW_OFFSET UNITYSDK_OFFSET(0x193F87B0)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_STORYNPCSUBTYPE_OFFSET UNITYSDK_OFFSET(0x193F8790)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x193F7920)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_ISCONTAINENTITYTAG_1_OFFSET UNITYSDK_OFFSET(0x193F8600)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_ISCONTAINENTITYTAG_OFFSET UNITYSDK_OFFSET(0x193F85B0)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x193F86E0)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x193F8740)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_DEFAULTMODELPATH_OFFSET UNITYSDK_OFFSET(0x193F8760)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0x193F8700)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_JSONCONFIG_OFFSET UNITYSDK_OFFSET(0x193F8720)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_LOCATEAREA_OFFSET UNITYSDK_OFFSET(0x193F8780)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_STORYNPCROW_OFFSET UNITYSDK_OFFSET(0x193F87C0)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_STORYNPCSUBTYPE_OFFSET UNITYSDK_OFFSET(0x193F87A0)
#define RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x193F87D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterDataComponent_TypeDefinitionIndex = 57083;

	class AdventureCharacterDataComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::StoryCharacterRow* _StoryNpcRow_k__BackingField; // 0x18
		::RPG::GameCore::AdventureCharacterConfig* _JsonConfig_k__BackingField; // 0x20
		::System::String* _DefaultModelPath_k__BackingField; // 0x28
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

		::System::Void InitComponent(::System::UInt32 a1, ::RPG::GameCore::AdventureCharacterConfig* a2, ::System::String* a3, ::System::UInt32 a4, ::RPG::GameCore::AttackDamageType a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::AdventureCharacterConfig*, ::System::String*, ::System::UInt32, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_INITCOMPONENT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::AvatarSkillRow* GetMazeSkillRelatedConfig(::System::Int32 a1)
		{
			return ((::RPG::GameCore::AvatarSkillRow*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GETMAZESKILLRELATEDCONFIG_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* GetMazeSkillIdList(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GETMAZESKILLIDLIST_OFFSET))(this, a1);
		}

		::System::Int32 GetMazeSkillExcelIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GETMAZESKILLEXCELINDEX_OFFSET))(this, a1);
		}

		::RPG::GameCore::MazeSkillRow* GetMazeSkillExcelConfig(::System::Int32 a1)
		{
			return ((::RPG::GameCore::MazeSkillRow*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GETMAZESKILLEXCELCONFIG_OFFSET))(this, a1);
		}

		::System::Int32 GetEntityTag()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GETENTITYTAG_OFFSET))(this);
		}

		::System::Boolean IsContainEntityTag(::Il2CppArray<::RPG::GameCore::EntityTag>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::EntityTag>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_ISCONTAINENTITYTAG_OFFSET))(this, a1);
		}

		::System::Boolean IsContainEntityTag_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_ISCONTAINENTITYTAG_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 get_CharacterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_CHARACTERID_OFFSET))(this);
		}

		::System::Void set_CharacterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_CHARACTERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_EnhancedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_ENHANCEDID_OFFSET))(this);
		}

		::System::Void set_EnhancedID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_ENHANCEDID_OFFSET))(this, a1);
		}

		::RPG::GameCore::AdventureCharacterConfig* get_JsonConfig()
		{
			return ((::RPG::GameCore::AdventureCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_JSONCONFIG_OFFSET))(this);
		}

		::System::Void set_JsonConfig(::RPG::GameCore::AdventureCharacterConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_JSONCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_DAMAGETYPE_OFFSET))(this);
		}

		::System::Void set_DamageType(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_DAMAGETYPE_OFFSET))(this, a1);
		}

		::System::String* get_DefaultModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_DEFAULTMODELPATH_OFFSET))(this);
		}

		::System::Void set_DefaultModelPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_DEFAULTMODELPATH_OFFSET))(this, a1);
		}

		::System::String* get_LocateArea()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_LOCATEAREA_OFFSET))(this);
		}

		::System::Void set_LocateArea(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_LOCATEAREA_OFFSET))(this, a1);
		}

		::RPG::GameCore::NPCSubType get_StoryNpcSubType()
		{
			return ((::RPG::GameCore::NPCSubType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_STORYNPCSUBTYPE_OFFSET))(this);
		}

		::System::Void set_StoryNpcSubType(::RPG::GameCore::NPCSubType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCSubType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_STORYNPCSUBTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::StoryCharacterRow* get_StoryNpcRow()
		{
			return ((::RPG::GameCore::StoryCharacterRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_GET_STORYNPCROW_OFFSET))(this);
		}

		::System::Void set_StoryNpcRow(::RPG::GameCore::StoryCharacterRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StoryCharacterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERDATACOMPONENT_SET_STORYNPCROW_OFFSET))(this, a1);
		}
	};
}
