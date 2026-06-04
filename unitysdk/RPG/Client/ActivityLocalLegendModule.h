#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_1CBA230307F9C289_36;
class Class_1_D1E0AD3915BCCF29_62;
namespace RPG::Client { class ActivityLocalLegendData; }
namespace RPG::Client { class ActivityLocalLegendRewardData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_CLEARNEWGROUP_OFFSET UNITYSDK_OFFSET(0xB19B290)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETACTIVITYLOCALLEGENDDATALIST_OFFSET UNITYSDK_OFFSET(0xB19A720)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETACTIVITYLOCALLEGENDDATA_OFFSET UNITYSDK_OFFSET(0xB19A670)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETALLEASYANDHARDCHALLENGED_OFFSET UNITYSDK_OFFSET(0xB19B490)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETFINISHEDSTARNUM_OFFSET UNITYSDK_OFFSET(0xB19A760)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETNEWUNLOCKANIMGROUPS_OFFSET UNITYSDK_OFFSET(0xB19A8A0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GET_ACTIVITYLOCALLEGENDREWARDDATA_OFFSET UNITYSDK_OFFSET(0xB19B670)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_HASUNTAKENEASYANDHARDREWARD_OFFSET UNITYSDK_OFFSET(0xB19B9A0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_HASUNTAKENFEARLESSREWARD_OFFSET UNITYSDK_OFFSET(0xB19B820)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_HASUNTAKENRESIDENTREWARD_OFFSET UNITYSDK_OFFSET(0xB19B5E0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB19A000)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_ISSHOWTIMELIMITREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xB19BA40)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_RESTARTENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xB19AE30)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_SHOWNEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0xB19B340)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_TRIGGERENTERBATTLE_OFFSET UNITYSDK_OFFSET(0xB19AA80)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xB19B000)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB19A630)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB19A4A0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xB19BFE0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB19BF80)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__INITGROUPDATA_OFFSET UNITYSDK_OFFSET(0xB19A190)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ONCMDGETLOCALLEGENDDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB19BB00)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ONCMDLOCALLEGENDDATACHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0xB19BF00)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__SYNGROUPINFO_OFFSET UNITYSDK_OFFSET(0xB19BD80)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB19BFF0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB19C0D0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB19C070)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendModule_TypeDefinitionIndex = 57561;

	class ActivityLocalLegendModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet_ACTIVITY_REWARD_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ActivityLocalLegendModule_TypeDefinitionIndex)->GetStaticField(0xF5A0);
		}
		::RPG::Client::ActivityLocalLegendRewardData* _ActivityLocalLegendRewardData; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityLocalLegendData*>* _ActivityLocalLegendGroupDataDic; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityLocalLegendData*>* _ActivityLocalLegendGroupDataList; // 0x20
		::System::Collections::Generic::List_1<::Class_1_1CBA230307F9C289_36*>* _LastBattleAvatar; // 0x28
		::RPG::Client::TextID BattleTitle; // 0x30
		::System::Int32 _AutoShowGroupID; // 0x40
		::System::UInt32 BattleLevel; // 0x44
		::System::UInt32 BattleGroupID; // 0x48

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

		::RPG::Client::ActivityLocalLegendData* GetActivityLocalLegendData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityLocalLegendData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_GETACTIVITYLOCALLEGENDDATA_OFFSET))(this, a1);
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

		::System::Void TriggerEnterBattle(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE_TRIGGERENTERBATTLE_OFFSET))(this, a1, a2, a3);
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

		::System::Void _OnCmdGetLocalLegendDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ONCMDGETLOCALLEGENDDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdLocalLegendDataChangeNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__ONCMDLOCALLEGENDDATACHANGENOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _SynGroupInfo(::Class_1_D1E0AD3915BCCF29_62* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_62*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE__SYNGROUPINFO_OFFSET))(this, a1, a2);
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
