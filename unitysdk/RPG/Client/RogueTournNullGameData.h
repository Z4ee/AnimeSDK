#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_748;
class Class_1_36F606812EC9EB69_7;
class Class_1_E39756DED83F5D0A;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class IRogueTournDifficulty; }
namespace RPG::Client { class IRogueTournGameLevel; }
namespace RPG::Client { class RogueTournAreaGroupData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GETMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0xA3B1590)
#define RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET UNITYSDK_OFFSET(0xA3B14E0)
#define RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GETROGUEBLACKBOARDINFO_OFFSET UNITYSDK_OFFSET(0xA3B1620)
#define RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xA3B15D0)
#define RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_AREAGROUP_OFFSET UNITYSDK_OFFSET(0xA3B1690)
#define RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xA3B1680)
#define RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_BLACKBOARDINFO_OFFSET UNITYSDK_OFFSET(0xA3B1780)
#define RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA3B16C0)
#define RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA3A8450)
#define RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_ISCANUSECONSUMEITEM_OFFSET UNITYSDK_OFFSET(0xA3B1750)
#define RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0xA3B1770)
#define RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_REPORTTRANSNO_OFFSET UNITYSDK_OFFSET(0xA3B1760)
#define RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_SERVERCONTROLLERID_OFFSET UNITYSDK_OFFSET(0xA3B1670)
#define RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_SETTLERESULTFACTORY_OFFSET UNITYSDK_OFFSET(0xA3B1790)
#define RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0xA3B1660)
#define RPG_CLIENT_ROGUETOURNNULLGAMEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xA3B14A0)
#define RPG_CLIENT_ROGUETOURNNULLGAMEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA3B1540)
#define RPG_CLIENT_ROGUETOURNNULLGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3B1470)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournNullGameData_TypeDefinitionIndex = 55163;

	class RogueTournNullGameData : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournNullGameData** StaticGet__Instance()
		{
			return (::RPG::Client::RogueTournNullGameData**)Il2CppClass::FromTypeDefinitionIndex(RogueTournNullGameData_TypeDefinitionIndex)->GetStaticField(0x1E6E0);
		}
		::Class_1_E39756DED83F5D0A* _BlackboardInfo_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNNULLGAMEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournNullGameData* get_Instance()
		{
			return ((::RPG::Client::RogueTournNullGameData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_INSTANCE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNNULLGAMEDATA_INIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetRogueAvatarCollection()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_36F606812EC9EB69_7* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_36F606812EC9EB69_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNNULLGAMEDATA_SYNC_OFFSET))(this, proto);
		}

		::System::UInt32 GetMonsterEliteDropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GETMONSTERELITEDROPID_OFFSET))(this);
		}

		::System::String* GetRogueDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GETROGUEDEBUGINFO_OFFSET))(this);
		}

		::Class_1_E39756DED83F5D0A* GetRogueBlackboardInfo()
		{
			return ((::Class_1_E39756DED83F5D0A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GETROGUEBLACKBOARDINFO_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournMode get_TournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_TOURNMODE_OFFSET))(this);
		}

		::System::UInt32 get_ServerControllerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_SERVERCONTROLLERID_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_AREAID_OFFSET))(this);
		}

		::RPG::Client::RogueTournAreaGroupData* get_AreaGroup()
		{
			return ((::RPG::Client::RogueTournAreaGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_AREAGROUP_OFFSET))(this);
		}

		::RPG::Client::IRogueTournDifficulty* get_Difficulty()
		{
			return ((::RPG::Client::IRogueTournDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Boolean get_IsCanUseConsumeItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_ISCANUSECONSUMEITEM_OFFSET))(this);
		}

		::System::String* get_ReportTransNo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_REPORTTRANSNO_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameLevel* get_LevelInfo()
		{
			return ((::RPG::Client::IRogueTournGameLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_LEVELINFO_OFFSET))(this);
		}

		::Class_1_E39756DED83F5D0A* get_BlackboardInfo()
		{
			return ((::Class_1_E39756DED83F5D0A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_BLACKBOARDINFO_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_748* get_SettleResultFactory()
		{
			return ((::Class_0_16E4307DCC419505_748*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNNULLGAMEDATA_GET_SETTLERESULTFACTORY_OFFSET))(this);
		}
	};
}
