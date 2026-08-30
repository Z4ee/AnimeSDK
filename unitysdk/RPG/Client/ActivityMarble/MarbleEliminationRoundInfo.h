#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleEliminationPlayerInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO_COMPARETO_OFFSET UNITYSDK_OFFSET(0xC623040)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO_GETPLAYERINDEX_OFFSET UNITYSDK_OFFSET(0xC622A90)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO_GETPLAYERINFOLIST_OFFSET UNITYSDK_OFFSET(0xC623000)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO_INITPLAYERFROM_OFFSET UNITYSDK_OFFSET(0xC622330)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO_INIT_OFFSET UNITYSDK_OFFSET(0xC622090)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO__CHECKISWIN_OFFSET UNITYSDK_OFFSET(0xC622E80)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xC622080)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleEliminationRoundInfo_TypeDefinitionIndex = 74582;

	class MarbleEliminationRoundInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleEliminationPlayerInfo*>* PlayerInfoList; // 0x10
		::System::UInt32 Round; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void Init(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void InitPlayerFrom(::RPG::Client::ActivityMarble::MarbleEliminationRoundInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleEliminationRoundInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO_INITPLAYERFROM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleEliminationPlayerInfo*>* GetPlayerInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleEliminationPlayerInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO_GETPLAYERINFOLIST_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::ActivityMarble::MarbleEliminationRoundInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleEliminationRoundInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 GetPlayerIndex(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO_GETPLAYERINDEX_OFFSET))(this, a1);
		}

		::System::Boolean _CheckIsWin(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEELIMINATIONROUNDINFO__CHECKISWIN_OFFSET))(this, a1, a2);
		}
	};
}
