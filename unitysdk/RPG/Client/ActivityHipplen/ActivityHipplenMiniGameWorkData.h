#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenWorkData.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"

class Class_0_16E4307DCC419505_973;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_GET_GRADEEFFECTSDICT_OFFSET UNITYSDK_OFFSET(0x8F28060)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_GET_GRADEEFFECTVIEWDATADICT_OFFSET UNITYSDK_OFFSET(0x8F28080)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_SET_GRADEEFFECTSDICT_OFFSET UNITYSDK_OFFSET(0x8F28070)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_SET_GRADEEFFECTVIEWDATADICT_OFFSET UNITYSDK_OFFSET(0x8F28090)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8F27470)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA__INITWORKEFFECTS_OFFSET UNITYSDK_OFFSET(0x8F274F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA___IFIXBASEPROXY__INITWORKEFFECTS_OFFSET UNITYSDK_OFFSET(0x8F280A0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenMiniGameWorkData_TypeDefinitionIndex = 61760;

	class ActivityHipplenMiniGameWorkData : public ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>* _GradeEffectViewDataDict_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_973*>*>* _GradeEffectsDict_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 id, ::System::Boolean isFixed, ::System::Boolean isRecommend, ::System::Boolean isFinish, ::System::Boolean isExtra)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA__CTOR_OFFSET))(this, id, isFixed, isRecommend, isFinish, isExtra);
		}

		::System::Void _InitWorkEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA__INITWORKEFFECTS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_973*>*>* get_GradeEffectsDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_973*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_GET_GRADEEFFECTSDICT_OFFSET))(this);
		}

		::System::Void set_GradeEffectsDict(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_973*>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_973*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_SET_GRADEEFFECTSDICT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>* get_GradeEffectViewDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_GET_GRADEEFFECTVIEWDATADICT_OFFSET))(this);
		}

		::System::Void set_GradeEffectViewDataDict(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HipplenGameGradeType, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA_SET_GRADEEFFECTVIEWDATADICT_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy__InitWorkEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENMINIGAMEWORKDATA___IFIXBASEPROXY__INITWORKEFFECTS_OFFSET))(this);
		}
	};
}
