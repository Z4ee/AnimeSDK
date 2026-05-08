#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_DE782794730406DC_4_METHOD_2_0A421A6D2D1A1BFD_OFFSET UNITYSDK_OFFSET(0xFAA2B90)
#define CLASS_2_DE782794730406DC_4_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xFAA2D10)
#define CLASS_2_DE782794730406DC_4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xFAA2DC0)
#define CLASS_2_DE782794730406DC_4__CTOR_OFFSET UNITYSDK_OFFSET(0xFAA2DB0)

inline static constexpr unsigned int Class_2_DE782794730406DC_4_TypeDefinitionIndex = 76827;

class Class_2_DE782794730406DC_4 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE782794730406DC_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0A421A6D2D1A1BFD(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DE782794730406DC_4_METHOD_2_0A421A6D2D1A1BFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DE782794730406DC_4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE782794730406DC_4_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
