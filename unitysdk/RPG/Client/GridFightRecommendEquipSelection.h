#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"

class Class_1_075C34D03AFA1215_44;
class Class_1_D17272E82AE804C2_423;
namespace RPG::Client { class GridFightEquipItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA569530)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_SELECT_OFFSET UNITYSDK_OFFSET(0xA5698C0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0xA569850)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xA569750)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA5696B0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__MAKESELECTION_OFFSET UNITYSDK_OFFSET(0xA5695C0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__UPDATE_B__6_0_OFFSET UNITYSDK_OFFSET(0xA569A40)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION___CTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0xA569950)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRecommendEquipSelection_TypeDefinitionIndex = 59822;

	class GridFightRecommendEquipSelection : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* Selections; // 0x18
		::System::Int32 PendingSelectID; // 0x20

		::System::Void _ctor(::Class_1_075C34D03AFA1215_44* selection, ::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_44*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__CTOR_OFFSET))(this, selection, actionID);
		}

		::RPG::Client::GridFightEquipItemData* get_Item(::System::Int32 index)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_GET_ITEM_OFFSET))(this, index);
		}

		::RPG::Client::GridFightEquipItemData* _MakeSelection(::System::UInt32 equipId)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__MAKESELECTION_OFFSET))(this, equipId);
		}

		::System::Void Update(::Class_1_075C34D03AFA1215_44* selection)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_44*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_UPDATE_OFFSET))(this, selection);
		}

		::System::Void SyncHandleRsp(::Class_1_D17272E82AE804C2_423* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_423*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_SYNCHANDLERSP_OFFSET))(this, rsp);
		}

		::System::Void Select(::System::UInt32 equipID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_SELECT_OFFSET))(this, equipID);
		}

		::RPG::Client::GridFightEquipItemData* __ctor_b__5_0(::System::UInt32 equipId)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION___CTOR_B__5_0_OFFSET))(this, equipId);
		}

		::RPG::Client::GridFightEquipItemData* _Update_b__6_0(::System::UInt32 equipId)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__UPDATE_B__6_0_OFFSET))(this, equipId);
		}
	};
}
