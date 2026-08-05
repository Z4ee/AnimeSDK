#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8C4EEDCDF27EDEA0.h"

class Class_0_16E4307DCC419505_199;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E87F1D15F1D4AC72_METHOD_2_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0x145C1090)
#define CLASS_2_E87F1D15F1D4AC72_METHOD_2_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x145C13E0)
#define CLASS_2_E87F1D15F1D4AC72_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x145C1370)
#define CLASS_2_E87F1D15F1D4AC72__CTOR_OFFSET UNITYSDK_OFFSET(0x14582620)

inline static constexpr unsigned int Class_2_E87F1D15F1D4AC72_TypeDefinitionIndex = 77213;

class Class_2_E87F1D15F1D4AC72 : public ::Class_1_8C4EEDCDF27EDEA0
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_199*>* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_8C4EEDCDF27EDEA0*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E87F1D15F1D4AC72__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4358F70A163BCEAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E87F1D15F1D4AC72_METHOD_2_4358F70A163BCEAE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E87F1D15F1D4AC72_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E87F1D15F1D4AC72_METHOD_2_7033EFB970A18315_OFFSET))(this);
	}
};
