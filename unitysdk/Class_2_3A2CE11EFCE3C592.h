#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_3A2CE11EFCE3C592_Class_2_7D6483DC96481CD2;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_3A2CE11EFCE3C592_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x12567380)
#define CLASS_2_3A2CE11EFCE3C592_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x12567560)
#define CLASS_2_3A2CE11EFCE3C592_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12567610)
#define CLASS_2_3A2CE11EFCE3C592__CTOR_OFFSET UNITYSDK_OFFSET(0x12567600)

inline static constexpr unsigned int Class_2_3A2CE11EFCE3C592_TypeDefinitionIndex = 40231;

class Class_2_3A2CE11EFCE3C592 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_11; // 0x18
	::UnityEngine::GameObject* Field_2_5; // 0x20
	::UnityEngine::RectTransform* Field_2_6; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_3A2CE11EFCE3C592_Class_2_7D6483DC96481CD2*>* Field_2_0; // 0x30
	::UnityEngine::RectTransform* Field_2_4; // 0x38
	::UnityEngine::RectTransform* Field_2_7; // 0x40
	::Class_2_0D31A1661D004892<::Class_2_3A2CE11EFCE3C592_Class_2_7D6483DC96481CD2*>* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A2CE11EFCE3C592__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3A2CE11EFCE3C592_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3A2CE11EFCE3C592_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A2CE11EFCE3C592_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
