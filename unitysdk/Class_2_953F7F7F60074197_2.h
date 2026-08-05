#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_953F7F7F60074197_2_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x114B1AC0)
#define CLASS_2_953F7F7F60074197_2_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x114B1C60)
#define CLASS_2_953F7F7F60074197_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x114B1DA0)
#define CLASS_2_953F7F7F60074197_2__CTOR_OFFSET UNITYSDK_OFFSET(0x114B1D90)

inline static constexpr unsigned int Class_2_953F7F7F60074197_2_TypeDefinitionIndex = 67595;

class Class_2_953F7F7F60074197_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_953F7F7F60074197_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_953F7F7F60074197_2_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_953F7F7F60074197_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_953F7F7F60074197_2_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
