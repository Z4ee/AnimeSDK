#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_9905A598E4B2F534_4_Class_2_B8419EF16018D853_2;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_9905A598E4B2F534_4_METHOD_2_731689AB6AF6DA6E_OFFSET UNITYSDK_OFFSET(0x156EAC30)
#define CLASS_2_9905A598E4B2F534_4_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x156EAE20)
#define CLASS_2_9905A598E4B2F534_4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x156EAEA0)
#define CLASS_2_9905A598E4B2F534_4_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x156EAA50)
#define CLASS_2_9905A598E4B2F534_4__CTOR_OFFSET UNITYSDK_OFFSET(0x156EAE90)

inline static constexpr unsigned int Class_2_9905A598E4B2F534_4_TypeDefinitionIndex = 82058;

class Class_2_9905A598E4B2F534_4 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x30
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_9905A598E4B2F534_4_Class_2_B8419EF16018D853_2*>*>* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9905A598E4B2F534_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9905A598E4B2F534_4_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9905A598E4B2F534_4_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_9905A598E4B2F534_4_Class_2_B8419EF16018D853_2*>*>* Method_2_731689AB6AF6DA6E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_9905A598E4B2F534_4_Class_2_B8419EF16018D853_2*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9905A598E4B2F534_4_METHOD_2_731689AB6AF6DA6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9905A598E4B2F534_4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
