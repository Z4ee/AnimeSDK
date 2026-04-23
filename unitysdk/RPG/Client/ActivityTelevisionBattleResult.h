#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_64E52A323C80D766_6;
namespace RPG::Client { class RogueEndlessBattleResult; }

#define RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_CLONE_OFFSET UNITYSDK_OFFSET(0x9C72000)
#define RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_CREATE_OFFSET UNITYSDK_OFFSET(0x9C71F40)
#define RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9C72070)
#define RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_GET_BASESCORE_OFFSET UNITYSDK_OFFSET(0x9C72110)
#define RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_GET_BUFFLAYER_OFFSET UNITYSDK_OFFSET(0x9C72180)
#define RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_GET_EXTRASCORE_OFFSET UNITYSDK_OFFSET(0x9C720F0)
#define RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_GET_ISNEWSCORERECORD_OFFSET UNITYSDK_OFFSET(0x9C721A0)
#define RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_GET_LEFTROUNDCNT_OFFSET UNITYSDK_OFFSET(0x9C72160)
#define RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_GET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0x9C720B0)
#define RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x9C720D0)
#define RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_SET_BUFFLAYER_OFFSET UNITYSDK_OFFSET(0x9C72190)
#define RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_SET_EXTRASCORE_OFFSET UNITYSDK_OFFSET(0x9C72100)
#define RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_SET_ISNEWSCORERECORD_OFFSET UNITYSDK_OFFSET(0x9C721B0)
#define RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_SET_LEFTROUNDCNT_OFFSET UNITYSDK_OFFSET(0x9C72170)
#define RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_SET_MAXSCORE_OFFSET UNITYSDK_OFFSET(0x9C720C0)
#define RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_SET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x9C720E0)
#define RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x9C71FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTelevisionBattleResult_TypeDefinitionIndex = 57188;

	class ActivityTelevisionBattleResult : public ::System::Object
	{
	public:
		::System::UInt32 _TotalScore_k__BackingField; // 0x10
		::System::UInt32 _ExtraScore_k__BackingField; // 0x14
		::System::UInt32 _BuffLayer_k__BackingField; // 0x18
		::System::UInt32 _MaxScore_k__BackingField; // 0x1C
		::System::UInt32 _LeftRoundCnt_k__BackingField; // 0x20
		::System::Boolean _IsNewScoreRecord_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityTelevisionBattleResult* Create(::Class_1_64E52A323C80D766_6* ntf, ::System::UInt32 BaseMaxScore)
		{
			return ((::RPG::Client::ActivityTelevisionBattleResult*(*)(::Class_1_64E52A323C80D766_6*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_CREATE_OFFSET))(ntf, BaseMaxScore);
		}

		::System::Void Clone(::RPG::Client::RogueEndlessBattleResult* res)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueEndlessBattleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_CLONE_OFFSET))(this, res);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 get_MaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_GET_MAXSCORE_OFFSET))(this);
		}

		::System::Void set_MaxScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_SET_MAXSCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_GET_TOTALSCORE_OFFSET))(this);
		}

		::System::Void set_TotalScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_SET_TOTALSCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_ExtraScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_GET_EXTRASCORE_OFFSET))(this);
		}

		::System::Void set_ExtraScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_SET_EXTRASCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_BaseScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_GET_BASESCORE_OFFSET))(this);
		}

		::System::UInt32 get_LeftRoundCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_GET_LEFTROUNDCNT_OFFSET))(this);
		}

		::System::Void set_LeftRoundCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_SET_LEFTROUNDCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_BuffLayer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_GET_BUFFLAYER_OFFSET))(this);
		}

		::System::Void set_BuffLayer(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_SET_BUFFLAYER_OFFSET))(this, value);
		}

		::System::Boolean get_IsNewScoreRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_GET_ISNEWSCORERECORD_OFFSET))(this);
		}

		::System::Void set_IsNewScoreRecord(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONBATTLERESULT_SET_ISNEWSCORERECORD_OFFSET))(this, value);
		}
	};
}
