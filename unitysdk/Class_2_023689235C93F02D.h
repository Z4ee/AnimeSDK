#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_023689235C93F02D_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0xF8038E0)
#define CLASS_2_023689235C93F02D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xF803A10)
#define CLASS_2_023689235C93F02D__CTOR_OFFSET UNITYSDK_OFFSET(0xF803A00)

inline static constexpr unsigned int Class_2_023689235C93F02D_TypeDefinitionIndex = 63481;

class Class_2_023689235C93F02D : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_3; // 0x18
	::UnityEngine::Transform* Field_2_1; // 0x20
	::UnityEngine::Transform* Field_2_0; // 0x28
	::Class_2_FDFE69FE7B72463B* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_023689235C93F02D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_023689235C93F02D_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_023689235C93F02D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
