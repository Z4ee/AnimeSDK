#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1F265C0C485137E3_2_Class_2_D9EA9254F6280D85;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_1F265C0C485137E3_2_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x154A5AB0)
#define CLASS_2_1F265C0C485137E3_2_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x154A5730)
#define CLASS_2_1F265C0C485137E3_2_METHOD_2_731689AB6AF6DA6E_OFFSET UNITYSDK_OFFSET(0x154A58C0)
#define CLASS_2_1F265C0C485137E3_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x154A5B40)
#define CLASS_2_1F265C0C485137E3_2__CTOR_OFFSET UNITYSDK_OFFSET(0x154A5B30)

inline static constexpr unsigned int Class_2_1F265C0C485137E3_2_TypeDefinitionIndex = 83891;

class Class_2_1F265C0C485137E3_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x18
	::UnityEngine::RectTransform* Field_2_3; // 0x20
	::UnityEngine::RectTransform* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_1F265C0C485137E3_2_Class_2_D9EA9254F6280D85*>*>* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F265C0C485137E3_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1F265C0C485137E3_2_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1F265C0C485137E3_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1F265C0C485137E3_2_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_1F265C0C485137E3_2_Class_2_D9EA9254F6280D85*>*>* Method_2_731689AB6AF6DA6E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_1F265C0C485137E3_2_Class_2_D9EA9254F6280D85*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1F265C0C485137E3_2_METHOD_2_731689AB6AF6DA6E_OFFSET))(this, a1, a2);
	}
};
