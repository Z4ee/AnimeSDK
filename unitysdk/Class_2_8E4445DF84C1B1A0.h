#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_8E4445DF84C1B1A0_METHOD_2_51D75D66AB0E1B00_OFFSET UNITYSDK_OFFSET(0x155BEA10)
#define CLASS_2_8E4445DF84C1B1A0_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x155BEBD0)
#define CLASS_2_8E4445DF84C1B1A0_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x155BECA0)
#define CLASS_2_8E4445DF84C1B1A0__CTOR_OFFSET UNITYSDK_OFFSET(0x155BEC90)

inline static constexpr unsigned int Class_2_8E4445DF84C1B1A0_TypeDefinitionIndex = 87567;

class Class_2_8E4445DF84C1B1A0 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x20
	::MoleMole::MonoGamepadModule* Field_2_2; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E4445DF84C1B1A0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_51D75D66AB0E1B00(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8E4445DF84C1B1A0_METHOD_2_51D75D66AB0E1B00_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8E4445DF84C1B1A0_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E4445DF84C1B1A0_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
