#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_95C6045AB8BE2C9E;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueTournArchiveData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_CLEARNAME_OFFSET UNITYSDK_OFFSET(0xB09DA80)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_DELETEUPDATE_OFFSET UNITYSDK_OFFSET(0xB09D4A0)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB09CD50)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_GETARCHIVEDATALIST_OFFSET UNITYSDK_OFFSET(0xB09D630)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_GETARCHIVEDATA_OFFSET UNITYSDK_OFFSET(0xB09D570)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_GETSAVEDARCHIVEDATA_OFFSET UNITYSDK_OFFSET(0xB09D7F0)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_GET_MAXSLOT_OFFSET UNITYSDK_OFFSET(0xB09DF20)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_HASANYARCHIVEDATA_OFFSET UNITYSDK_OFFSET(0xB09D790)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_INIT_OFFSET UNITYSDK_OFFSET(0xB09CC40)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_RENAME_OFFSET UNITYSDK_OFFSET(0xB09D910)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_SYNCALL_OFFSET UNITYSDK_OFFSET(0xB09CFF0)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0xB09D1A0)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB09CC30)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION__SYNCARCHIVELIST_OFFSET UNITYSDK_OFFSET(0xB09D110)
#define RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION__SYNCARCHIVE_OFFSET UNITYSDK_OFFSET(0xB09D2C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournArchiveCollection_TypeDefinitionIndex = 62194;

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

		::System::Void SyncAll(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_95C6045AB8BE2C9E*>* protoList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_95C6045AB8BE2C9E*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_SYNCALL_OFFSET))(this, protoList);
		}

		::System::Void SyncUpdate(::Class_1_95C6045AB8BE2C9E* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_95C6045AB8BE2C9E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_SYNCUPDATE_OFFSET))(this, proto);
		}

		::System::Void DeleteUpdate(::System::UInt32 slotIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_DELETEUPDATE_OFFSET))(this, slotIndex);
		}

		::RPG::Client::RogueTournArchiveData* GetArchiveData(::System::UInt32 slotIndex)
		{
			return ((::RPG::Client::RogueTournArchiveData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_GETARCHIVEDATA_OFFSET))(this, slotIndex);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournArchiveData*>* GetArchiveDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournArchiveData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_GETARCHIVEDATALIST_OFFSET))(this);
		}

		::System::Boolean HasAnyArchiveData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_HASANYARCHIVEDATA_OFFSET))(this);
		}

		::RPG::Client::RogueTournArchiveData* GetSavedArchiveData(::System::UInt32 settleTime)
		{
			return ((::RPG::Client::RogueTournArchiveData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_GETSAVEDARCHIVEDATA_OFFSET))(this, settleTime);
		}

		::System::Void Rename(::System::UInt32 slotIndex, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_RENAME_OFFSET))(this, slotIndex, name);
		}

		::System::Void ClearName(::System::UInt32 slotIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_CLEARNAME_OFFSET))(this, slotIndex);
		}

		::System::Void _SyncArchiveList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_95C6045AB8BE2C9E*>* protoList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_95C6045AB8BE2C9E*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION__SYNCARCHIVELIST_OFFSET))(this, protoList);
		}

		::System::Void _SyncArchive(::Class_1_95C6045AB8BE2C9E* protoInfo, ::System::UInt32 localTime)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_95C6045AB8BE2C9E*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION__SYNCARCHIVE_OFFSET))(this, protoInfo, localTime);
		}

		::System::UInt32 get_MaxSlot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNARCHIVECOLLECTION_GET_MAXSLOT_OFFSET))(this);
		}
	};
}
