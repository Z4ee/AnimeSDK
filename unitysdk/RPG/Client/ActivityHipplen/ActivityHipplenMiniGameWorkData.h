#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenWorkData.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"

class Class_0_16E4307DCC419505_1258;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_GET_GRADEEFFECTSDICT_OFFSET UNITYSDK_OFFSET(0x1B7B49E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_GET_GRADEEFFECTVIEWDATADICT_OFFSET UNITYSDK_OFFSET(0x1B7B4A00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_SET_GRADEEFFECTSDICT_OFFSET UNITYSDK_OFFSET(0x1B7B49F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_SET_GRADEEFFECTVIEWDATADICT_OFFSET UNITYSDK_OFFSET(0x1B7B4A10)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7B42F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA__INITWORKEFFECTS_OFFSET UNITYSDK_OFFSET(0x1B7B4300)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenMiniGameWorkData_TypeDefinitionIndex = 75311;

	class ActivityHipplenMiniGameWorkData : public ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>* _GradeEffectViewDataDict_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1258*>*>* _GradeEffectsDict_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _InitWorkEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA__INITWORKEFFECTS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1258*>*>* get_GradeEffectsDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1258*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_GET_GRADEEFFECTSDICT_OFFSET))(this);
		}

		::System::Void set_GradeEffectsDict(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1258*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1258*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_SET_GRADEEFFECTSDICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>* get_GradeEffectViewDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_GET_GRADEEFFECTVIEWDATADICT_OFFSET))(this);
		}

		::System::Void set_GradeEffectViewDataDict(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_SET_GRADEEFFECTVIEWDATADICT_OFFSET))(this, a1);
		}
	};
}
