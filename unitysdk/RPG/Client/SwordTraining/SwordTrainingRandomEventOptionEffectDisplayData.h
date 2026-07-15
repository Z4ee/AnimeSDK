#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingEffectSource.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::SwordTraining { class SwordTrainingRandomEventEffectDisplayDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA_ADDMOOD_OFFSET UNITYSDK_OFFSET(0x19C66AA0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA_ADDSKILLPOINT_OFFSET UNITYSDK_OFFSET(0x19C669F0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA_ADDSTATUS_OFFSET UNITYSDK_OFFSET(0x19C66C00)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA_FETCHDISPLAYDATAITEMS_OFFSET UNITYSDK_OFFSET(0x19C66D60)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA_SUBMOOD_OFFSET UNITYSDK_OFFSET(0x19C66B50)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19C668C0)

namespace RPG::Client::SwordTraining
{
	inline static constexpr unsigned int SwordTrainingRandomEventOptionEffectDisplayData_TypeDefinitionIndex = 71437;

	class SwordTrainingRandomEventOptionEffectDisplayData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingRandomEventEffectDisplayDataItem*>* _DisplayItems; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _StatusChangeValueDict; // 0x18
		::System::Int32 _SkillPointChangeValue; // 0x20
		::System::Int32 _MoodChangeValue; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA__CTOR_OFFSET))(this);
		}

		::System::Void AddSkillPoint(::System::UInt32 a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA_ADDSKILLPOINT_OFFSET))(this, a1, a2);
		}

		::System::Void AddMood(::System::UInt32 a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA_ADDMOOD_OFFSET))(this, a1, a2);
		}

		::System::Void SubMood(::System::UInt32 a1, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA_SUBMOOD_OFFSET))(this, a1, a2);
		}

		::System::Void AddStatus(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::SwordTraining::SwordTrainingEffectSource a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingEffectSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA_ADDSTATUS_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingRandomEventEffectDisplayDataItem*>* FetchDisplayDataItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingRandomEventEffectDisplayDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGRANDOMEVENTOPTIONEFFECTDISPLAYDATA_FETCHDISPLAYDATAITEMS_OFFSET))(this);
		}
	};
}
