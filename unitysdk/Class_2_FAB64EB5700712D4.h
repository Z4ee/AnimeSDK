#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_FAB64EB5700712D4_Class_2_362519C87892410C;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_FAB64EB5700712D4_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x140BF650)
#define CLASS_2_FAB64EB5700712D4_METHOD_2_731689AB6AF6DA6E_OFFSET UNITYSDK_OFFSET(0x140BF810)
#define CLASS_2_FAB64EB5700712D4_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x140BFA00)
#define CLASS_2_FAB64EB5700712D4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x140BFAF0)
#define CLASS_2_FAB64EB5700712D4__CTOR_OFFSET UNITYSDK_OFFSET(0x140BFAE0)

inline static constexpr unsigned int Class_2_FAB64EB5700712D4_TypeDefinitionIndex = 68228;

class Class_2_FAB64EB5700712D4 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_FAB64EB5700712D4_Class_2_362519C87892410C*>*>* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x20
	::UnityEngine::Transform* Field_2_5; // 0x28
	::UnityEngine::Transform* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_2; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAB64EB5700712D4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FAB64EB5700712D4_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FAB64EB5700712D4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAB64EB5700712D4_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_FAB64EB5700712D4_Class_2_362519C87892410C*>*>* Method_2_731689AB6AF6DA6E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_FAB64EB5700712D4_Class_2_362519C87892410C*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FAB64EB5700712D4_METHOD_2_731689AB6AF6DA6E_OFFSET))(this, a1, a2);
	}
};
