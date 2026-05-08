#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_8B87BF6ACBF7185A_Class_2_3650E739486866DC;
class Class_2_8B87BF6ACBF7185A_Class_2_92B0DABCABA3992B;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_8B87BF6ACBF7185A_METHOD_2_5200FEEACE882DF3_OFFSET UNITYSDK_OFFSET(0x1190EEA0)
#define CLASS_2_8B87BF6ACBF7185A_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x1190F0D0)
#define CLASS_2_8B87BF6ACBF7185A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1190F1A0)
#define CLASS_2_8B87BF6ACBF7185A__CTOR_OFFSET UNITYSDK_OFFSET(0x1190F190)

inline static constexpr unsigned int Class_2_8B87BF6ACBF7185A_TypeDefinitionIndex = 56602;

class Class_2_8B87BF6ACBF7185A : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_8B87BF6ACBF7185A_Class_2_92B0DABCABA3992B*>* Field_2_2; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_8B87BF6ACBF7185A_Class_2_3650E739486866DC*>* Field_2_1; // 0x28
	::UnityEngine::RectTransform* Field_2_4; // 0x30
	::Class_2_FDFE69FE7B72463B* Field_2_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B87BF6ACBF7185A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5200FEEACE882DF3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8B87BF6ACBF7185A_METHOD_2_5200FEEACE882DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B87BF6ACBF7185A_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8B87BF6ACBF7185A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
