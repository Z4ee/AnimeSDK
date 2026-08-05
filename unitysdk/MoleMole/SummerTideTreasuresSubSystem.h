#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_64E681E70DA96DB7.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/MoleMole/SummerTideTreasuresSubSystem_RewardInfo.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_66C4D81440373C6E;
class Class_1_B7E341C5F1A6F199;
class Class_2_186B4E1BC116EFF3;
class Class_2_208CC9941471731A_1158;
class Class_2_208CC9941471731A_379;
class Class_2_208CC9941471731A_937;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole { class SummerTideTreasuresSubSystem_RecodeData; }
namespace MoleMole { class SummerTideTreasuresSubSystem_RuntimeAreaInfo; }
namespace MoleMole { class SummerTideTreasuresSubSystem_RuntimeItemDropInfo; }
namespace MoleMole { class SummerTideTreasuresSubSystem_RuntimeMonsterPoolInfo; }
namespace MoleMole { class SummerTideTreasuresSubSystem_RuntimePointInfo; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ADDASSERTHANDLE_OFFSET UNITYSDK_OFFSET(0x1794AB80)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ADDSUMMERTIDEMONSTER_OFFSET UNITYSDK_OFFSET(0x1794F190)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_APPLYSIMPLEDROPITEMCONFIG_OFFSET UNITYSDK_OFFSET(0x17947580)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_BORNMONSTERBYLST_OFFSET UNITYSDK_OFFSET(0x1794EC00)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_BYSUMMERTIDESEAFOODSTAR_OFFSET UNITYSDK_OFFSET(0x17949C40)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_CHECKMONSTERNUM_OFFSET UNITYSDK_OFFSET(0x17947C70)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_DESTROYEFFECTSBYREMOVEDCASTER_OFFSET UNITYSDK_OFFSET(0x17951260)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17943D70)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ENABLEHULLCOLLIDER_OFFSET UNITYSDK_OFFSET(0x179515F0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GETCURMAXSCORE_OFFSET UNITYSDK_OFFSET(0x17948540)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GETCURTIME_OFFSET UNITYSDK_OFFSET(0x17947D70)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_BAG_OFFSET UNITYSDK_OFFSET(0x1793DBE0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_BUFFAREAS_OFFSET UNITYSDK_OFFSET(0x1793DC00)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1793DC30)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_DROPCOUNT_OFFSET UNITYSDK_OFFSET(0x1793DC60)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_EFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0x1793DC40)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_GUARANTEELIST_OFFSET UNITYSDK_OFFSET(0x1793DC50)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_MONSTERAREAS_OFFSET UNITYSDK_OFFSET(0x1793DBF0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_RUNTIMERESTOCKINGAREAS_OFFSET UNITYSDK_OFFSET(0x1793DC10)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x1793DC20)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_INITTIDETREASUREDATA_OFFSET UNITYSDK_OFFSET(0x17940640)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ISOLATEENTITY_OFFSET UNITYSDK_OFFSET(0x1794FBC0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_KILLTHEMALL_OFFSET UNITYSDK_OFFSET(0x17950EE0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_MAKEITEMTOBATTLEBAG_OFFSET UNITYSDK_OFFSET(0x17948B10)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_NOTIFYEFFECTMANAGERENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0x17950B80)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1793E8C0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x1793E0C0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ONMONSTERENABLE_OFFSET UNITYSDK_OFFSET(0x1794FA50)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1793EDB0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_PACKRECODEDATA_OFFSET UNITYSDK_OFFSET(0x17947CE0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_PAUSEMONSTER_OFFSET UNITYSDK_OFFSET(0x17948000)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RANDOMBORNMONSTER_OFFSET UNITYSDK_OFFSET(0x1794BA80)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RANDOMDROPSTAR_OFFSET UNITYSDK_OFFSET(0x17949CF0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RANDOMITEMTOBATTLEBAG_OFFSET UNITYSDK_OFFSET(0x17948720)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_REALBORNMONSTER_OFFSET UNITYSDK_OFFSET(0x17947750)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_REFRESHAREAVALID_OFFSET UNITYSDK_OFFSET(0x1793FE70)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_REFRESHPOINTVALID_OFFSET UNITYSDK_OFFSET(0x1794FFF0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1793DC70)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RESUMEENTITY_OFFSET UNITYSDK_OFFSET(0x179507E0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_SIMULATEBORNMONSTER_OFFSET UNITYSDK_OFFSET(0x1794E650)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_SIMULATEKILLMONSTER_OFFSET UNITYSDK_OFFSET(0x179508D0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTBORNBUFF_OFFSET UNITYSDK_OFFSET(0x179405A0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTBORNMONSTER_OFFSET UNITYSDK_OFFSET(0x179404E0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTBORNRESTOCKITEM_OFFSET UNITYSDK_OFFSET(0x17940440)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTFEVER_OFFSET UNITYSDK_OFFSET(0x179486C0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTFORCEBORNMONSTER_OFFSET UNITYSDK_OFFSET(0x1794A9D0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTSHOWITEMREWARD_OFFSET UNITYSDK_OFFSET(0x1794A960)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_TRYBORNBUFF_OFFSET UNITYSDK_OFFSET(0x1794C970)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_TRYBORNMONSTER_OFFSET UNITYSDK_OFFSET(0x1794D7E0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_TRYBORNRESTOCKINGITEM_OFFSET UNITYSDK_OFFSET(0x1794AC10)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1793DEE0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x17951930)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x17951F10)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x17951FA0)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x17952030)
#define MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x179520C0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerTideTreasuresSubSystem_TypeDefinitionIndex = 80757;

	class SummerTideTreasuresSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::SummerTideTreasuresSubSystem*>
	{
	public:
		// static const ::System::String* SUMMERTIDETREASURE_FEVER_NAME; // 0x0
		// static const ::System::Int32 GUARANTEE_NUM = 0xA; // 0x0
		// static const ::System::String* HIDEKEY; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Queue_1<::MoleMole::EntityHandle>*>* _cachedEntityHandles; // 0x10
		::MoleMole::SummerTideTreasuresSubSystem_RecodeData* Recode; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo*>* _dicRuntimeBuffAreas; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* _runtimeGuaranteeTriggers; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo*>* _dicRuntimeRestockingAreas; // 0x30
		::System::Threading::CancellationTokenSource* _rewardShowCancellationTokenSource; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* _aliveEntityHandles; // 0x40
		::System::Threading::CancellationTokenSource* _monsterCehckCancellationTokenSource; // 0x48
		::System::Threading::CancellationTokenSource* _bornCancellationTokenSource; // 0x50
		::Class_2_208CC9941471731A_379* _config; // 0x58
		::System::Threading::CancellationTokenSource* _monsterBornCancellationTokenSource; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo*>* _dicRuntimeMonsterAreas; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::SummerTideTreasuresSubSystem_RewardInfo>* _curRewardListForShow; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeMonsterPoolInfo*>* _dicRuntimeBuffPools; // 0x78
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _assetRequestHandles; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeItemDropInfo*>*>*>* _dicRuntimeItemDrops; // 0x88
		::Class_2_208CC9941471731A_937* _effectConfig; // 0x90
		::Class_2_208CC9941471731A_1158* _monsterPoolConfig; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeMonsterPoolInfo*>* _dicRuntimeMonsterPools; // 0xA0
		::System::Collections::Generic::List_1<::System::Int32>* _guaranteeList; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _dicMonsterMaxDropItemStar; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _bag; // 0xB8
		::System::Single _curBornMonsterInterval; // 0xC0
		::System::Single _curBornBuffInterval; // 0xC4
		::System::Single _curFeverTime; // 0xC8
		::System::Int32 _curScore; // 0xCC
		::System::Single _curBornRestockItemInterval; // 0xD0
		::System::Int32 _curDropCount; // 0xD4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_Bag()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_BAG_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo*>* get_MonsterAreas()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_MONSTERAREAS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo*>* get_BuffAreas()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_BUFFAREAS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo*>* get_RuntimeRestockingAreas()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_RUNTIMERESTOCKINGAREAS_OFFSET))(this);
		}

		::System::Int32 get_Score()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_SCORE_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_379* get_Config()
		{
			return ((::Class_2_208CC9941471731A_379*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_CONFIG_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_937* get_EffectConfig()
		{
			return ((::Class_2_208CC9941471731A_937*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_EFFECTCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_GuaranteeList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_GUARANTEELIST_OFFSET))(this);
		}

		::System::Int32 get_DropCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GET_DROPCOUNT_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnEntityReady(::Class_2_186B4E1BC116EFF3* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_186B4E1BC116EFF3*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ONENTITYREADY_OFFSET))(this, evt);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void InitTideTreasureData(::System::Int32 stageID, ::System::Int32 effectID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_INITTIDETREASUREDATA_OFFSET))(this, stageID, effectID);
		}

		::MoleMole::SummerTideTreasuresSubSystem_RecodeData* PackRecodeData()
		{
			return ((::MoleMole::SummerTideTreasuresSubSystem_RecodeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_PACKRECODEDATA_OFFSET))(this);
		}

		::System::Int32 GetCurTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GETCURTIME_OFFSET))(this);
		}

		::System::Void PauseMonster(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_PAUSEMONSTER_OFFSET))(this, isPause);
		}

		::System::Void GetCurMaxScore(::System::Int32 currentScore, ::System::Int32& lastMaxScore, ::System::Int32& maxScore, ::System::Int32& curRank)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_GETCURMAXSCORE_OFFSET))(this, currentScore, lastMaxScore, maxScore, curRank);
		}

		::System::Void StartFever(::System::Single feverTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTFEVER_OFFSET))(this, feverTime);
		}

		::System::Void RandomItemToBattleBag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RANDOMITEMTOBATTLEBAG_OFFSET))(this);
		}

		::System::Boolean BySummerTideSeaFoodStar(::System::UInt32 entityID, ::System::Int32 star)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_BYSUMMERTIDESEAFOODSTAR_OFFSET))(this, entityID, star);
		}

		::System::Void RandomDropStar(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeItemDropInfo*>*>* starDict, ::System::Int32& star, ::System::Boolean& fromGuarantee)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeItemDropInfo*>*>*, ::System::Int32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RANDOMDROPSTAR_OFFSET))(this, starDict, star, fromGuarantee);
		}

		::System::Void MakeItemToBattleBag(::System::Int32 monsterID, ::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_MAKEITEMTOBATTLEBAG_OFFSET))(this, monsterID, entityID);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid StartBornRestockItem(::System::Int32 num, ::System::Single bornInterval, ::System::Boolean checkDis)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTBORNRESTOCKITEM_OFFSET))(this, num, bornInterval, checkDis);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid StartBornBuff(::System::Int32 num, ::System::Single bornInterval, ::System::Boolean checkDis)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTBORNBUFF_OFFSET))(this, num, bornInterval, checkDis);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid StartBornMonster(::System::Int32 num, ::System::Single bornInterval, ::System::Int32 intervalNum, ::System::Boolean checkDis)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTBORNMONSTER_OFFSET))(this, num, bornInterval, intervalNum, checkDis);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid StartForceBornMonster(::UnityEngine::Vector3 center, ::System::Single radius, ::System::Single bornInterval, ::System::Int32 intervalNum, ::System::Collections::Generic::List_1<::System::Int32>* blackLst, ::System::Collections::Generic::List_1<::System::Int32>* containsLst, ::System::Single ignoreRadius, ::System::Boolean forceBorn)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTFORCEBORNMONSTER_OFFSET))(this, center, radius, bornInterval, intervalNum, blackLst, containsLst, ignoreRadius, forceBorn);
		}

		::System::Void AddAssertHandle(::Foundation::AssetRequestHandle h)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ADDASSERTHANDLE_OFFSET))(this, h);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_DISPOSE_OFFSET))(this);
		}

		::System::Void ApplySimpleDropItemConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_APPLYSIMPLEDROPITEMCONFIG_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid CheckMonsterNum()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_CHECKMONSTERNUM_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid StartShowItemReward()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_STARTSHOWITEMREWARD_OFFSET))(this);
		}

		::System::Boolean TryBornRestockingItem(::System::Boolean checkDis)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_TRYBORNRESTOCKINGITEM_OFFSET))(this, checkDis);
		}

		::System::Boolean TryBornBuff(::System::Boolean checkDis)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_TRYBORNBUFF_OFFSET))(this, checkDis);
		}

		::System::Boolean TryBornMonster(::System::Boolean checkDis)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_TRYBORNMONSTER_OFFSET))(this, checkDis);
		}

		::System::Boolean RandomBornMonster(::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo* curArea, ::MoleMole::SummerTideTreasuresSubSystem_RuntimePointInfo* curPoint, ::System::Collections::Generic::List_1<::System::Int32>* blackLst, ::System::Boolean checkNum)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo*, ::MoleMole::SummerTideTreasuresSubSystem_RuntimePointInfo*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RANDOMBORNMONSTER_OFFSET))(this, curArea, curPoint, blackLst, checkNum);
		}

		::System::Boolean BornMonsterByLst(::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo* curArea, ::MoleMole::SummerTideTreasuresSubSystem_RuntimePointInfo* curPoint, ::System::Collections::Generic::List_1<::System::Int32>* containsLst)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo*, ::MoleMole::SummerTideTreasuresSubSystem_RuntimePointInfo*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_BORNMONSTERBYLST_OFFSET))(this, curArea, curPoint, containsLst);
		}

		::MoleMole::EntityHandle RealBornMonster(::System::Int32 monsterID, ::UnityEngine::Vector3 pos)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_REALBORNMONSTER_OFFSET))(this, monsterID, pos);
		}

		::System::Void OnMonsterEnable(::System::Boolean enable, ::MoleMole::Battle::Entity* monster)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ONMONSTERENABLE_OFFSET))(this, enable, monster);
		}

		::System::Void RefreshAreaValid(::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo* a)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SummerTideTreasuresSubSystem_RuntimeAreaInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_REFRESHAREAVALID_OFFSET))(this, a);
		}

		::System::Void RefreshPointValid(::MoleMole::SummerTideTreasuresSubSystem_RuntimePointInfo* p, ::Enum_3_64E681E70DA96DB7 areaType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SummerTideTreasuresSubSystem_RuntimePointInfo*, ::Enum_3_64E681E70DA96DB7))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_REFRESHPOINTVALID_OFFSET))(this, p, areaType);
		}

		::MoleMole::EntityHandle AddSummerTideMonster(::Class_1_66C4D81440373C6E* fighterData, ::System::Boolean freezeAI, ::System::Boolean isLoadModelAsync)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::Class_1_66C4D81440373C6E*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ADDSUMMERTIDEMONSTER_OFFSET))(this, fighterData, freezeAI, isLoadModelAsync);
		}

		::MoleMole::EntityHandle SimulateBornMonster(::System::Int32 id, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotAngle)
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_SIMULATEBORNMONSTER_OFFSET))(this, id, position, rotAngle);
		}

		::System::Void SimulateKillMonster(::System::UInt32 deaderID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_SIMULATEKILLMONSTER_OFFSET))(this, deaderID);
		}

		::System::Void KillThemAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_KILLTHEMALL_OFFSET))(this);
		}

		::System::Void NotifyEffectManagerEntityRemoved(::MoleMole::EntityHandle e)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_NOTIFYEFFECTMANAGERENTITYREMOVED_OFFSET))(this, e);
		}

		::System::Void DestroyEffectsByRemovedCaster(::System::UInt32 casterEntityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_DESTROYEFFECTSBYREMOVEDCASTER_OFFSET))(this, casterEntityID);
		}

		::System::Void IsolateEntity(::MoleMole::EntityHandle e)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ISOLATEENTITY_OFFSET))(this, e);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid ResumeEntity(::MoleMole::EntityHandle e, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion q)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::EntityHandle, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_RESUMEENTITY_OFFSET))(this, e, pos, q);
		}

		::System::Void EnableHullCollider(::Class_3_C93CC3D2C2AC4067* modelComponent, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM_ENABLEHULLCOLLIDER_OFFSET))(this, modelComponent, enable);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERTIDETREASURESSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
