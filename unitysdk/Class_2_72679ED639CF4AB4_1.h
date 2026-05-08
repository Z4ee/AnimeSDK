#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define CLASS_2_72679ED639CF4AB4_1_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x13A757A0)
#define CLASS_2_72679ED639CF4AB4_1_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x13A755D0)
#define CLASS_2_72679ED639CF4AB4_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13A758B0)
#define CLASS_2_72679ED639CF4AB4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13A758A0)

inline static constexpr unsigned int Class_2_72679ED639CF4AB4_1_TypeDefinitionIndex = 55996;

class Class_2_72679ED639CF4AB4_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x18
	::UnityEngine::Transform* Field_2_0; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x30
	::UnityEngine::Transform* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72679ED639CF4AB4_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_72679ED639CF4AB4_1_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72679ED639CF4AB4_1_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_72679ED639CF4AB4_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
