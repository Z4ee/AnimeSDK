#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B87B938F2BCBD84D_6;
class Class_1_C9DFE5EE7107C629_19;
namespace RPG::Client::RelicBox { class RelicBoxSuitPlanData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_CLEARALLDIRTY_OFFSET UNITYSDK_OFFSET(0xDE24150)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_GETCUSTOMRELICBOXSUITPLANDATA_OFFSET UNITYSDK_OFFSET(0xDE24010)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_GETDIRTYPLANDATALIST_OFFSET UNITYSDK_OFFSET(0xDE1FFA0)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_GETRECOMMENDRELICBOXSUITPLANDATA_OFFSET UNITYSDK_OFFSET(0xDE240B0)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_GET_ISHAVETARGETDATA_OFFSET UNITYSDK_OFFSET(0xDE23FC0)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xDE1E0B0)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_SYNCTARGETDATA_OFFSET UNITYSDK_OFFSET(0xDE21AC0)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0xDE210A0)
#define RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xDE22890)

namespace RPG::Client::RelicBox
{
	inline static constexpr unsigned int RelicBoxSuitPlanDataManager_TypeDefinitionIndex = 74356;

	class RelicBoxSuitPlanDataManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicBox::RelicBoxSuitPlanData*>* _RecommendRelicBoxSuitPlanData; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RelicBox::RelicBoxSuitPlanData*>* _CustomRelicBoxSuitPlanData; // 0x18
		::RPG::Client::RelicBox::RelicBoxSuitPlanData* CurrentSelectData; // 0x20

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

		::System::Void Sync(::Class_1_C9DFE5EE7107C629_19* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_19*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_SYNC_OFFSET))(this, a1);
		}

		::System::Void SyncTargetData(::Class_1_B87B938F2BCBD84D_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B87B938F2BCBD84D_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_SYNCTARGETDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RelicBox::RelicBoxSuitPlanData* GetCustomRelicBoxSuitPlanData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RelicBox::RelicBoxSuitPlanData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_GETCUSTOMRELICBOXSUITPLANDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RelicBox::RelicBoxSuitPlanData* GetRecommendRelicBoxSuitPlanData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RelicBox::RelicBoxSuitPlanData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXSUITPLANDATAMANAGER_GETRECOMMENDRELICBOXSUITPLANDATA_OFFSET))(this, a1);
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
