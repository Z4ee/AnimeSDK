#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralBottomRewardInfoWidgetController; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_2F788DFAB5136192_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x11ED4100)
#define CLASS_2_2F788DFAB5136192_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11ED4580)
#define CLASS_2_2F788DFAB5136192_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x11ED43E0)
#define CLASS_2_2F788DFAB5136192__CTOR_OFFSET UNITYSDK_OFFSET(0x11ED4570)

inline static constexpr unsigned int Class_2_2F788DFAB5136192_TypeDefinitionIndex = 51869;

class Class_2_2F788DFAB5136192 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x20
	::MoleMole::UIGeneralButtonController* Field_2_12; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x48
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_10; // 0x50
	::MoleMole::MonoGamepadSpaceList* Field_2_3; // 0x58
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x68
	::UnityEngine::RectTransform* Field_2_0; // 0x70
	::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralBottomRewardInfoWidgetController*>* Field_2_11; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F788DFAB5136192__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2F788DFAB5136192_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2F788DFAB5136192_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F788DFAB5136192_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}
};
