#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_0646BF77C99A3FFB_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x1AAD8E20)
#define CLASS_2_0646BF77C99A3FFB_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x1AAD8FD0)
#define CLASS_2_0646BF77C99A3FFB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1AAD90E0)
#define CLASS_2_0646BF77C99A3FFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAD90D0)

inline static constexpr unsigned int Class_2_0646BF77C99A3FFB_TypeDefinitionIndex = 79367;

class Class_2_0646BF77C99A3FFB : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_2; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20
	::MonoUITableScrollV2* Field_2_1; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0646BF77C99A3FFB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0646BF77C99A3FFB_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0646BF77C99A3FFB_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0646BF77C99A3FFB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
