#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeInstance.h"

class Class_1_2E57B88467AF63C8_1;
class Class_1_3AD2528CD53B1639_3;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GETSCORERATIO_OFFSET UNITYSDK_OFFSET(0x9F248C0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GETSCORE_OFFSET UNITYSDK_OFFSET(0x9F24830)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_BATTLEFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x9F249C0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_BATTLELASTFINISHEDINDEX_OFFSET UNITYSDK_OFFSET(0x9F249A0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_BATTLETOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x9F24820)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASBETTERSCORE_OFFSET UNITYSDK_OFFSET(0x9F24A70)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASCLEAR_OFFSET UNITYSDK_OFFSET(0x9F24960)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASNEXTBATTLE_OFFSET UNITYSDK_OFFSET(0x9F24A10)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASREWARD_OFFSET UNITYSDK_OFFSET(0x9F24980)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_ISBATTLEALLFINISHED_OFFSET UNITYSDK_OFFSET(0x9F249E0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_ISLASTBATTLEWIN_OFFSET UNITYSDK_OFFSET(0x9F24A90)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_ISSINGLEBATTLE_OFFSET UNITYSDK_OFFSET(0x9F249F0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_ISPASS_OFFSET UNITYSDK_OFFSET(0x9F24290)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SETUPLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x9F242D0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_BATTLEFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x9F249D0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_BATTLELASTFINISHEDINDEX_OFFSET UNITYSDK_OFFSET(0x9F249B0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_HASBETTERSCORE_OFFSET UNITYSDK_OFFSET(0x9F24A80)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_HASCLEAR_OFFSET UNITYSDK_OFFSET(0x9F24970)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_HASREWARD_OFFSET UNITYSDK_OFFSET(0x9F24990)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_ISLASTBATTLEWIN_OFFSET UNITYSDK_OFFSET(0x9F24AA0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_ISSINGLEBATTLE_OFFSET UNITYSDK_OFFSET(0x9F24A00)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SYNCONBATTLEFINISHED_OFFSET UNITYSDK_OFFSET(0x9F24410)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE__ADDCHALLENGEINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0x9F24080)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE__CALCISNEWRECORD_OFFSET UNITYSDK_OFFSET(0x9F241C0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F23B60)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE__ONBATTLERESULTCONFIRM_OFFSET UNITYSDK_OFFSET(0x9F243C0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE__REMOVECHALLENGEINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0x9F24120)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE__SYNCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x9F23C90)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE___IFIXBASEPROXY_SETUPLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x9F24BB0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE___IFIXBASEPROXY__ADDCHALLENGEINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0x9F24B20)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE___IFIXBASEPROXY__CALCISNEWRECORD_OFFSET UNITYSDK_OFFSET(0x9F24B40)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE___IFIXBASEPROXY__REMOVECHALLENGEINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0x9F24B30)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE___IFIXBASEPROXY__SYNCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x9F24AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeBossInstance_TypeDefinitionIndex = 58109;

	class ChallengeBossInstance : public ::RPG::Client::ChallengeInstance
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _BattleScores; // 0x60
		::System::Collections::Generic::List_1<::System::UInt32>* BuffList; // 0x68
		::System::Boolean _HasClear_k__BackingField; // 0x70
		::System::Boolean _HasBetterScore_k__BackingField; // 0x71
		::System::Boolean _HasReward_k__BackingField; // 0x72
		::System::UInt32 _BattleFinishedCount_k__BackingField; // 0x74
		::System::UInt32 _BattleLastFinishedIndex_k__BackingField; // 0x78
		::System::Boolean _IsLastBattleWin_k__BackingField; // 0x7C
		::System::Boolean _IsSingleBattle_k__BackingField; // 0x7D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE__CTOR_OFFSET))(this);
		}

		::System::Void _SyncExtraInfo(::Class_1_3AD2528CD53B1639_3* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE__SYNCEXTRAINFO_OFFSET))(this, data);
		}

		::System::Void _AddChallengeInstanceHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE__ADDCHALLENGEINSTANCEHANDLER_OFFSET))(this);
		}

		::System::Void _RemoveChallengeInstanceHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE__REMOVECHALLENGEINSTANCEHANDLER_OFFSET))(this);
		}

		::System::Void _CalcIsNewRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE__CALCISNEWRECORD_OFFSET))(this);
		}

		::System::Boolean IsPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_ISPASS_OFFSET))(this);
		}

		::System::Void SetupLoadingStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SETUPLOADINGSTRATEGY_OFFSET))(this);
		}

		::System::Void _OnBattleResultConfirm(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE__ONBATTLERESULTCONFIRM_OFFSET))(this, obj);
		}

		::System::Void SyncOnBattleFinished(::Class_1_2E57B88467AF63C8_1* info, ::System::Boolean isBetterScore)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SYNCONBATTLEFINISHED_OFFSET))(this, info, isBetterScore);
		}

		::System::UInt32 GetScore(::System::UInt32 scoreID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GETSCORE_OFFSET))(this, scoreID);
		}

		::System::Single GetScoreRatio(::System::UInt32 scoreID)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GETSCORERATIO_OFFSET))(this, scoreID);
		}

		::System::Boolean get_HasClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASCLEAR_OFFSET))(this);
		}

		::System::Void set_HasClear(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_HASCLEAR_OFFSET))(this, value);
		}

		::System::Boolean get_HasReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASREWARD_OFFSET))(this);
		}

		::System::Void set_HasReward(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_HASREWARD_OFFSET))(this, value);
		}

		::System::UInt32 get_BattleLastFinishedIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_BATTLELASTFINISHEDINDEX_OFFSET))(this);
		}

		::System::Void set_BattleLastFinishedIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_BATTLELASTFINISHEDINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_BattleFinishedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_BATTLEFINISHEDCOUNT_OFFSET))(this);
		}

		::System::Void set_BattleFinishedCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_BATTLEFINISHEDCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_BattleTotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_BATTLETOTALCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsBattleAllFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_ISBATTLEALLFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsSingleBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_ISSINGLEBATTLE_OFFSET))(this);
		}

		::System::Void set_IsSingleBattle(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_ISSINGLEBATTLE_OFFSET))(this, value);
		}

		::System::Boolean get_HasNextBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASNEXTBATTLE_OFFSET))(this);
		}

		::System::Boolean get_HasBetterScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASBETTERSCORE_OFFSET))(this);
		}

		::System::Void set_HasBetterScore(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_HASBETTERSCORE_OFFSET))(this, value);
		}

		::System::Boolean get_IsLastBattleWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_ISLASTBATTLEWIN_OFFSET))(this);
		}

		::System::Void set_IsLastBattleWin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_ISLASTBATTLEWIN_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy__SyncExtraInfo(::Class_1_3AD2528CD53B1639_3* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE___IFIXBASEPROXY__SYNCEXTRAINFO_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__AddChallengeInstanceHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE___IFIXBASEPROXY__ADDCHALLENGEINSTANCEHANDLER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__RemoveChallengeInstanceHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE___IFIXBASEPROXY__REMOVECHALLENGEINSTANCEHANDLER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__CalcIsNewRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE___IFIXBASEPROXY__CALCISNEWRECORD_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_SetupLoadingStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE___IFIXBASEPROXY_SETUPLOADINGSTRATEGY_OFFSET))(this);
		}
	};
}
