#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_134E5210FBBAC6E5;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
class UIControllerExtensionData;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_8FCB22336286BF09_2_METHOD_2_1CA666992D52AF10_OFFSET UNITYSDK_OFFSET(0xFB838B0)
#define CLASS_2_8FCB22336286BF09_2_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0xFB83A00)
#define CLASS_2_8FCB22336286BF09_2_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0xFB835B0)
#define CLASS_2_8FCB22336286BF09_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xFB83B20)
#define CLASS_2_8FCB22336286BF09_2__CTOR_OFFSET UNITYSDK_OFFSET(0xFB83B10)

inline static constexpr unsigned int Class_2_8FCB22336286BF09_2_TypeDefinitionIndex = 73642;

class Class_2_8FCB22336286BF09_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_7; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::NotificationBadgeEx*>* Field_2_13; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x30
	::Class_2_134E5210FBBAC6E5* Field_2_0; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_8; // 0x40
	::UIControllerExtensionData* Field_2_12; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_14; // 0x58
	::MoleMole::MonoGamepadCustomList* Field_2_9; // 0x60
	::MonoUITableScrollV2* Field_2_1; // 0x68
	::MoleMole::MonoGamepadNavigatableList* Field_2_11; // 0x70
	::UnityEngine::GameObject* Field_2_6; // 0x78
	::MonoUITableScrollV2* Field_2_5; // 0x80
	::MoleMole::MonoGamepadNavigatableList* Field_2_10; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCB22336286BF09_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8FCB22336286BF09_2_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::MoleMole::NotificationBadgeEx*>* Method_2_1CA666992D52AF10(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::NotificationBadgeEx*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8FCB22336286BF09_2_METHOD_2_1CA666992D52AF10_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCB22336286BF09_2_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8FCB22336286BF09_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
