#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_3_3D6E53D369C8BA5D_5_METHOD_3_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x121E7620)
#define CLASS_3_3D6E53D369C8BA5D_5_METHOD_3_AA6A73448047A840_OFFSET UNITYSDK_OFFSET(0x121E74B0)
#define CLASS_3_3D6E53D369C8BA5D_5_METHOD_3_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x121E76A0)
#define CLASS_3_3D6E53D369C8BA5D_5__CTOR_OFFSET UNITYSDK_OFFSET(0x121E7850)

inline static constexpr unsigned int Class_3_3D6E53D369C8BA5D_5_TypeDefinitionIndex = 73921;

class Class_3_3D6E53D369C8BA5D_5 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::Class_2_1A39E1B51756BF41* Field_3_2; // 0x28
	::UnityEngine::RectTransform* Field_3_1; // 0x30
	::UnityEngine::RectTransform* Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D6E53D369C8BA5D_5__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_AA6A73448047A840(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_3D6E53D369C8BA5D_5_METHOD_3_AA6A73448047A840_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D6E53D369C8BA5D_5_METHOD_3_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_3_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D6E53D369C8BA5D_5_METHOD_3_1B167429A8B82AD3_OFFSET))(this);
	}
};
