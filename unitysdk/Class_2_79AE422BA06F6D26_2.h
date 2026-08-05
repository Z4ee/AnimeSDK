#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_79AE422BA06F6D26_2_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x129F8B80)
#define CLASS_2_79AE422BA06F6D26_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x129F9010)
#define CLASS_2_79AE422BA06F6D26_2_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x129F8E70)
#define CLASS_2_79AE422BA06F6D26_2__CTOR_OFFSET UNITYSDK_OFFSET(0x129F9000)

inline static constexpr unsigned int Class_2_79AE422BA06F6D26_2_TypeDefinitionIndex = 40515;

class Class_2_79AE422BA06F6D26_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_13; // 0x18
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_5; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_15; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_12; // 0x30
	::UnityEngine::UI::Text* Field_2_0; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_9; // 0x40
	::UnityEngine::Transform* Field_2_11; // 0x48
	::UnityEngine::GameObject* Field_2_10; // 0x50
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_14; // 0x58
	::Class_2_B4378B46E0020E85* Field_2_18; // 0x60
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x68
	::MoleMole::MonoGamepadTabButtonGroup* Field_2_19; // 0x70
	::UnityEngine::UI::Text* Field_2_6; // 0x78
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x80
	::MonoUITableScrollV2* Field_2_4; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_2_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_2_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}
};
