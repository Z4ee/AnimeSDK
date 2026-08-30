#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MarbleBall; }
namespace RPG::Client::ActivityMarble { class MarbleMatchContext; }
namespace RPG::Client::ActivityMarble { class MarblePVPRankInfo; }
namespace RPG::GameCore { class MarbleMatchTitleRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MARBLEBATTLERESULT_CREATE_OFFSET UNITYSDK_OFFSET(0xD618790)
#define RPG_CLIENT_MARBLEBATTLERESULT_GET_CURRANKINFO_OFFSET UNITYSDK_OFFSET(0xD619680)
#define RPG_CLIENT_MARBLEBATTLERESULT_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xD6195E0)
#define RPG_CLIENT_MARBLEBATTLERESULT_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xD619640)
#define RPG_CLIENT_MARBLEBATTLERESULT_GET_LASTRANKINFO_OFFSET UNITYSDK_OFFSET(0xD619660)
#define RPG_CLIENT_MARBLEBATTLERESULT_GET_MATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0xD6196A0)
#define RPG_CLIENT_MARBLEBATTLERESULT_SET_CURRANKINFO_OFFSET UNITYSDK_OFFSET(0xD619690)
#define RPG_CLIENT_MARBLEBATTLERESULT_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xD619650)
#define RPG_CLIENT_MARBLEBATTLERESULT_SET_LASTRANKINFO_OFFSET UNITYSDK_OFFSET(0xD619670)
#define RPG_CLIENT_MARBLEBATTLERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xD619200)
#define RPG_CLIENT_MARBLEBATTLERESULT__REFRESHRANKRESULTINFO_OFFSET UNITYSDK_OFFSET(0xD6193E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleResult_TypeDefinitionIndex = 65875;

	class MarbleBattleResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* TitleParams; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* SubSealIDs; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::MarbleMatchTitleRow*>* Titles; // 0x20
		::RPG::Client::ActivityMarble::MarblePVPRankInfo* _CurRankInfo_k__BackingField; // 0x28
		::RPG::Client::ActivityMarble::MarblePVPRankInfo* _LastRankInfo_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::MarbleBall*>* Balls; // 0x38
		::System::Boolean _IsWin_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MarbleBattleResult* Create(::System::Boolean a1, ::System::UInt32 a2, ::System::Int32 a3, ::System::Collections::Generic::IList_1<::System::UInt32>* a4, ::System::Collections::Generic::IList_1<::System::UInt32>* a5, ::System::Collections::Generic::IList_1<::System::Int32>* a6, ::System::Collections::Generic::IList_1<::System::UInt32>* a7)
		{
			return ((::RPG::Client::MarbleBattleResult*(*)(::System::Boolean, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _RefreshRankResultInfo(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT__REFRESHRANKRESULTINFO_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT_SET_ISWIN_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::MarblePVPRankInfo* get_LastRankInfo()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPRankInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT_GET_LASTRANKINFO_OFFSET))(this);
		}

		::System::Void set_LastRankInfo(::RPG::Client::ActivityMarble::MarblePVPRankInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPRankInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT_SET_LASTRANKINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::MarblePVPRankInfo* get_CurRankInfo()
		{
			return ((::RPG::Client::ActivityMarble::MarblePVPRankInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT_GET_CURRANKINFO_OFFSET))(this);
		}

		::System::Void set_CurRankInfo(::RPG::Client::ActivityMarble::MarblePVPRankInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePVPRankInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT_SET_CURRANKINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityMarble::MarbleMatchContext* get_MatchContext()
		{
			return ((::RPG::Client::ActivityMarble::MarbleMatchContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT_GET_MATCHCONTEXT_OFFSET))(this);
		}

		::Enum_3_01618AD0437C8486_2 get_GameMode()
		{
			return ((::Enum_3_01618AD0437C8486_2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT_GET_GAMEMODE_OFFSET))(this);
		}
	};
}
