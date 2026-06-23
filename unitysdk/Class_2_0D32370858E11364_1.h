#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_0D32370858E11364_1_Class_2_8D27AC8B3AD6C3C9;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_0D32370858E11364_1_METHOD_2_15A96BFA7BCB1910_OFFSET UNITYSDK_OFFSET(0x142B9210)
#define CLASS_2_0D32370858E11364_1_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x142B9580)
#define CLASS_2_0D32370858E11364_1_METHOD_2_731689AB6AF6DA6E_OFFSET UNITYSDK_OFFSET(0x142B9390)
#define CLASS_2_0D32370858E11364_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x142B9610)
#define CLASS_2_0D32370858E11364_1__CTOR_OFFSET UNITYSDK_OFFSET(0x142B9600)

inline static constexpr unsigned int Class_2_0D32370858E11364_1_TypeDefinitionIndex = 85642;

class Class_2_0D32370858E11364_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_0D32370858E11364_1_Class_2_8D27AC8B3AD6C3C9*>*>* Field_2_0; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D32370858E11364_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15A96BFA7BCB1910(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0D32370858E11364_1_METHOD_2_15A96BFA7BCB1910_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_0D32370858E11364_1_Class_2_8D27AC8B3AD6C3C9*>*>* Method_2_731689AB6AF6DA6E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_0D32370858E11364_1_Class_2_8D27AC8B3AD6C3C9*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0D32370858E11364_1_METHOD_2_731689AB6AF6DA6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D32370858E11364_1_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0D32370858E11364_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
