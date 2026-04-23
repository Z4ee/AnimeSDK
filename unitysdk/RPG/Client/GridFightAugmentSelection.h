#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"

class Class_1_D17272E82AE804C2_423;
class Class_1_D1E0AD3915BCCF29_45;
class Class_1_D40936EF3BF54118_45;
namespace RPG::Client { class GridFightAugmentSelectItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA449810)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GET_SELECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xA4497C0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_REROLL_OFFSET UNITYSDK_OFFSET(0xA449AF0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_SELECT_OFFSET UNITYSDK_OFFSET(0xA449980)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0xA449930)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xA448530)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA448490)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__MAKESELECTION_OFFSET UNITYSDK_OFFSET(0xA4498A0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__UPDATE_B__8_0_OFFSET UNITYSDK_OFFSET(0xA449CF0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION___CTOR_B__7_0_OFFSET UNITYSDK_OFFSET(0xA449C60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentSelection_TypeDefinitionIndex = 59240;

	class GridFightAugmentSelection : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugmentSelectItem*>* _Selections; // 0x18
		::System::Int32 PendingSelectID; // 0x20

		::System::Void _ctor(::Class_1_D40936EF3BF54118_45* selection, ::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_45*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__CTOR_OFFSET))(this, selection, actionID);
		}

		::System::Int32 get_SelectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GET_SELECTIONCOUNT_OFFSET))(this);
		}

		::RPG::Client::GridFightAugmentSelectItem* get_Item(::System::Int32 index)
		{
			return ((::RPG::Client::GridFightAugmentSelectItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_GET_ITEM_OFFSET))(this, index);
		}

		::RPG::Client::GridFightAugmentSelectItem* _MakeSelection(::Class_1_D1E0AD3915BCCF29_45* select)
		{
			return ((::RPG::Client::GridFightAugmentSelectItem*(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__MAKESELECTION_OFFSET))(this, select);
		}

		::System::Void Update(::Class_1_D40936EF3BF54118_45* selection)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_UPDATE_OFFSET))(this, selection);
		}

		::System::Void SyncHandleRsp(::Class_1_D17272E82AE804C2_423* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_423*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_SYNCHANDLERSP_OFFSET))(this, rsp);
		}

		::System::Void Select(::System::UInt32 augmentID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_SELECT_OFFSET))(this, augmentID);
		}

		::System::Void Reroll(::System::UInt32 augmentID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION_REROLL_OFFSET))(this, augmentID);
		}

		::RPG::Client::GridFightAugmentSelectItem* __ctor_b__7_0(::Class_1_D1E0AD3915BCCF29_45* augment)
		{
			return ((::RPG::Client::GridFightAugmentSelectItem*(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION___CTOR_B__7_0_OFFSET))(this, augment);
		}

		::RPG::Client::GridFightAugmentSelectItem* _Update_b__8_0(::Class_1_D1E0AD3915BCCF29_45* augment)
		{
			return ((::RPG::Client::GridFightAugmentSelectItem*(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTSELECTION__UPDATE_B__8_0_OFFSET))(this, augment);
		}
	};
}
