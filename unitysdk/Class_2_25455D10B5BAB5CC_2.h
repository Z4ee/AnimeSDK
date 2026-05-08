#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57_1.h"

class Class_2_2CBC8051822D14AC;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIQuestionsAnswerScreenDetailWidgetController; }
namespace MoleMole { class UIQuestionsAnswerScreenSettleWidgetController; }
namespace MoleMole { class UIQuestionsAnswerScreenStandbyWidgetController; }
namespace System { class String; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_25455D10B5BAB5CC_2_METHOD_2_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0x100B9BD0)
#define CLASS_2_25455D10B5BAB5CC_2_METHOD_2_7A0E335452FE2056_OFFSET UNITYSDK_OFFSET(0x100B9A40)
#define CLASS_2_25455D10B5BAB5CC_2_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x100B9970)
#define CLASS_2_25455D10B5BAB5CC_2_METHOD_2_AD399A63502445B7_OFFSET UNITYSDK_OFFSET(0x100B9D10)
#define CLASS_2_25455D10B5BAB5CC_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x100B9C70)
#define CLASS_2_25455D10B5BAB5CC_2_METHOD_2_FA381B9E901D74DC_OFFSET UNITYSDK_OFFSET(0x100B97A0)
#define CLASS_2_25455D10B5BAB5CC_2__CTOR_OFFSET UNITYSDK_OFFSET(0x100B9A30)

inline static constexpr unsigned int Class_2_25455D10B5BAB5CC_2_TypeDefinitionIndex = 58040;

class Class_2_25455D10B5BAB5CC_2 : public ::Class_1_EEA0111A28582B57_1
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_3_30A064D7BE47C07D<::MoleMole::UIQuestionsAnswerScreenStandbyWidgetController*>* Field_2_1; // 0x18
	::Class_3_30A064D7BE47C07D<::MoleMole::UIQuestionsAnswerScreenSettleWidgetController*>* Field_2_3; // 0x20
	::Class_3_30A064D7BE47C07D<::MoleMole::UIQuestionsAnswerScreenDetailWidgetController*>* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25455D10B5BAB5CC_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_FA381B9E901D74DC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_25455D10B5BAB5CC_2_METHOD_2_FA381B9E901D74DC_OFFSET))(this, a1, a2);
	}

	static ::Class_2_25455D10B5BAB5CC_2* Method_2_7A0E335452FE2056(::Class_2_2CBC8051822D14AC* a1, ::Class_2_A9A857AD270B9CE1* a2, ::MoleMole::UIControlCollection* a3)
	{
		return ((::Class_2_25455D10B5BAB5CC_2*(*)(::Class_2_2CBC8051822D14AC*, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_25455D10B5BAB5CC_2_METHOD_2_7A0E335452FE2056_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_25455D10B5BAB5CC_2_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_25455D10B5BAB5CC_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3C8305164A0C9B06(::Class_2_2CBC8051822D14AC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2CBC8051822D14AC*))((::PBYTE)hIl2Cpp + CLASS_2_25455D10B5BAB5CC_2_METHOD_2_3C8305164A0C9B06_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_AD399A63502445B7(::MoleMole::UIControlCollection* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_25455D10B5BAB5CC_2_METHOD_2_AD399A63502445B7_OFFSET))(a1);
	}
};
