#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIConsoleCameraBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralConsoleBtnWidgetController; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_AE8E07166E40801E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16F4A710)
#define CLASS_2_AE8E07166E40801E_METHOD_2_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x16F4A580)
#define CLASS_2_AE8E07166E40801E_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x16F4A300)
#define CLASS_2_AE8E07166E40801E__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4A700)

inline static constexpr unsigned int Class_2_AE8E07166E40801E_TypeDefinitionIndex = 65345;

class Class_2_AE8E07166E40801E : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralConsoleBtnWidgetController*>* Field_2_2; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralConsoleBtnWidgetController*>* Field_2_1; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_7; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x40
	::Class_3_826A30478DA34A69<::MoleMole::UIConsoleCameraBtnWidgetController*>* Field_2_3; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE8E07166E40801E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AE8E07166E40801E_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AE8E07166E40801E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE8E07166E40801E_METHOD_2_DD784213055292FB_OFFSET))(this);
	}
};
