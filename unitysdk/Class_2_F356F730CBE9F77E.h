#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_F356F730CBE9F77E_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x10DA6560)
#define CLASS_2_F356F730CBE9F77E_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x10DA6750)
#define CLASS_2_F356F730CBE9F77E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10DA6800)
#define CLASS_2_F356F730CBE9F77E__CTOR_OFFSET UNITYSDK_OFFSET(0x10DA67F0)

inline static constexpr unsigned int Class_2_F356F730CBE9F77E_TypeDefinitionIndex = 69421;

class Class_2_F356F730CBE9F77E : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x18
	::Class_2_FDFE69FE7B72463B* Field_2_2; // 0x20
	::UnityEngine::GameObject* Field_2_4; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x38
	::UnityEngine::GameObject* Field_2_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F356F730CBE9F77E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F356F730CBE9F77E_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F356F730CBE9F77E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F356F730CBE9F77E_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
