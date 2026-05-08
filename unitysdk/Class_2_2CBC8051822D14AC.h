#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIQuestionsAnswerScreenDetailWidgetController; }
namespace MoleMole { class UIQuestionsAnswerScreenSettleWidgetController; }
namespace MoleMole { class UIQuestionsAnswerScreenStandbyWidgetController; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_2CBC8051822D14AC_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0xFDA86F0)
#define CLASS_2_2CBC8051822D14AC_METHOD_2_6FDA0C1696A00F81_OFFSET UNITYSDK_OFFSET(0xFDA8520)
#define CLASS_2_2CBC8051822D14AC_METHOD_2_7850A759D7FB02C1_OFFSET UNITYSDK_OFFSET(0xFDA87F0)
#define CLASS_2_2CBC8051822D14AC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xFDA8950)
#define CLASS_2_2CBC8051822D14AC_METHOD_2_F9D756242E9FCFE7_OFFSET UNITYSDK_OFFSET(0xFDA88B0)
#define CLASS_2_2CBC8051822D14AC__CTOR_OFFSET UNITYSDK_OFFSET(0xFDA88A0)

inline static constexpr unsigned int Class_2_2CBC8051822D14AC_TypeDefinitionIndex = 51622;

class Class_2_2CBC8051822D14AC : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_30A064D7BE47C07D<::MoleMole::UIQuestionsAnswerScreenStandbyWidgetController*>* Field_2_0; // 0x18
	::Class_3_30A064D7BE47C07D<::MoleMole::UIQuestionsAnswerScreenDetailWidgetController*>* Field_2_1; // 0x20
	::Class_3_30A064D7BE47C07D<::MoleMole::UIQuestionsAnswerScreenSettleWidgetController*>* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CBC8051822D14AC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6FDA0C1696A00F81(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2CBC8051822D14AC_METHOD_2_6FDA0C1696A00F81_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_7850A759D7FB02C1(::MoleMole::UIControlCollection* a1, ::Class_2_A9A857AD270B9CE1* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A9A857AD270B9CE1*))((::PBYTE)hIl2Cpp + CLASS_2_2CBC8051822D14AC_METHOD_2_7850A759D7FB02C1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F9D756242E9FCFE7(::MoleMole::UIControlCollection* a1, ::Class_2_A9A857AD270B9CE1* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A9A857AD270B9CE1*))((::PBYTE)hIl2Cpp + CLASS_2_2CBC8051822D14AC_METHOD_2_F9D756242E9FCFE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CBC8051822D14AC_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2CBC8051822D14AC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
