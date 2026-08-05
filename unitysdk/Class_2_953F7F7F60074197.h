#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_953F7F7F60074197_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x117A2730)
#define CLASS_2_953F7F7F60074197_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x117A28D0)
#define CLASS_2_953F7F7F60074197_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x117A2A10)
#define CLASS_2_953F7F7F60074197__CTOR_OFFSET UNITYSDK_OFFSET(0x117A2A00)

inline static constexpr unsigned int Class_2_953F7F7F60074197_TypeDefinitionIndex = 49747;

class Class_2_953F7F7F60074197 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_953F7F7F60074197__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_953F7F7F60074197_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_953F7F7F60074197_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_953F7F7F60074197_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
