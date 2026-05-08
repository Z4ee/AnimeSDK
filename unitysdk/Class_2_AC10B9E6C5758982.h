#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }

#define CLASS_2_AC10B9E6C5758982_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x113B59B0)
#define CLASS_2_AC10B9E6C5758982_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x113B5AD0)
#define CLASS_2_AC10B9E6C5758982__CTOR_OFFSET UNITYSDK_OFFSET(0x113B5AC0)

inline static constexpr unsigned int Class_2_AC10B9E6C5758982_TypeDefinitionIndex = 60206;

class Class_2_AC10B9E6C5758982 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_1; // 0x18
	::Class_2_FDFE69FE7B72463B* Field_2_2; // 0x20
	::UnityEngine::CanvasGroup* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC10B9E6C5758982__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AC10B9E6C5758982_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AC10B9E6C5758982_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
