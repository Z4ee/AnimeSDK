#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_C5C4037080416954_Class_2_40AC881AC36B2F6D_3;
class Class_2_C5C4037080416954_Class_2_B255247D073B1634;
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_C5C4037080416954_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x108393D0)
#define CLASS_2_C5C4037080416954_METHOD_2_A12BD845CF1D6416_OFFSET UNITYSDK_OFFSET(0x10839200)
#define CLASS_2_C5C4037080416954_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x108394A0)
#define CLASS_2_C5C4037080416954__CTOR_OFFSET UNITYSDK_OFFSET(0x10839490)

inline static constexpr unsigned int Class_2_C5C4037080416954_TypeDefinitionIndex = 76127;

class Class_2_C5C4037080416954 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_C5C4037080416954_Class_2_40AC881AC36B2F6D_3*>* Field_2_1; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_C5C4037080416954_Class_2_B255247D073B1634*>* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5C4037080416954__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A12BD845CF1D6416(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C5C4037080416954_METHOD_2_A12BD845CF1D6416_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C5C4037080416954_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5C4037080416954_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
