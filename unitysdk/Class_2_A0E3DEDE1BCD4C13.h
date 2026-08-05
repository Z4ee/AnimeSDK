#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define CLASS_2_A0E3DEDE1BCD4C13_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x1231CC30)
#define CLASS_2_A0E3DEDE1BCD4C13_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x1231CE10)
#define CLASS_2_A0E3DEDE1BCD4C13_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1231CF50)
#define CLASS_2_A0E3DEDE1BCD4C13__CTOR_OFFSET UNITYSDK_OFFSET(0x1231CF40)

inline static constexpr unsigned int Class_2_A0E3DEDE1BCD4C13_TypeDefinitionIndex = 42238;

class Class_2_A0E3DEDE1BCD4C13 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x20
	::UnityEngine::Transform* Field_2_1; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0E3DEDE1BCD4C13__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A0E3DEDE1BCD4C13_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0E3DEDE1BCD4C13_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A0E3DEDE1BCD4C13_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
