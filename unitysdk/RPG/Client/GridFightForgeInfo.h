#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_626;
class Class_1_99BD961747420BEB_30;
namespace RPG::Client { class GridFightForgeItemData; }
template <typename T1, typename T2> class Class_1_38F81D6A5D792EE0;

#define RPG_CLIENT_GRIDFIGHTFORGEINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x981C640)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_GET_FORGEITEMDATADICT_OFFSET UNITYSDK_OFFSET(0x981D400)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x981C760)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_SET_FORGEITEMDATADICT_OFFSET UNITYSDK_OFFSET(0x981D410)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCADD_OFFSET UNITYSDK_OFFSET(0x981C8E0)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCREMOVE_OFFSET UNITYSDK_OFFSET(0x981D2A0)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x981CC00)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO__ADDITEM_OFFSET UNITYSDK_OFFSET(0x981C9F0)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO__CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x981C6E0)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x981D420)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO__GETITEM_OFFSET UNITYSDK_OFFSET(0x981CC80)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO__REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x981D370)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeInfo_TypeDefinitionIndex = 52776;

	class GridFightForgeInfo : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_626* _Collector; // 0x10
		::Class_1_38F81D6A5D792EE0<::System::UInt32, ::RPG::Client::GridFightForgeItemData*>* _ForgeItemDataDict_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_CLEAR_OFFSET))(this);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_626* collector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_626*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_SETCOLLECTOR_OFFSET))(this, collector);
		}

		::RPG::Client::GridFightForgeItemData* SyncAdd(::Class_1_99BD961747420BEB_30* forge)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::Class_1_99BD961747420BEB_30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCADD_OFFSET))(this, forge);
		}

		::RPG::Client::GridFightForgeItemData* SyncUpdate(::Class_1_99BD961747420BEB_30* forge)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::Class_1_99BD961747420BEB_30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCUPDATE_OFFSET))(this, forge);
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
