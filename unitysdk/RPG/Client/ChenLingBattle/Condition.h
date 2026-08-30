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

#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_CREATE_1_OFFSET UNITYSDK_OFFSET(0xCAFDE50)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0xCAFB370)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETDESC_OFFSET UNITYSDK_OFFSET(0xCB05430)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETICONPATH_OFFSET UNITYSDK_OFFSET(0xCB05170)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDBUILDINGID_OFFSET UNITYSDK_OFFSET(0xCAF45C0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDBUILDINGLEVEL_OFFSET UNITYSDK_OFFSET(0xCB04FB0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDENCHANTID_OFFSET UNITYSDK_OFFSET(0xCAF4630)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDENCHANTLEVEL_OFFSET UNITYSDK_OFFSET(0xCB05050)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDSOLDIERID_OFFSET UNITYSDK_OFFSET(0xCAF46A0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GETREQUIREDSOLDIERLEVEL_OFFSET UNITYSDK_OFFSET(0xCB050F0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xCAFDDB0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0xCAFF5C0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GET_ISMEET_OFFSET UNITYSDK_OFFSET(0xCAF36C0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GET_TARGETPROGRESS_OFFSET UNITYSDK_OFFSET(0xCB04F60)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xCAF4570)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_ISNEEDCARDCONFIG_OFFSET UNITYSDK_OFFSET(0xCAF51A0)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION_SETCURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0xCAFDE00)
#define RPG_CLIENT_CHENLINGBATTLE_CONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0xCB04EF0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int Condition_TypeDefinitionIndex = 75870;

	class Condition : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingConditionRow* _Config; // 0x10
		::RPG::GameCore::ChenLingConditionDescRow* _DescConfig; // 0x18
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
