#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournRelicCocoonCollection_RogueTournRelicCocoonBattleData; }
namespace RPG::Client { class RogueTournRelicCocoonData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_CHECKISDIFFICULTYUNLOCK_OFFSET UNITYSDK_OFFSET(0xA3CBE30)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_CLEARBATTLECOCOONDATA_OFFSET UNITYSDK_OFFSET(0xA3CC5C0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3CB6A0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GETALLCOCOONDATALIST_OFFSET UNITYSDK_OFFSET(0xA3CC020)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GETCOCOONDATABYID_OFFSET UNITYSDK_OFFSET(0xA3CC470)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GETCOCOONDATALISTBYDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA3CBD60)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GETDIFFICULTYLIST_OFFSET UNITYSDK_OFFSET(0xA3CB750)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GETROGUETOURNRELICCOCOONNEWDIFFICULTYLIST_OFFSET UNITYSDK_OFFSET(0xA3CCBB0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GETROGUETOURNRELICCOCOONNEWIDLIST_OFFSET UNITYSDK_OFFSET(0xA3CCCB0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GET_BATTLECOCOONDATA_OFFSET UNITYSDK_OFFSET(0xA3CD260)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GET_ISINCOCOON_OFFSET UNITYSDK_OFFSET(0xA3CD250)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_INIT_OFFSET UNITYSDK_OFFSET(0xA3CB660)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_ISCURDIFFICULTYNEW_OFFSET UNITYSDK_OFFSET(0xA3CC890)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_ISDIFFICULTYNEEDUNLOCK_OFFSET UNITYSDK_OFFSET(0xA3CC620)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_SETBATTLECOCOONDATA_OFFSET UNITYSDK_OFFSET(0xA3CC320)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_SETCURDIFFICULTYCOCOONSEEN_OFFSET UNITYSDK_OFFSET(0xA3CC670)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_SETDIFFICULTYSEEN_OFFSET UNITYSDK_OFFSET(0xA3CCA00)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_SET_BATTLECOCOONDATA_OFFSET UNITYSDK_OFFSET(0xA3CD270)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION__CHECKISCOCOONDATAAVAILABLE_OFFSET UNITYSDK_OFFSET(0xA3CD0C0)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA3CB650)
#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION__GENERATECOCOONDATADICT_OFFSET UNITYSDK_OFFSET(0xA3CB8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournRelicCocoonCollection_TypeDefinitionIndex = 55270;

	class RogueTournRelicCocoonCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RogueTournRelicCocoonData*>*>* _CocoonDataDict; // 0x10
		::RPG::Client::RogueTournRelicCocoonCollection_RogueTournRelicCocoonBattleData* _BattleCocoonData_k__BackingField; // 0x18

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

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournRelicCocoonData*>* GetCocoonDataListByDifficulty(::System::UInt32 difficulty)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournRelicCocoonData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GETCOCOONDATALISTBYDIFFICULTY_OFFSET))(this, difficulty);
		}

		::System::Boolean CheckIsDifficultyUnlock(::System::UInt32 difficulty)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_CHECKISDIFFICULTYUNLOCK_OFFSET))(this, difficulty);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournRelicCocoonData*>* GetAllCocoonDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournRelicCocoonData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GETALLCOCOONDATALIST_OFFSET))(this);
		}

		::System::Void SetBattleCocoonData(::System::UInt32 cocoonId, ::System::UInt32 difficulty, ::System::UInt32 slotIndex, ::System::UInt32 challengeCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_SETBATTLECOCOONDATA_OFFSET))(this, cocoonId, difficulty, slotIndex, challengeCount);
		}

		::System::Void ClearBattleCocoonData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_CLEARBATTLECOCOONDATA_OFFSET))(this);
		}

		::RPG::Client::RogueTournRelicCocoonData* GetCocoonDataByID(::System::UInt32 cocoonId, ::System::UInt32 difficulty)
		{
			return ((::RPG::Client::RogueTournRelicCocoonData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GETCOCOONDATABYID_OFFSET))(this, cocoonId, difficulty);
		}

		::System::Boolean IsDifficultyNeedUnlock(::System::UInt32 difficulty)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_ISDIFFICULTYNEEDUNLOCK_OFFSET))(this, difficulty);
		}

		::System::Void SetCurDifficultyCocoonSeen(::System::UInt32 difficulty)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_SETCURDIFFICULTYCOCOONSEEN_OFFSET))(this, difficulty);
		}

		::System::Boolean IsCurDifficultyNew(::System::UInt32 difficulty)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_ISCURDIFFICULTYNEW_OFFSET))(this, difficulty);
		}

		::System::Void SetDifficultySeen(::System::UInt32 difficulty)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_SETDIFFICULTYSEEN_OFFSET))(this, difficulty);
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

		::System::Boolean _CheckIsCocoonDataAvailable(::RPG::Client::RogueTournRelicCocoonData* cocoonData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournRelicCocoonData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION__CHECKISCOCOONDATAAVAILABLE_OFFSET))(this, cocoonData);
		}

		::System::Boolean get_IsInCocoon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GET_ISINCOCOON_OFFSET))(this);
		}

		::RPG::Client::RogueTournRelicCocoonCollection_RogueTournRelicCocoonBattleData* get_BattleCocoonData()
		{
			return ((::RPG::Client::RogueTournRelicCocoonCollection_RogueTournRelicCocoonBattleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_GET_BATTLECOCOONDATA_OFFSET))(this);
		}

		::System::Void set_BattleCocoonData(::RPG::Client::RogueTournRelicCocoonCollection_RogueTournRelicCocoonBattleData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournRelicCocoonCollection_RogueTournRelicCocoonBattleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_SET_BATTLECOCOONDATA_OFFSET))(this, value);
		}
	};
}
