#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_4B3BD883E367402D_METHOD_2_4C9CB642EC86F4C4_OFFSET UNITYSDK_OFFSET(0x141D4090)
#define CLASS_2_4B3BD883E367402D_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x141D3E20)
#define CLASS_2_4B3BD883E367402D_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x141D41E0)
#define CLASS_2_4B3BD883E367402D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x141D4340)
#define CLASS_2_4B3BD883E367402D__CTOR_OFFSET UNITYSDK_OFFSET(0x141D4330)

inline static constexpr unsigned int Class_2_4B3BD883E367402D_TypeDefinitionIndex = 42810;

class Class_2_4B3BD883E367402D : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_10; // 0x28
	::MoleMole::MonoGamepadCustomList* Field_2_4; // 0x30
	::UnityEngine::RectTransform* Field_2_1; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x50
	::UnityEngine::UI::Text* Field_2_5; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B3BD883E367402D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4B3BD883E367402D_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B3BD883E367402D_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Method_2_4C9CB642EC86F4C4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4B3BD883E367402D_METHOD_2_4C9CB642EC86F4C4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4B3BD883E367402D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
