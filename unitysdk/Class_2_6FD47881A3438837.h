#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIIncomeNumWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_6FD47881A3438837_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x133DE500)
#define CLASS_2_6FD47881A3438837_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x133DE870)
#define CLASS_2_6FD47881A3438837_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x133DE820)
#define CLASS_2_6FD47881A3438837_METHOD_2_F0BB51B156C6C481_OFFSET UNITYSDK_OFFSET(0x133DE640)
#define CLASS_2_6FD47881A3438837__CTOR_OFFSET UNITYSDK_OFFSET(0x133DE860)

inline static constexpr unsigned int Class_2_6FD47881A3438837_TypeDefinitionIndex = 83109;

class Class_2_6FD47881A3438837 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIIncomeNumWidgetController*>*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FD47881A3438837__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6FD47881A3438837_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6FD47881A3438837_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FD47881A3438837_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIIncomeNumWidgetController*>*>* Method_2_F0BB51B156C6C481(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIIncomeNumWidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6FD47881A3438837_METHOD_2_F0BB51B156C6C481_OFFSET))(this, a1, a2);
	}
};
