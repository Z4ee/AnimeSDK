#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMiniScapeMapPage_MapIconDetailWidgetController; }
namespace MoleMole { class UIMiniScapeMapPage_MapWidgetController; }
namespace MoleMole { class UIMiniScapeMapPage_TopWidgetController; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_17FCF354542601B4_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x10B903E0)
#define CLASS_2_17FCF354542601B4_METHOD_2_6FDA0C1696A00F81_OFFSET UNITYSDK_OFFSET(0x10B90210)
#define CLASS_2_17FCF354542601B4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10B904F0)
#define CLASS_2_17FCF354542601B4__CTOR_OFFSET UNITYSDK_OFFSET(0x10B904E0)

inline static constexpr unsigned int Class_2_17FCF354542601B4_TypeDefinitionIndex = 52515;

class Class_2_17FCF354542601B4 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_30A064D7BE47C07D<::MoleMole::UIMiniScapeMapPage_MapIconDetailWidgetController*>* Field_2_1; // 0x18
	::Class_3_30A064D7BE47C07D<::MoleMole::UIMiniScapeMapPage_MapWidgetController*>* Field_2_0; // 0x20
	::Class_3_30A064D7BE47C07D<::MoleMole::UIMiniScapeMapPage_TopWidgetController*>* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17FCF354542601B4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6FDA0C1696A00F81(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_17FCF354542601B4_METHOD_2_6FDA0C1696A00F81_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_17FCF354542601B4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17FCF354542601B4_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
