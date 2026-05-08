#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_B2FDB685113EB138_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0xFE689D0)
#define CLASS_2_B2FDB685113EB138_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xFE68BB0)
#define CLASS_2_B2FDB685113EB138_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xFE68C80)
#define CLASS_2_B2FDB685113EB138__CTOR_OFFSET UNITYSDK_OFFSET(0xFE68C70)

inline static constexpr unsigned int Class_2_B2FDB685113EB138_TypeDefinitionIndex = 59698;

class Class_2_B2FDB685113EB138 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x18
	::MonoUITableScrollV2* Field_2_4; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x28
	::MoleMole::MonoGamepadModule* Field_2_6; // 0x30
	::MonoUITableScrollV2* Field_2_3; // 0x38
	::MoleMole::MonoGamepadModule* Field_2_5; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FDB685113EB138__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B2FDB685113EB138_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B2FDB685113EB138_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FDB685113EB138_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
