#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_993;
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

#define CLASS_1_E854EA6097856B6D_METHOD_1_06EF87F158C69F7E_OFFSET UNITYSDK_OFFSET(0x9672320)
#define CLASS_1_E854EA6097856B6D_METHOD_1_08957AC83709FF86_OFFSET UNITYSDK_OFFSET(0x9672270)
#define CLASS_1_E854EA6097856B6D_METHOD_1_09948BA647EDE15D_OFFSET UNITYSDK_OFFSET(0x9671B00)
#define CLASS_1_E854EA6097856B6D_METHOD_1_17373A42A83D2EC5_OFFSET UNITYSDK_OFFSET(0x96720F0)
#define CLASS_1_E854EA6097856B6D_METHOD_1_1C16316D78B7B9DF_OFFSET UNITYSDK_OFFSET(0x9672060)
#define CLASS_1_E854EA6097856B6D_METHOD_1_7D6964C98349E95C_OFFSET UNITYSDK_OFFSET(0x9671E60)
#define CLASS_1_E854EA6097856B6D_METHOD_1_9D6A7ED10206B8AE_OFFSET UNITYSDK_OFFSET(0x9671C40)
#define CLASS_1_E854EA6097856B6D_METHOD_1_A9D19A982E44005B_OFFSET UNITYSDK_OFFSET(0x9672170)
#define CLASS_1_E854EA6097856B6D_METHOD_1_B752E8A03FCDAD54_OFFSET UNITYSDK_OFFSET(0x9671FC0)
#define CLASS_1_E854EA6097856B6D_METHOD_1_C9CCCB7EA8DA024A_OFFSET UNITYSDK_OFFSET(0x9671D00)
#define CLASS_1_E854EA6097856B6D_METHOD_1_CF7EA7970A5E9783_OFFSET UNITYSDK_OFFSET(0x96721F0)
#define CLASS_1_E854EA6097856B6D__CTOR_OFFSET UNITYSDK_OFFSET(0x9671880)

inline static constexpr unsigned int Class_1_E854EA6097856B6D_TypeDefinitionIndex = 66732;

class Class_1_E854EA6097856B6D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_2<::RPG::GameCore::Booklet::StepConfig*, ::Class_0_16E4307DCC419505_993*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E854EA6097856B6D__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_993*>* Method_1_09948BA647EDE15D(::RPG::GameCore::Booklet::SpreadStepConfig* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_993*>*(*)(::PVOID, ::RPG::GameCore::Booklet::SpreadStepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E854EA6097856B6D_METHOD_1_09948BA647EDE15D_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_993* Method_1_9D6A7ED10206B8AE(::RPG::GameCore::Booklet::StepConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_993*(*)(::PVOID, ::RPG::GameCore::Booklet::StepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E854EA6097856B6D_METHOD_1_9D6A7ED10206B8AE_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_993* Method_1_C9CCCB7EA8DA024A(::RPG::GameCore::Booklet::SequenceStepConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_993*(*)(::PVOID, ::RPG::GameCore::Booklet::SequenceStepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E854EA6097856B6D_METHOD_1_C9CCCB7EA8DA024A_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_993* Method_1_7D6964C98349E95C(::RPG::GameCore::Booklet::ParallelStepConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_993*(*)(::PVOID, ::RPG::GameCore::Booklet::ParallelStepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E854EA6097856B6D_METHOD_1_7D6964C98349E95C_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_993* Method_1_B752E8A03FCDAD54(::RPG::GameCore::Booklet::WaitSecondsStepConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_993*(*)(::PVOID, ::RPG::GameCore::Booklet::WaitSecondsStepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E854EA6097856B6D_METHOD_1_B752E8A03FCDAD54_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_993* Method_1_1C16316D78B7B9DF(::RPG::GameCore::Booklet::FadeInStepConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_993*(*)(::PVOID, ::RPG::GameCore::Booklet::FadeInStepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E854EA6097856B6D_METHOD_1_1C16316D78B7B9DF_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_993* Method_1_17373A42A83D2EC5(::RPG::GameCore::Booklet::MarkSpreadHasReadStepConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_993*(*)(::PVOID, ::RPG::GameCore::Booklet::MarkSpreadHasReadStepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E854EA6097856B6D_METHOD_1_17373A42A83D2EC5_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_993* Method_1_A9D19A982E44005B(::RPG::GameCore::Booklet::MarkSectionHasReadStepConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_993*(*)(::PVOID, ::RPG::GameCore::Booklet::MarkSectionHasReadStepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E854EA6097856B6D_METHOD_1_A9D19A982E44005B_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_993* Method_1_CF7EA7970A5E9783(::RPG::GameCore::Booklet::WaitAutoPlayStepConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_993*(*)(::PVOID, ::RPG::GameCore::Booklet::WaitAutoPlayStepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E854EA6097856B6D_METHOD_1_CF7EA7970A5E9783_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_993* Method_1_08957AC83709FF86(::RPG::GameCore::Booklet::SkipTimerStepConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_993*(*)(::PVOID, ::RPG::GameCore::Booklet::SkipTimerStepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E854EA6097856B6D_METHOD_1_08957AC83709FF86_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_993* Method_1_06EF87F158C69F7E(::RPG::GameCore::Booklet::PlayVoiceStepConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_993*(*)(::PVOID, ::RPG::GameCore::Booklet::PlayVoiceStepConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E854EA6097856B6D_METHOD_1_06EF87F158C69F7E_OFFSET))(this, a1);
	}
};
