#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::RelicBox { class RelicBoxRewardDataGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAMANAGER_GETALLREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xC6D71E0)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAMANAGER_GETRELICBOXREWARDDATALIST_OFFSET UNITYSDK_OFFSET(0xC6D71A0)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAMANAGER_GETTAKENREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xC6D7290)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAMANAGER_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xC6D70F0)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xC6D2470)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xC6D6330)

namespace RPG::Client::RelicBox
{
	inline static constexpr unsigned int RelicBoxRewardDataManager_TypeDefinitionIndex = 69531;

	class RelicBoxRewardDataManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RelicBox::RelicBoxRewardDataGroup*>* _RewardList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAMANAGER_INIT_OFFSET))(this);
		}

		::System::Boolean HasAnyRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAMANAGER_HASANYREWARDCANTAKE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicBox::RelicBoxRewardDataGroup*>* GetRelicBoxRewardDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicBox::RelicBoxRewardDataGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAMANAGER_GETRELICBOXREWARDDATALIST_OFFSET))(this);
		}

		::System::Int32 GetAllRewardCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAMANAGER_GETALLREWARDCOUNT_OFFSET))(this);
		}

		::System::Int32 GetTakenRewardCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATAMANAGER_GETTAKENREWARDCOUNT_OFFSET))(this);
		}
	};
}
