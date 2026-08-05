#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_14B0BFEBE8C5942A_9_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1125EEF0)
#define CLASS_2_14B0BFEBE8C5942A_9_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x1125EE30)
#define CLASS_2_14B0BFEBE8C5942A_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1125EEE0)

inline static constexpr unsigned int Class_2_14B0BFEBE8C5942A_9_TypeDefinitionIndex = 84932;

class Class_2_14B0BFEBE8C5942A_9 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x18
	::MonoUITableScrollV2* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_14B0BFEBE8C5942A_9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_14B0BFEBE8C5942A_9_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_14B0BFEBE8C5942A_9_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
