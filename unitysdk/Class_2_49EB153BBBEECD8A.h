#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralPhaseProgressWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_49EB153BBBEECD8A_METHOD_2_65367CC4DD011F4E_OFFSET UNITYSDK_OFFSET(0x15366E30)
#define CLASS_2_49EB153BBBEECD8A_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x15366F80)
#define CLASS_2_49EB153BBBEECD8A_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x15366C20)
#define CLASS_2_49EB153BBBEECD8A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15367030)
#define CLASS_2_49EB153BBBEECD8A__CTOR_OFFSET UNITYSDK_OFFSET(0x15367020)

inline static constexpr unsigned int Class_2_49EB153BBBEECD8A_TypeDefinitionIndex = 51419;

class Class_2_49EB153BBBEECD8A : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_1; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x28
	::UnityEngine::RectTransform* Field_2_4; // 0x30
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_5; // 0x38
	::UnityEngine::RectTransform* Field_2_3; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_2; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x50
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralPhaseProgressWidgetController*>* Field_2_8; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49EB153BBBEECD8A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_49EB153BBBEECD8A_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_49EB153BBBEECD8A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_2_65367CC4DD011F4E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_49EB153BBBEECD8A_METHOD_2_65367CC4DD011F4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49EB153BBBEECD8A_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
