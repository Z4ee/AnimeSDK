#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_3EE9E219E96FD648_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x13A29630)
#define CLASS_2_3EE9E219E96FD648_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x13A298E0)
#define CLASS_2_3EE9E219E96FD648_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13A299B0)
#define CLASS_2_3EE9E219E96FD648__CTOR_OFFSET UNITYSDK_OFFSET(0x13A299A0)

inline static constexpr unsigned int Class_2_3EE9E219E96FD648_TypeDefinitionIndex = 39887;

class Class_2_3EE9E219E96FD648 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_7; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28
	::Class_2_134E5210FBBAC6E5* Field_2_4; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x40
	::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_5; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x50
	::MoleMole::MonoGamepadCustomList* Field_2_6; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x60
	::MonoUITableScrollV2* Field_2_3; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EE9E219E96FD648__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3EE9E219E96FD648_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3EE9E219E96FD648_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EE9E219E96FD648_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
