#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFlowerMainTargetImgWidgetController; }
namespace MoleMole { class UIFlowerMainTargetRoleWidgetController; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_3F217C90780E6324_METHOD_2_57DFF24ACF7DBF36_OFFSET UNITYSDK_OFFSET(0x1876D940)
#define CLASS_2_3F217C90780E6324_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x1876DAC0)
#define CLASS_2_3F217C90780E6324_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1876DB70)
#define CLASS_2_3F217C90780E6324__CTOR_OFFSET UNITYSDK_OFFSET(0x1876DB60)

inline static constexpr unsigned int Class_2_3F217C90780E6324_TypeDefinitionIndex = 55528;

class Class_2_3F217C90780E6324 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UIFlowerMainTargetRoleWidgetController*>* Field_2_1; // 0x18
	::Class_3_826A30478DA34A69<::MoleMole::UIFlowerMainTargetImgWidgetController*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F217C90780E6324__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_57DFF24ACF7DBF36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3F217C90780E6324_METHOD_2_57DFF24ACF7DBF36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F217C90780E6324_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3F217C90780E6324_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
