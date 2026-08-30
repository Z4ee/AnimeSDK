#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/ConditionIconData.h"
#include "unitysdk/RPG/GameCore/ChenLingConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_963E317C37FB5E9A_7;
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace RPG::GameCore { class ChenLingConditionDescRow; }
namespace RPG::GameCore { class ChenLingConditionRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1B951640)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0x1B94E980)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETDESC_OFFSET UNITYSDK_OFFSET(0x1B958C20)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETICONPATH_OFFSET UNITYSDK_OFFSET(0x1B958960)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDBUILDINGID_OFFSET UNITYSDK_OFFSET(0x1B947B60)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDBUILDINGLEVEL_OFFSET UNITYSDK_OFFSET(0x1B9587A0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDENCHANTID_OFFSET UNITYSDK_OFFSET(0x1B947BD0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDENCHANTLEVEL_OFFSET UNITYSDK_OFFSET(0x1B958840)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDSOLDIERID_OFFSET UNITYSDK_OFFSET(0x1B947C40)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDSOLDIERLEVEL_OFFSET UNITYSDK_OFFSET(0x1B9588E0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1B9515A0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B952DB0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GET_ISMEET_OFFSET UNITYSDK_OFFSET(0x1B946C60)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GET_TARGETPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B958750)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B947B10)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_ISNEEDCARDCONFIG_OFFSET UNITYSDK_OFFSET(0x1B948740)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_SETCURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B9515F0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9586E0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int Condition_TypeDefinitionIndex = 75869;

	class Condition : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingConditionDescRow* _DescConfig; // 0x10
		::RPG::GameCore::ChenLingConditionRow* _Config; // 0x18
		::System::UInt32 _CurrentProgress; // 0x20

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChenLingBattle::Condition* Create(::Class_1_963E317C37FB5E9A_7* a1)
		{
			return ((::RPG::Client::ChenLingBattle::Condition*(*)(::Class_1_963E317C37FB5E9A_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::ChenLingBattle::Condition* Create_1(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChenLingBattle::Condition*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION_CREATE_1_OFFSET))(a1);
		}

		::System::Void SetCurrentProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION_SETCURRENTPROGRESS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMeet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION_GET_ISMEET_OFFSET))(this);
		}

		::System::UInt32 get_CurrentProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION_GET_CURRENTPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_TargetProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION_GET_TARGETPROGRESS_OFFSET))(this);
		}

		::RPG::GameCore::ChenLingConditionType get_Type()
		{
			return ((::RPG::GameCore::ChenLingConditionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION_GET_CONFIGID_OFFSET))(this);
		}

		::System::Boolean IsNeedCardConfig(::RPG::Client::ChenLingBattle::CardConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::CardConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION_ISNEEDCARDCONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 GetRequiredBuildingID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDBUILDINGID_OFFSET))(this);
		}

		::System::UInt32 GetRequiredBuildingLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDBUILDINGLEVEL_OFFSET))(this);
		}

		::System::UInt32 GetRequiredEnchantID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDENCHANTID_OFFSET))(this);
		}

		::System::UInt32 GetRequiredEnchantLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDENCHANTLEVEL_OFFSET))(this);
		}

		::System::UInt32 GetRequiredSoldierID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDSOLDIERID_OFFSET))(this);
		}

		::System::UInt32 GetRequiredSoldierLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDSOLDIERLEVEL_OFFSET))(this);
		}

		::RPG::Client::ChenLingBattle::ConditionIconData GetIconPath()
		{
			return ((::RPG::Client::ChenLingBattle::ConditionIconData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETICONPATH_OFFSET))(this);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETDESC_OFFSET))(this);
		}
	};
}
