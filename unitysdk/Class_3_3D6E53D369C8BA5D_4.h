#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_3_3D6E53D369C8BA5D_4_METHOD_3_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x15488710)
#define CLASS_3_3D6E53D369C8BA5D_4_METHOD_3_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x15488690)
#define CLASS_3_3D6E53D369C8BA5D_4_METHOD_3_AA6A73448047A840_OFFSET UNITYSDK_OFFSET(0x15488530)
#define CLASS_3_3D6E53D369C8BA5D_4__CTOR_OFFSET UNITYSDK_OFFSET(0x15488850)

inline static constexpr unsigned int Class_3_3D6E53D369C8BA5D_4_TypeDefinitionIndex = 70875;

class Class_3_3D6E53D369C8BA5D_4 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::UnityEngine::RectTransform* Field_3_1; // 0x28
	::Class_2_B4378B46E0020E85* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D6E53D369C8BA5D_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_AA6A73448047A840(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_3D6E53D369C8BA5D_4_METHOD_3_AA6A73448047A840_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D6E53D369C8BA5D_4_METHOD_3_0C88AB06D46E777A_OFFSET))(this);
	}

	::System::Void Method_3_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D6E53D369C8BA5D_4_METHOD_3_1B167429A8B82AD3_OFFSET))(this);
	}
};
