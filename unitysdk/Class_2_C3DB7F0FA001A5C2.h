#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIIncomeNumWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_C3DB7F0FA001A5C2_METHOD_2_6C99DCCD4CB411E3_OFFSET UNITYSDK_OFFSET(0x1461CBD0)
#define CLASS_2_C3DB7F0FA001A5C2_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x1461CA80)
#define CLASS_2_C3DB7F0FA001A5C2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1461CE00)
#define CLASS_2_C3DB7F0FA001A5C2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1461CDB0)
#define CLASS_2_C3DB7F0FA001A5C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1461CDF0)

inline static constexpr unsigned int Class_2_C3DB7F0FA001A5C2_TypeDefinitionIndex = 51481;

class Class_2_C3DB7F0FA001A5C2 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIIncomeNumWidgetController*>*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3DB7F0FA001A5C2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C3DB7F0FA001A5C2_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C3DB7F0FA001A5C2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3DB7F0FA001A5C2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIIncomeNumWidgetController*>*>* Method_2_6C99DCCD4CB411E3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIIncomeNumWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C3DB7F0FA001A5C2_METHOD_2_6C99DCCD4CB411E3_OFFSET))(this, a1, a2);
	}
};
