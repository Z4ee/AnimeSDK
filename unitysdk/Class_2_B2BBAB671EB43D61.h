#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFlowerMainTagWidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_B2BBAB671EB43D61_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x17EA1780)
#define CLASS_2_B2BBAB671EB43D61_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17EA1880)
#define CLASS_2_B2BBAB671EB43D61_METHOD_2_E5B787312E0EE38B_OFFSET UNITYSDK_OFFSET(0x17EA15C0)
#define CLASS_2_B2BBAB671EB43D61__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA1870)

inline static constexpr unsigned int Class_2_B2BBAB671EB43D61_TypeDefinitionIndex = 54757;

class Class_2_B2BBAB671EB43D61 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UIFlowerMainTagWidgetController*>* Field_2_5; // 0x18
	::Class_3_826A30478DA34A69<::MoleMole::UIFlowerMainTagWidgetController*>* Field_2_7; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIFlowerMainTagWidgetController*>* Field_2_6; // 0x28
	::UnityEngine::GameObject* Field_2_1; // 0x30
	::Class_3_826A30478DA34A69<::MoleMole::UIFlowerMainTagWidgetController*>* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2BBAB671EB43D61__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E5B787312E0EE38B(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B2BBAB671EB43D61_METHOD_2_E5B787312E0EE38B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B2BBAB671EB43D61_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2BBAB671EB43D61_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
