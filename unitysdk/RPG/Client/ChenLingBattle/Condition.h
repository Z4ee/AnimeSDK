#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/ConditionIconData.h"
#include "unitysdk/RPG/GameCore/ChenLingConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_C4B679728AD83B32;
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace RPG::GameCore { class ChenLingConditionDescRow; }
namespace RPG::GameCore { class ChenLingConditionRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9F9E2B0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0x9F9B1B0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETDESC_OFFSET UNITYSDK_OFFSET(0x9FA51C0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETICONPATH_OFFSET UNITYSDK_OFFSET(0x9FA4F10)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDBUILDINGID_OFFSET UNITYSDK_OFFSET(0x9F95310)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDBUILDINGLEVEL_OFFSET UNITYSDK_OFFSET(0x9FA4DF0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDENCHANTID_OFFSET UNITYSDK_OFFSET(0x9F95380)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDENCHANTLEVEL_OFFSET UNITYSDK_OFFSET(0x9FA4E50)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDSOLDIERID_OFFSET UNITYSDK_OFFSET(0x9F953F0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDSOLDIERLEVEL_OFFSET UNITYSDK_OFFSET(0x9FA4EB0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x9F9E240)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x9FA4DE0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GET_ISMEET_OFFSET UNITYSDK_OFFSET(0x9F949E0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GET_TARGETPROGRESS_OFFSET UNITYSDK_OFFSET(0x9FA4DC0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F952F0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_ISNEEDCARDCONFIG_OFFSET UNITYSDK_OFFSET(0x9F95D50)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_SETCURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x9F9E260)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x9FA4D50)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int Condition_TypeDefinitionIndex = 70108;

	class Condition : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingConditionRow* _Config; // 0x10
		::RPG::GameCore::ChenLingConditionDescRow* _DescConfig; // 0x18
		::System::UInt32 _CurrentProgress; // 0x20

		::System::Void _ctor(::System::UInt32 configID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION__CTOR_OFFSET))(this, configID);
		}

		static ::RPG::Client::ChenLingBattle::Condition* Create(::Class_1_C4B679728AD83B32* conditionProto)
		{
			return ((::RPG::Client::ChenLingBattle::Condition*(*)(::Class_1_C4B679728AD83B32*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION_CREATE_OFFSET))(conditionProto);
		}

		static ::RPG::Client::ChenLingBattle::Condition* Create_1(::System::UInt32 configID)
		{
			return ((::RPG::Client::ChenLingBattle::Condition*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION_CREATE_1_OFFSET))(configID);
		}

		::System::Void SetCurrentProgress(::System::UInt32 currentProgress)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION_SETCURRENTPROGRESS_OFFSET))(this, currentProgress);
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

		::System::Boolean IsNeedCardConfig(::RPG::Client::ChenLingBattle::CardConfig* cardConfig)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::CardConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITION_ISNEEDCARDCONFIG_OFFSET))(this, cardConfig);
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
