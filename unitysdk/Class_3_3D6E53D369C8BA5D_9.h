#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_3_3D6E53D369C8BA5D_9_METHOD_3_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x1342D940)
#define CLASS_3_3D6E53D369C8BA5D_9_METHOD_3_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x1342D8C0)
#define CLASS_3_3D6E53D369C8BA5D_9_METHOD_3_AA6A73448047A840_OFFSET UNITYSDK_OFFSET(0x1342D760)
#define CLASS_3_3D6E53D369C8BA5D_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1342DA80)

inline static constexpr unsigned int Class_3_3D6E53D369C8BA5D_9_TypeDefinitionIndex = 86438;

class Class_3_3D6E53D369C8BA5D_9 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::UnityEngine::RectTransform* Field_3_0; // 0x28
	::Class_2_B4378B46E0020E85* Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D6E53D369C8BA5D_9__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_AA6A73448047A840(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_3D6E53D369C8BA5D_9_METHOD_3_AA6A73448047A840_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D6E53D369C8BA5D_9_METHOD_3_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_3_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3D6E53D369C8BA5D_9_METHOD_3_0C88AB06D46E777A_OFFSET))(this);
	}
};
