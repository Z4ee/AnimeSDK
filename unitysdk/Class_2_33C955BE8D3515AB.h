#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIConsoleCameraBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralConsoleBtnWidgetController; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_33C955BE8D3515AB_METHOD_2_25F259344056A8EA_OFFSET UNITYSDK_OFFSET(0x13AB7340)
#define CLASS_2_33C955BE8D3515AB_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x13AB7530)
#define CLASS_2_33C955BE8D3515AB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13AB7630)
#define CLASS_2_33C955BE8D3515AB__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB7620)

inline static constexpr unsigned int Class_2_33C955BE8D3515AB_TypeDefinitionIndex = 84383;

class Class_2_33C955BE8D3515AB : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralConsoleBtnWidgetController*>* Field_2_1; // 0x18
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIConsoleCameraBtnWidgetController*>* Field_2_0; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x28
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralConsoleBtnWidgetController*>* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33C955BE8D3515AB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_25F259344056A8EA(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_33C955BE8D3515AB_METHOD_2_25F259344056A8EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33C955BE8D3515AB_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_33C955BE8D3515AB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
