#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleEliminationPlayerInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9C02840)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO_GETPLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x9C022C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO_GETPLAYERINFOLIST_OFFSET UNITYSDK_OFFSET(0x9C02800)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO_INITPLAYERFROM_OFFSET UNITYSDK_OFFSET(0x9C01B10)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9C01920)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO__CHECKISWIN_OFFSET UNITYSDK_OFFSET(0x9C02670)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9C01910)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleEliminationRoundInfo_TypeDefinitionIndex = 68940;

	class MarbleEliminationRoundInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleEliminationPlayerInfo*>* PlayerInfoList; // 0x10
		::System::UInt32 Round; // 0x18

		::System::Void _ctor(::System::UInt32 round)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO__CTOR_OFFSET))(this, round);
		}

		::System::Void Init(::Il2CppArray<::System::UInt32>* npcList, ::Il2CppArray<::System::UInt32>* winnerList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO_INIT_OFFSET))(this, npcList, winnerList);
		}

		::System::Void InitPlayerFrom(::RPG::Client::ActivityMarble::MarbleEliminationRoundInfo* lastRoundInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleEliminationRoundInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO_INITPLAYERFROM_OFFSET))(this, lastRoundInfo);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleEliminationPlayerInfo*>* GetPlayerInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleEliminationPlayerInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO_GETPLAYERINFOLIST_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::ActivityMarble::MarbleEliminationRoundInfo* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleEliminationRoundInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO_COMPARETO_OFFSET))(this, other);
		}

		::System::Int32 GetPlayerIndex(::System::UInt32 playerID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO_GETPLAYERINDEX_OFFSET))(this, playerID);
		}

		::System::Boolean _CheckIsWin(::System::UInt32 playerID, ::Il2CppArray<::System::UInt32>* winnerList)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO__CHECKISWIN_OFFSET))(this, playerID, winnerList);
		}
	};
}
