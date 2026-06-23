#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_1C7BE08EB3AD6387_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x1AC580F0)
#define CLASS_2_1C7BE08EB3AD6387_METHOD_2_24D801B845639A4F_OFFSET UNITYSDK_OFFSET(0x1AC57F40)
#define CLASS_2_1C7BE08EB3AD6387_METHOD_2_43B30E80E60A7693_OFFSET UNITYSDK_OFFSET(0x1AC57D50)
#define CLASS_2_1C7BE08EB3AD6387_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1AC58180)
#define CLASS_2_1C7BE08EB3AD6387__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC58170)

inline static constexpr unsigned int Class_2_1C7BE08EB3AD6387_TypeDefinitionIndex = 45773;

class Class_2_1C7BE08EB3AD6387 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_3; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x20
	::UnityEngine::RectTransform* Field_2_0; // 0x28
	::Class_2_FDFE69FE7B72463B* Field_2_1; // 0x30
	::UnityEngine::RectTransform* Field_2_5; // 0x38
	::System::Collections::Generic::List_1<::Class_2_FDFE69FE7B72463B*>* Field_2_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C7BE08EB3AD6387__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43B30E80E60A7693(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1C7BE08EB3AD6387_METHOD_2_43B30E80E60A7693_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_FDFE69FE7B72463B*>* Method_2_24D801B845639A4F(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_FDFE69FE7B72463B*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1C7BE08EB3AD6387_METHOD_2_24D801B845639A4F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C7BE08EB3AD6387_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1C7BE08EB3AD6387_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
