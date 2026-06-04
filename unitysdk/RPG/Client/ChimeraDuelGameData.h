#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraDuelGameModeType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelGameType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraDuelGameRow; }

#define RPG_CLIENT_CHIMERADUELGAMEDATA_GET_GAMEMODETYPE_OFFSET UNITYSDK_OFFSET(0xB681EE0)
#define RPG_CLIENT_CHIMERADUELGAMEDATA_GET_GAMETYPE_OFFSET UNITYSDK_OFFSET(0xB681E70)
#define RPG_CLIENT_CHIMERADUELGAMEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB681BC0)
#define RPG_CLIENT_CHIMERADUELGAMEDATA_GET_MAXLIFECOUNT_OFFSET UNITYSDK_OFFSET(0xB681D50)
#define RPG_CLIENT_CHIMERADUELGAMEDATA_GET_MAXWINCOUNT_OFFSET UNITYSDK_OFFSET(0xB678EB0)
#define RPG_CLIENT_CHIMERADUELGAMEDATA_GET_SHOULDEXITPUZZLEONEND_OFFSET UNITYSDK_OFFSET(0xB681F00)
#define RPG_CLIENT_CHIMERADUELGAMEDATA_GET_TARGETWINCOUNT_OFFSET UNITYSDK_OFFSET(0xB678E00)
#define RPG_CLIENT_CHIMERADUELGAMEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xB681BD0)
#define RPG_CLIENT_CHIMERADUELGAMEDATA_ISNEWITEMSLOTUNLOCKEDATROUND_OFFSET UNITYSDK_OFFSET(0xB682690)
#define RPG_CLIENT_CHIMERADUELGAMEDATA_ISNEWRARITYUNLOCKEDATROUND_OFFSET UNITYSDK_OFFSET(0xB6822F0)
#define RPG_CLIENT_CHIMERADUELGAMEDATA_SET_GAMEMODETYPE_OFFSET UNITYSDK_OFFSET(0xB681EF0)
#define RPG_CLIENT_CHIMERADUELGAMEDATA_TRYCREATE_OFFSET UNITYSDK_OFFSET(0xB681F70)
#define RPG_CLIENT_CHIMERADUELGAMEDATA_TRYGETREQUIREDTEAMMEMBERMINCOUNT_OFFSET UNITYSDK_OFFSET(0xB682160)
#define RPG_CLIENT_CHIMERADUELGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB681FD0)
#define RPG_CLIENT_CHIMERADUELGAMEDATA__GETMAXLIFECOUNT_OFFSET UNITYSDK_OFFSET(0xB681D60)
#define RPG_CLIENT_CHIMERADUELGAMEDATA__GETMAXWINCOUNT_OFFSET UNITYSDK_OFFSET(0xB681C30)
#define RPG_CLIENT_CHIMERADUELGAMEDATA__INITGAMEMODETYPE_OFFSET UNITYSDK_OFFSET(0xB681FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameData_TypeDefinitionIndex = 59299;

	class ChimeraDuelGameData : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelGameModeType _GameModeType_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEDATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDuelGameRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraDuelGameRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEDATA_GET__ROW_OFFSET))(this);
		}

		::System::Int32 get_TargetWinCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEDATA_GET_TARGETWINCOUNT_OFFSET))(this);
		}

		::System::Int32 get_MaxWinCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEDATA_GET_MAXWINCOUNT_OFFSET))(this);
		}

		::System::Int32 get_MaxLifeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEDATA_GET_MAXLIFECOUNT_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDuelGameType get_GameType()
		{
			return ((::RPG::GameCore::ChimeraDuelGameType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEDATA_GET_GAMETYPE_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameModeType get_GameModeType()
		{
			return ((::RPG::Client::ChimeraDuelGameModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEDATA_GET_GAMEMODETYPE_OFFSET))(this);
		}

		::System::Void set_GameModeType(::RPG::Client::ChimeraDuelGameModeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEDATA_SET_GAMEMODETYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldExitPuzzleOnEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEDATA_GET_SHOULDEXITPUZZLEONEND_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraDuelGameData* TryCreate(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelGameData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEDATA_TRYCREATE_OFFSET))(a1);
		}

		::System::Void _InitGameModeType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEDATA__INITGAMEMODETYPE_OFFSET))(this);
		}

		::System::Boolean TryGetRequiredTeamMemberMinCount(::System::Int32 a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEDATA_TRYGETREQUIREDTEAMMEMBERMINCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetMaxWinCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEDATA__GETMAXWINCOUNT_OFFSET))(this);
		}

		::System::Int32 _GetMaxLifeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEDATA__GETMAXLIFECOUNT_OFFSET))(this);
		}

		::System::Boolean IsNewRarityUnlockedAtRound(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEDATA_ISNEWRARITYUNLOCKEDATROUND_OFFSET))(this, a1);
		}

		::System::Boolean IsNewItemSlotUnlockedAtRound(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMEDATA_ISNEWITEMSLOTUNLOCKEDATROUND_OFFSET))(this, a1);
		}
	};
}
