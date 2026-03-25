#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_84BF80250A9F5C6A;
class Class_1_EFE234D18718A46A_3;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueAreaData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEPROGRESSINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA35B230)
#define RPG_CLIENT_ROGUEPROGRESSINFO_GETAREADATABYID_OFFSET UNITYSDK_OFFSET(0xA35B530)
#define RPG_CLIENT_ROGUEPROGRESSINFO_GETCURAREADATA_OFFSET UNITYSDK_OFFSET(0xA343100)
#define RPG_CLIENT_ROGUEPROGRESSINFO_GET_ACTIVITYAREADATAS_OFFSET UNITYSDK_OFFSET(0xA35BBF0)
#define RPG_CLIENT_ROGUEPROGRESSINFO_GET_ALLAREADATALIST_OFFSET UNITYSDK_OFFSET(0xA35BBD0)
#define RPG_CLIENT_ROGUEPROGRESSINFO_GET_CURAREAID_OFFSET UNITYSDK_OFFSET(0xA35BBB0)
#define RPG_CLIENT_ROGUEPROGRESSINFO_GET_PROGRESSAREADIC_OFFSET UNITYSDK_OFFSET(0xA35BC10)
#define RPG_CLIENT_ROGUEPROGRESSINFO_ISAREAPROGRESSFINISHED_OFFSET UNITYSDK_OFFSET(0xA35B640)
#define RPG_CLIENT_ROGUEPROGRESSINFO_REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0xA35B340)
#define RPG_CLIENT_ROGUEPROGRESSINFO_SET_ACTIVITYAREADATAS_OFFSET UNITYSDK_OFFSET(0xA35BC00)
#define RPG_CLIENT_ROGUEPROGRESSINFO_SET_ALLAREADATALIST_OFFSET UNITYSDK_OFFSET(0xA35BBE0)
#define RPG_CLIENT_ROGUEPROGRESSINFO_SET_CURAREAID_OFFSET UNITYSDK_OFFSET(0xA35BBC0)
#define RPG_CLIENT_ROGUEPROGRESSINFO_SET_PROGRESSAREADIC_OFFSET UNITYSDK_OFFSET(0xA35BC20)
#define RPG_CLIENT_ROGUEPROGRESSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA35B1F0)
#define RPG_CLIENT_ROGUEPROGRESSINFO__REFRESHALLAREADATALIST_OFFSET UNITYSDK_OFFSET(0xA35B480)
#define RPG_CLIENT_ROGUEPROGRESSINFO__REFRESHPROGRESSAREADATADIC_OFFSET UNITYSDK_OFFSET(0xA35B980)
#define RPG_CLIENT_ROGUEPROGRESSINFO__SAFECREATEAREADATA_OFFSET UNITYSDK_OFFSET(0xA35B820)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueProgressInfo_TypeDefinitionIndex = 54978;

	class RogueProgressInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>*>* _ProgressAreaDic_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>* _ActivityAreaDatas_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>* _AllAreaDataList_k__BackingField; // 0x20
		::System::UInt32 _CurAreaID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshProgress(::Class_1_84BF80250A9F5C6A* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_84BF80250A9F5C6A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_REFRESHPROGRESS_OFFSET))(this, proto);
		}

		::RPG::Client::RogueAreaData* GetCurAreaData()
		{
			return ((::RPG::Client::RogueAreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_GETCURAREADATA_OFFSET))(this);
		}

		::RPG::Client::RogueAreaData* GetAreaDataByID(::System::UInt32 areaID)
		{
			return ((::RPG::Client::RogueAreaData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_GETAREADATABYID_OFFSET))(this, areaID);
		}

		::System::Boolean IsAreaProgressFinished(::System::UInt32 areaProgress)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_ISAREAPROGRESSFINISHED_OFFSET))(this, areaProgress);
		}

		::System::Void _RefreshAllAreaDataList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EFE234D18718A46A_3*>* rogueAreaList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_EFE234D18718A46A_3*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO__REFRESHALLAREADATALIST_OFFSET))(this, rogueAreaList);
		}

		::System::Void _SafeCreateAreaData(::Class_1_EFE234D18718A46A_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EFE234D18718A46A_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO__SAFECREATEAREADATA_OFFSET))(this, proto);
		}

		::System::Void _RefreshProgressAreaDataDic(::RPG::Client::RogueAreaData* rogueAreaData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO__REFRESHPROGRESSAREADATADIC_OFFSET))(this, rogueAreaData);
		}

		::System::UInt32 get_CurAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_GET_CURAREAID_OFFSET))(this);
		}

		::System::Void set_CurAreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_SET_CURAREAID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>* get_AllAreaDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_GET_ALLAREADATALIST_OFFSET))(this);
		}

		::System::Void set_AllAreaDataList(::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_SET_ALLAREADATALIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>* get_ActivityAreaDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_GET_ACTIVITYAREADATAS_OFFSET))(this);
		}

		::System::Void set_ActivityAreaDatas(::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_SET_ACTIVITYAREADATAS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>*>* get_ProgressAreaDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_GET_PROGRESSAREADIC_OFFSET))(this);
		}

		::System::Void set_ProgressAreaDic(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_SET_PROGRESSAREADIC_OFFSET))(this, value);
		}
	};
}
