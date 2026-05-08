#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_F332E77B5C1263E9_Class_2_8AF8272AE2304074;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_F332E77B5C1263E9_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0xFF304B0)
#define CLASS_2_F332E77B5C1263E9_METHOD_2_731689AB6AF6DA6E_OFFSET UNITYSDK_OFFSET(0xFF306A0)
#define CLASS_2_F332E77B5C1263E9_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xFF30890)
#define CLASS_2_F332E77B5C1263E9_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xFF30940)
#define CLASS_2_F332E77B5C1263E9__CTOR_OFFSET UNITYSDK_OFFSET(0xFF30930)

inline static constexpr unsigned int Class_2_F332E77B5C1263E9_TypeDefinitionIndex = 45983;

class Class_2_F332E77B5C1263E9 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x20
	::MoleMole::UIGeneralButtonController* Field_2_3; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x30
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_F332E77B5C1263E9_Class_2_8AF8272AE2304074*>*>* Field_2_5; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F332E77B5C1263E9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F332E77B5C1263E9_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_F332E77B5C1263E9_Class_2_8AF8272AE2304074*>*>* Method_2_731689AB6AF6DA6E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_F332E77B5C1263E9_Class_2_8AF8272AE2304074*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F332E77B5C1263E9_METHOD_2_731689AB6AF6DA6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F332E77B5C1263E9_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F332E77B5C1263E9_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
