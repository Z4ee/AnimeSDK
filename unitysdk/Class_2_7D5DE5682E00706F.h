#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_7D5DE5682E00706F_Class_2_CC03AAEE6FCC732C_14;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIDoubleTipsInfoWidgetController; }
namespace MoleMole { class UIWishlistTargetAvatarPopupWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_7D5DE5682E00706F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14421660)
#define CLASS_2_7D5DE5682E00706F_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x144214F0)
#define CLASS_2_7D5DE5682E00706F_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x144211E0)
#define CLASS_2_7D5DE5682E00706F__CTOR_OFFSET UNITYSDK_OFFSET(0x14421650)

inline static constexpr unsigned int Class_2_7D5DE5682E00706F_TypeDefinitionIndex = 72496;

class Class_2_7D5DE5682E00706F : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x18
	::Class_3_30A064D7BE47C07D<::MoleMole::UIDoubleTipsInfoWidgetController*>* Field_2_7; // 0x20
	::UnityEngine::GameObject* Field_2_4; // 0x28
	::UnityEngine::GameObject* Field_2_5; // 0x30
	::Class_2_0D31A1661D004892<::Class_2_7D5DE5682E00706F_Class_2_CC03AAEE6FCC732C_14*>* Field_2_1; // 0x38
	::Class_3_30A064D7BE47C07D<::MoleMole::UIWishlistTargetAvatarPopupWidgetController*>* Field_2_8; // 0x40
	::Class_2_0D31A1661D004892<::Class_2_7D5DE5682E00706F_Class_2_CC03AAEE6FCC732C_14*>* Field_2_0; // 0x48
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_2; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x60
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D5DE5682E00706F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7D5DE5682E00706F_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7D5DE5682E00706F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D5DE5682E00706F_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}
};
