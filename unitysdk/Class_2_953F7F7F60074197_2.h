#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_953F7F7F60074197_2_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x14D0AC00)
#define CLASS_2_953F7F7F60074197_2_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x14D0ADA0)
#define CLASS_2_953F7F7F60074197_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14D0AEE0)
#define CLASS_2_953F7F7F60074197_2__CTOR_OFFSET UNITYSDK_OFFSET(0x14D0AED0)

inline static constexpr unsigned int Class_2_953F7F7F60074197_2_TypeDefinitionIndex = 70243;

class Class_2_953F7F7F60074197_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_953F7F7F60074197_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_953F7F7F60074197_2_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_953F7F7F60074197_2_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_953F7F7F60074197_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
