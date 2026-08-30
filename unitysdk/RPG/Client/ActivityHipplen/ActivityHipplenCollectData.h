#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9305CDA54C32E908;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEndingData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenTraitData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_CHECKENDINGISUNLOCK_OFFSET UNITYSDK_OFFSET(0xC538F30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_CHECKTRAITISUNLOCK_OFFSET UNITYSDK_OFFSET(0xC538CE0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_GETENDINGCOLLECTDATALIST_OFFSET UNITYSDK_OFFSET(0xC539860)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_GETTRAITCOLLECTDATALIST_OFFSET UNITYSDK_OFFSET(0xC539250)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_RECEIVEENDINGREWARD_OFFSET UNITYSDK_OFFSET(0xC5391F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC5383E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_UNLOCKENDING_OFFSET UNITYSDK_OFFSET(0xC538F90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_UNLOCKTRAIT_OFFSET UNITYSDK_OFFSET(0xC538DA0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC5382D0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenCollectData_TypeDefinitionIndex = 75198;

	class ActivityHipplenCollectData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedTraitIDList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _UnlockedEndingIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_9305CDA54C32E908* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9305CDA54C32E908*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Boolean CheckTraitIsUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_CHECKTRAITISUNLOCK_OFFSET))(this, a1);
		}

		::System::Void UnlockTrait(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_UNLOCKTRAIT_OFFSET))(this, a1);
		}

		::System::Boolean CheckEndingIsUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_CHECKENDINGISUNLOCK_OFFSET))(this, a1);
		}

		::System::Void UnlockEnding(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_UNLOCKENDING_OFFSET))(this, a1);
		}

		::System::Void ReceiveEndingReward(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_RECEIVEENDINGREWARD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>* GetTraitCollectDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_GETTRAITCOLLECTDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEndingData*>* GetEndingCollectDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEndingData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_GETENDINGCOLLECTDATALIST_OFFSET))(this);
		}
	};
}
