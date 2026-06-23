#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIAbyssS2InlevelMapAreaWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_98736CDE0D50D077_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0x109D0590)
#define CLASS_2_98736CDE0D50D077_METHOD_2_8AE01EFA7526266A_OFFSET UNITYSDK_OFFSET(0x109D0350)
#define CLASS_2_98736CDE0D50D077_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x109D06B0)
#define CLASS_2_98736CDE0D50D077__CTOR_OFFSET UNITYSDK_OFFSET(0x109D06A0)

inline static constexpr unsigned int Class_2_98736CDE0D50D077_TypeDefinitionIndex = 79800;

class Class_2_98736CDE0D50D077 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x28
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralBtn03WidgetController*>* Field_2_2; // 0x30
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIAbyssS2InlevelMapAreaWidgetController*>* Field_2_1; // 0x38
	::MonoUITableScrollV2* Field_2_5; // 0x40
	::MoleMole::MonoGamepadModule* Field_2_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98736CDE0D50D077__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AE01EFA7526266A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_98736CDE0D50D077_METHOD_2_8AE01EFA7526266A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_98736CDE0D50D077_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98736CDE0D50D077_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}
};
