#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867606D9C6217C6D_1;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEndingData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenTraitData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_CHECKENDINGISUNLOCK_OFFSET UNITYSDK_OFFSET(0x8F11EF0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_CHECKTRAITISUNLOCK_OFFSET UNITYSDK_OFFSET(0x8F11D20)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_GETENDINGCOLLECTDATALIST_OFFSET UNITYSDK_OFFSET(0x8F12500)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_GETTRAITCOLLECTDATALIST_OFFSET UNITYSDK_OFFSET(0x8F12210)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_RECEIVEENDINGREWARD_OFFSET UNITYSDK_OFFSET(0x8F121B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x8F116A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_UNLOCKENDING_OFFSET UNITYSDK_OFFSET(0x8F11F50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_UNLOCKTRAIT_OFFSET UNITYSDK_OFFSET(0x8F11D80)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8F115E0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenCollectData_TypeDefinitionIndex = 61646;

	class ActivityHipplenCollectData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedTraitIDList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _UnlockedEndingIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_867606D9C6217C6D_1* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_867606D9C6217C6D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_SYNC_OFFSET))(this, rsp);
		}

		::System::Boolean CheckTraitIsUnlock(::System::UInt32 traitID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_CHECKTRAITISUNLOCK_OFFSET))(this, traitID);
		}

		::System::Void UnlockTrait(::System::UInt32 traitID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_UNLOCKTRAIT_OFFSET))(this, traitID);
		}

		::System::Boolean CheckEndingIsUnlock(::System::UInt32 endingID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_CHECKENDINGISUNLOCK_OFFSET))(this, endingID);
		}

		::System::Void UnlockEnding(::System::UInt32 endingID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_UNLOCKENDING_OFFSET))(this, endingID);
		}

		::System::Void ReceiveEndingReward(::System::UInt32 endingID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENCOLLECTDATA_RECEIVEENDINGREWARD_OFFSET))(this, endingID);
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
