#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_75219786140526ED___c__DisplayClass3_1.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/System/Object.h"

class Class_1_06E38C65842C3B24;
class Class_1_5EBDCA5E10FB9D5A;
namespace RPG::Client { class BaseChallengeTargetData; }
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceBattlePauseViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultBase; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTargetsViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_75219786140526ED_METHOD_1_03ACAC1FDEFA7A9D_OFFSET UNITYSDK_OFFSET(0x19BF5B90)
#define CLASS_1_75219786140526ED_METHOD_1_08F0E486A3A950A0_OFFSET UNITYSDK_OFFSET(0x19BF5F90)
#define CLASS_1_75219786140526ED_METHOD_1_3FD4FB72EB6E49A1_OFFSET UNITYSDK_OFFSET(0x19BF5CC0)
#define CLASS_1_75219786140526ED_METHOD_1_76A5985E2B185BE0_OFFSET UNITYSDK_OFFSET(0x19BF6350)
#define CLASS_1_75219786140526ED___CREATEFORMEMORY_G__CREATESTAGERESULTS_2_0_OFFSET UNITYSDK_OFFSET(0x19BF6780)
#define CLASS_1_75219786140526ED___CREATEFORSTORY_G__CHECKISPASSED_3_2_OFFSET UNITYSDK_OFFSET(0x19BF7010)
#define CLASS_1_75219786140526ED___CREATEFORSTORY_G__CREATESTAGERESULTS_3_3_OFFSET UNITYSDK_OFFSET(0x19BF70B0)
#define CLASS_1_75219786140526ED___CREATEFORSTORY_G__CREATETARGETS_3_4_OFFSET UNITYSDK_OFFSET(0x19BF7400)
#define CLASS_1_75219786140526ED___CREATEFORSTORY_G__DETERMINESTATE_3_8_OFFSET UNITYSDK_OFFSET(0x19BF79C0)
#define CLASS_1_75219786140526ED___CREATEFORSTORY_G__GETREALTIMECURRENTSTAGESCORE_3_1_OFFSET UNITYSDK_OFFSET(0x19BF6DC0)
#define CLASS_1_75219786140526ED___CREATEFORSTORY_G__GETREALTIMETOTALSCORE_3_0_OFFSET UNITYSDK_OFFSET(0x19BF6B80)

inline static constexpr unsigned int Class_1_75219786140526ED_TypeDefinitionIndex = 80236;

class Class_1_75219786140526ED : public ::System::Object
{
public:
	static ::RPG::Client::Challenge::Tierce::ChallengeTierceBattlePauseViewModel* Method_1_03ACAC1FDEFA7A9D(::RPG::Client::ChallengeGroupData* a1, ::Class_1_5EBDCA5E10FB9D5A* a2)
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceBattlePauseViewModel*(*)(::RPG::Client::ChallengeGroupData*, ::Class_1_5EBDCA5E10FB9D5A*))((::PBYTE)hIl2Cpp + CLASS_1_75219786140526ED_METHOD_1_03ACAC1FDEFA7A9D_OFFSET))(a1, a2);
	}

	static ::RPG::Client::Challenge::Tierce::ChallengeTierceBattlePauseViewModel* Method_1_76A5985E2B185BE0(::RPG::Client::ChallengeGroupData* a1, ::Class_1_5EBDCA5E10FB9D5A* a2)
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceBattlePauseViewModel*(*)(::RPG::Client::ChallengeGroupData*, ::Class_1_5EBDCA5E10FB9D5A*))((::PBYTE)hIl2Cpp + CLASS_1_75219786140526ED_METHOD_1_76A5985E2B185BE0_OFFSET))(a1, a2);
	}

	static ::RPG::Client::Challenge::Tierce::ChallengeTierceBattlePauseViewModel* Method_1_3FD4FB72EB6E49A1(::RPG::Client::ChallengeGroupData* a1, ::Class_1_5EBDCA5E10FB9D5A* a2)
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceBattlePauseViewModel*(*)(::RPG::Client::ChallengeGroupData*, ::Class_1_5EBDCA5E10FB9D5A*))((::PBYTE)hIl2Cpp + CLASS_1_75219786140526ED_METHOD_1_3FD4FB72EB6E49A1_OFFSET))(a1, a2);
	}

	static ::RPG::Client::Challenge::Tierce::ChallengeTierceBattlePauseViewModel* Method_1_08F0E486A3A950A0(::RPG::Client::ChallengeGroupData* a1, ::Class_1_5EBDCA5E10FB9D5A* a2)
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceBattlePauseViewModel*(*)(::RPG::Client::ChallengeGroupData*, ::Class_1_5EBDCA5E10FB9D5A*))((::PBYTE)hIl2Cpp + CLASS_1_75219786140526ED_METHOD_1_08F0E486A3A950A0_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*>* __CreateForMemory_g__CreateStageResults_2_0(::Class_1_5EBDCA5E10FB9D5A* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*>*(*)(::Class_1_5EBDCA5E10FB9D5A*))((::PBYTE)hIl2Cpp + CLASS_1_75219786140526ED___CREATEFORMEMORY_G__CREATESTAGERESULTS_2_0_OFFSET))(a1);
	}

	static ::System::Int32 __CreateForStory_g__GetRealTimeTotalScore_3_0()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_75219786140526ED___CREATEFORSTORY_G__GETREALTIMETOTALSCORE_3_0_OFFSET))();
	}

	static ::System::Int32 __CreateForStory_g__GetRealTimeCurrentStageScore_3_1(::Class_1_5EBDCA5E10FB9D5A* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::Class_1_5EBDCA5E10FB9D5A*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_75219786140526ED___CREATEFORSTORY_G__GETREALTIMECURRENTSTAGESCORE_3_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean __CreateForStory_g__CheckIsPassed_3_2(::Class_1_06E38C65842C3B24* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::Class_1_06E38C65842C3B24*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_75219786140526ED___CREATEFORSTORY_G__CHECKISPASSED_3_2_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*>* __CreateForStory_g__CreateStageResults_3_3(::Class_1_5EBDCA5E10FB9D5A* a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*>*(*)(::Class_1_5EBDCA5E10FB9D5A*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_75219786140526ED___CREATEFORSTORY_G__CREATESTAGERESULTS_3_3_OFFSET))(a1, a2);
	}

	static ::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* __CreateForStory_g__CreateTargets_3_4(::Class_1_06E38C65842C3B24* a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel*(*)(::Class_1_06E38C65842C3B24*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_75219786140526ED___CREATEFORSTORY_G__CREATETARGETS_3_4_OFFSET))(a1, a2);
	}

	static ::RPG::Client::ChallengeTargetState __CreateForStory_g__DetermineState_3_8(::RPG::Client::BaseChallengeTargetData* a1, ::Class_1_75219786140526ED___c__DisplayClass3_1& a2)
	{
		return ((::RPG::Client::ChallengeTargetState(*)(::RPG::Client::BaseChallengeTargetData*, ::Class_1_75219786140526ED___c__DisplayClass3_1&))((::PBYTE)hIl2Cpp + CLASS_1_75219786140526ED___CREATEFORSTORY_G__DETERMINESTATE_3_8_OFFSET))(a1, a2);
	}
};
