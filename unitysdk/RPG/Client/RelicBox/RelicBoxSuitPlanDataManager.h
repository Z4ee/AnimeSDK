#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C9DFE5EE7107C629_11;
class Class_1_FFE64310E4DB1CD6_4;
namespace RPG::Client::RelicBox { class RelicBoxSuitPlanData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_CLEARALLDIRTY_OFFSET UNITYSDK_OFFSET(0xA29FE90)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_GETCUSTOMRELICBOXSUITPLANDATA_OFFSET UNITYSDK_OFFSET(0xA29FDD0)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_GETDIRTYPLANDATALIST_OFFSET UNITYSDK_OFFSET(0xA29CC70)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_GETRECOMMENDRELICBOXSUITPLANDATA_OFFSET UNITYSDK_OFFSET(0xA29FE30)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_GET_ISHAVETARGETDATA_OFFSET UNITYSDK_OFFSET(0xA29FDC0)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xA29B090)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_SYNCTARGETDATA_OFFSET UNITYSDK_OFFSET(0xA29D960)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0xA29D520)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA29E3A0)

namespace RPG::Client::RelicBox
{
	inline static constexpr unsigned int RelicBoxSuitPlanDataManager_TypeDefinitionIndex = 61213;

	class RelicBoxSuitPlanDataManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicBox::RelicBoxSuitPlanData*>* _CustomRelicBoxSuitPlanData; // 0x10
		::RPG::Client::RelicBox::RelicBoxSuitPlanData* CurrentSelectData; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicBox::RelicBoxSuitPlanData*>* _RecommendRelicBoxSuitPlanData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsHaveTargetData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_GET_ISHAVETARGETDATA_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_C9DFE5EE7107C629_11* serverData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_SYNC_OFFSET))(this, serverData);
		}

		::System::Void SyncTargetData(::Class_1_FFE64310E4DB1CD6_4* serverData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FFE64310E4DB1CD6_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_SYNCTARGETDATA_OFFSET))(this, serverData);
		}

		::RPG::Client::RelicBox::RelicBoxSuitPlanData* GetCustomRelicBoxSuitPlanData(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::RelicBox::RelicBoxSuitPlanData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_GETCUSTOMRELICBOXSUITPLANDATA_OFFSET))(this, avatarID);
		}

		::RPG::Client::RelicBox::RelicBoxSuitPlanData* GetRecommendRelicBoxSuitPlanData(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::RelicBox::RelicBoxSuitPlanData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_GETRECOMMENDRELICBOXSUITPLANDATA_OFFSET))(this, avatarID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicBox::RelicBoxSuitPlanData*>* GetDirtyPlanDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicBox::RelicBoxSuitPlanData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_GETDIRTYPLANDATALIST_OFFSET))(this);
		}

		::System::Void ClearAllDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_CLEARALLDIRTY_OFFSET))(this);
		}
	};
}
