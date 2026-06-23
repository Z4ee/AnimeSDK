#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B382CAAA120A70DB_Class_2_E4D4EF8398E9F9EC;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoUIOverlordFeastMissionConfig; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_B382CAAA120A70DB_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x13B8FBE0)
#define CLASS_2_B382CAAA120A70DB_METHOD_2_731689AB6AF6DA6E_OFFSET UNITYSDK_OFFSET(0x13B8FDA0)
#define CLASS_2_B382CAAA120A70DB_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x13B8FF90)
#define CLASS_2_B382CAAA120A70DB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13B90060)
#define CLASS_2_B382CAAA120A70DB__CTOR_OFFSET UNITYSDK_OFFSET(0x13B90050)

inline static constexpr unsigned int Class_2_B382CAAA120A70DB_TypeDefinitionIndex = 83017;

class Class_2_B382CAAA120A70DB : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoUIOverlordFeastMissionConfig* Field_2_4; // 0x18
	::UnityEngine::RectTransform* Field_2_5; // 0x20
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_B382CAAA120A70DB_Class_2_E4D4EF8398E9F9EC*>*>* Field_2_1; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x30
	::UnityEngine::RectTransform* Field_2_2; // 0x38
	::UnityEngine::RectTransform* Field_2_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B382CAAA120A70DB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B382CAAA120A70DB_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B382CAAA120A70DB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_B382CAAA120A70DB_Class_2_E4D4EF8398E9F9EC*>*>* Method_2_731689AB6AF6DA6E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_B382CAAA120A70DB_Class_2_E4D4EF8398E9F9EC*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B382CAAA120A70DB_METHOD_2_731689AB6AF6DA6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B382CAAA120A70DB_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
