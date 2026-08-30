#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1397;
class Class_0_16E4307DCC419505_318;
class Class_1_06E38C65842C3B24;
class Class_1_19DB14C0C5CFE108;
class Class_1_37CFE50712AC363B;
class Class_1_37CFE50712AC363B_Class_1_40144881BA5B5725;
class Class_1_5EBDCA5E10FB9D5A;
class Class_1_97E659ED8D5D259C_23;
class Class_1_FD21020B0878C0A0;
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordBase; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceResultBadgeNoticeViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceResultBadgeNoticeViewModel_Factory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTargetsViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_115E551636659526_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC37A7D0)
#define CLASS_1_115E551636659526_GET_CURRENTSESSIONRECORD_OFFSET UNITYSDK_OFFSET(0xC379E20)
#define CLASS_1_115E551636659526_GET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0xC379E90)
#define CLASS_1_115E551636659526_GET_SHOWREWARDDETAILCOMMAND_OFFSET UNITYSDK_OFFSET(0xC37A130)
#define CLASS_1_115E551636659526_GET_STAGES_OFFSET UNITYSDK_OFFSET(0xC379900)
#define CLASS_1_115E551636659526_GET_TARGETS_OFFSET UNITYSDK_OFFSET(0xC379CD0)
#define CLASS_1_115E551636659526_METHOD_1_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0xC379BE0)
#define CLASS_1_115E551636659526_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xC379E30)
#define CLASS_1_115E551636659526_METHOD_1_1E5BC75FD81F8703_OFFSET UNITYSDK_OFFSET(0xC3799D0)
#define CLASS_1_115E551636659526_METHOD_1_2975D910FEF48882_OFFSET UNITYSDK_OFFSET(0xC379D70)
#define CLASS_1_115E551636659526_METHOD_1_742A114BB44F2EFA_OFFSET UNITYSDK_OFFSET(0xC379810)
#define CLASS_1_115E551636659526_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xC379910)
#define CLASS_1_115E551636659526_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0xC379710)
#define CLASS_1_115E551636659526_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xC379CE0)
#define CLASS_1_115E551636659526_METHOD_1_AD331C687D23A379_OFFSET UNITYSDK_OFFSET(0xC37A0E0)
#define CLASS_1_115E551636659526_METHOD_1_B213056103887067_1_OFFSET UNITYSDK_OFFSET(0xC379F60)
#define CLASS_1_115E551636659526_METHOD_1_B213056103887067_2_OFFSET UNITYSDK_OFFSET(0xC37A020)
#define CLASS_1_115E551636659526_METHOD_1_B213056103887067_OFFSET UNITYSDK_OFFSET(0xC379EA0)
#define CLASS_1_115E551636659526_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0xC379860)
#define CLASS_1_115E551636659526_METHOD_1_BD83D9A311EA4A81_OFFSET UNITYSDK_OFFSET(0xC379760)
#define CLASS_1_115E551636659526_METHOD_1_C073386EB70C90B2_OFFSET UNITYSDK_OFFSET(0xC379960)
#define CLASS_1_115E551636659526__CTOR_OFFSET UNITYSDK_OFFSET(0xC37A140)
#define CLASS_1_115E551636659526__GET_CONTINUECOMMAND_B__46_0_OFFSET UNITYSDK_OFFSET(0xC37AD40)
#define CLASS_1_115E551636659526__GET_CONTINUECOMMAND_B__46_1_OFFSET UNITYSDK_OFFSET(0xC37B020)
#define CLASS_1_115E551636659526__GET_EXITCOMMAND_B__40_0_OFFSET UNITYSDK_OFFSET(0xC37AD00)
#define CLASS_1_115E551636659526__GET_RESTARTCOMMAND_B__43_0_OFFSET UNITYSDK_OFFSET(0xC37AD20)

inline static constexpr unsigned int Class_1_115E551636659526_TypeDefinitionIndex = 80283;

