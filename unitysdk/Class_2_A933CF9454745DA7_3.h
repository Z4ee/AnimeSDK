#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_A933CF9454745DA7_3_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x133638F0)
#define CLASS_2_A933CF9454745DA7_3_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x13363A90)
#define CLASS_2_A933CF9454745DA7_3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13363B60)
#define CLASS_2_A933CF9454745DA7_3__CTOR_OFFSET UNITYSDK_OFFSET(0x13363B50)

inline static constexpr unsigned int Class_2_A933CF9454745DA7_3_TypeDefinitionIndex = 75239;

class Class_2_A933CF9454745DA7_3 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A933CF9454745DA7_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A933CF9454745DA7_3_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A933CF9454745DA7_3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A933CF9454745DA7_3_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
