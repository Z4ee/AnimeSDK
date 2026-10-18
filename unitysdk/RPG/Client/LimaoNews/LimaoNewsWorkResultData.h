#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsWorkRecordData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xD3C6ED0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA_GETWORKRECORDDATA_OFFSET UNITYSDK_OFFSET(0xD3EE170)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA_GET_RECORDDATALIST_OFFSET UNITYSDK_OFFSET(0xD3EE340)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA_GET_WORKRESULTEVENTPATH_OFFSET UNITYSDK_OFFSET(0xD3EE300)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA_GET_WORKRESULTID_OFFSET UNITYSDK_OFFSET(0xD3EE2E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA_GET_WORKRESULTMESSAGE_OFFSET UNITYSDK_OFFSET(0xD3EE320)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA_SET_RECORDDATALIST_OFFSET UNITYSDK_OFFSET(0xD3EE350)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA_SET_WORKRESULTEVENTPATH_OFFSET UNITYSDK_OFFSET(0xD3EE310)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA_SET_WORKRESULTID_OFFSET UNITYSDK_OFFSET(0xD3EE2F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA_SET_WORKRESULTMESSAGE_OFFSET UNITYSDK_OFFSET(0xD3EE330)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD3EE160)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWorkResultData_TypeDefinitionIndex = 80308;

	class LimaoNewsWorkResultData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkRecordData*>* _RecordDataList_k__BackingField; // 0x10
		::System::String* _WorkResultEventPath_k__BackingField; // 0x18
		::System::UInt32 _WorkResultID_k__BackingField; // 0x20
		::System::UInt32 _WorkResultMessage_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsWorkResultData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkResultData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA_CREATE_OFFSET))(a1);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkRecordData* GetWorkRecordData(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkRecordData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA_GETWORKRECORDDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_WorkResultID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA_GET_WORKRESULTID_OFFSET))(this);
		}

		::System::Void set_WorkResultID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA_SET_WORKRESULTID_OFFSET))(this, a1);
		}

		::System::String* get_WorkResultEventPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA_GET_WORKRESULTEVENTPATH_OFFSET))(this);
		}

		::System::Void set_WorkResultEventPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA_SET_WORKRESULTEVENTPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_WorkResultMessage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA_GET_WORKRESULTMESSAGE_OFFSET))(this);
		}

		::System::Void set_WorkResultMessage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA_SET_WORKRESULTMESSAGE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkRecordData*>* get_RecordDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkRecordData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA_GET_RECORDDATALIST_OFFSET))(this);
		}

		::System::Void set_RecordDataList(::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkRecordData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsWorkRecordData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKRESULTDATA_SET_RECORDDATALIST_OFFSET))(this, a1);
		}
	};
}
