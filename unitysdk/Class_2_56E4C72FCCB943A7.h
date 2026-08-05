#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class UIControlReferenceList;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_56E4C72FCCB943A7_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0xF0F14A0)
#define CLASS_2_56E4C72FCCB943A7_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xF0F1680)
#define CLASS_2_56E4C72FCCB943A7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xF0F1750)
#define CLASS_2_56E4C72FCCB943A7__CTOR_OFFSET UNITYSDK_OFFSET(0xF0F1740)

inline static constexpr unsigned int Class_2_56E4C72FCCB943A7_TypeDefinitionIndex = 88978;

class Class_2_56E4C72FCCB943A7 : public ::Class_1_EEA0111A28582B57
{
public:
	::UIControlReferenceList* Field_2_11; // 0x18
	::UnityEngine::GameObject* Field_2_6; // 0x20
	::UnityEngine::GameObject* Field_2_7; // 0x28
	::MoleMole::MonoGamepadSelectable* Field_2_4; // 0x30
	::UnityEngine::GameObject* Field_2_9; // 0x38
	::UIControlReferenceList* Field_2_10; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_5; // 0x48
	::UnityEngine::GameObject* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56E4C72FCCB943A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_56E4C72FCCB943A7_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_56E4C72FCCB943A7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56E4C72FCCB943A7_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
