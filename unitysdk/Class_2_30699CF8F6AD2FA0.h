#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define CLASS_2_30699CF8F6AD2FA0_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x12A04AE0)
#define CLASS_2_30699CF8F6AD2FA0_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12A04C20)
#define CLASS_2_30699CF8F6AD2FA0__CTOR_OFFSET UNITYSDK_OFFSET(0x12A04C10)

inline static constexpr unsigned int Class_2_30699CF8F6AD2FA0_TypeDefinitionIndex = 81789;

class Class_2_30699CF8F6AD2FA0 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x18
	::Class_2_FDFE69FE7B72463B* Field_2_2; // 0x20
	::UnityEngine::Transform* Field_2_3; // 0x28
	::UnityEngine::Transform* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30699CF8F6AD2FA0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_30699CF8F6AD2FA0_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_30699CF8F6AD2FA0_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
