#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingGameBoy/ChenLingGameBoyPlayerRankingType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChenLingGameBoyRankingsNPCRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xB639EE0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_GET_FINISHEDTIME_OFFSET UNITYSDK_OFFSET(0xB63A150)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0xB639FF0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xB63A130)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB63A010)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_GET_PLAYERTYPE_OFFSET UNITYSDK_OFFSET(0xB63A170)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0xB63A0A0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB639F90)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO__INIT_OFFSET UNITYSDK_OFFSET(0xB639FA0)

namespace RPG::Client::ChenLingGameBoy
{
	inline static constexpr unsigned int ChenLingGameBoyNPCRankingInfo_TypeDefinitionIndex = 69832;

	class ChenLingGameBoyNPCRankingInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingGameBoyRankingsNPCRow* _Meta; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyNPCRankingInfo* Create(::RPG::GameCore::ChenLingGameBoyRankingsNPCRow* a1)
		{
			return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyNPCRankingInfo*(*)(::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO_CREATE_OFFSET))(a1);
		}

		::System::Void _Init(::RPG::GameCore::ChenLingGameBoyRankingsNPCRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYNPCRANKINGINFO__INIT_OFFSET))(this, a1);
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
