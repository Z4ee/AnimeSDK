#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_768;
class Class_1_355A2207C3B7A99D_35;
class Class_1_355A2207C3B7A99D_36;
class Class_1_D40936EF3BF54118_38;
class Class_1_D40936EF3BF54118_48;
namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightAugmentSelection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GETAUGMENTBYID_OFFSET UNITYSDK_OFFSET(0xBAE4520)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GETAUGMENTLISTCANADDDIFF_OFFSET UNITYSDK_OFFSET(0xBAE4B70)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_AUGMENTOWNCOUNT_OFFSET UNITYSDK_OFFSET(0xBAE3E70)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xBAE4140)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_PLAYERAUGMENTSWITHOUTEXTRA_OFFSET UNITYSDK_OFFSET(0xBAE3EC0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_SELECTION_OFFSET UNITYSDK_OFFSET(0xBAE40F0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_REMOVEALLAUGMENT_OFFSET UNITYSDK_OFFSET(0xBAE4960)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0xBAE41C0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SYNC_1_OFFSET UNITYSDK_OFFSET(0xBAE4F30)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xBAE4620)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATEADD_OFFSET UNITYSDK_OFFSET(0xBAE5240)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATEREMOVE_OFFSET UNITYSDK_OFFSET(0xBAE56F0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0xBAE54E0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xBAE58F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentInfo_TypeDefinitionIndex = 60168;

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

		::RPG::Client::GridFightAugment* get_Item(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightAugment*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_768* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_768*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SETCOLLECTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightAugment* GetAugmentByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightAugment*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GETAUGMENTBYID_OFFSET))(this, a1);
		}

		::System::Void Sync(::Class_1_D40936EF3BF54118_38* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_38*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>* GetAugmentListCanAddDiff()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GETAUGMENTLISTCANADDDIFF_OFFSET))(this);
		}

		::System::Void Sync_1(::Class_1_D40936EF3BF54118_48* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_48*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SYNC_1_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAdd(::Class_1_355A2207C3B7A99D_35* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_35*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATEADD_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_355A2207C3B7A99D_36* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_36*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATE_OFFSET))(this, a1);
		}

		::System::Void UpdateRemove(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATEREMOVE_OFFSET))(this, a1);
		}

		::System::Void RemoveAllAugment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_REMOVEALLAUGMENT_OFFSET))(this);
		}
	};
}
