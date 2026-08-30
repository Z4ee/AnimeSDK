#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_65EC9CACFF41765E;
class Class_1_9EE357109ED696DE;
namespace RPG::Client { class ExpeditionBattleMapItemViewModel; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EXPEDITIONBATTLEMAPOVERVIEWVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B8907F0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPOVERVIEWVIEWMODEL_GETITEM_OFFSET UNITYSDK_OFFSET(0x1B890740)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPOVERVIEWVIEWMODEL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1B890570)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPOVERVIEWVIEWMODEL_GET_MAPIDS_OFFSET UNITYSDK_OFFSET(0x1B890560)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPOVERVIEWVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8905C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleMapOverviewViewModel_TypeDefinitionIndex = 64007;

	class ExpeditionBattleMapOverviewViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleMapItemViewModel*>* _Items; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _MapIDs_k__BackingField; // 0x18

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleMapItemViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleMapItemViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPOVERVIEWVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_MapIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPOVERVIEWVIEWMODEL_GET_MAPIDS_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPOVERVIEWVIEWMODEL_GET_COUNT_OFFSET))(this);
		}

		::RPG::Client::ExpeditionBattleMapItemViewModel* GetItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::ExpeditionBattleMapItemViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPOVERVIEWVIEWMODEL_GETITEM_OFFSET))(this, a1);
		}

		static ::RPG::Client::ExpeditionBattleMapOverviewViewModel* Create(::Class_1_65EC9CACFF41765E* a1, ::Class_1_9EE357109ED696DE* a2)
		{
			return ((::RPG::Client::ExpeditionBattleMapOverviewViewModel*(*)(::Class_1_65EC9CACFF41765E*, ::Class_1_9EE357109ED696DE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPOVERVIEWVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}
	};
}
