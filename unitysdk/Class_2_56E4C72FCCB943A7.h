#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class UIControlReferenceList;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_56E4C72FCCB943A7_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x13062050)
#define CLASS_2_56E4C72FCCB943A7_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x13062230)
#define CLASS_2_56E4C72FCCB943A7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13062300)
#define CLASS_2_56E4C72FCCB943A7__CTOR_OFFSET UNITYSDK_OFFSET(0x130622F0)

inline static constexpr unsigned int Class_2_56E4C72FCCB943A7_TypeDefinitionIndex = 43712;

class Class_2_56E4C72FCCB943A7 : public ::Class_1_EEA0111A28582B57
{
public:
	::UIControlReferenceList* Field_2_6; // 0x18
	::UnityEngine::GameObject* Field_2_1; // 0x20
	::UIControlReferenceList* Field_2_5; // 0x28
	::UnityEngine::GameObject* Field_2_2; // 0x30
	::UnityEngine::GameObject* Field_2_7; // 0x38
	::UnityEngine::GameObject* Field_2_0; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x48
	::MoleMole::MonoGamepadSelectable* Field_2_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56E4C72FCCB943A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_56E4C72FCCB943A7_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_56E4C72FCCB943A7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56E4C72FCCB943A7_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
