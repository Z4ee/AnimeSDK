#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_21C0344331580084_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x14C93820)
#define CLASS_2_21C0344331580084_METHOD_2_7850A759D7FB02C1_OFFSET UNITYSDK_OFFSET(0x14C938E0)
#define CLASS_2_21C0344331580084_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14C93960)
#define CLASS_2_21C0344331580084_METHOD_2_EBA1DA59141868AB_OFFSET UNITYSDK_OFFSET(0x14C936A0)
#define CLASS_2_21C0344331580084_METHOD_2_F9D756242E9FCFE7_OFFSET UNITYSDK_OFFSET(0x14C93A00)
#define CLASS_2_21C0344331580084__CTOR_OFFSET UNITYSDK_OFFSET(0x14C93950)

inline static constexpr unsigned int Class_2_21C0344331580084_TypeDefinitionIndex = 40598;

class Class_2_21C0344331580084 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x18
	::UnityEngine::Transform* Field_2_7; // 0x20
	::MonoUITableScrollV2* Field_2_0; // 0x28
	::UnityEngine::UI::Text* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21C0344331580084__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBA1DA59141868AB(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_21C0344331580084_METHOD_2_EBA1DA59141868AB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_7850A759D7FB02C1(::MoleMole::UIControlCollection* a1, ::Class_2_A4D62D05D5EA8464* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A4D62D05D5EA8464*))((::PBYTE)hIl2Cpp + CLASS_2_21C0344331580084_METHOD_2_7850A759D7FB02C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21C0344331580084_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_21C0344331580084_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F9D756242E9FCFE7(::MoleMole::UIControlCollection* a1, ::Class_2_A4D62D05D5EA8464* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_A4D62D05D5EA8464*))((::PBYTE)hIl2Cpp + CLASS_2_21C0344331580084_METHOD_2_F9D756242E9FCFE7_OFFSET))(this, a1, a2);
	}
};
