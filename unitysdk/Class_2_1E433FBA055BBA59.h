#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralScrollViewTestWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_1E433FBA055BBA59_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x113ACA70)
#define CLASS_2_1E433FBA055BBA59_METHOD_2_725B4A11CB12187A_OFFSET UNITYSDK_OFFSET(0x113AC890)
#define CLASS_2_1E433FBA055BBA59_METHOD_2_C4115FB25AD4513C_OFFSET UNITYSDK_OFFSET(0x113AC6B0)
#define CLASS_2_1E433FBA055BBA59_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x113ACB00)
#define CLASS_2_1E433FBA055BBA59_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x113AC510)
#define CLASS_2_1E433FBA055BBA59__CTOR_OFFSET UNITYSDK_OFFSET(0x113ACAF0)

inline static constexpr unsigned int Class_2_1E433FBA055BBA59_TypeDefinitionIndex = 62130;

class Class_2_1E433FBA055BBA59 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_2_B4378B46E0020E85*>* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralScrollViewTestWidgetController*>*>* Field_2_2; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x28
	::UnityEngine::GameObject* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E433FBA055BBA59__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1E433FBA055BBA59_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1E433FBA055BBA59_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralScrollViewTestWidgetController*>*>* Method_2_725B4A11CB12187A(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralScrollViewTestWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1E433FBA055BBA59_METHOD_2_725B4A11CB12187A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_B4378B46E0020E85*>* Method_2_C4115FB25AD4513C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_B4378B46E0020E85*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1E433FBA055BBA59_METHOD_2_C4115FB25AD4513C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E433FBA055BBA59_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
