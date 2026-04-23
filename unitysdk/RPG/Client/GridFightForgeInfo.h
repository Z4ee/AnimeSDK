#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_717;
class Class_1_4BC858D7C27E10ED_31;
namespace RPG::Client { class GridFightForgeItemData; }
template <typename T1, typename T2> class Class_1_38F81D6A5D792EE0;

#define RPG_CLIENT_GRIDFIGHTFORGEINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0xA49FDD0)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_GET_FORGEITEMDATADICT_OFFSET UNITYSDK_OFFSET(0xA4A0AE0)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xA49FEF0)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_SET_FORGEITEMDATADICT_OFFSET UNITYSDK_OFFSET(0xA4A0AF0)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCADD_OFFSET UNITYSDK_OFFSET(0xA4A0070)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCREMOVE_OFFSET UNITYSDK_OFFSET(0xA4A0980)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0xA4A0390)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO__ADDITEM_OFFSET UNITYSDK_OFFSET(0xA4A0180)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO__CLEARITEMS_OFFSET UNITYSDK_OFFSET(0xA49FE70)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A0B00)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO__GETITEM_OFFSET UNITYSDK_OFFSET(0xA4A0410)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO__REMOVEITEM_OFFSET UNITYSDK_OFFSET(0xA4A0A50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeInfo_TypeDefinitionIndex = 59839;

	class GridFightForgeInfo : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_717* _Collector; // 0x10
		::Class_1_38F81D6A5D792EE0<::System::UInt32, ::RPG::Client::GridFightForgeItemData*>* _ForgeItemDataDict_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_CLEAR_OFFSET))(this);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_717* collector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_717*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_SETCOLLECTOR_OFFSET))(this, collector);
		}

		::RPG::Client::GridFightForgeItemData* SyncAdd(::Class_1_4BC858D7C27E10ED_31* forge)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCADD_OFFSET))(this, forge);
		}

		::RPG::Client::GridFightForgeItemData* SyncUpdate(::Class_1_4BC858D7C27E10ED_31* forge)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCUPDATE_OFFSET))(this, forge);
		}

		::RPG::Client::GridFightForgeItemData* SyncRemove(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCREMOVE_OFFSET))(this, uid);
		}

		::RPG::Client::GridFightForgeItemData* _GetItem(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO__GETITEM_OFFSET))(this, uid);
		}

		::System::Void _AddItem(::RPG::Client::GridFightForgeItemData* member)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightForgeItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO__ADDITEM_OFFSET))(this, member);
		}

		::System::Void _RemoveItem(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO__REMOVEITEM_OFFSET))(this, uid);
		}

		::System::Void _ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO__CLEARITEMS_OFFSET))(this);
		}

		::Class_1_38F81D6A5D792EE0<::System::UInt32, ::RPG::Client::GridFightForgeItemData*>* get_ForgeItemDataDict()
		{
			return ((::Class_1_38F81D6A5D792EE0<::System::UInt32, ::RPG::Client::GridFightForgeItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_GET_FORGEITEMDATADICT_OFFSET))(this);
		}

		::System::Void set_ForgeItemDataDict(::Class_1_38F81D6A5D792EE0<::System::UInt32, ::RPG::Client::GridFightForgeItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_38F81D6A5D792EE0<::System::UInt32, ::RPG::Client::GridFightForgeItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_SET_FORGEITEMDATADICT_OFFSET))(this, value);
		}
	};
}
