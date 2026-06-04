#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_768;
class Class_1_4BC858D7C27E10ED_32;
namespace RPG::Client { class GridFightForgeItemData; }
namespace Sofa::Core { template <typename T1, typename T2> class ObservableDictionary_2; }

#define RPG_CLIENT_GRIDFIGHTFORGEINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0xBB3F620)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_GET_FORGEITEMDATADICT_OFFSET UNITYSDK_OFFSET(0xBB40720)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xBB3F740)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_SET_FORGEITEMDATADICT_OFFSET UNITYSDK_OFFSET(0xBB40730)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCADD_OFFSET UNITYSDK_OFFSET(0xBB3FA50)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCREMOVE_OFFSET UNITYSDK_OFFSET(0xBB405C0)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0xBB3FF20)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO__ADDITEM_OFFSET UNITYSDK_OFFSET(0xBB3FB60)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO__CLEARITEMS_OFFSET UNITYSDK_OFFSET(0xBB3F6C0)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xBB40740)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO__GETITEM_OFFSET UNITYSDK_OFFSET(0xBB3FFA0)
#define RPG_CLIENT_GRIDFIGHTFORGEINFO__REMOVEITEM_OFFSET UNITYSDK_OFFSET(0xBB40690)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeInfo_TypeDefinitionIndex = 60774;

	class GridFightForgeInfo : public ::System::Object
	{
	public:
		::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightForgeItemData*>* _ForgeItemDataDict_k__BackingField; // 0x10
		::Class_0_16E4307DCC419505_768* _Collector; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_CLEAR_OFFSET))(this);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_768* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_768*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightForgeItemData* SyncAdd(::Class_1_4BC858D7C27E10ED_32* a1)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_32*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCADD_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightForgeItemData* SyncUpdate(::Class_1_4BC858D7C27E10ED_32* a1)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_32*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCUPDATE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightForgeItemData* SyncRemove(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_SYNCREMOVE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightForgeItemData* _GetItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO__GETITEM_OFFSET))(this, a1);
		}

		::System::Void _AddItem(::RPG::Client::GridFightForgeItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightForgeItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO__ADDITEM_OFFSET))(this, a1);
		}

		::System::Void _RemoveItem(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO__REMOVEITEM_OFFSET))(this, a1);
		}

		::System::Void _ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO__CLEARITEMS_OFFSET))(this);
		}

		::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightForgeItemData*>* get_ForgeItemDataDict()
		{
			return ((::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightForgeItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_GET_FORGEITEMDATADICT_OFFSET))(this);
		}

		::System::Void set_ForgeItemDataDict(::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightForgeItemData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::ObservableDictionary_2<::System::UInt32, ::RPG::Client::GridFightForgeItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEINFO_SET_FORGEITEMDATADICT_OFFSET))(this, a1);
		}
	};
}
