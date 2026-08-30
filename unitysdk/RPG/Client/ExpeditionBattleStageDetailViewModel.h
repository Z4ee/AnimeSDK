#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_65EC9CACFF41765E;
class Class_1_9EE357109ED696DE;
class Class_1_C350877AE912EE6F;
namespace RPG::Client { class ExpeditionBattleMapItemViewModel; }
namespace RPG::Client { class ExpeditionBattleRouteRecordViewModel; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xCF034E0)
#define RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_GET_ALLMAPITEMS_OFFSET UNITYSDK_OFFSET(0xCF03410)
#define RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_GET_CURRENTINDEX_OFFSET UNITYSDK_OFFSET(0xCF034A0)
#define RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_GET_CURRENTMAPITEMVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCF033D0)
#define RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_GET_CURRENTROUTERECORDS_OFFSET UNITYSDK_OFFSET(0xCF033F0)
#define RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_GET_MAPCOUNT_OFFSET UNITYSDK_OFFSET(0xCF03450)
#define RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_ISSELECTEDFIRSTITEM_OFFSET UNITYSDK_OFFSET(0xCF03A60)
#define RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_ISSELECTEDLASTITEM_OFFSET UNITYSDK_OFFSET(0xCF03AB0)
#define RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_SELECTBYMAPID_OFFSET UNITYSDK_OFFSET(0xCF03910)
#define RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_SELECTNEXT_OFFSET UNITYSDK_OFFSET(0xCF039F0)
#define RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_SELECTPREV_OFFSET UNITYSDK_OFFSET(0xCF03980)
#define RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_SET_CURRENTMAPITEMVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCF033E0)
#define RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_SET_CURRENTROUTERECORDS_OFFSET UNITYSDK_OFFSET(0xCF03400)
#define RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCF03690)
#define RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL__GETINDEXBYMAPID_OFFSET UNITYSDK_OFFSET(0xCF036D0)
#define RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL__UPDATECURRENTSELECTION_OFFSET UNITYSDK_OFFSET(0xCF037E0)
#define RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL__UPDATEROUTERECORDS_OFFSET UNITYSDK_OFFSET(0xCF03B10)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleStageDetailViewModel_TypeDefinitionIndex = 64017;

	class ExpeditionBattleStageDetailViewModel : public ::System::Object
	{
	public:
		::RPG::Client::ExpeditionBattleMapItemViewModel* _CurrentMapItemViewModel_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleMapItemViewModel*>* _ItemDict; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleMapItemViewModel*>* _ItemList; // 0x20
		::Class_1_65EC9CACFF41765E* _MapService; // 0x28
		::Class_1_C350877AE912EE6F* _MonsterService; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRouteRecordViewModel*>* _CurrentRouteRecords_k__BackingField; // 0x38
		::Class_1_9EE357109ED696DE* _ViewModelFactory; // 0x40
		::System::Int32 _InitIndex; // 0x48
		::System::Int32 _CurrentIndex; // 0x4C

		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleMapItemViewModel*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleMapItemViewModel*>* a2, ::System::UInt32 a3, ::Class_1_65EC9CACFF41765E* a4, ::Class_1_C350877AE912EE6F* a5, ::Class_1_9EE357109ED696DE* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleMapItemViewModel*>*, ::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleMapItemViewModel*>*, ::System::UInt32, ::Class_1_65EC9CACFF41765E*, ::Class_1_C350877AE912EE6F*, ::Class_1_9EE357109ED696DE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::ExpeditionBattleMapItemViewModel* get_CurrentMapItemViewModel()
		{
			return ((::RPG::Client::ExpeditionBattleMapItemViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_GET_CURRENTMAPITEMVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_CurrentMapItemViewModel(::RPG::Client::ExpeditionBattleMapItemViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ExpeditionBattleMapItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_SET_CURRENTMAPITEMVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRouteRecordViewModel*>* get_CurrentRouteRecords()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRouteRecordViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_GET_CURRENTROUTERECORDS_OFFSET))(this);
		}

		::System::Void set_CurrentRouteRecords(::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRouteRecordViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleRouteRecordViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_SET_CURRENTROUTERECORDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleMapItemViewModel*>* get_AllMapItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleMapItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_GET_ALLMAPITEMS_OFFSET))(this);
		}

		::System::Int32 get_MapCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_GET_MAPCOUNT_OFFSET))(this);
		}

		::System::Int32 get_CurrentIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_GET_CURRENTINDEX_OFFSET))(this);
		}

		static ::RPG::Client::ExpeditionBattleStageDetailViewModel* Create(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleMapItemViewModel*>* a1, ::System::UInt32 a2, ::Class_1_65EC9CACFF41765E* a3, ::Class_1_C350877AE912EE6F* a4, ::Class_1_9EE357109ED696DE* a5)
		{
			return ((::RPG::Client::ExpeditionBattleStageDetailViewModel*(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleMapItemViewModel*>*, ::System::UInt32, ::Class_1_65EC9CACFF41765E*, ::Class_1_C350877AE912EE6F*, ::Class_1_9EE357109ED696DE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Int32 _GetIndexByMapID(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL__GETINDEXBYMAPID_OFFSET))(this, a1);
		}

		::System::Void SelectByMapID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_SELECTBYMAPID_OFFSET))(this, a1);
		}

		::System::Void SelectPrev()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_SELECTPREV_OFFSET))(this);
		}

		::System::Void SelectNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_SELECTNEXT_OFFSET))(this);
		}

		::System::Boolean IsSelectedFirstItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_ISSELECTEDFIRSTITEM_OFFSET))(this);
		}

		::System::Boolean IsSelectedLastItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL_ISSELECTEDLASTITEM_OFFSET))(this);
		}

		::System::Void _UpdateCurrentSelection(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL__UPDATECURRENTSELECTION_OFFSET))(this, a1);
		}

		::System::Void _UpdateRouteRecords()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLESTAGEDETAILVIEWMODEL__UPDATEROUTERECORDS_OFFSET))(this);
		}
	};
}
