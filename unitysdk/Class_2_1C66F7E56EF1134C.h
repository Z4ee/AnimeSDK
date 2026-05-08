#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_1C66F7E56EF1134C_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0xFACF230)
#define CLASS_2_1C66F7E56EF1134C_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0xFACF3E0)
#define CLASS_2_1C66F7E56EF1134C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xFACF4F0)
#define CLASS_2_1C66F7E56EF1134C__CTOR_OFFSET UNITYSDK_OFFSET(0xFACF4E0)

inline static constexpr unsigned int Class_2_1C66F7E56EF1134C_TypeDefinitionIndex = 61744;

class Class_2_1C66F7E56EF1134C : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_3; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x30
	::UnityEngine::GameObject* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C66F7E56EF1134C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1C66F7E56EF1134C_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1C66F7E56EF1134C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C66F7E56EF1134C_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
