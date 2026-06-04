#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"

class Class_1_075C34D03AFA1215_44;
class Class_1_D17272E82AE804C2_436;
namespace RPG::Client { class GridFightEquipItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xBBD6870)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_SELECT_OFFSET UNITYSDK_OFFSET(0xBBD6C50)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0xBBD6BE0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xBBD6AC0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xBBD6A00)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__MAKESELECTION_OFFSET UNITYSDK_OFFSET(0xBBD68F0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__UPDATE_B__6_0_OFFSET UNITYSDK_OFFSET(0xBBD6CF0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION___CTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0xBBD6CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRecommendEquipSelection_TypeDefinitionIndex = 60757;

	class GridFightRecommendEquipSelection : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* Selections; // 0x18
		::System::Int32 PendingSelectID; // 0x20

		::System::Void _ctor(::Class_1_075C34D03AFA1215_44* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_44*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightEquipItemData* get_Item(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_GET_ITEM_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* _MakeSelection(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__MAKESELECTION_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_075C34D03AFA1215_44* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_44*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_UPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncHandleRsp(::Class_1_D17272E82AE804C2_436* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_436*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_SYNCHANDLERSP_OFFSET))(this, a1);
		}

		::System::Void Select(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_SELECT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* __ctor_b__5_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION___CTOR_B__5_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* _Update_b__6_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__UPDATE_B__6_0_OFFSET))(this, a1);
		}
	};
}
