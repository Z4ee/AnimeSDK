#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_841CF2F05E0A294A_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x143D86B0)
#define CLASS_2_841CF2F05E0A294A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x143D8AB0)
#define CLASS_2_841CF2F05E0A294A_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x143D8910)
#define CLASS_2_841CF2F05E0A294A__CTOR_OFFSET UNITYSDK_OFFSET(0x143D8AA0)

inline static constexpr unsigned int Class_2_841CF2F05E0A294A_TypeDefinitionIndex = 45712;

class Class_2_841CF2F05E0A294A : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x18
	::MoleMole::NotificationBadge* Field_2_6; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_8; // 0x50
	::MoleMole::NotificationBadge* Field_2_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_841CF2F05E0A294A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_841CF2F05E0A294A_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_841CF2F05E0A294A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_841CF2F05E0A294A_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}
};
