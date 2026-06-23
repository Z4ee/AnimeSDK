#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_CE602F79B0F274C5_Class_2_68CFB764EED37899;
class MonoUITableScrollV2;
class UIControllerExtensionData;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_CE602F79B0F274C5_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x138E67C0)
#define CLASS_2_CE602F79B0F274C5_METHOD_2_731689AB6AF6DA6E_OFFSET UNITYSDK_OFFSET(0x138E65D0)
#define CLASS_2_CE602F79B0F274C5_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x138E6380)
#define CLASS_2_CE602F79B0F274C5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x138E68D0)
#define CLASS_2_CE602F79B0F274C5__CTOR_OFFSET UNITYSDK_OFFSET(0x138E68C0)

inline static constexpr unsigned int Class_2_CE602F79B0F274C5_TypeDefinitionIndex = 56941;

class Class_2_CE602F79B0F274C5 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_2; // 0x18
	::MoleMole::MonoGamepadModule* Field_2_6; // 0x20
	::UnityEngine::RectTransform* Field_2_9; // 0x28
	::UnityEngine::RectTransform* Field_2_10; // 0x30
	::UnityEngine::RectTransform* Field_2_1; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x40
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_CE602F79B0F274C5_Class_2_68CFB764EED37899*>*>* Field_2_3; // 0x48
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x50
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x58
	::MoleMole::MonoGamepadModule* Field_2_7; // 0x60
	::UIControllerExtensionData* Field_2_8; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE602F79B0F274C5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CE602F79B0F274C5_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CE602F79B0F274C5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_CE602F79B0F274C5_Class_2_68CFB764EED37899*>*>* Method_2_731689AB6AF6DA6E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_CE602F79B0F274C5_Class_2_68CFB764EED37899*>*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CE602F79B0F274C5_METHOD_2_731689AB6AF6DA6E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE602F79B0F274C5_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
