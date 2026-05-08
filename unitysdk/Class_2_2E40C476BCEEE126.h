#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIArpeggioCardWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_2E40C476BCEEE126_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x13B0CF70)
#define CLASS_2_2E40C476BCEEE126_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x13B0CC10)
#define CLASS_2_2E40C476BCEEE126_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13B0D060)
#define CLASS_2_2E40C476BCEEE126_METHOD_2_DFD45D28AA07ADDA_OFFSET UNITYSDK_OFFSET(0x13B0CD90)
#define CLASS_2_2E40C476BCEEE126__CTOR_OFFSET UNITYSDK_OFFSET(0x13B0D050)

inline static constexpr unsigned int Class_2_2E40C476BCEEE126_TypeDefinitionIndex = 50642;

class Class_2_2E40C476BCEEE126 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIArpeggioCardWidgetController*>*>* Field_2_0; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E40C476BCEEE126__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2E40C476BCEEE126_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIArpeggioCardWidgetController*>*>* Method_2_DFD45D28AA07ADDA(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIArpeggioCardWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2E40C476BCEEE126_METHOD_2_DFD45D28AA07ADDA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E40C476BCEEE126_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2E40C476BCEEE126_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
