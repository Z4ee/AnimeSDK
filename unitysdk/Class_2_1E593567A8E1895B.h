#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_1E593567A8E1895B_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x1CB7C830)
#define CLASS_2_1E593567A8E1895B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1CB7C990)
#define CLASS_2_1E593567A8E1895B_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x1CB7C590)
#define CLASS_2_1E593567A8E1895B__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB7C980)

inline static constexpr unsigned int Class_2_1E593567A8E1895B_TypeDefinitionIndex = 84995;

class Class_2_1E593567A8E1895B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_14; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_10; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_11; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_15; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x50
	::UnityEngine::GameObject* Field_2_9; // 0x58
	::UnityEngine::Transform* Field_2_0; // 0x60
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E593567A8E1895B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1E593567A8E1895B_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1E593567A8E1895B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E593567A8E1895B_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}
};
