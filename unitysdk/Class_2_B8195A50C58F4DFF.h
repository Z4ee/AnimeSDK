#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshFilter; }

#define CLASS_2_B8195A50C58F4DFF_METHOD_2_5DE301B3C0032BA5_OFFSET UNITYSDK_OFFSET(0x18038D90)
#define CLASS_2_B8195A50C58F4DFF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18038EA0)
#define CLASS_2_B8195A50C58F4DFF__CTOR_OFFSET UNITYSDK_OFFSET(0x18038E90)

inline static constexpr unsigned int Class_2_B8195A50C58F4DFF_TypeDefinitionIndex = 69031;

class Class_2_B8195A50C58F4DFF : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_2; // 0x18
	::UnityEngine::MeshFilter* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8195A50C58F4DFF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5DE301B3C0032BA5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B8195A50C58F4DFF_METHOD_2_5DE301B3C0032BA5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B8195A50C58F4DFF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
