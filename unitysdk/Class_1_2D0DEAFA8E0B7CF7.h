#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1043;
namespace RPG::GameCore::Booklet { class FadeInStepConfig; }
namespace RPG::GameCore::Booklet { class MarkSectionHasReadStepConfig; }
namespace RPG::GameCore::Booklet { class MarkSpreadHasReadStepConfig; }
namespace RPG::GameCore::Booklet { class ParallelStepConfig; }
namespace RPG::GameCore::Booklet { class PlayVoiceStepConfig; }
namespace RPG::GameCore::Booklet { class SequenceStepConfig; }
namespace RPG::GameCore::Booklet { class SkipTimerStepConfig; }
namespace RPG::GameCore::Booklet { class SpreadStepConfig; }
namespace RPG::GameCore::Booklet { class StepConfig; }
namespace RPG::GameCore::Booklet { class WaitAutoPlayStepConfig; }
namespace RPG::GameCore::Booklet { class WaitSecondsStepConfig; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_01C6A36A764E69F6_OFFSET UNITYSDK_OFFSET(0x14228EB0)
#define CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_06EF87F158C69F7E_OFFSET UNITYSDK_OFFSET(0x142296D0)
#define CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_08957AC83709FF86_OFFSET UNITYSDK_OFFSET(0x14229620)
#define CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_1994CE8A3615C278_OFFSET UNITYSDK_OFFSET(0x142295A0)
#define CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_1C16316D78B7B9DF_OFFSET UNITYSDK_OFFSET(0x14229410)
#define CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_3296E96A025FCCE1_OFFSET UNITYSDK_OFFSET(0x14228FF0)
#define CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_33E49721187A8510_OFFSET UNITYSDK_OFFSET(0x14229520)
#define CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_5D6549CC70A94CA6_OFFSET UNITYSDK_OFFSET(0x142294A0)
#define CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_8C4BFDD83E495599_OFFSET UNITYSDK_OFFSET(0x14228D20)
#define CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_B752E8A03FCDAD54_OFFSET UNITYSDK_OFFSET(0x14229370)
#define CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_C643F1741F44567B_OFFSET UNITYSDK_OFFSET(0x142291B0)
#define CLASS_1_2D0DEAFA8E0B7CF7__CTOR_OFFSET UNITYSDK_OFFSET(0x14228A20)

inline static constexpr unsigned int Class_1_2D0DEAFA8E0B7CF7_TypeDefinitionIndex = 67672;

class Class_1_2D0DEAFA8E0B7CF7 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_2<::RPG::GameCore::Booklet::StepConfig*, ::Class_0_16E4307DCC419505_1043*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D0DEAFA8E0B7CF7__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1043*>* Method_1_8C4BFDD83E495599(::RPG::GameCore::Booklet::SpreadStepConfig* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1043*>*(*)(::PVOID, ::RPG::GameCore::Booklet::SpreadStepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_8C4BFDD83E495599_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1043* Method_1_01C6A36A764E69F6(::RPG::GameCore::Booklet::StepConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_1043*(*)(::PVOID, ::RPG::GameCore::Booklet::StepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_01C6A36A764E69F6_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1043* Method_1_3296E96A025FCCE1(::RPG::GameCore::Booklet::SequenceStepConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_1043*(*)(::PVOID, ::RPG::GameCore::Booklet::SequenceStepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_3296E96A025FCCE1_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1043* Method_1_C643F1741F44567B(::RPG::GameCore::Booklet::ParallelStepConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_1043*(*)(::PVOID, ::RPG::GameCore::Booklet::ParallelStepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_C643F1741F44567B_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1043* Method_1_B752E8A03FCDAD54(::RPG::GameCore::Booklet::WaitSecondsStepConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_1043*(*)(::PVOID, ::RPG::GameCore::Booklet::WaitSecondsStepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_B752E8A03FCDAD54_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1043* Method_1_1C16316D78B7B9DF(::RPG::GameCore::Booklet::FadeInStepConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_1043*(*)(::PVOID, ::RPG::GameCore::Booklet::FadeInStepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_1C16316D78B7B9DF_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1043* Method_1_5D6549CC70A94CA6(::RPG::GameCore::Booklet::MarkSpreadHasReadStepConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_1043*(*)(::PVOID, ::RPG::GameCore::Booklet::MarkSpreadHasReadStepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_5D6549CC70A94CA6_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1043* Method_1_33E49721187A8510(::RPG::GameCore::Booklet::MarkSectionHasReadStepConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_1043*(*)(::PVOID, ::RPG::GameCore::Booklet::MarkSectionHasReadStepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_33E49721187A8510_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1043* Method_1_1994CE8A3615C278(::RPG::GameCore::Booklet::WaitAutoPlayStepConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_1043*(*)(::PVOID, ::RPG::GameCore::Booklet::WaitAutoPlayStepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_1994CE8A3615C278_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1043* Method_1_08957AC83709FF86(::RPG::GameCore::Booklet::SkipTimerStepConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_1043*(*)(::PVOID, ::RPG::GameCore::Booklet::SkipTimerStepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_08957AC83709FF86_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1043* Method_1_06EF87F158C69F7E(::RPG::GameCore::Booklet::PlayVoiceStepConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_1043*(*)(::PVOID, ::RPG::GameCore::Booklet::PlayVoiceStepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2D0DEAFA8E0B7CF7_METHOD_1_06EF87F158C69F7E_OFFSET))(this, a1);
	}
};
