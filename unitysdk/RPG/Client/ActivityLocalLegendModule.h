#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_1CBA230307F9C289_36;
class Class_1_D1E0AD3915BCCF29_60;
namespace RPG::Client { class ActivityLocalLegendData; }
namespace RPG::Client { class ActivityLocalLegendRewardData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_CLEARNEWGROUP_OFFSET UNITYSDK_OFFSET(0x9BFE290)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETACTIVITYLOCALLEGENDDATALIST_OFFSET UNITYSDK_OFFSET(0x9BFD6E0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETACTIVITYLOCALLEGENDDATA_OFFSET UNITYSDK_OFFSET(0x9BFD600)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETALLEASYANDHARDCHALLENGED_OFFSET UNITYSDK_OFFSET(0x9BFE480)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETFINISHEDSTARNUM_OFFSET UNITYSDK_OFFSET(0x9BFD720)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETNEWUNLOCKANIMGROUPS_OFFSET UNITYSDK_OFFSET(0x9BFD870)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GET_ACTIVITYLOCALLEGENDREWARDDATA_OFFSET UNITYSDK_OFFSET(0x9BFE640)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_HASUNTAKENEASYANDHARDREWARD_OFFSET UNITYSDK_OFFSET(0x9BFE940)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_HASUNTAKENFEARLESSREWARD_OFFSET UNITYSDK_OFFSET(0x9BFE7D0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_HASUNTAKENRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0x9BFE5B0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9BFD160)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_ISSHOWTIMELIMITREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x9BFE9E0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_RESTARTENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x9BFDDB0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_SHOWNEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0x9BFE350)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_TRIGGERENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x9BFDA40)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x9BFDF70)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9BFD5C0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9BFD510)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x9BFEF70)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9BFEF10)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__INITGROUPDATA_OFFSET UNITYSDK_OFFSET(0x9BFD2D0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ONCMDGETLOCALLEGENDDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9BFEAA0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ONCMDLOCALLEGENDDATACHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0x9BFEE90)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__SYNGROUPINFO_OFFSET UNITYSDK_OFFSET(0x9BFED20)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9BFEF80)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9BFF070)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9BFF010)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendModule_TypeDefinitionIndex = 56777;

	class ActivityLocalLegendModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet_ACTIVITY_REWARD_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendModule_TypeDefinitionIndex)->GetStaticField(0xC610);
		}
		::System::Collections::Generic::List_1<::RPG::Client::ActivityLocalLegendData*>* _ActivityLocalLegendGroupDataList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityLocalLegendData*>* _ActivityLocalLegendGroupDataDic; // 0x18
		::RPG::Client::ActivityLocalLegendRewardData* _ActivityLocalLegendRewardData; // 0x20
		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_36*>* _LastBattleAvatar; // 0x28
		::RPG::Client::TextID BattleTitle; // 0x30
		::System::UInt32 BattleLevel; // 0x40
		::System::UInt32 BattleGroupID; // 0x44
		::System::Int32 _AutoShowGroupID; // 0x48

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

		::System::Void _SynGroupInfo(::Class_1_D1E0AD3915BCCF29_60* levelData, ::System::Boolean syncByInit)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_60*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__SYNGROUPINFO_OFFSET))(this, levelData, syncByInit);
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
