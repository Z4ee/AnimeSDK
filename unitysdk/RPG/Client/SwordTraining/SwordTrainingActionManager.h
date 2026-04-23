#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2EC37637598BC283.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_84;
namespace RPG::Client::SwordTraining { class SwordTrainingActionData; }
namespace RPG::Client::SwordTraining { class SwordTrainingActionSelection; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_CLEARALLHIGHLIGHTSTATE_OFFSET UNITYSDK_OFFSET(0xB246F30)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_CONFIRMSELECTEDACTIONS_OFFSET UNITYSDK_OFFSET(0xB247180)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB246CE0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_GETACTIONDATAENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB247080)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_GETACTIONDATA_OFFSET UNITYSDK_OFFSET(0xB244A40)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xB246970)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0xB246D90)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_UPDATEINFOAFTERSERVERCONFIRMSELECTEDACTIONS_OFFSET UNITYSDK_OFFSET(0xB2478C0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB247DC0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER__INITTRAININGACTIONINFOS_OFFSET UNITYSDK_OFFSET(0xB2469C0)

namespace RPG::Client::SwordTraining
{
	inline static constexpr unsigned int SwordTrainingActionManager_TypeDefinitionIndex = 69120;

	class SwordTrainingActionManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingActionData*>* _AllActionInfos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_D40936EF3BF54118_84* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_84*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_SYNC_OFFSET))(this, serverInfo);
		}

		::System::Void ClearAllHighlightState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_CLEARALLHIGHLIGHTSTATE_OFFSET))(this);
		}

		::Struct_2_2EC37637598BC283 GetActionDataEnumerator()
		{
			return ((::Struct_2_2EC37637598BC283(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_GETACTIONDATAENUMERATOR_OFFSET))(this);
		}

		::RPG::Client::SwordTraining::SwordTrainingActionData* GetActionData(::System::UInt32 actionID)
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingActionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_GETACTIONDATA_OFFSET))(this, actionID);
		}

		::System::Void ConfirmSelectedActions(::RPG::Client::SwordTraining::SwordTrainingActionSelection* selection)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionSelection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_CONFIRMSELECTEDACTIONS_OFFSET))(this, selection);
		}

		::System::Void UpdateInfoAfterServerConfirmSelectedActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_UPDATEINFOAFTERSERVERCONFIRMSELECTEDACTIONS_OFFSET))(this);
		}

		::System::Void _InitTrainingActionInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER__INITTRAININGACTIONINFOS_OFFSET))(this);
		}
	};
}
