#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_E55F60BF63BB02E0_Class_2_5F3C14FED1CE4C5F_2;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_E55F60BF63BB02E0_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x134AA200)
#define CLASS_2_E55F60BF63BB02E0_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x134AA2B0)
#define CLASS_2_E55F60BF63BB02E0_METHOD_2_E29396CF1CC8FD8D_OFFSET UNITYSDK_OFFSET(0x134AA020)
#define CLASS_2_E55F60BF63BB02E0__CTOR_OFFSET UNITYSDK_OFFSET(0x134AA2A0)

inline static constexpr unsigned int Class_2_E55F60BF63BB02E0_TypeDefinitionIndex = 66581;

class Class_2_E55F60BF63BB02E0 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_1; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x20
	::UnityEngine::GameObject* Field_2_2; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_E55F60BF63BB02E0_Class_2_5F3C14FED1CE4C5F_2*>* Field_2_3; // 0x30
	::MoleMole::MonoGamepadSpaceList* Field_2_5; // 0x38
	::UnityEngine::GameObject* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E55F60BF63BB02E0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E29396CF1CC8FD8D(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E55F60BF63BB02E0_METHOD_2_E29396CF1CC8FD8D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E55F60BF63BB02E0_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E55F60BF63BB02E0_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
