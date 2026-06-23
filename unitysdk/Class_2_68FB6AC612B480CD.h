#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_68FB6AC612B480CD_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x145E2DD0)
#define CLASS_2_68FB6AC612B480CD_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x145E2EE0)
#define CLASS_2_68FB6AC612B480CD__CTOR_OFFSET UNITYSDK_OFFSET(0x145E2ED0)

inline static constexpr unsigned int Class_2_68FB6AC612B480CD_TypeDefinitionIndex = 85000;

class Class_2_68FB6AC612B480CD : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_2; // 0x18
	::Class_2_FDFE69FE7B72463B* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68FB6AC612B480CD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_68FB6AC612B480CD_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_68FB6AC612B480CD_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
