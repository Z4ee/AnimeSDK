#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_65C1A8EF90D57BB1_Class_2_962C3E725783D025;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_65C1A8EF90D57BB1_METHOD_2_731689AB6AF6DA6E_OFFSET UNITYSDK_OFFSET(0x1440EA50)
#define CLASS_2_65C1A8EF90D57BB1_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x1440EC40)
#define CLASS_2_65C1A8EF90D57BB1_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x1440E830)
#define CLASS_2_65C1A8EF90D57BB1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1440ED40)
#define CLASS_2_65C1A8EF90D57BB1__CTOR_OFFSET UNITYSDK_OFFSET(0x1440ED30)

inline static constexpr unsigned int Class_2_65C1A8EF90D57BB1_TypeDefinitionIndex = 85127;

class Class_2_65C1A8EF90D57BB1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x18
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_65C1A8EF90D57BB1_Class_2_962C3E725783D025*>*>* Field_2_2; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x40
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65C1A8EF90D57BB1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_65C1A8EF90D57BB1_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_65C1A8EF90D57BB1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_65C1A8EF90D57BB1_Class_2_962C3E725783D025*>*>* Method_2_731689AB6AF6DA6E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_65C1A8EF90D57BB1_Class_2_962C3E725783D025*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_65C1A8EF90D57BB1_METHOD_2_731689AB6AF6DA6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65C1A8EF90D57BB1_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
