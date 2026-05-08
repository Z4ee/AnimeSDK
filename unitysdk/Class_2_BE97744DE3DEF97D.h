#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIBossChallengeBadgeRowWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_3_6630F8877346891C;

#define CLASS_2_BE97744DE3DEF97D_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x14149FF0)
#define CLASS_2_BE97744DE3DEF97D_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x14149DB0)
#define CLASS_2_BE97744DE3DEF97D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1414A0F0)
#define CLASS_2_BE97744DE3DEF97D__CTOR_OFFSET UNITYSDK_OFFSET(0x1414A0E0)

inline static constexpr unsigned int Class_2_BE97744DE3DEF97D_TypeDefinitionIndex = 51815;

class Class_2_BE97744DE3DEF97D : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x18
	::UnityEngine::Transform* Field_2_5; // 0x20
	::UnityEngine::Transform* Field_2_3; // 0x28
	::Class_3_6630F8877346891C<::MoleMole::UIBossChallengeBadgeRowWidgetController*>* Field_2_7; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x38
	::UnityEngine::RectTransform* Field_2_6; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x50
	::UnityEngine::Transform* Field_2_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE97744DE3DEF97D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BE97744DE3DEF97D_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE97744DE3DEF97D_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BE97744DE3DEF97D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
