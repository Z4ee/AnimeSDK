#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralRewardListBtnWidgetController; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_116C18A40C30981C_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x137A2ED0)
#define CLASS_2_116C18A40C30981C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x137A3030)
#define CLASS_2_116C18A40C30981C_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x137A2C50)
#define CLASS_2_116C18A40C30981C__CTOR_OFFSET UNITYSDK_OFFSET(0x137A3020)

inline static constexpr unsigned int Class_2_116C18A40C30981C_TypeDefinitionIndex = 70668;

class Class_2_116C18A40C30981C : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x18
	::UnityEngine::Animation* Field_2_0; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x30
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIGeneralRewardListBtnWidgetController*>* Field_2_6; // 0x38
	::UnityEngine::Transform* Field_2_2; // 0x40
	::MonoUITableScrollV2* Field_2_5; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x50
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_116C18A40C30981C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_116C18A40C30981C_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_116C18A40C30981C_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_116C18A40C30981C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
