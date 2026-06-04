#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"

class Class_1_D17272E82AE804C2_436;
class Class_1_D1E0AD3915BCCF29_47;
class Class_1_D40936EF3BF54118_48;
namespace RPG::Client { class GridFightAugmentSelectItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xBAE6590)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GET_SELECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xBAE6540)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_REROLL_OFFSET UNITYSDK_OFFSET(0xBAE6860)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_SELECT_OFFSET UNITYSDK_OFFSET(0xBAE66F0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0xBAE66A0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xBAE5120)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xBAE5060)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__MAKESELECTION_OFFSET UNITYSDK_OFFSET(0xBAE6610)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__UPDATE_B__8_0_OFFSET UNITYSDK_OFFSET(0xBAE6A80)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION___CTOR_B__7_0_OFFSET UNITYSDK_OFFSET(0xBAE69D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentSelection_TypeDefinitionIndex = 60175;

	class GridFightAugmentSelection : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugmentSelectItem*>* _Selections; // 0x18
		::System::Int32 PendingSelectID; // 0x20

		::System::Void _ctor(::Class_1_D40936EF3BF54118_48* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_48*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_SelectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GET_SELECTIONCOUNT_OFFSET))(this);
		}

		::RPG::Client::GridFightAugmentSelectItem* get_Item(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightAugmentSelectItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GET_ITEM_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightAugmentSelectItem* _MakeSelection(::Class_1_D1E0AD3915BCCF29_47* a1)
		{
			return ((::RPG::Client::GridFightAugmentSelectItem*(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_47*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__MAKESELECTION_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_D40936EF3BF54118_48* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_48*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_UPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncHandleRsp(::Class_1_D17272E82AE804C2_436* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_436*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_SYNCHANDLERSP_OFFSET))(this, a1);
		}

		::System::Void Select(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_SELECT_OFFSET))(this, a1);
		}

		::System::Void Reroll(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_REROLL_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightAugmentSelectItem* __ctor_b__7_0(::Class_1_D1E0AD3915BCCF29_47* a1)
		{
			return ((::RPG::Client::GridFightAugmentSelectItem*(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_47*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION___CTOR_B__7_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightAugmentSelectItem* _Update_b__8_0(::Class_1_D1E0AD3915BCCF29_47* a1)
		{
			return ((::RPG::Client::GridFightAugmentSelectItem*(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_47*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__UPDATE_B__8_0_OFFSET))(this, a1);
		}
	};
}
