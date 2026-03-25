#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/StarFightSeason.h"

class Class_1_352A8B3482C80E7D_56;
class Class_1_4CF8088A158DCE25_94;
namespace RPG::Client { class StarFightGroupData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STARFIGHTMODULE_CLEARNEWGROUP_OFFSET UNITYSDK_OFFSET(0xA4D6680)
#define RPG_CLIENT_STARFIGHTMODULE_GETNEWUNLOCKANIMGROUPS_OFFSET UNITYSDK_OFFSET(0xA4D5AF0)
#define RPG_CLIENT_STARFIGHTMODULE_GETSTARFIGHTGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xA4D5AB0)
#define RPG_CLIENT_STARFIGHTMODULE_GETSTARFIGHTGROUPDATA_OFFSET UNITYSDK_OFFSET(0xA4D59D0)
#define RPG_CLIENT_STARFIGHTMODULE_GET_LASTBATTLEWAVE_OFFSET UNITYSDK_OFFSET(0xA4D72C0)
#define RPG_CLIENT_STARFIGHTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA4D5530)
#define RPG_CLIENT_STARFIGHTMODULE_ISALLGROUPHARDCHALLENGED_OFFSET UNITYSDK_OFFSET(0xA4D3A50)
#define RPG_CLIENT_STARFIGHTMODULE_RESTARTENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xA4D61A0)
#define RPG_CLIENT_STARFIGHTMODULE_TRIGGERENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xA4D5E20)
#define RPG_CLIENT_STARFIGHTMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xA4D6360)
#define RPG_CLIENT_STARFIGHTMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA4D5990)
#define RPG_CLIENT_STARFIGHTMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA4D58E0)
#define RPG_CLIENT_STARFIGHTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D72D0)
#define RPG_CLIENT_STARFIGHTMODULE__INITGROUPDATA_OFFSET UNITYSDK_OFFSET(0xA4D56A0)
#define RPG_CLIENT_STARFIGHTMODULE__ONCMDGETSTARFIGHTDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA4D6A70)
#define RPG_CLIENT_STARFIGHTMODULE__ONCMDSTARFIGHTDATACHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0xA4D6F50)
#define RPG_CLIENT_STARFIGHTMODULE__ONPVEBATTLERESULTSCRSP_OFFSET UNITYSDK_OFFSET(0xA4D6FD0)
#define RPG_CLIENT_STARFIGHTMODULE__SYNGROUPINFO_OFFSET UNITYSDK_OFFSET(0xA4D6CF0)
#define RPG_CLIENT_STARFIGHTMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA4D7330)
#define RPG_CLIENT_STARFIGHTMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA4D7420)
#define RPG_CLIENT_STARFIGHTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA4D73C0)

namespace RPG::Client
{
	inline static constexpr unsigned int StarFightModule_TypeDefinitionIndex = 55479;

	class StarFightModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::RPG::GameCore::StarFightSeason CurSeason; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::StarFightGroupData*>* _StarFightGroupDataDic; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::StarFightGroupData*>* _StarFightGroupDataList; // 0x18
		::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_56*>* _LastBattleAvatar; // 0x20
		::System::UInt32 BattleLevel; // 0x28
		::System::Int32 _AutoShowGroupID; // 0x2C
		::RPG::Client::TextID BattleTitle; // 0x30
		::System::UInt32 _LastBattleWave; // 0x40
		::System::UInt32 BattleGroupID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::RPG::Client::StarFightGroupData* GetStarFightGroupData(::System::UInt32 groupID)
		{
			return ((::RPG::Client::StarFightGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE_GETSTARFIGHTGROUPDATA_OFFSET))(this, groupID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::StarFightGroupData*>* GetStarFightGroupDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::StarFightGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE_GETSTARFIGHTGROUPDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewUnlockAnimGroups()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE_GETNEWUNLOCKANIMGROUPS_OFFSET))(this);
		}

		::System::Void TriggerEnterBattle(::System::UInt32 groupID, ::System::UInt32 difficultyLevel, ::Il2CppArray<::System::UInt32>* avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE_TRIGGERENTERBATTLE_OFFSET))(this, groupID, difficultyLevel, avatarID);
		}

		::System::Void RestartEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE_RESTARTENTERBATTLE_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void ClearNewGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE_CLEARNEWGROUP_OFFSET))(this);
		}

		::System::Boolean IsAllGroupHardChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE_ISALLGROUPHARDCHALLENGED_OFFSET))(this);
		}

		::System::Void _OnCmdGetStarFightDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE__ONCMDGETSTARFIGHTDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdStarFightDataChangeNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE__ONCMDSTARFIGHTDATACHANGENOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SynGroupInfo(::Class_1_4CF8088A158DCE25_94* groupInfo, ::System::Boolean syncByInit)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_94*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE__SYNGROUPINFO_OFFSET))(this, groupInfo, syncByInit);
		}

		::System::Void _InitGroupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE__INITGROUPDATA_OFFSET))(this);
		}

		::System::Void _OnPVEBattleResultScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE__ONPVEBATTLERESULTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::UInt32 get_LastBattleWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE_GET_LASTBATTLEWAVE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
