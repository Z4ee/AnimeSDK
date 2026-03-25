#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB10EC01CCC4716_24;

#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_CLONE_OFFSET UNITYSDK_OFFSET(0xA2F93D0)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_CREATE_OFFSET UNITYSDK_OFFSET(0xA2F92A0)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA2F9440)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_BASESCORE_OFFSET UNITYSDK_OFFSET(0xA2F9500)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_EXTRASCORE_OFFSET UNITYSDK_OFFSET(0xA2F94A0)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_ISNEWSCORERECORD_OFFSET UNITYSDK_OFFSET(0xA2F9550)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_LAYER_OFFSET UNITYSDK_OFFSET(0xA2F94C0)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_LEFTROUNDCNT_OFFSET UNITYSDK_OFFSET(0xA2F94E0)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xA2F9480)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_EXTRASCORE_OFFSET UNITYSDK_OFFSET(0xA2F94B0)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_ISNEWSCORERECORD_OFFSET UNITYSDK_OFFSET(0xA2F9560)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_LAYER_OFFSET UNITYSDK_OFFSET(0xA2F94D0)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_LEFTROUNDCNT_OFFSET UNITYSDK_OFFSET(0xA2F94F0)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_SCORE_OFFSET UNITYSDK_OFFSET(0xA2F9490)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SYNC_OFFSET UNITYSDK_OFFSET(0xA2F9340)
#define RPG_CLIENT_ROGUEENDLESSBATTLERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xA2F9330)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueEndlessBattleResult_TypeDefinitionIndex = 54958;

	class RogueEndlessBattleResult : public ::System::Object
	{
	public:
		::System::UInt32 _Layer_k__BackingField; // 0x10
		::System::UInt32 _Score_k__BackingField; // 0x14
		::System::Boolean _IsNewScoreRecord_k__BackingField; // 0x18
		::System::UInt32 _ExtraScore_k__BackingField; // 0x1C
		::System::UInt32 _LeftRoundCnt_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueEndlessBattleResult* Create(::System::UInt32 score, ::System::UInt32 layer)
		{
			return ((::RPG::Client::RogueEndlessBattleResult*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_CREATE_OFFSET))(score, layer);
		}

		::System::Void Sync(::Class_1_EBB10EC01CCC4716_24* layerInfo, ::RPG::Client::RogueEndlessBattleResult* bestResult)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_24*, ::RPG::Client::RogueEndlessBattleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SYNC_OFFSET))(this, layerInfo, bestResult);
		}

		::System::Void Clone(::RPG::Client::RogueEndlessBattleResult* res)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueEndlessBattleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_CLONE_OFFSET))(this, res);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_SCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_ExtraScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_EXTRASCORE_OFFSET))(this);
		}

		::System::Void set_ExtraScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_EXTRASCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_Layer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_LAYER_OFFSET))(this);
		}

		::System::Void set_Layer(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_LAYER_OFFSET))(this, value);
		}

		::System::UInt32 get_LeftRoundCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_LEFTROUNDCNT_OFFSET))(this);
		}

		::System::Void set_LeftRoundCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_LEFTROUNDCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_BaseScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_BASESCORE_OFFSET))(this);
		}

		::System::Boolean get_IsNewScoreRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_GET_ISNEWSCORERECORD_OFFSET))(this);
		}

		::System::Void set_IsNewScoreRecord(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSBATTLERESULT_SET_ISNEWSCORERECORD_OFFSET))(this, value);
		}
	};
}
