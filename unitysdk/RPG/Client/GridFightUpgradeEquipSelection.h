#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"

class Class_1_6E708EAB438EC183_36;
class Class_1_FA4F4A67B1C04320_407;
namespace RPG::Client { class GridFightEquipItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_SELECT_OFFSET UNITYSDK_OFFSET(0x98E0970)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0x98E0790)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x98E08D0)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION__MAKESELECTION_OFFSET UNITYSDK_OFFSET(0x98E07E0)
#define RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x98E0A00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUpgradeEquipSelection_TypeDefinitionIndex = 52761;

	class GridFightUpgradeEquipSelection : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* Selections; // 0x18

		::System::Void _ctor(::Class_1_6E708EAB438EC183_36* selection, ::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_36*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION__CTOR_OFFSET))(this, selection, actionID);
		}

		::System::Void SyncHandleRsp(::Class_1_FA4F4A67B1C04320_407* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_407*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEQUIPSELECTION_SYNCHANDLERSP_OFFSET))(this, rsp);
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
