#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_049EA20829C3E01B;
class Class_1_766E1CF11E204F43_3;
class Class_1_D17272E82AE804C2_221;
namespace RPG::Client { class RogueNousDiceBranchDataItem; }
namespace RPG::Client { class RogueNousDiceSurfaceDataItem; }
namespace RPG::GameCore { class RogueNousDiceBranchTagRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUENOUSDICEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7D3E60)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETBRANCHBYID_OFFSET UNITYSDK_OFFSET(0xC7D4E20)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETBRANCHESBYGENRE_OFFSET UNITYSDK_OFFSET(0xC7D4C70)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETBRANCHLIST_OFFSET UNITYSDK_OFFSET(0xC7D5420)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETCANEQUIPPEDSURFACESBYBRANCH_OFFSET UNITYSDK_OFFSET(0xC7D50D0)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETROGUENOUSDICEBRANCHTAGS_OFFSET UNITYSDK_OFFSET(0xC7D4A50)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETSURFACEDATABYITEMID_OFFSET UNITYSDK_OFFSET(0xC7D5040)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETSURFACEDATAITEM_OFFSET UNITYSDK_OFFSET(0xC7D4EE0)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETSURFACELIST_OFFSET UNITYSDK_OFFSET(0xC7D5570)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GET_BRANCHDICT_OFFSET UNITYSDK_OFFSET(0xC7D5770)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GET_ITEMIDTOSURFACEDICT_OFFSET UNITYSDK_OFFSET(0xC7D5790)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GET_SURFACEDICT_OFFSET UNITYSDK_OFFSET(0xC7D5780)
#define RPG_CLIENT_ROGUENOUSDICEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xC7D39B0)
#define RPG_CLIENT_ROGUENOUSDICEDATA_SET_ITEMIDTOSURFACEDICT_OFFSET UNITYSDK_OFFSET(0xC7D57A0)
#define RPG_CLIENT_ROGUENOUSDICEDATA_SYNCSINGLEBRANCH_OFFSET UNITYSDK_OFFSET(0xC7D49A0)
#define RPG_CLIENT_ROGUENOUSDICEDATA_SYNCSURFACEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC7D4F70)
#define RPG_CLIENT_ROGUENOUSDICEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC7D42E0)
#define RPG_CLIENT_ROGUENOUSDICEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC7D57B0)
#define RPG_CLIENT_ROGUENOUSDICEDATA__INITROGUENOUSBRANCHES_OFFSET UNITYSDK_OFFSET(0xC7D3C40)
#define RPG_CLIENT_ROGUENOUSDICEDATA__INITROGUENOUSDICESURFACES_OFFSET UNITYSDK_OFFSET(0xC7D3A00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueNousDiceData_TypeDefinitionIndex = 62592;

	class RogueNousDiceData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceBranchDataItem*>* _BranchList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceBranchDataItem*>* _BranchDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>* _SurfaceDict; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceSurfaceDataItem*>* _SurfaceList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>* _ItemIDToSurfaceDict_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_049EA20829C3E01B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_049EA20829C3E01B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncSingleBranch(::Class_1_766E1CF11E204F43_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_SYNCSINGLEBRANCH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RogueNousDiceBranchTagRow*>* GetRogueNousDiceBranchTags()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueNousDiceBranchTagRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETROGUENOUSDICEBRANCHTAGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceBranchDataItem*>* GetBranchesByGenre(::RPG::GameCore::RogueNousDiceBranchTagRow* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceBranchDataItem*>*(*)(::PVOID, ::RPG::GameCore::RogueNousDiceBranchTagRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETBRANCHESBYGENRE_OFFSET))(this, a1);
		}

		::RPG::Client::RogueNousDiceBranchDataItem* GetBranchByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueNousDiceBranchDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETBRANCHBYID_OFFSET))(this, a1);
		}

		::RPG::Client::RogueNousDiceSurfaceDataItem* GetSurfaceDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueNousDiceSurfaceDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETSURFACEDATAITEM_OFFSET))(this, a1);
		}

		::System::Void SyncSurfaceUnlocked(::Class_1_D17272E82AE804C2_221* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_221*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_SYNCSURFACEUNLOCKED_OFFSET))(this, a1);
		}

		::RPG::Client::RogueNousDiceSurfaceDataItem* GetSurfaceDataByItemID(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueNousDiceSurfaceDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETSURFACEDATABYITEMID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceSurfaceDataItem*>* GetCanEquippedSurfacesByBranch(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceSurfaceDataItem*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETCANEQUIPPEDSURFACESBYBRANCH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceBranchDataItem*>* GetBranchList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceBranchDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETBRANCHLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceSurfaceDataItem*>* GetSurfaceList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceSurfaceDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETSURFACELIST_OFFSET))(this);
		}

		::System::Void _InitRogueNousDiceSurfaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA__INITROGUENOUSDICESURFACES_OFFSET))(this);
		}

		::System::Void _InitRogueNousBranches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA__INITROGUENOUSBRANCHES_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceBranchDataItem*>* get_BranchDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceBranchDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GET_BRANCHDICT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>* get_SurfaceDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GET_SURFACEDICT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>* get_ItemIDToSurfaceDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GET_ITEMIDTOSURFACEDICT_OFFSET))(this);
		}

		::System::Void set_ItemIDToSurfaceDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_SET_ITEMIDTOSURFACEDICT_OFFSET))(this, a1);
		}
	};
}
