#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_9397985AD8EADED0_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x120D33B0)
#define CLASS_2_9397985AD8EADED0_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x120D3560)
#define CLASS_2_9397985AD8EADED0_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x120D3610)
#define CLASS_2_9397985AD8EADED0__CTOR_OFFSET UNITYSDK_OFFSET(0x120D3600)

inline static constexpr unsigned int Class_2_9397985AD8EADED0_TypeDefinitionIndex = 50366;

class Class_2_9397985AD8EADED0 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x18
	::MonoUITableScrollV2* Field_2_5; // 0x20
	::UnityEngine::RectTransform* Field_2_0; // 0x28
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralBtn03WidgetController*>* Field_2_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9397985AD8EADED0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9397985AD8EADED0_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9397985AD8EADED0_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9397985AD8EADED0_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
