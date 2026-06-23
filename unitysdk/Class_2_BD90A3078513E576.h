#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_BD90A3078513E576_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0xF7DAFB0)
#define CLASS_2_BD90A3078513E576_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0xF7DB370)
#define CLASS_2_BD90A3078513E576_METHOD_2_912644B05A6936B3_OFFSET UNITYSDK_OFFSET(0xF7DB220)
#define CLASS_2_BD90A3078513E576_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xF7DB4D0)
#define CLASS_2_BD90A3078513E576__CTOR_OFFSET UNITYSDK_OFFSET(0xF7DB4C0)

inline static constexpr unsigned int Class_2_BD90A3078513E576_TypeDefinitionIndex = 79604;

class Class_2_BD90A3078513E576 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_8; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x30
	::MoleMole::MonoGamepadCustomList* Field_2_5; // 0x38
	::UnityEngine::UI::Text* Field_2_4; // 0x40
	::UnityEngine::RectTransform* Field_2_0; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_7; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD90A3078513E576__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BD90A3078513E576_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Method_2_912644B05A6936B3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BD90A3078513E576_METHOD_2_912644B05A6936B3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BD90A3078513E576_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD90A3078513E576_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}
};
