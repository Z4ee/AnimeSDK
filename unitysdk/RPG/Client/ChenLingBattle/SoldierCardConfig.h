#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/CardConfig.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::GameCore { class ChenLingCardRow; }
namespace RPG::GameCore { class ChenLingSoldierRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GETDESC_OFFSET UNITYSDK_OFFSET(0x1CC366D0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GETPROMOTIONSKILLDESC_OFFSET UNITYSDK_OFFSET(0x1CC36820)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GET_ISPROMOTION_OFFSET UNITYSDK_OFFSET(0x1CC36B50)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1CC36AE0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x1CC36A90)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CC369D0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GET_PROMOTIONCONDITIONLIST_OFFSET UNITYSDK_OFFSET(0x1CC36A40)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0x1CC367D0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x1CC36920)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC36610)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SoldierCardConfig_TypeDefinitionIndex = 75741;

	class SoldierCardConfig : public ::RPG::Client::ChenLingBattle::CardConfig
	{
	public:
		::RPG::GameCore::ChenLingSoldierRow* _SoldierRow; // 0x20

		::System::Void _ctor(::RPG::GameCore::ChenLingCardRow* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingCardRow*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* GetDesc(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GETDESC_OFFSET))(this, a1);
		}

		::System::String* GetPromotionSkillDesc(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERCARDCONFIG_GETPROMOTIONSKILLDESC_OFFSET))(this, a1);
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
