#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_BE40C25CC1FE4CF3_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x1282F000)
#define CLASS_2_BE40C25CC1FE4CF3_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x1282F200)
#define CLASS_2_BE40C25CC1FE4CF3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1282F2D0)
#define CLASS_2_BE40C25CC1FE4CF3__CTOR_OFFSET UNITYSDK_OFFSET(0x1282F2C0)

inline static constexpr unsigned int Class_2_BE40C25CC1FE4CF3_TypeDefinitionIndex = 91034;

class Class_2_BE40C25CC1FE4CF3 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_3; // 0x18
	::UnityEngine::RectTransform* Field_2_7; // 0x20
	::UnityEngine::Transform* Field_2_0; // 0x28
	::UnityEngine::Transform* Field_2_2; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x38
	::UnityEngine::Transform* Field_2_1; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE40C25CC1FE4CF3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BE40C25CC1FE4CF3_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BE40C25CC1FE4CF3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE40C25CC1FE4CF3_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
