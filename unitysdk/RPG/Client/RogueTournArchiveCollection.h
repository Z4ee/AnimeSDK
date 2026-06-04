#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_41;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueTournArchiveData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_CLEARNAME_OFFSET UNITYSDK_OFFSET(0xC7EE670)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_DELETEUPDATE_OFFSET UNITYSDK_OFFSET(0xC7EE0C0)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7ED9D0)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_GETARCHIVEDATALIST_OFFSET UNITYSDK_OFFSET(0xC7EE220)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_GETARCHIVEDATA_OFFSET UNITYSDK_OFFSET(0xC7EE190)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_GETSAVEDARCHIVEDATA_OFFSET UNITYSDK_OFFSET(0xC7EE420)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_GET_MAXSLOT_OFFSET UNITYSDK_OFFSET(0xC7EEB10)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_HASANYARCHIVEDATA_OFFSET UNITYSDK_OFFSET(0xC7EE3C0)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_INIT_OFFSET UNITYSDK_OFFSET(0xC7ED8D0)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_RENAME_OFFSET UNITYSDK_OFFSET(0xC7EE530)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_SYNCALL_OFFSET UNITYSDK_OFFSET(0xC7EDC60)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0xC7EDDF0)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC7ED8C0)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION__SYNCARCHIVELIST_OFFSET UNITYSDK_OFFSET(0xC7EDD20)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION__SYNCARCHIVE_OFFSET UNITYSDK_OFFSET(0xC7EDF10)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournArchiveCollection_TypeDefinitionIndex = 63127;

	class RogueTournArchiveCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournArchiveData*>* _ArchiveDataDict; // 0x10
		::System::UInt32 _MaxSlot; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAll(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_41*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_41*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_SYNCALL_OFFSET))(this, a1);
		}

		::System::Void SyncUpdate(::Class_1_21DCD4640D389503_41* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_SYNCUPDATE_OFFSET))(this, a1);
		}

		::System::Void DeleteUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_DELETEUPDATE_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournArchiveData* GetArchiveData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournArchiveData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_GETARCHIVEDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournArchiveData*>* GetArchiveDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournArchiveData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_GETARCHIVEDATALIST_OFFSET))(this);
		}

		::System::Boolean HasAnyArchiveData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_HASANYARCHIVEDATA_OFFSET))(this);
		}

		::RPG::Client::RogueTournArchiveData* GetSavedArchiveData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournArchiveData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_GETSAVEDARCHIVEDATA_OFFSET))(this, a1);
		}

		::System::Void Rename(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_RENAME_OFFSET))(this, a1, a2);
		}

		::System::Void ClearName(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_CLEARNAME_OFFSET))(this, a1);
		}

		::System::Void _SyncArchiveList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_41*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_21DCD4640D389503_41*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION__SYNCARCHIVELIST_OFFSET))(this, a1);
		}

		::System::Void _SyncArchive(::Class_1_21DCD4640D389503_41* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_41*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION__SYNCARCHIVE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_MaxSlot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_GET_MAXSLOT_OFFSET))(this);
		}
	};
}
