#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"

class Class_1_075C34D03AFA1215_43;
class Class_1_D17272E82AE804C2_423;
namespace RPG::Client { class GridFightEquipItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_SELECT_OFFSET UNITYSDK_OFFSET(0xA5CA300)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0xA5CA120)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA5CA260)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION__MAKESELECTION_OFFSET UNITYSDK_OFFSET(0xA5CA170)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0xA5CA390)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUpgradeEquipSelection_TypeDefinitionIndex = 59823;

	class GridFightUpgradeEquipSelection : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* Selections; // 0x18

		::System::Void _ctor(::Class_1_075C34D03AFA1215_43* selection, ::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_43*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION__CTOR_OFFSET))(this, selection, actionID);
		}

		::System::Void SyncHandleRsp(::Class_1_D17272E82AE804C2_423* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_423*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_SYNCHANDLERSP_OFFSET))(this, rsp);
		}

		::RPG::Client::GridFightEquipItemData* _MakeSelection(::System::UInt32 equipId)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION__MAKESELECTION_OFFSET))(this, equipId);
		}

		::System::Void Select(::System::UInt32 equipID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_SELECT_OFFSET))(this, equipID);
		}

		::RPG::Client::GridFightEquipItemData* __ctor_b__3_0(::System::UInt32 equipId)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION___CTOR_B__3_0_OFFSET))(this, equipId);
		}
	};
}
