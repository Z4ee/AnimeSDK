#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIIncomeNumWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_3_77F006AFD528532C_METHOD_3_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x134BE9D0)
#define CLASS_3_77F006AFD528532C_METHOD_3_79D44D69484C8F4A_OFFSET UNITYSDK_OFFSET(0x134BE680)
#define CLASS_3_77F006AFD528532C_METHOD_3_F0BB51B156C6C481_OFFSET UNITYSDK_OFFSET(0x134BE7F0)
#define CLASS_3_77F006AFD528532C__CTOR_OFFSET UNITYSDK_OFFSET(0x134BEA90)

inline static constexpr unsigned int Class_3_77F006AFD528532C_TypeDefinitionIndex = 73097;

class Class_3_77F006AFD528532C : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIIncomeNumWidgetController*>*>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77F006AFD528532C__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_79D44D69484C8F4A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_77F006AFD528532C_METHOD_3_79D44D69484C8F4A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIIncomeNumWidgetController*>*>* Method_3_F0BB51B156C6C481(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIIncomeNumWidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_77F006AFD528532C_METHOD_3_F0BB51B156C6C481_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77F006AFD528532C_METHOD_3_0865E94460F11643_OFFSET))(this);
	}
};
