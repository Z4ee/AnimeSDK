#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_9A7FB87B57FBA711_1_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x1153A260)
#define CLASS_2_9A7FB87B57FBA711_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1153A3D0)
#define CLASS_2_9A7FB87B57FBA711_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1153A3C0)

inline static constexpr unsigned int Class_2_9A7FB87B57FBA711_1_TypeDefinitionIndex = 47374;

class Class_2_9A7FB87B57FBA711_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_FDFE69FE7B72463B* Field_2_6; // 0x18
	::Class_2_FDFE69FE7B72463B* Field_2_3; // 0x20
	::UnityEngine::RectTransform* Field_2_2; // 0x28
	::UnityEngine::RectTransform* Field_2_0; // 0x30
	::UnityEngine::RectTransform* Field_2_7; // 0x38
	::UnityEngine::RectTransform* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A7FB87B57FBA711_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9A7FB87B57FBA711_1_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9A7FB87B57FBA711_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
