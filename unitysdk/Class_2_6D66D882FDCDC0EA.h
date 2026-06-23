#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_6D66D882FDCDC0EA_Class_2_2E787E9E55FB75F3;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_6D66D882FDCDC0EA_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x13D679F0)
#define CLASS_2_6D66D882FDCDC0EA_METHOD_2_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x13D67CC0)
#define CLASS_2_6D66D882FDCDC0EA_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13D67E70)
#define CLASS_2_6D66D882FDCDC0EA__CTOR_OFFSET UNITYSDK_OFFSET(0x13D67E60)

inline static constexpr unsigned int Class_2_6D66D882FDCDC0EA_TypeDefinitionIndex = 73716;

class Class_2_6D66D882FDCDC0EA : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadRegion* Field_2_3; // 0x18
	::UnityEngine::Transform* Field_2_2; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_12; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_6D66D882FDCDC0EA_Class_2_2E787E9E55FB75F3*>* Field_2_11; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x48
	::UnityEngine::Transform* Field_2_6; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x58
	::MonoUITableScrollV2* Field_2_10; // 0x60
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x68
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_7; // 0x70
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D66D882FDCDC0EA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6D66D882FDCDC0EA_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D66D882FDCDC0EA_METHOD_2_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6D66D882FDCDC0EA_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
