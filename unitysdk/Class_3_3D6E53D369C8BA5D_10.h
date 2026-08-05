#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_3_3D6E53D369C8BA5D_10_METHOD_3_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x1A7D63E0)
#define CLASS_3_3D6E53D369C8BA5D_10_METHOD_3_AA6A73448047A840_OFFSET UNITYSDK_OFFSET(0x1A7D6270)
#define CLASS_3_3D6E53D369C8BA5D_10_METHOD_3_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x1A7D6460)
#define CLASS_3_3D6E53D369C8BA5D_10__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7D6610)

inline static constexpr unsigned int Class_3_3D6E53D369C8BA5D_10_TypeDefinitionIndex = 90230;

class Class_3_3D6E53D369C8BA5D_10 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::UnityEngine::RectTransform* Field_3_2; // 0x28
	::Class_2_1A39E1B51756BF41* Field_3_0; // 0x30
	::UnityEngine::RectTransform* Field_3_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D6E53D369C8BA5D_10__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_AA6A73448047A840(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_3D6E53D369C8BA5D_10_METHOD_3_AA6A73448047A840_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D6E53D369C8BA5D_10_METHOD_3_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_3_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D6E53D369C8BA5D_10_METHOD_3_DDA8A2337932DF10_OFFSET))(this);
	}
};
