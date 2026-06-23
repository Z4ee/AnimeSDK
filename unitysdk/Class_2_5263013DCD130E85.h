#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_5263013DCD130E85_METHOD_2_65367CC4DD011F4E_OFFSET UNITYSDK_OFFSET(0x14CB0F30)
#define CLASS_2_5263013DCD130E85_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x14CB1080)
#define CLASS_2_5263013DCD130E85_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x14CB0D40)
#define CLASS_2_5263013DCD130E85_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14CB1130)
#define CLASS_2_5263013DCD130E85__CTOR_OFFSET UNITYSDK_OFFSET(0x14CB1120)

inline static constexpr unsigned int Class_2_5263013DCD130E85_TypeDefinitionIndex = 87634;

class Class_2_5263013DCD130E85 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_3; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_0; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x30
	::UnityEngine::RectTransform* Field_2_7; // 0x38
	::MoleMole::MonoGamepadModule* Field_2_5; // 0x40
	::UnityEngine::Transform* Field_2_4; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5263013DCD130E85__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5263013DCD130E85_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5263013DCD130E85_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_2_65367CC4DD011F4E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5263013DCD130E85_METHOD_2_65367CC4DD011F4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5263013DCD130E85_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
