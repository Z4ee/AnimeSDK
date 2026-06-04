#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightHandBookItemStatus.h"
#include "unitysdk/RPG/GameCore/GridFightHandBookType.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_47;
class Class_1_075C34D03AFA1215_48;
class Class_1_075C34D03AFA1215_49;
class Class_1_45BB92167AED63A0_37;
class Class_1_45BB92167AED63A0_38;
class Class_1_4B52859374487DA3;
class Class_1_90858071AA2DCF84;
namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightConsumableItemConfig; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightHandbookRole; }
namespace RPG::Client { class GridFightItemConfig; }
namespace RPG::Client { class GridFightMonsterCampConfig; }
namespace RPG::Client { class GridFightPortalData; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_1_OFFSET UNITYSDK_OFFSET(0xBB96C70)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_2_OFFSET UNITYSDK_OFFSET(0xBB96E30)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_3_OFFSET UNITYSDK_OFFSET(0xBB96EB0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_4_OFFSET UNITYSDK_OFFSET(0xBB96F10)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_5_OFFSET UNITYSDK_OFFSET(0xBB96F70)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_6_OFFSET UNITYSDK_OFFSET(0xBB96FE0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_7_OFFSET UNITYSDK_OFFSET(0xBB97050)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_8_OFFSET UNITYSDK_OFFSET(0xBB96B90)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_OFFSET UNITYSDK_OFFSET(0xBB96B10)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETCOLLECTEDPROGRESS_OFFSET UNITYSDK_OFFSET(0xBB97720)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETCOMPLETEDITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xBB970D0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETSEENITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xBB976B0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETTOTALITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xBB97D20)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_SYNC_1_OFFSET UNITYSDK_OFFSET(0xBB96240)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_SYNC_OFFSET UNITYSDK_OFFSET(0xBB95D60)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0xBB98780)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETCOMPLETEDITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xBB97120)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0xBB98270)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETPORTALCOUNT_OFFSET UNITYSDK_OFFSET(0xBB98430)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETROLECOUNT_OFFSET UNITYSDK_OFFSET(0xBB98090)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEAUGMENT_OFFSET UNITYSDK_OFFSET(0xBB96140)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEEQUIP_OFFSET UNITYSDK_OFFSET(0xBB961B0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEHANDBOOKDATA_OFFSET UNITYSDK_OFFSET(0xBB96470)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEMONSTER_OFFSET UNITYSDK_OFFSET(0xBB96060)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEPORTAL_OFFSET UNITYSDK_OFFSET(0xBB960D0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEROLE_OFFSET UNITYSDK_OFFSET(0xBB95FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightHandBookStatus_TypeDefinitionIndex = 60680;

	class GridFightHandBookStatus : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightHandBookType, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* _CompletedItems; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightHandBookType, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* _SeenItems; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_4B52859374487DA3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4B52859374487DA3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_SYNC_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::Class_1_90858071AA2DCF84* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90858071AA2DCF84*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_SYNC_1_OFFSET))(this, a1);
		}

		::System::Void _HandleHandBookData(::RPG::GameCore::GridFightHandBookType a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightHandBookType, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEHANDBOOKDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _HandleRole(::Class_1_075C34D03AFA1215_47* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_47*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEROLE_OFFSET))(this, a1);
		}

		::System::Void _HandleEquip(::Class_1_075C34D03AFA1215_48* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_48*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEEQUIP_OFFSET))(this, a1);
		}

		::System::Void _HandlePortal(::Class_1_45BB92167AED63A0_38* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_38*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEPORTAL_OFFSET))(this, a1);
		}

		::System::Void _HandleAugment(::Class_1_45BB92167AED63A0_37* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_37*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEAUGMENT_OFFSET))(this, a1);
		}

		::System::Void _HandleMonster(::Class_1_075C34D03AFA1215_49* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_49*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEMONSTER_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_1(::RPG::Client::GridFightHandbookRole* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_1_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_2(::RPG::Client::GridFightAugment* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_2_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_3(::RPG::Client::GridFightMonsterCampConfig* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_3_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_4(::RPG::Client::GridFightItemConfig* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_4_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_5(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_5_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_6(::RPG::Client::GridFightConsumableItemConfig* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightConsumableItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_6_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_7(::RPG::Client::GridFightPortalData* a1)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_7_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_8(::System::UInt32 a1, ::RPG::GameCore::GridFightHandBookType a2)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GridFightHandBookType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_8_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetCompletedItemCount(::RPG::GameCore::GridFightHandBookType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightHandBookType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETCOMPLETEDITEMCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 GetSeenItemCount(::RPG::GameCore::GridFightHandBookType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightHandBookType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETSEENITEMCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 GetCollectedProgress()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETCOLLECTEDPROGRESS_OFFSET))(this);
		}

		::System::Int32 GetTotalItemCount(::RPG::GameCore::GridFightHandBookType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightHandBookType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETTOTALITEMCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 _GetPortalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETPORTALCOUNT_OFFSET))(this);
		}

		::System::Int32 _GetCompletedItemCount(::RPG::GameCore::GridFightHandBookType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightHandBookType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETCOMPLETEDITEMCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 _GetMonsterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETMONSTERCOUNT_OFFSET))(this);
		}

		::System::Int32 _GetRoleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETROLECOUNT_OFFSET))(this);
		}
	};
}
