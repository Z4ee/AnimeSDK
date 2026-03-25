#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_120319518E6F6581_53;
class Class_1_352A8B3482C80E7D_31;
namespace RPG::Client { class ActivityLocalLegendData; }
namespace RPG::Client { class ActivityLocalLegendRewardData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_CLEARNEWGROUP_OFFSET UNITYSDK_OFFSET(0x8F55990)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETACTIVITYLOCALLEGENDDATALIST_OFFSET UNITYSDK_OFFSET(0x8F54DE0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETACTIVITYLOCALLEGENDDATA_OFFSET UNITYSDK_OFFSET(0x8F54D00)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETALLEASYANDHARDCHALLENGED_OFFSET UNITYSDK_OFFSET(0x8F55B80)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETFINISHEDSTARNUM_OFFSET UNITYSDK_OFFSET(0x8F54E20)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETNEWUNLOCKANIMGROUPS_OFFSET UNITYSDK_OFFSET(0x8F54F70)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GET_ACTIVITYLOCALLEGENDREWARDDATA_OFFSET UNITYSDK_OFFSET(0x8F55D40)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_HASUNTAKENEASYANDHARDREWARD_OFFSET UNITYSDK_OFFSET(0x8F56040)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_HASUNTAKENFEARLESSREWARD_OFFSET UNITYSDK_OFFSET(0x8F55ED0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_HASUNTAKENRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0x8F55CB0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x8F54860)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_ISSHOWTIMELIMITREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x8F560E0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_RESTARTENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x8F554B0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_SHOWNEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0x8F55A50)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_TRIGGERENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x8F55140)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x8F55670)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8F54CC0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8F54C10)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F56670)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x8F56610)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__INITGROUPDATA_OFFSET UNITYSDK_OFFSET(0x8F549D0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ONCMDGETLOCALLEGENDDATASCRSP_OFFSET UNITYSDK_OFFSET(0x8F561A0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ONCMDLOCALLEGENDDATACHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0x8F56590)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__SYNGROUPINFO_OFFSET UNITYSDK_OFFSET(0x8F56420)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8F56680)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8F56770)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8F56710)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendModule_TypeDefinitionIndex = 49938;

	class ActivityLocalLegendModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet_ACTIVITY_REWARD_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendModule_TypeDefinitionIndex)->GetStaticField(0xC980);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityLocalLegendData*>* _ActivityLocalLegendGroupDataDic; // 0x10
		::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_31*>* _LastBattleAvatar; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityLocalLegendData*>* _ActivityLocalLegendGroupDataList; // 0x20
		::RPG::Client::ActivityLocalLegendRewardData* _ActivityLocalLegendRewardData; // 0x28
		::System::UInt32 BattleGroupID; // 0x30
		::RPG::Client::TextID BattleTitle; // 0x38
		::System::Int32 _AutoShowGroupID; // 0x48
		::System::UInt32 BattleLevel; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::RPG::Client::ActivityLocalLegendData* GetActivityLocalLegendData(::System::UInt32 groupID)
		{
			return ((::RPG::Client::ActivityLocalLegendData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETACTIVITYLOCALLEGENDDATA_OFFSET))(this, groupID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityLocalLegendData*>* GetActivityLocalLegendDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityLocalLegendData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETACTIVITYLOCALLEGENDDATALIST_OFFSET))(this);
		}

		::System::UInt32 GetFinishedStarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETFINISHEDSTARNUM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewUnlockAnimGroups()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETNEWUNLOCKANIMGROUPS_OFFSET))(this);
		}

		::System::Void TriggerEnterBattle(::System::UInt32 groupID, ::System::UInt32 difficultyLevel, ::System::Collections::Generic::List_1<::System::UInt32>* avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_TRIGGERENTERBATTLE_OFFSET))(this, groupID, difficultyLevel, avatarID);
		}

		::System::Void RestartEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_RESTARTENTERBATTLE_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void ClearNewGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_CLEARNEWGROUP_OFFSET))(this);
		}

		::System::Boolean ShowNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_SHOWNEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean GetAllEasyAndHardChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETALLEASYANDHARDCHALLENGED_OFFSET))(this);
		}

		::System::Boolean HasUntakenResidentReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_HASUNTAKENRESIDENTREWARD_OFFSET))(this);
		}

		::System::Boolean HasUntakenFearlessReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_HASUNTAKENFEARLESSREWARD_OFFSET))(this);
		}

		::System::Boolean HasUntakenEasyAndHardReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_HASUNTAKENEASYANDHARDREWARD_OFFSET))(this);
		}

		::System::Boolean IsShowTimeLimitRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_ISSHOWTIMELIMITREWARDREDDOT_OFFSET))(this);
		}

		::System::Void _OnCmdGetLocalLegendDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ONCMDGETLOCALLEGENDDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdLocalLegendDataChangeNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ONCMDLOCALLEGENDDATACHANGENOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SynGroupInfo(::Class_1_120319518E6F6581_53* levelData, ::System::Boolean syncByInit)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_53*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__SYNGROUPINFO_OFFSET))(this, levelData, syncByInit);
		}

		::System::Void _InitGroupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__INITGROUPDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityLocalLegendRewardData* get_ActivityLocalLegendRewardData()
		{
			return ((::RPG::Client::ActivityLocalLegendRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GET_ACTIVITYLOCALLEGENDREWARDDATA_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
