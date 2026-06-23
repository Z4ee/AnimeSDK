#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8C4EEDCDF27EDEA0.h"

class Class_0_16E4307DCC419505_527;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E87F1D15F1D4AC72_METHOD_2_2C825E716CE9F2F9_OFFSET UNITYSDK_OFFSET(0x13446D70)
#define CLASS_2_E87F1D15F1D4AC72_METHOD_2_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x13447070)
#define CLASS_2_E87F1D15F1D4AC72_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13447080)
#define CLASS_2_E87F1D15F1D4AC72__CTOR_OFFSET UNITYSDK_OFFSET(0x13435550)

inline static constexpr unsigned int Class_2_E87F1D15F1D4AC72_TypeDefinitionIndex = 78825;

class Class_2_E87F1D15F1D4AC72 : public ::Class_1_8C4EEDCDF27EDEA0
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_527*>* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_1_8C4EEDCDF27EDEA0*>* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E87F1D15F1D4AC72__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2C825E716CE9F2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E87F1D15F1D4AC72_METHOD_2_2C825E716CE9F2F9_OFFSET))(this);
	}

	::System::Void Method_2_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E87F1D15F1D4AC72_METHOD_2_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E87F1D15F1D4AC72_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
