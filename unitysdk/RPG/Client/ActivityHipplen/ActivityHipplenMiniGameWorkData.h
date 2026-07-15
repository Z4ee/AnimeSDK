#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenWorkData.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"

class Class_0_16E4307DCC419505_1198;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_GET_GRADEEFFECTSDICT_OFFSET UNITYSDK_OFFSET(0x19BC4E30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_GET_GRADEEFFECTVIEWDATADICT_OFFSET UNITYSDK_OFFSET(0x19BC4E50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_SET_GRADEEFFECTSDICT_OFFSET UNITYSDK_OFFSET(0x19BC4E40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_SET_GRADEEFFECTVIEWDATADICT_OFFSET UNITYSDK_OFFSET(0x19BC4E60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC4740)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA__INITWORKEFFECTS_OFFSET UNITYSDK_OFFSET(0x19BC4750)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenMiniGameWorkData_TypeDefinitionIndex = 72005;

	class ActivityHipplenMiniGameWorkData : public ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1198*>*>* _GradeEffectsDict_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>* _GradeEffectViewDataDict_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _InitWorkEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA__INITWORKEFFECTS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1198*>*>* get_GradeEffectsDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1198*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_GET_GRADEEFFECTSDICT_OFFSET))(this);
		}

		::System::Void set_GradeEffectsDict(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1198*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1198*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_SET_GRADEEFFECTSDICT_OFFSET))(this, a1);
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
