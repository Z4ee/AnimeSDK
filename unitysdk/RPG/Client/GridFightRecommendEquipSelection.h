#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"

class Class_1_075C34D03AFA1215_43;
class Class_1_D17272E82AE804C2_507;
namespace RPG::Client { class GridFightEquipItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xD2F5140)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_SELECT_OFFSET UNITYSDK_OFFSET(0xD2F5520)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0xD2F54B0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xD2F5390)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xD2F52D0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__MAKESELECTION_OFFSET UNITYSDK_OFFSET(0xD2F51C0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__UPDATE_B__6_0_OFFSET UNITYSDK_OFFSET(0xD2F55C0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION___CTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0xD2F55B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRecommendEquipSelection_TypeDefinitionIndex = 65034;

	class GridFightRecommendEquipSelection : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* Selections; // 0x18
		::System::Int32 PendingSelectID; // 0x20

		::System::Void _ctor(::Class_1_075C34D03AFA1215_43* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_43*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightEquipItemData* get_Item(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_GET_ITEM_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* _MakeSelection(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__MAKESELECTION_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_075C34D03AFA1215_43* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_43*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_UPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncHandleRsp(::Class_1_D17272E82AE804C2_507* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_507*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_SYNCHANDLERSP_OFFSET))(this, a1);
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
