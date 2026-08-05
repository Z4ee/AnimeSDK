#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_8B87BF6ACBF7185A_Class_2_63D0B8F28FB028CD;
class Class_2_8B87BF6ACBF7185A_Class_2_92B0DABCABA3992B;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_8B87BF6ACBF7185A_METHOD_2_5200FEEACE882DF3_OFFSET UNITYSDK_OFFSET(0x13E17090)
#define CLASS_2_8B87BF6ACBF7185A_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x13E172C0)
#define CLASS_2_8B87BF6ACBF7185A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13E17390)
#define CLASS_2_8B87BF6ACBF7185A__CTOR_OFFSET UNITYSDK_OFFSET(0x13E17380)

inline static constexpr unsigned int Class_2_8B87BF6ACBF7185A_TypeDefinitionIndex = 52570;

class Class_2_8B87BF6ACBF7185A : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_4; // 0x18
	::Class_2_FDFE69FE7B72463B* Field_2_5; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_8B87BF6ACBF7185A_Class_2_63D0B8F28FB028CD*>* Field_2_7; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_8B87BF6ACBF7185A_Class_2_92B0DABCABA3992B*>* Field_2_6; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B87BF6ACBF7185A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5200FEEACE882DF3(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8B87BF6ACBF7185A_METHOD_2_5200FEEACE882DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8B87BF6ACBF7185A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B87BF6ACBF7185A_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
