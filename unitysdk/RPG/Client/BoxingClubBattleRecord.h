#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2752BA61657CA7F7_1;
class Class_1_64B7A5556C27C456;
namespace RPG::GameCore { class BoxingClubStageGroupConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_CURRENTSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x1A108EF0)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_CURRENTSTAGE_OFFSET UNITYSDK_OFFSET(0x1A108ED0)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_ISBATTLING_OFFSET UNITYSDK_OFFSET(0x1A108EB0)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_SELECTEDBUFFLIST_OFFSET UNITYSDK_OFFSET(0x1A108F10)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_STAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A108C60)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_ISFINALROUND_OFFSET UNITYSDK_OFFSET(0x1A108E40)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_SETINBATTLE_OFFSET UNITYSDK_OFFSET(0x1A108CB0)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_SET_CURRENTSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x1A108F00)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_SET_CURRENTSTAGE_OFFSET UNITYSDK_OFFSET(0x1A108EE0)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_SET_ISBATTLING_OFFSET UNITYSDK_OFFSET(0x1A108EC0)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_TRYUPDATEINFOBYNOTIFY_OFFSET UNITYSDK_OFFSET(0x1A108D90)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_UPDATEDATABYNETPACKET_OFFSET UNITYSDK_OFFSET(0x1A108710)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD_UPDATESTAGEINDEX_OFFSET UNITYSDK_OFFSET(0x1A108D00)
#define RPG_CLIENT_BOXINGCLUBBATTLERECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1085B0)

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubBattleRecord_TypeDefinitionIndex = 63021;

	class BoxingClubBattleRecord : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectedBuffList; // 0x10
		::RPG::GameCore::BoxingClubStageGroupConfigRow* Row; // 0x18
		::System::UInt32 _CurrentStageIndex_k__BackingField; // 0x20
		::System::Boolean IsBattleWin; // 0x24
		::System::Boolean _IsBattling_k__BackingField; // 0x25
		::System::UInt32 _CurrentStage_k__BackingField; // 0x28
		::System::UInt32 CurrentRoundNum; // 0x2C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD__CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateDataByNetPacket(::Class_1_64B7A5556C27C456* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_64B7A5556C27C456*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_UPDATEDATABYNETPACKET_OFFSET))(this, a1);
		}

		::System::Void SetInBattle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_SETINBATTLE_OFFSET))(this, a1);
		}

		::System::Void UpdateStageIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_UPDATESTAGEINDEX_OFFSET))(this);
		}

		::System::Void TryUpdateInfoByNotify(::Class_1_2752BA61657CA7F7_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2752BA61657CA7F7_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_TRYUPDATEINFOBYNOTIFY_OFFSET))(this, a1);
		}

		::System::Boolean IsFinalRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_ISFINALROUND_OFFSET))(this);
		}

		::System::Boolean get_IsBattling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_ISBATTLING_OFFSET))(this);
		}

		::System::Void set_IsBattling(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_SET_ISBATTLING_OFFSET))(this, a1);
		}

		::System::UInt32 get_StageGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_STAGEGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_CurrentStage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_CURRENTSTAGE_OFFSET))(this);
		}

		::System::Void set_CurrentStage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_SET_CURRENTSTAGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentStageIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_CURRENTSTAGEINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentStageIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_SET_CURRENTSTAGEINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectedBuffList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBBATTLERECORD_GET_SELECTEDBUFFLIST_OFFSET))(this);
		}
	};
}
