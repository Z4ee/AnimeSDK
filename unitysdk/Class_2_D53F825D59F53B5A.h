#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIActivityDemoTrialPreviewBtnWidgetController; }
namespace MoleMole { class UIActivityMainLineTeleportWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_D53F825D59F53B5A_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x1480A820)
#define CLASS_2_D53F825D59F53B5A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1480A8F0)
#define CLASS_2_D53F825D59F53B5A_METHOD_2_CC20D6DA42E37FA5_OFFSET UNITYSDK_OFFSET(0x1480A660)
#define CLASS_2_D53F825D59F53B5A__CTOR_OFFSET UNITYSDK_OFFSET(0x1480A8E0)

inline static constexpr unsigned int Class_2_D53F825D59F53B5A_TypeDefinitionIndex = 39872;

class Class_2_D53F825D59F53B5A : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::UIGeneralButtonController* Field_2_2; // 0x18
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIActivityMainLineTeleportWidgetController*>* Field_2_1; // 0x20
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIActivityDemoTrialPreviewBtnWidgetController*>* Field_2_3; // 0x28
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIActivityMainLineTeleportWidgetController*>* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D53F825D59F53B5A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CC20D6DA42E37FA5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D53F825D59F53B5A_METHOD_2_CC20D6DA42E37FA5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D53F825D59F53B5A_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_D53F825D59F53B5A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
