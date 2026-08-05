#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B23E72138E738F4B_METHOD_2_2B52DBEEACA798D8_OFFSET UNITYSDK_OFFSET(0x12E897F0)
#define CLASS_2_B23E72138E738F4B_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x12E899A0)
#define CLASS_2_B23E72138E738F4B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12E89A70)
#define CLASS_2_B23E72138E738F4B__CTOR_OFFSET UNITYSDK_OFFSET(0x12E89A60)

inline static constexpr unsigned int Class_2_B23E72138E738F4B_TypeDefinitionIndex = 49496;

class Class_2_B23E72138E738F4B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_6; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x28
	::UnityEngine::Transform* Field_2_0; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B23E72138E738F4B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2B52DBEEACA798D8(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B23E72138E738F4B_METHOD_2_2B52DBEEACA798D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B23E72138E738F4B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B23E72138E738F4B_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
