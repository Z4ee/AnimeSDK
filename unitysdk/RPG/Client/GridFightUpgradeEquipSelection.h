#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"

class Class_1_075C34D03AFA1215_42;
class Class_1_D17272E82AE804C2_507;
namespace RPG::Client { class GridFightEquipItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_SELECT_OFFSET UNITYSDK_OFFSET(0x1BB1E2A0)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0x1BB1E080)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB1E1E0)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION__MAKESELECTION_OFFSET UNITYSDK_OFFSET(0x1BB1E0D0)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x1BB1E330)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUpgradeEquipSelection_TypeDefinitionIndex = 65035;

	class GridFightUpgradeEquipSelection : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* Selections; // 0x18

		::System::Void _ctor(::Class_1_075C34D03AFA1215_42* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_42*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void SyncHandleRsp(::Class_1_D17272E82AE804C2_507* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_507*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_SYNCHANDLERSP_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* _MakeSelection(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION__MAKESELECTION_OFFSET))(this, a1);
		}

		::System::Void Select(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_SELECT_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightEquipItemData* __ctor_b__3_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION___CTOR_B__3_0_OFFSET))(this, a1);
		}
	};
}
