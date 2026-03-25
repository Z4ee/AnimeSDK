#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_18;
class Class_1_5FEFAED860528596_16;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class CakeRaceHandbookCatItem; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEHANDBOOKINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x9242A40)
#define RPG_CLIENT_CAKERACEHANDBOOKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9243210)
#define RPG_CLIENT_CAKERACEHANDBOOKINFO_GETALLUNSEENUNLOCKEDCATIDS_OFFSET UNITYSDK_OFFSET(0x9243380)
#define RPG_CLIENT_CAKERACEHANDBOOKINFO_GET_CATITEMLIST_OFFSET UNITYSDK_OFFSET(0x9243B80)
#define RPG_CLIENT_CAKERACEHANDBOOKINFO_HANDLERECONNECT_OFFSET UNITYSDK_OFFSET(0x92431C0)
#define RPG_CLIENT_CAKERACEHANDBOOKINFO_ISCATSEEN_OFFSET UNITYSDK_OFFSET(0x9243280)
#define RPG_CLIENT_CAKERACEHANDBOOKINFO_SENDGETHANDBOOKPROMISE_OFFSET UNITYSDK_OFFSET(0x9242E70)
#define RPG_CLIENT_CAKERACEHANDBOOKINFO_SETALLUNLOCKEDCATSEEN_OFFSET UNITYSDK_OFFSET(0x9243730)
#define RPG_CLIENT_CAKERACEHANDBOOKINFO_SETCATSEEN_OFFSET UNITYSDK_OFFSET(0x9243600)
#define RPG_CLIENT_CAKERACEHANDBOOKINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x9242A80)
#define RPG_CLIENT_CAKERACEHANDBOOKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9242A30)
#define RPG_CLIENT_CAKERACEHANDBOOKINFO__GENERATECATLIST_OFFSET UNITYSDK_OFFSET(0x9243960)
#define RPG_CLIENT_CAKERACEHANDBOOKINFO__SYNCLIST_OFFSET UNITYSDK_OFFSET(0x9242B00)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceHandbookInfo_TypeDefinitionIndex = 51158;

	class CakeRaceHandbookInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceHandbookCatItem*>* _CatItemList; // 0x10
		::RPG::Client::Promises::Promise* _SyncPromise; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceHandbookInfo* Create()
		{
			return ((::RPG::Client::CakeRaceHandbookInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO_CREATE_OFFSET))();
		}

		::System::Void Sync(::Class_1_5FEFAED860528596_16* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO_SYNC_OFFSET))(this, proto);
		}

		::RPG::Client::Promises::IPromise* SendGetHandbookPromise()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO_SENDGETHANDBOOKPROMISE_OFFSET))(this);
		}

		::System::Void HandleReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO_HANDLERECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsCatSeen(::System::UInt32 catID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO_ISCATSEEN_OFFSET))(this, catID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllUnseenUnlockedCatIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO_GETALLUNSEENUNLOCKEDCATIDS_OFFSET))(this);
		}

		::System::Void SetCatSeen(::System::UInt32 catID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO_SETCATSEEN_OFFSET))(this, catID);
		}

		::System::Void SetAllUnlockedCatSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO_SETALLUNLOCKEDCATSEEN_OFFSET))(this);
		}

		::System::Void _GenerateCatList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO__GENERATECATLIST_OFFSET))(this);
		}

		::System::Void _SyncList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_18*>* protoList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_120319518E6F6581_18*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO__SYNCLIST_OFFSET))(this, protoList);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceHandbookCatItem*>* get_CatItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceHandbookCatItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEHANDBOOKINFO_GET_CATITEMLIST_OFFSET))(this);
		}
	};
}