class Class_1_115E551636659526 : public ::System::Object
{
public:
	::Sofa::Core::SimpleCommand* APHMKBFPPPD; // 0x10
	::Class_1_19DB14C0C5CFE108* KOADDJDNCKO; // 0x18
	::Class_1_5EBDCA5E10FB9D5A* PFJGDJPMAMM; // 0x20
	::RPG::Client::ChallengeData* HBPBNOCLCPA; // 0x28
	::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* _Targets_k__BackingField; // 0x30
	::Class_0_16E4307DCC419505_318* _ShowRewardDetailCommand_k__BackingField; // 0x38
	::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* _CurrentSessionRecord_k__BackingField; // 0x40
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_37CFE50712AC363B*>* _Stages_k__BackingField; // 0x48
	::Sofa::Core::SimpleCommand* LCGBLFOHNFA; // 0x50
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_FD21020B0878C0A0*>* _RewardItems_k__BackingField; // 0x58
	::Sofa::Core::SimpleCommand* KNOPHJEEPGJ; // 0x60
	::RPG::Client::Challenge::Tierce::ChallengeTierceResultBadgeNoticeViewModel* GPDIDCGEEEC; // 0x68

	::System::Void _ctor(::Class_1_37CFE50712AC363B_Class_1_40144881BA5B5725* a1, ::RPG::Client::Challenge::Tierce::ChallengeTierceResultBadgeNoticeViewModel_Factory* a2, ::Class_0_16E4307DCC419505_1397* a3, ::Class_1_19DB14C0C5CFE108* a4, ::RPG::Client::ChallengeGroupData* a5, ::Class_1_5EBDCA5E10FB9D5A* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_37CFE50712AC363B_Class_1_40144881BA5B5725*, ::RPG::Client::Challenge::Tierce::ChallengeTierceResultBadgeNoticeViewModel_Factory*, ::Class_0_16E4307DCC419505_1397*, ::Class_1_19DB14C0C5CFE108*, ::RPG::Client::ChallengeGroupData*, ::Class_1_5EBDCA5E10FB9D5A*))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_1_06E38C65842C3B24* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_06E38C65842C3B24*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_BD83D9A311EA4A81()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526_METHOD_1_BD83D9A311EA4A81_OFFSET))(this);
	}

	::RPG::GameCore::ChallengeGroupType Method_1_742A114BB44F2EFA()
	{
		return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526_METHOD_1_742A114BB44F2EFA_OFFSET))(this);
	}

	::Class_1_97E659ED8D5D259C_23* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_97E659ED8D5D259C_23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526_METHOD_1_B64C60973842FE45_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_37CFE50712AC363B*>* get_Stages()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_37CFE50712AC363B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526_GET_STAGES_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> Method_1_C073386EB70C90B2()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526_METHOD_1_C073386EB70C90B2_OFFSET))(this);
	}

	::System::Boolean Method_1_1E5BC75FD81F8703()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526_METHOD_1_1E5BC75FD81F8703_OFFSET))(this);
	}

	::System::Boolean Method_1_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526_METHOD_1_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel* get_Targets()
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTargetsViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526_GET_TARGETS_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* Method_1_2975D910FEF48882()
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526_METHOD_1_2975D910FEF48882_OFFSET))(this);
	}

	::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* get_CurrentSessionRecord()
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526_GET_CURRENTSESSIONRECORD_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_FD21020B0878C0A0*>* get_RewardItems()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_FD21020B0878C0A0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526_GET_REWARDITEMS_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* Method_1_B213056103887067()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526_METHOD_1_B213056103887067_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* Method_1_B213056103887067_1()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526_METHOD_1_B213056103887067_1_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* Method_1_B213056103887067_2()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526_METHOD_1_B213056103887067_2_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* Method_1_AD331C687D23A379()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526_METHOD_1_AD331C687D23A379_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* get_ShowRewardDetailCommand()
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526_GET_SHOWREWARDDETAILCOMMAND_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526_DISPOSE_OFFSET))(this);
	}

	::System::Void _get_ExitCommand_b__40_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526__GET_EXITCOMMAND_B__40_0_OFFSET))(this);
	}

	::System::Void _get_RestartCommand_b__43_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526__GET_RESTARTCOMMAND_B__43_0_OFFSET))(this);
	}

	::System::Void _get_ContinueCommand_b__46_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526__GET_CONTINUECOMMAND_B__46_0_OFFSET))(this);
	}

	::System::Void _get_ContinueCommand_b__46_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_115E551636659526__GET_CONTINUECOMMAND_B__46_1_OFFSET))(this, a1);
	}
};
