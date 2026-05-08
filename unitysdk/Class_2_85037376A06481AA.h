#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIHollowCardItemBtnWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_85037376A06481AA_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x1082BD90)
#define CLASS_2_85037376A06481AA_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x1082BA20)
#define CLASS_2_85037376A06481AA_METHOD_2_4CBBF9B83351D46C_OFFSET UNITYSDK_OFFSET(0x1082BBB0)
#define CLASS_2_85037376A06481AA_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1082BE20)
#define CLASS_2_85037376A06481AA__CTOR_OFFSET UNITYSDK_OFFSET(0x1082BE10)

inline static constexpr unsigned int Class_2_85037376A06481AA_TypeDefinitionIndex = 73432;

class Class_2_85037376A06481AA : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_2; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20
	::UnityEngine::GameObject* Field_2_1; // 0x28
	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIHollowCardItemBtnWidgetController*>*>* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85037376A06481AA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_85037376A06481AA_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIHollowCardItemBtnWidgetController*>*>* Method_2_4CBBF9B83351D46C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_30A064D7BE47C07D<::MoleMole::UIHollowCardItemBtnWidgetController*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_85037376A06481AA_METHOD_2_4CBBF9B83351D46C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85037376A06481AA_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_85037376A06481AA_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
