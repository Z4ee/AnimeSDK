#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"

class Class_1_4BC858D7C27E10ED_35;
class Class_1_D17272E82AE804C2_436;
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GRIDFIGHTELATIONTEMPLATESELECTACTION_GET_EQUIPCONFIGS_OFFSET UNITYSDK_OFFSET(0x13A56450)
#define GRIDFIGHTELATIONTEMPLATESELECTACTION_SELECT_OFFSET UNITYSDK_OFFSET(0x13A562C0)
#define GRIDFIGHTELATIONTEMPLATESELECTACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0x13A560B0)
#define GRIDFIGHTELATIONTEMPLATESELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x13A56100)
#define GRIDFIGHTELATIONTEMPLATESELECTACTION__GETTEMPLATEFIRSTEQUIP_OFFSET UNITYSDK_OFFSET(0x13A561D0)

inline static constexpr unsigned int GridFightElationTemplateSelectAction_TypeDefinitionIndex = 44527;

class GridFightElationTemplateSelectAction : public ::RPG::Client::GridFightPendingSelectableBaseAction
{
public:
	::System::Collections::Generic::IList_1<::System::UInt32>* _TemplateIDs; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* _EquipConfigs; // 0x20
	::System::UInt32 _TraitID; // 0x28
	::System::UInt32 _TraitEffectID; // 0x2C

	::System::Void _ctor(::Class_1_4BC858D7C27E10ED_35* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_35*, ::System::UInt32))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void SyncHandleRsp(::Class_1_D17272E82AE804C2_436* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_436*))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION_SYNCHANDLERSP_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightEquipItemConfig* _GetTemplateFirstEquip(::System::UInt32 a1)
	{
		return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION__GETTEMPLATEFIRSTEQUIP_OFFSET))(this, a1);
	}

	::System::Void Select(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION_SELECT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* get_EquipConfigs()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDFIGHTELATIONTEMPLATESELECTACTION_GET_EQUIPCONFIGS_OFFSET))(this);
	}
};
