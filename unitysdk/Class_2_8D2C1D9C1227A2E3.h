#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }

#define CLASS_2_8D2C1D9C1227A2E3_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x1838BD70)
#define CLASS_2_8D2C1D9C1227A2E3_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x1838BF20)
#define CLASS_2_8D2C1D9C1227A2E3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1838C030)
#define CLASS_2_8D2C1D9C1227A2E3__CTOR_OFFSET UNITYSDK_OFFSET(0x1838C020)

inline static constexpr unsigned int Class_2_8D2C1D9C1227A2E3_TypeDefinitionIndex = 37962;

class Class_2_8D2C1D9C1227A2E3 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Animation* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x30
	::MonoUITableScrollV2* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D2C1D9C1227A2E3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8D2C1D9C1227A2E3_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D2C1D9C1227A2E3_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8D2C1D9C1227A2E3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
