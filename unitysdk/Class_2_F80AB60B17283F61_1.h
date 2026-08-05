#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_F80AB60B17283F61_1_METHOD_2_4C9CB642EC86F4C4_OFFSET UNITYSDK_OFFSET(0x13E3DEF0)
#define CLASS_2_F80AB60B17283F61_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13E3E050)
#define CLASS_2_F80AB60B17283F61_1_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x13E3DE50)
#define CLASS_2_F80AB60B17283F61_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13E3E040)

inline static constexpr unsigned int Class_2_F80AB60B17283F61_1_TypeDefinitionIndex = 68729;

class Class_2_F80AB60B17283F61_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F80AB60B17283F61_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F80AB60B17283F61_1_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Method_2_4C9CB642EC86F4C4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F80AB60B17283F61_1_METHOD_2_4C9CB642EC86F4C4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F80AB60B17283F61_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
