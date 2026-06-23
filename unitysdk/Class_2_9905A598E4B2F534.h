#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_9905A598E4B2F534_Class_2_91EE61A16E3A7DF2_2;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_9905A598E4B2F534_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x10F6C5A0)
#define CLASS_2_9905A598E4B2F534_METHOD_2_731689AB6AF6DA6E_OFFSET UNITYSDK_OFFSET(0x10F6C3B0)
#define CLASS_2_9905A598E4B2F534_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10F6C630)
#define CLASS_2_9905A598E4B2F534_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x10F6C200)
#define CLASS_2_9905A598E4B2F534__CTOR_OFFSET UNITYSDK_OFFSET(0x10F6C620)

inline static constexpr unsigned int Class_2_9905A598E4B2F534_TypeDefinitionIndex = 50158;

class Class_2_9905A598E4B2F534 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_9905A598E4B2F534_Class_2_91EE61A16E3A7DF2_2*>*>* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9905A598E4B2F534__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9905A598E4B2F534_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9905A598E4B2F534_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_9905A598E4B2F534_Class_2_91EE61A16E3A7DF2_2*>*>* Method_2_731689AB6AF6DA6E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_9905A598E4B2F534_Class_2_91EE61A16E3A7DF2_2*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9905A598E4B2F534_METHOD_2_731689AB6AF6DA6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9905A598E4B2F534_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
