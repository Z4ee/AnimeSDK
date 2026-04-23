#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_717;
class Class_1_355A2207C3B7A99D_34;
class Class_1_355A2207C3B7A99D_35;
class Class_1_D40936EF3BF54118_35;
class Class_1_D40936EF3BF54118_45;
namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightAugmentSelection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GETAUGMENTBYID_OFFSET UNITYSDK_OFFSET(0xA447A70)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GETAUGMENTLISTCANADDDIFF_OFFSET UNITYSDK_OFFSET(0xA447F60)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_AUGMENTOWNCOUNT_OFFSET UNITYSDK_OFFSET(0xA447570)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA447840)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_PLAYERAUGMENTSWITHOUTEXTRA_OFFSET UNITYSDK_OFFSET(0xA4475C0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_SELECTION_OFFSET UNITYSDK_OFFSET(0xA4477F0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_REMOVEALLAUGMENT_OFFSET UNITYSDK_OFFSET(0xA447DF0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xA4478D0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SYNC_1_OFFSET UNITYSDK_OFFSET(0xA4482B0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xA447B50)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATEADD_OFFSET UNITYSDK_OFFSET(0xA448630)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATEREMOVE_OFFSET UNITYSDK_OFFSET(0xA448A70)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0xA448870)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA448C50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentInfo_TypeDefinitionIndex = 59233;

	class GridFightAugmentInfo : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::GridFightAugmentSelection* _Selection; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>* _PlayerAugments; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_AugmentOwnCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_AUGMENTOWNCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>* get_PlayerAugmentsWithoutExtra()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_PLAYERAUGMENTSWITHOUTEXTRA_OFFSET))(this);
		}

		::RPG::Client::GridFightAugmentSelection* get_Selection()
		{
			return ((::RPG::Client::GridFightAugmentSelection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_SELECTION_OFFSET))(this);
		}

		::RPG::Client::GridFightAugment* get_Item(::System::Int32 index)
		{
			return ((::RPG::Client::GridFightAugment*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_717* collector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_717*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SETCOLLECTOR_OFFSET))(this, collector);
		}

		::RPG::Client::GridFightAugment* GetAugmentByID(::System::UInt32 ID)
		{
			return ((::RPG::Client::GridFightAugment*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GETAUGMENTBYID_OFFSET))(this, ID);
		}

		::System::Void Sync(::Class_1_D40936EF3BF54118_35* augmentInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_35*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SYNC_OFFSET))(this, augmentInfo);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>* GetAugmentListCanAddDiff()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GETAUGMENTLISTCANADDDIFF_OFFSET))(this);
		}

		::System::Void Sync_1(::Class_1_D40936EF3BF54118_45* selectionAction, ::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_45*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SYNC_1_OFFSET))(this, selectionAction, actionID);
		}

		::System::Void UpdateAdd(::Class_1_355A2207C3B7A99D_34* augmentAdd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_34*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATEADD_OFFSET))(this, augmentAdd);
		}

		::System::Void Update(::Class_1_355A2207C3B7A99D_35* augmentUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_35*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATE_OFFSET))(this, augmentUpdate);
		}

		::System::Void UpdateRemove(::System::UInt32 removeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATEREMOVE_OFFSET))(this, removeID);
		}

		::System::Void RemoveAllAugment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_REMOVEALLAUGMENT_OFFSET))(this);
		}
	};
}
