#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleInitPosition.h"
#include "unitysdk/RPG/GameCore/ChenLingSoldierScale.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class ChenLingSoldierRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_ATKSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x9FBD6A0)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x9FBD390)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_INITIALMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x9FBD710)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_ISRANGEATTACK_OFFSET UNITYSDK_OFFSET(0x9FBD780)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x9FBD610)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x9FA49F0)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9FB4E30)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9FBD410)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_PREPARESIZE_OFFSET UNITYSDK_OFFSET(0x9FBD490)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_PROMOTIONCONDITIONLIST_OFFSET UNITYSDK_OFFSET(0x9FB4850)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_PROMOTIONSKILLDESC_OFFSET UNITYSDK_OFFSET(0x9FBD590)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x9FBD480)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0x9FBD510)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_SKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x9FBD630)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_SMALLICONOUTLINEPATH_OFFSET UNITYSDK_OFFSET(0x9FB3E20)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x9FB3D30)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9FBD3B0)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0x9FBD3A0)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x9FBD620)
#define RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9FBD370)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleSoldierConfig_TypeDefinitionIndex = 56675;

	class ChenLingBattleSoldierConfig : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::Boolean _IsUnlock_k__BackingField; // 0x14

		::System::Void _ctor(::RPG::GameCore::ChenLingSoldierRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingSoldierRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::ChenLingSoldierRow* get__Row()
		{
			return ((::RPG::GameCore::ChenLingSoldierRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingBattleInitPosition get_Position()
		{
			return ((::RPG::GameCore::ChenLingBattleInitPosition(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_POSITION_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingSoldierScale get_Scale()
		{
			return ((::RPG::GameCore::ChenLingSoldierScale(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_SCALE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_PrepareSize()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_PREPARESIZE_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_MODELPATH_OFFSET))(this);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_SMALLICONPATH_OFFSET))(this);
		}

		::System::String* get_SmallIconOutlinePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_SMALLICONOUTLINEPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_SKILLDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_PromotionSkillDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_PROMOTIONSKILLDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_PromotionConditionList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_PROMOTIONCONDITIONLIST_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsUnlock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_SET_ISUNLOCK_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_SkillIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_SKILLIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_AtkSkillIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_ATKSKILLIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_InitialMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_INITIALMAXLEVEL_OFFSET))(this);
		}

		::System::Boolean get_IsRangeAttack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESOLDIERCONFIG_GET_ISRANGEATTACK_OFFSET))(this);
		}
	};
}
