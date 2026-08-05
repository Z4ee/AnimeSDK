#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_3AE3E7097D93DD92_Class_2_8ADC80830FF66961;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_3AE3E7097D93DD92_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x1826D1E0)
#define CLASS_2_3AE3E7097D93DD92_METHOD_2_C478319D36C32837_OFFSET UNITYSDK_OFFSET(0x1826CFF0)
#define CLASS_2_3AE3E7097D93DD92_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1826D290)
#define CLASS_2_3AE3E7097D93DD92_METHOD_2_D0F74BA0038650D0_OFFSET UNITYSDK_OFFSET(0x1826CE40)
#define CLASS_2_3AE3E7097D93DD92__CTOR_OFFSET UNITYSDK_OFFSET(0x1826D280)

inline static constexpr unsigned int Class_2_3AE3E7097D93DD92_TypeDefinitionIndex = 75503;

class Class_2_3AE3E7097D93DD92 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x18
	::UnityEngine::RectTransform* Field_2_6; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_3AE3E7097D93DD92_Class_2_8ADC80830FF66961*>*>* Field_2_5; // 0x30
	::UnityEngine::UI::Text* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AE3E7097D93DD92__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D0F74BA0038650D0(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3AE3E7097D93DD92_METHOD_2_D0F74BA0038650D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3AE3E7097D93DD92_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_3AE3E7097D93DD92_Class_2_8ADC80830FF66961*>*>* Method_2_C478319D36C32837(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_3AE3E7097D93DD92_Class_2_8ADC80830FF66961*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3AE3E7097D93DD92_METHOD_2_C478319D36C32837_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AE3E7097D93DD92_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
