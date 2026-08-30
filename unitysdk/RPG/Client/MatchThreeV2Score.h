#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreeRarityType.h"
#include "unitysdk/RPG/GameCore/MatchThreeScoreType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2PvpScoreData; }
namespace System { class String; }

#define RPG_CLIENT_MATCHTHREEV2SCORE_CREATE_OFFSET UNITYSDK_OFFSET(0xD673DF0)
#define RPG_CLIENT_MATCHTHREEV2SCORE_GET_DATA_OFFSET UNITYSDK_OFFSET(0xD673AC0)
#define RPG_CLIENT_MATCHTHREEV2SCORE_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xD673DA0)
#define RPG_CLIENT_MATCHTHREEV2SCORE_GET_SCOREID_OFFSET UNITYSDK_OFFSET(0xD673B20)
#define RPG_CLIENT_MATCHTHREEV2SCORE_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xD673AE0)
#define RPG_CLIENT_MATCHTHREEV2SCORE_GET_STATICCOUNT_OFFSET UNITYSDK_OFFSET(0xD673B00)
#define RPG_CLIENT_MATCHTHREEV2SCORE_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xD673B70)
#define RPG_CLIENT_MATCHTHREEV2SCORE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD673D50)
#define RPG_CLIENT_MATCHTHREEV2SCORE_SET_DATA_OFFSET UNITYSDK_OFFSET(0xD673AD0)
#define RPG_CLIENT_MATCHTHREEV2SCORE_SET_SCORE_OFFSET UNITYSDK_OFFSET(0xD673AF0)
#define RPG_CLIENT_MATCHTHREEV2SCORE_SET_STATICCOUNT_OFFSET UNITYSDK_OFFSET(0xD673B10)
#define RPG_CLIENT_MATCHTHREEV2SCORE__CTOR_OFFSET UNITYSDK_OFFSET(0xD673E80)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2Score_TypeDefinitionIndex = 66099;

	class MatchThreeV2Score : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeV2PvpScoreData* _Data_k__BackingField; // 0x10
		::System::UInt32 _StaticCount_k__BackingField; // 0x18
		::System::Int32 _Score_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SCORE__CTOR_OFFSET))(this);
		}

		::RPG::Client::MatchThreeV2PvpScoreData* get_Data()
		{
			return ((::RPG::Client::MatchThreeV2PvpScoreData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SCORE_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::RPG::Client::MatchThreeV2PvpScoreData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2PvpScoreData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SCORE_SET_DATA_OFFSET))(this, a1);
		}

		::System::Int32 get_Score()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SCORE_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SCORE_SET_SCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_StaticCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SCORE_GET_STATICCOUNT_OFFSET))(this);
		}

		::System::Void set_StaticCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SCORE_SET_STATICCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ScoreID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SCORE_GET_SCOREID_OFFSET))(this);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SCORE_GET_TITLE_OFFSET))(this);
		}

		::RPG::GameCore::MatchThreeScoreType get_Type()
		{
			return ((::RPG::GameCore::MatchThreeScoreType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SCORE_GET_TYPE_OFFSET))(this);
		}

		::RPG::GameCore::MatchThreeRarityType get_Rarity()
		{
			return ((::RPG::GameCore::MatchThreeRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SCORE_GET_RARITY_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV2Score* Create(::RPG::Client::MatchThreeV2PvpScoreData* a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::MatchThreeV2Score*(*)(::RPG::Client::MatchThreeV2PvpScoreData*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SCORE_CREATE_OFFSET))(a1, a2, a3);
		}
	};
}
