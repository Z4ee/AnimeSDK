#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_A9A857AD270B9CE1;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_392BAA89F16E9A29_METHOD_2_5DE301B3C0032BA5_OFFSET UNITYSDK_OFFSET(0xB7D2FB0)
#define CLASS_2_392BAA89F16E9A29_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB7D30C0)
#define CLASS_2_392BAA89F16E9A29__CTOR_OFFSET UNITYSDK_OFFSET(0xB7D30B0)

inline static constexpr unsigned int Class_2_392BAA89F16E9A29_TypeDefinitionIndex = 53507;

class Class_2_392BAA89F16E9A29 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_134E5210FBBAC6E5* Field_2_2; // 0x18
	::MonoUITableScrollV2* Field_2_0; // 0x20
	::UnityEngine::RectTransform* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_392BAA89F16E9A29__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5DE301B3C0032BA5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_392BAA89F16E9A29_METHOD_2_5DE301B3C0032BA5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_392BAA89F16E9A29_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
