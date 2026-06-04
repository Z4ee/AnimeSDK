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

#define RPG_CLIENT_MARBLEBATTLERESULT_CREATE_OFFSET UNITYSDK_OFFSET(0xBEF9B20)
#define RPG_CLIENT_MARBLEBATTLERESULT_GET_CURRANKINFO_OFFSET UNITYSDK_OFFSET(0xBEFA780)
#define RPG_CLIENT_MARBLEBATTLERESULT_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xBEFA6E0)
#define RPG_CLIENT_MARBLEBATTLERESULT_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xBEFA740)
#define RPG_CLIENT_MARBLEBATTLERESULT_GET_LASTRANKINFO_OFFSET UNITYSDK_OFFSET(0xBEFA760)
#define RPG_CLIENT_MARBLEBATTLERESULT_GET_MATCHCONTEXT_OFFSET UNITYSDK_OFFSET(0xBEFA7A0)
#define RPG_CLIENT_MARBLEBATTLERESULT_SET_CURRANKINFO_OFFSET UNITYSDK_OFFSET(0xBEFA790)
#define RPG_CLIENT_MARBLEBATTLERESULT_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xBEFA750)
#define RPG_CLIENT_MARBLEBATTLERESULT_SET_LASTRANKINFO_OFFSET UNITYSDK_OFFSET(0xBEFA770)
#define RPG_CLIENT_MARBLEBATTLERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xBEFA310)
#define RPG_CLIENT_MARBLEBATTLERESULT__REFRESHRANKRESULTINFO_OFFSET UNITYSDK_OFFSET(0xBEFA4E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleResult_TypeDefinitionIndex = 61528;

	class MarbleBattleResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* SubSealIDs; // 0x10
		::RPG::Client::ActivityMarble::MarblePVPRankInfo* _CurRankInfo_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MarbleBall*>* Balls; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* TitleParams; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::MarbleMatchTitleRow*>* Titles; // 0x30
		::RPG::Client::ActivityMarble::MarblePVPRankInfo* _LastRankInfo_k__BackingField; // 0x38
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

		::Enum_3_A35B38E5F9115A76_2 get_GameMode()
		{
			return ((::Enum_3_A35B38E5F9115A76_2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLERESULT_GET_GAMEMODE_OFFSET))(this);
		}
	};
}
