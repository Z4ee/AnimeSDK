#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1EC1D7523DB92148_3;
class Class_1_20D743894CDF214D_3;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueAreaData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEPROGRESSINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BA04CD0)
#define RPG_CLIENT_ROGUEPROGRESSINFO_GETAREADATABYID_OFFSET UNITYSDK_OFFSET(0x1BA05000)
#define RPG_CLIENT_ROGUEPROGRESSINFO_GETCURAREADATA_OFFSET UNITYSDK_OFFSET(0x1B9ECFF0)
#define RPG_CLIENT_ROGUEPROGRESSINFO_GET_ACTIVITYAREADATAS_OFFSET UNITYSDK_OFFSET(0x1BA05780)
#define RPG_CLIENT_ROGUEPROGRESSINFO_GET_ALLAREADATALIST_OFFSET UNITYSDK_OFFSET(0x1BA05760)
#define RPG_CLIENT_ROGUEPROGRESSINFO_GET_CURAREAID_OFFSET UNITYSDK_OFFSET(0x1BA05740)
#define RPG_CLIENT_ROGUEPROGRESSINFO_GET_PROGRESSAREADIC_OFFSET UNITYSDK_OFFSET(0x1BA057A0)
#define RPG_CLIENT_ROGUEPROGRESSINFO_ISAREAPROGRESSFINISHED_OFFSET UNITYSDK_OFFSET(0x1BA05130)
#define RPG_CLIENT_ROGUEPROGRESSINFO_REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0x1BA04DD0)
#define RPG_CLIENT_ROGUEPROGRESSINFO_SET_ACTIVITYAREADATAS_OFFSET UNITYSDK_OFFSET(0x1BA05790)
#define RPG_CLIENT_ROGUEPROGRESSINFO_SET_ALLAREADATALIST_OFFSET UNITYSDK_OFFSET(0x1BA05770)
#define RPG_CLIENT_ROGUEPROGRESSINFO_SET_CURAREAID_OFFSET UNITYSDK_OFFSET(0x1BA05750)
#define RPG_CLIENT_ROGUEPROGRESSINFO_SET_PROGRESSAREADIC_OFFSET UNITYSDK_OFFSET(0x1BA057B0)
#define RPG_CLIENT_ROGUEPROGRESSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA04C90)
#define RPG_CLIENT_ROGUEPROGRESSINFO__REFRESHALLAREADATALIST_OFFSET UNITYSDK_OFFSET(0x1BA04F00)
#define RPG_CLIENT_ROGUEPROGRESSINFO__REFRESHPROGRESSAREADATADIC_OFFSET UNITYSDK_OFFSET(0x1BA05490)
#define RPG_CLIENT_ROGUEPROGRESSINFO__SAFECREATEAREADATA_OFFSET UNITYSDK_OFFSET(0x1BA05280)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueProgressInfo_TypeDefinitionIndex = 67462;

	class RogueProgressInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>* _AllAreaDataList_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>*>* _ProgressAreaDic_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>* _ActivityAreaDatas_k__BackingField; // 0x20
		::System::UInt32 _CurAreaID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshProgress(::Class_1_20D743894CDF214D_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_20D743894CDF214D_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_REFRESHPROGRESS_OFFSET))(this, a1);
		}

		::RPG::Client::RogueAreaData* GetCurAreaData()
		{
			return ((::RPG::Client::RogueAreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_GETCURAREADATA_OFFSET))(this);
		}

		::RPG::Client::RogueAreaData* GetAreaDataByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueAreaData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_GETAREADATABYID_OFFSET))(this, a1);
		}

		::System::Boolean IsAreaProgressFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_ISAREAPROGRESSFINISHED_OFFSET))(this, a1);
		}

		::System::Void _RefreshAllAreaDataList(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1EC1D7523DB92148_3*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1EC1D7523DB92148_3*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO__REFRESHALLAREADATALIST_OFFSET))(this, a1);
		}

		::System::Void _SafeCreateAreaData(::Class_1_1EC1D7523DB92148_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1EC1D7523DB92148_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO__SAFECREATEAREADATA_OFFSET))(this, a1);
		}

		::System::Void _RefreshProgressAreaDataDic(::RPG::Client::RogueAreaData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO__REFRESHPROGRESSAREADATADIC_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_GET_CURAREAID_OFFSET))(this);
		}

		::System::Void set_CurAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_SET_CURAREAID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>* get_AllAreaDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_GET_ALLAREADATALIST_OFFSET))(this);
		}

		::System::Void set_AllAreaDataList(::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_SET_ALLAREADATALIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>* get_ActivityAreaDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_GET_ACTIVITYAREADATAS_OFFSET))(this);
		}

		::System::Void set_ActivityAreaDatas(::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_SET_ACTIVITYAREADATAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>*>* get_ProgressAreaDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_GET_PROGRESSAREADIC_OFFSET))(this);
		}

		::System::Void set_ProgressAreaDic(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RogueAreaData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPROGRESSINFO_SET_PROGRESSAREADIC_OFFSET))(this, a1);
		}
	};
}
