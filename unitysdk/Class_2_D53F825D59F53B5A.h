#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIActivityDemoTrialPreviewBtnWidgetController; }
namespace MoleMole { class UIActivityMainLineTeleportWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_D53F825D59F53B5A_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x178F6470)
#define CLASS_2_D53F825D59F53B5A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x178F6540)
#define CLASS_2_D53F825D59F53B5A_METHOD_2_CC20D6DA42E37FA5_OFFSET UNITYSDK_OFFSET(0x178F62B0)
#define CLASS_2_D53F825D59F53B5A__CTOR_OFFSET UNITYSDK_OFFSET(0x178F6530)

inline static constexpr unsigned int Class_2_D53F825D59F53B5A_TypeDefinitionIndex = 51130;

class Class_2_D53F825D59F53B5A : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityMainLineTeleportWidgetController*>* Field_2_1; // 0x18
	::MoleMole::UIGeneralButtonController* Field_2_0; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityDemoTrialPreviewBtnWidgetController*>* Field_2_7; // 0x28
	::Class_3_826A30478DA34A69<::MoleMole::UIActivityMainLineTeleportWidgetController*>* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D53F825D59F53B5A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CC20D6DA42E37FA5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D53F825D59F53B5A_METHOD_2_CC20D6DA42E37FA5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D53F825D59F53B5A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D53F825D59F53B5A_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
