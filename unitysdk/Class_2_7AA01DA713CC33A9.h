#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_7AA01DA713CC33A9_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0xBD93B90)
#define CLASS_2_7AA01DA713CC33A9_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xBD93C80)
#define CLASS_2_7AA01DA713CC33A9__CTOR_OFFSET UNITYSDK_OFFSET(0xBD93C70)

inline static constexpr unsigned int Class_2_7AA01DA713CC33A9_TypeDefinitionIndex = 60954;

class Class_2_7AA01DA713CC33A9 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_1; // 0x18
	::UnityEngine::GameObject* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AA01DA713CC33A9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7AA01DA713CC33A9_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7AA01DA713CC33A9_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
