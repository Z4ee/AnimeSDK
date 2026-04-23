#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::SwordTraining { class SwordTrainingRandomEventEffectDisplayDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA_ADDMOOD_OFFSET UNITYSDK_OFFSET(0xB24BF70)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA_ADDSKILLPOINT_OFFSET UNITYSDK_OFFSET(0xB24BEE0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA_ADDSTATUS_OFFSET UNITYSDK_OFFSET(0xB24C090)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA_FETCHDISPLAYDATAITEMS_OFFSET UNITYSDK_OFFSET(0xB24C180)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA_SUBMOOD_OFFSET UNITYSDK_OFFSET(0xB24C000)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB24BDF0)

namespace RPG::Client::SwordTraining
{
	inline static constexpr unsigned int SwordTrainingRandomEventOptionEffectDisplayData_TypeDefinitionIndex = 69102;

	class SwordTrainingRandomEventOptionEffectDisplayData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _StatusChangeValueDict; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingRandomEventEffectDisplayDataItem*>* _DisplayItems; // 0x18
		::System::Int32 _SkillPointChangeValue; // 0x20
		::System::Int32 _MoodChangeValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA__CTOR_OFFSET))(this);
		}

		::System::Void AddSkillPoint(::System::UInt32 val, ::RPG::Client::SwordTraining::SwordTrainingEffectSource source)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA_ADDSKILLPOINT_OFFSET))(this, val, source);
		}

		::System::Void AddMood(::System::UInt32 val, ::RPG::Client::SwordTraining::SwordTrainingEffectSource source)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA_ADDMOOD_OFFSET))(this, val, source);
		}

		::System::Void SubMood(::System::UInt32 val, ::RPG::Client::SwordTraining::SwordTrainingEffectSource source)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA_SUBMOOD_OFFSET))(this, val, source);
		}

		::System::Void AddStatus(::System::UInt32 typeInt, ::System::UInt32 val, ::RPG::Client::SwordTraining::SwordTrainingEffectSource source)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA_ADDSTATUS_OFFSET))(this, typeInt, val, source);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingRandomEventEffectDisplayDataItem*>* FetchDisplayDataItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingRandomEventEffectDisplayDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA_FETCHDISPLAYDATAITEMS_OFFSET))(this);
		}
	};
}
