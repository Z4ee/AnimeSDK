#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/CardConfig.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::GameCore { class ChenLingCardRow; }
namespace RPG::GameCore { class ChenLingSoldierRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GETDESC_OFFSET UNITYSDK_OFFSET(0x9FB44C0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GETPROMOTIONSKILLDESC_OFFSET UNITYSDK_OFFSET(0x9FB45A0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x9FB47D0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9FB4760)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x9FB4740)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9FB4710)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GET_PROMOTIONCONDITIONLIST_OFFSET UNITYSDK_OFFSET(0x9FA7690)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0x9FB4580)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x9FB4660)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9FB4440)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SoldierCardConfig_TypeDefinitionIndex = 69980;

	class SoldierCardConfig : public ::RPG::Client::ChenLingBattle::CardConfig
	{
	public:
		::RPG::GameCore::ChenLingSoldierRow* _SoldierRow; // 0x20

		::System::Void _ctor(::RPG::GameCore::ChenLingCardRow* row, ::System::Int32 cardIndex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingCardRow*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG__CTOR_OFFSET))(this, row, cardIndex);
		}

		::System::String* GetDesc(::System::UInt32 level)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GETDESC_OFFSET))(this, level);
		}

		::System::String* GetPromotionSkillDesc(::System::UInt32 level)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GETPROMOTIONSKILLDESC_OFFSET))(this, level);
		}

		::RPG::Client::TextID get_TypeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GET_TYPENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GET_NAME_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_PromotionConditionList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GET_PROMOTIONCONDITIONLIST_OFFSET))(this);
		}

		::System::UInt32 get_SoldierID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GET_SOLDIERID_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GET_MODELPATH_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GET_LEVEL_OFFSET))(this);
		}

		::System::Boolean get_IsPromotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GET_ISPROMOTION_OFFSET))(this);
		}
	};
}
