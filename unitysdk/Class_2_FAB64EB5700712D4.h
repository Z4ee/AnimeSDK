#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FAB64EB5700712D4_Class_2_B258B8EB3E43994E;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_FAB64EB5700712D4_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x120C4A50)
#define CLASS_2_FAB64EB5700712D4_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x120C4E00)
#define CLASS_2_FAB64EB5700712D4_METHOD_2_C478319D36C32837_OFFSET UNITYSDK_OFFSET(0x120C4C10)
#define CLASS_2_FAB64EB5700712D4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x120C4EF0)
#define CLASS_2_FAB64EB5700712D4__CTOR_OFFSET UNITYSDK_OFFSET(0x120C4EE0)

inline static constexpr unsigned int Class_2_FAB64EB5700712D4_TypeDefinitionIndex = 69184;

class Class_2_FAB64EB5700712D4 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_FAB64EB5700712D4_Class_2_B258B8EB3E43994E*>*>* Field_2_4; // 0x18
	::UnityEngine::Transform* Field_2_7; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_6; // 0x30
	::UnityEngine::Transform* Field_2_11; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAB64EB5700712D4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FAB64EB5700712D4_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FAB64EB5700712D4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_FAB64EB5700712D4_Class_2_B258B8EB3E43994E*>*>* Method_2_C478319D36C32837(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_FAB64EB5700712D4_Class_2_B258B8EB3E43994E*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FAB64EB5700712D4_METHOD_2_C478319D36C32837_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAB64EB5700712D4_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
