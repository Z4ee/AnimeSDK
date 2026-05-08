#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_CA475E4A850C2837_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x12ECF8E0)
#define CLASS_2_CA475E4A850C2837_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x12ECFB30)
#define CLASS_2_CA475E4A850C2837_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12ECFBE0)
#define CLASS_2_CA475E4A850C2837__CTOR_OFFSET UNITYSDK_OFFSET(0x12ECFBD0)

inline static constexpr unsigned int Class_2_CA475E4A850C2837_TypeDefinitionIndex = 67534;

class Class_2_CA475E4A850C2837 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28
	::MonoUITableScrollV2* Field_2_5; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x38
	::Class_2_FDFE69FE7B72463B* Field_2_1; // 0x40
	::Class_2_FDFE69FE7B72463B* Field_2_8; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x50
	::UnityEngine::Transform* Field_2_0; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA475E4A850C2837__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CA475E4A850C2837_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CA475E4A850C2837_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA475E4A850C2837_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
