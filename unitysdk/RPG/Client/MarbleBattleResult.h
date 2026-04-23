#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MarbleBall; }
namespace RPG::Client::ActivityMarble { class MarbleMatchContext; }
namespace RPG::Client::ActivityMarble { class MarblePVPRankInfo; }
namespace RPG::GameCore { class MarbleMatchTitleRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MARBLEBATTLERESULT_CREATE_OFFSET UNITYSDK_OFFSET(0xA8119A0)
#define RPG_CLIENT_MARBLEBATTLERESULT_GET_CURRANKINFO_OFFSET UNITYSDK_OFFSET(0xA8124E0)
#define RPG_CLIENT_MARBLEBATTLERESULT_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xA812440)
#define RPG_CLIENT_MARBLEBATTLERESULT_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xA8124A0)
#define RPG_CLIENT_MARBLEBATTLERESULT_GET_LASTRANKINFO_OFFSET UNITYSDK_OFFSET(0xA8124C0)
#define RPG_CLIENT_MARBLEBATTLERESULT_GET_MATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0xA812500)
#define RPG_CLIENT_MARBLEBATTLERESULT_SET_CURRANKINFO_OFFSET UNITYSDK_OFFSET(0xA8124F0)
#define RPG_CLIENT_MARBLEBATTLERESULT_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xA8124B0)
#define RPG_CLIENT_MARBLEBATTLERESULT_SET_LASTRANKINFO_OFFSET UNITYSDK_OFFSET(0xA8124D0)
#define RPG_CLIENT_MARBLEBATTLERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xA812070)
#define RPG_CLIENT_MARBLEBATTLERESULT__REFRESHRANKRESULTINFO_OFFSET UNITYSDK_OFFSET(0xA812240)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleResult_TypeDefinitionIndex = 60594;

	class MarbleBattleResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* SubSealIDs; // 0x10
		::RPG::Client::ActivityMarble::MarblePVPRankInfo* _LastRankInfo_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* TitleParams; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::MarbleMatchTitleRow*>* Titles; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MarbleBall*>* Balls; // 0x30
		::RPG::Client::ActivityMarble::MarblePVPRankInfo* _CurRankInfo_k__BackingField; // 0x38
		::System::Boolean _IsWin_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MarbleBattleResult* Create(::System::Boolean isWin, ::System::UInt32 currentScore, ::System::Int32 addScore, ::System::Collections::Generic::IList_1<::System::UInt32>* sealIds, ::System::Collections::Generic::IList_1<::System::UInt32>* titleIds, ::System::Collections::Generic::IList_1<::System::Int32>* titleParams, ::System::Collections::Generic::IList_1<::System::UInt32>* subSealIds)
		{
			return ((::RPG::Client::MarbleBattleResult*(*)(::System::Boolean, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT_CREATE_OFFSET))(isWin, currentScore, addScore, sealIds, titleIds, titleParams, subSealIds);
		}

		::System::Void _RefreshRankResultInfo(::System::UInt32 oldScore, ::System::Int32 addedScore)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT__REFRESHRANKRESULTINFO_OFFSET))(this, oldScore, addedScore);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT_SET_ISWIN_OFFSET))(this, value);
		}

		::RPG::Client::ActivityMarble::MarblePVPRankInfo* get_LastRankInfo()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPRankInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT_GET_LASTRANKINFO_OFFSET))(this);
		}

		::System::Void set_LastRankInfo(::RPG::Client::ActivityMarble::MarblePVPRankInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPRankInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT_SET_LASTRANKINFO_OFFSET))(this, value);
		}

		::RPG::Client::ActivityMarble::MarblePVPRankInfo* get_CurRankInfo()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPRankInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT_GET_CURRANKINFO_OFFSET))(this);
		}

		::System::Void set_CurRankInfo(::RPG::Client::ActivityMarble::MarblePVPRankInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPRankInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT_SET_CURRANKINFO_OFFSET))(this, value);
		}

		::RPG::Client::ActivityMarble::MarbleMatchContext* get_MatchContext()
		{
			return ((::RPG::Client::ActivityMarble::MarbleMatchContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT_GET_MATCHCONTEXT_OFFSET))(this);
		}

		::Enum_3_A35B38E5F9115A76_2 get_GameMode()
		{
			return ((::Enum_3_A35B38E5F9115A76_2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT_GET_GAMEMODE_OFFSET))(this);
		}
	};
}
