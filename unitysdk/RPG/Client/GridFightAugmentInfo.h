#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_626;
class Class_1_C3C5C0E033C47270_8;
class Class_1_C3C5C0E033C47270_9;
class Class_1_E7C4009BCC22497A_30;
class Class_1_E7C4009BCC22497A_39;
namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightAugmentSelection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GETAUGMENTBYID_OFFSET UNITYSDK_OFFSET(0x97CEF70)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GETAUGMENTLISTCANADDDIFF_OFFSET UNITYSDK_OFFSET(0x97CF450)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_AUGMENTOWNCOUNT_OFFSET UNITYSDK_OFFSET(0x97CEA70)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x97CED40)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_PLAYERAUGMENTSWITHOUTEXTRA_OFFSET UNITYSDK_OFFSET(0x97CEAC0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_SELECTION_OFFSET UNITYSDK_OFFSET(0x97CECF0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_REMOVEALLAUGMENT_OFFSET UNITYSDK_OFFSET(0x97CF2E0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x97CEDD0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SYNC_1_OFFSET UNITYSDK_OFFSET(0x97CF770)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x97CF050)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATEADD_OFFSET UNITYSDK_OFFSET(0x97CFAF0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATEREMOVE_OFFSET UNITYSDK_OFFSET(0x97CFF00)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x97CFD10)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x97D00E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentInfo_TypeDefinitionIndex = 52281;

	class GridFightAugmentInfo : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>* _PlayerAugments; // 0x18
		::RPG::Client::GridFightAugmentSelection* _Selection; // 0x20

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

		::System::Void SetCollector(::Class_0_16E4307DCC419505_626* collector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_626*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SETCOLLECTOR_OFFSET))(this, collector);
		}

		::RPG::Client::GridFightAugment* GetAugmentByID(::System::UInt32 ID)
		{
			return ((::RPG::Client::GridFightAugment*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GETAUGMENTBYID_OFFSET))(this, ID);
		}

		::System::Void Sync(::Class_1_E7C4009BCC22497A_30* augmentInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SYNC_OFFSET))(this, augmentInfo);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>* GetAugmentListCanAddDiff()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GETAUGMENTLISTCANADDDIFF_OFFSET))(this);
		}

		::System::Void Sync_1(::Class_1_E7C4009BCC22497A_39* selectionAction, ::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_39*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SYNC_1_OFFSET))(this, selectionAction, actionID);
		}

		::System::Void UpdateAdd(::Class_1_C3C5C0E033C47270_8* augmentAdd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C3C5C0E033C47270_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATEADD_OFFSET))(this, augmentAdd);
		}

		::System::Void Update(::Class_1_C3C5C0E033C47270_9* augmentUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C3C5C0E033C47270_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATE_OFFSET))(this, augmentUpdate);
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
