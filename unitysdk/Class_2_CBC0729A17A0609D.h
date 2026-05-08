#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIActivityReturnDoubleRowItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_CBC0729A17A0609D_METHOD_2_27DD7B05CB1CF44F_OFFSET UNITYSDK_OFFSET(0x1296A3D0)
#define CLASS_2_CBC0729A17A0609D_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1296A5B0)
#define CLASS_2_CBC0729A17A0609D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1296A630)
#define CLASS_2_CBC0729A17A0609D_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x1296A220)
#define CLASS_2_CBC0729A17A0609D__CTOR_OFFSET UNITYSDK_OFFSET(0x1296A620)

inline static constexpr unsigned int Class_2_CBC0729A17A0609D_TypeDefinitionIndex = 38492;

class Class_2_CBC0729A17A0609D : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x20
	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIActivityReturnDoubleRowItemWidgetController*>*>* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBC0729A17A0609D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CBC0729A17A0609D_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBC0729A17A0609D_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIActivityReturnDoubleRowItemWidgetController*>*>* Method_2_27DD7B05CB1CF44F(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIActivityReturnDoubleRowItemWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CBC0729A17A0609D_METHOD_2_27DD7B05CB1CF44F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CBC0729A17A0609D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
