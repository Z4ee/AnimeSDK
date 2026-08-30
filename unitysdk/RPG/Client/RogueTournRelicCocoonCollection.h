#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournRelicCocoonCollection_RogueTournRelicCocoonBattleData; }
namespace RPG::Client { class RogueTournRelicCocoonData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_CHECKISDIFFICULTYUNLOCK_OFFSET UNITYSDK_OFFSET(0x1C7B4890)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_CLEARBATTLECOCOONDATA_OFFSET UNITYSDK_OFFSET(0x1C7B5080)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C7B4070)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GETALLCOCOONDATALIST_OFFSET UNITYSDK_OFFSET(0x1C7B4B50)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GETCOCOONDATABYID_OFFSET UNITYSDK_OFFSET(0x1C7B4F50)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GETCOCOONDATALISTBYDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1C7B47F0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GETDIFFICULTYLIST_OFFSET UNITYSDK_OFFSET(0x1C7B4110)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GETROGUETOURNRELICCOCOONNEWDIFFICULTYLIST_OFFSET UNITYSDK_OFFSET(0x1C7B5670)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GETROGUETOURNRELICCOCOONNEWIDLIST_OFFSET UNITYSDK_OFFSET(0x1C7B57C0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GET_BATTLECOCOONDATA_OFFSET UNITYSDK_OFFSET(0x1C7B5E00)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GET_ISINCOCOON_OFFSET UNITYSDK_OFFSET(0x1C7B5DB0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_INIT_OFFSET UNITYSDK_OFFSET(0x1C7B4030)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_ISCURDIFFICULTYNEW_OFFSET UNITYSDK_OFFSET(0x1C7B5350)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_ISDIFFICULTYNEEDUNLOCK_OFFSET UNITYSDK_OFFSET(0x1C7B50E0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_SETBATTLECOCOONDATA_OFFSET UNITYSDK_OFFSET(0x1C7B4DC0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_SETCURDIFFICULTYCOCOONSEEN_OFFSET UNITYSDK_OFFSET(0x1C7B5130)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_SETDIFFICULTYSEEN_OFFSET UNITYSDK_OFFSET(0x1C7B54C0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_SET_BATTLECOCOONDATA_OFFSET UNITYSDK_OFFSET(0x1C7B5E10)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION__CHECKISCOCOONDATAAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1C7B5C10)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7B4020)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION__GENERATECOCOONDATADICT_OFFSET UNITYSDK_OFFSET(0x1C7B42A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournRelicCocoonCollection_TypeDefinitionIndex = 67763;

	class RogueTournRelicCocoonCollection : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournRelicCocoonCollection_RogueTournRelicCocoonBattleData* _BattleCocoonData_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RogueTournRelicCocoonData*>*>* _CocoonDataDict; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetDifficultyList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GETDIFFICULTYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournRelicCocoonData*>* GetCocoonDataListByDifficulty(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournRelicCocoonData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GETCOCOONDATALISTBYDIFFICULTY_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsDifficultyUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_CHECKISDIFFICULTYUNLOCK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournRelicCocoonData*>* GetAllCocoonDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournRelicCocoonData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GETALLCOCOONDATALIST_OFFSET))(this);
		}

		::System::Void SetBattleCocoonData(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_SETBATTLECOCOONDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ClearBattleCocoonData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_CLEARBATTLECOCOONDATA_OFFSET))(this);
		}

		::RPG::Client::RogueTournRelicCocoonData* GetCocoonDataByID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::RogueTournRelicCocoonData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GETCOCOONDATABYID_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsDifficultyNeedUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_ISDIFFICULTYNEEDUNLOCK_OFFSET))(this, a1);
		}

		::System::Void SetCurDifficultyCocoonSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_SETCURDIFFICULTYCOCOONSEEN_OFFSET))(this, a1);
		}

		::System::Boolean IsCurDifficultyNew(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_ISCURDIFFICULTYNEW_OFFSET))(this, a1);
		}

		::System::Void SetDifficultySeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_SETDIFFICULTYSEEN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRogueTournRelicCocoonNewDifficultyList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GETROGUETOURNRELICCOCOONNEWDIFFICULTYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRogueTournRelicCocoonNewIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GETROGUETOURNRELICCOCOONNEWIDLIST_OFFSET))(this);
		}

		::System::Void _GenerateCocoonDataDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION__GENERATECOCOONDATADICT_OFFSET))(this);
		}

		::System::Boolean _CheckIsCocoonDataAvailable(::RPG::Client::RogueTournRelicCocoonData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournRelicCocoonData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION__CHECKISCOCOONDATAAVAILABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInCocoon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GET_ISINCOCOON_OFFSET))(this);
		}

		::RPG::Client::RogueTournRelicCocoonCollection_RogueTournRelicCocoonBattleData* get_BattleCocoonData()
		{
			return ((::RPG::Client::RogueTournRelicCocoonCollection_RogueTournRelicCocoonBattleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GET_BATTLECOCOONDATA_OFFSET))(this);
		}

		::System::Void set_BattleCocoonData(::RPG::Client::RogueTournRelicCocoonCollection_RogueTournRelicCocoonBattleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournRelicCocoonCollection_RogueTournRelicCocoonBattleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_SET_BATTLECOCOONDATA_OFFSET))(this, a1);
		}
	};
}
