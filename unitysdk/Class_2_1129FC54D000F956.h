#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_1129FC54D000F956_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x116DCAF0)
#define CLASS_2_1129FC54D000F956_METHOD_2_7850A759D7FB02C1_OFFSET UNITYSDK_OFFSET(0x116DCBB0)
#define CLASS_2_1129FC54D000F956_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x116DCC70)
#define CLASS_2_1129FC54D000F956_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x116DC980)
#define CLASS_2_1129FC54D000F956_METHOD_2_F9D756242E9FCFE7_OFFSET UNITYSDK_OFFSET(0x116DCD10)
#define CLASS_2_1129FC54D000F956__CTOR_OFFSET UNITYSDK_OFFSET(0x116DCC60)

inline static constexpr unsigned int Class_2_1129FC54D000F956_TypeDefinitionIndex = 51299;

class Class_2_1129FC54D000F956 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_1; // 0x18
	::MonoUITableScrollV2* Field_2_0; // 0x20
	::MoleMole::MonoGamepadNavigatableList* Field_2_2; // 0x28

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
