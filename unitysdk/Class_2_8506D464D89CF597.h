#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8506D464D89CF597_METHOD_2_15A96BFA7BCB1910_OFFSET UNITYSDK_OFFSET(0x143E62A0)
#define CLASS_2_8506D464D89CF597_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x143E6570)
#define CLASS_2_8506D464D89CF597_METHOD_2_5E6293B83256A167_OFFSET UNITYSDK_OFFSET(0x143E6420)
#define CLASS_2_8506D464D89CF597_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x143E6600)
#define CLASS_2_8506D464D89CF597__CTOR_OFFSET UNITYSDK_OFFSET(0x143E65F0)

inline static constexpr unsigned int Class_2_8506D464D89CF597_TypeDefinitionIndex = 76135;

class Class_2_8506D464D89CF597 : public ::Class_1_EEA0111A28582B57
{
public:
	::UIControllerExtensionData* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::MonoUITableScrollV2*>* Field_2_2; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8506D464D89CF597__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15A96BFA7BCB1910(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8506D464D89CF597_METHOD_2_15A96BFA7BCB1910_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8506D464D89CF597_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::MonoUITableScrollV2*>* Method_2_5E6293B83256A167(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::MonoUITableScrollV2*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8506D464D89CF597_METHOD_2_5E6293B83256A167_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8506D464D89CF597_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
