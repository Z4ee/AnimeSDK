#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_1129FC54D000F956_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x113FBCA0)
#define CLASS_2_1129FC54D000F956_METHOD_2_7850A759D7FB02C1_OFFSET UNITYSDK_OFFSET(0x113FBD60)
#define CLASS_2_1129FC54D000F956_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x113FBE20)
#define CLASS_2_1129FC54D000F956_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x113FBB30)
#define CLASS_2_1129FC54D000F956_METHOD_2_F9D756242E9FCFE7_OFFSET UNITYSDK_OFFSET(0x113FBEC0)
#define CLASS_2_1129FC54D000F956__CTOR_OFFSET UNITYSDK_OFFSET(0x113FBE10)

inline static constexpr unsigned int Class_2_1129FC54D000F956_TypeDefinitionIndex = 39505;

class Class_2_1129FC54D000F956 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadNavigatableList* Field_2_2; // 0x18
	::Class_3_30A064D7BE47C07D<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_1; // 0x20
	::MonoUITableScrollV2* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1129FC54D000F956__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1129FC54D000F956_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_7850A759D7FB02C1(::MoleMole::UIControlCollection* a1, ::Class_2_A9A857AD270B9CE1* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A9A857AD270B9CE1*))((::PBYTE)hIl2Cpp + CLASS_2_1129FC54D000F956_METHOD_2_7850A759D7FB02C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1129FC54D000F956_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F9D756242E9FCFE7(::MoleMole::UIControlCollection* a1, ::Class_2_A9A857AD270B9CE1* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A9A857AD270B9CE1*))((::PBYTE)hIl2Cpp + CLASS_2_1129FC54D000F956_METHOD_2_F9D756242E9FCFE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1129FC54D000F956_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
