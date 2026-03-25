#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_207;
namespace RPG::GameCore { class ChimeraDuelRankRow; }
namespace System { class String; }

#define RPG_CLIENT_CHIMERADUELPLAYERRANKDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x93AF1B0)
#define RPG_CLIENT_CHIMERADUELPLAYERRANKDATA_GET_RANKICON_OFFSET UNITYSDK_OFFSET(0x93B3930)
#define RPG_CLIENT_CHIMERADUELPLAYERRANKDATA_GET_RANKID_OFFSET UNITYSDK_OFFSET(0x93B3910)
#define RPG_CLIENT_CHIMERADUELPLAYERRANKDATA_GET_RANKNAME_OFFSET UNITYSDK_OFFSET(0x93B39D0)
#define RPG_CLIENT_CHIMERADUELPLAYERRANKDATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x93B3A00)
#define RPG_CLIENT_CHIMERADUELPLAYERRANKDATA_GET_TONEXTRANKSCORE_OFFSET UNITYSDK_OFFSET(0x93B3A20)
#define RPG_CLIENT_CHIMERADUELPLAYERRANKDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x93B3950)
#define RPG_CLIENT_CHIMERADUELPLAYERRANKDATA_SET_RANKID_OFFSET UNITYSDK_OFFSET(0x93B3920)
#define RPG_CLIENT_CHIMERADUELPLAYERRANKDATA_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x93B3A10)
#define RPG_CLIENT_CHIMERADUELPLAYERRANKDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x93AFC50)
#define RPG_CLIENT_CHIMERADUELPLAYERRANKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x93B3000)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelPlayerRankData_TypeDefinitionIndex = 51464;

	class ChimeraDuelPlayerRankData : public ::System::Object
	{
	public:
		::System::UInt32 _Score_k__BackingField; // 0x10
		::System::UInt32 _RankID_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERRANKDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_RankID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERRANKDATA_GET_RANKID_OFFSET))(this);
		}

		::System::Void set_RankID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERRANKDATA_SET_RANKID_OFFSET))(this, value);
		}

		::System::String* get_RankIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERRANKDATA_GET_RANKICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_RankName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERRANKDATA_GET_RANKNAME_OFFSET))(this);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERRANKDATA_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERRANKDATA_SET_SCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_ToNextRankScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERRANKDATA_GET_TONEXTRANKSCORE_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDuelRankRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraDuelRankRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERRANKDATA_GET__ROW_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_FA4F4A67B1C04320_207* serverData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_207*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERRANKDATA_SYNC_OFFSET))(this, serverData);
		}

		static ::RPG::Client::ChimeraDuelPlayerRankData* Clone(::RPG::Client::ChimeraDuelPlayerRankData* playerRankData)
		{
			return ((::RPG::Client::ChimeraDuelPlayerRankData*(*)(::RPG::Client::ChimeraDuelPlayerRankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELPLAYERRANKDATA_CLONE_OFFSET))(playerRankData);
		}
	};
}
