#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingGameBoy/ChenLingGameBoyPlayerRankingType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingGameBoyRankingsNPCRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x93570D0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_GET_FINISHEDTIME_OFFSET UNITYSDK_OFFSET(0x9357340)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x93571E0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9357320)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9357200)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_GET_PLAYERTYPE_OFFSET UNITYSDK_OFFSET(0x9357360)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x9357290)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9357180)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO__INIT_OFFSET UNITYSDK_OFFSET(0x9357190)

namespace RPG::Client::ChenLingGameBoy
{
	inline static constexpr unsigned int ChenLingGameBoyNPCRankingInfo_TypeDefinitionIndex = 61513;

	class ChenLingGameBoyNPCRankingInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingGameBoyRankingsNPCRow* _Meta; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyNPCRankingInfo* Create(::RPG::GameCore::ChenLingGameBoyRankingsNPCRow* row)
		{
			return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyNPCRankingInfo*(*)(::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_CREATE_OFFSET))(row);
		}

		::System::Void _Init(::RPG::GameCore::ChenLingGameBoyRankingsNPCRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO__INIT_OFFSET))(this, row);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_GET_ID_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Signature()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_GET_SIGNATURE_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::UInt64 get_FinishedTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_GET_FINISHEDTIME_OFFSET))(this);
		}

		::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPlayerRankingType get_PlayerType()
		{
			return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPlayerRankingType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_GET_PLAYERTYPE_OFFSET))(this);
		}
	};
}
