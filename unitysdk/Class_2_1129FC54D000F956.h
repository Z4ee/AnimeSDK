#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_1129FC54D000F956_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x1493C5A0)
#define CLASS_2_1129FC54D000F956_METHOD_2_7850A759D7FB02C1_OFFSET UNITYSDK_OFFSET(0x1493C660)
#define CLASS_2_1129FC54D000F956_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1493C7C0)
#define CLASS_2_1129FC54D000F956_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x1493C430)
#define CLASS_2_1129FC54D000F956_METHOD_2_F9D756242E9FCFE7_OFFSET UNITYSDK_OFFSET(0x1493C720)
#define CLASS_2_1129FC54D000F956__CTOR_OFFSET UNITYSDK_OFFSET(0x1493C710)

inline static constexpr unsigned int Class_2_1129FC54D000F956_TypeDefinitionIndex = 63545;

class Class_2_1129FC54D000F956 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadNavigatableList* Field_2_6; // 0x18
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_7; // 0x20
	::MonoUITableScrollV2* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1129FC54D000F956__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1129FC54D000F956_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_7850A759D7FB02C1(::MoleMole::UIControlCollection* a1, ::Class_2_A4D62D05D5EA8464* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A4D62D05D5EA8464*))((::PBYTE)hIl2Cpp + CLASS_2_1129FC54D000F956_METHOD_2_7850A759D7FB02C1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F9D756242E9FCFE7(::MoleMole::UIControlCollection* a1, ::Class_2_A4D62D05D5EA8464* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A4D62D05D5EA8464*))((::PBYTE)hIl2Cpp + CLASS_2_1129FC54D000F956_METHOD_2_F9D756242E9FCFE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1129FC54D000F956_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1129FC54D000F956_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
