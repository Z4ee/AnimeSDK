#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_7369EF3AE6F53ACE_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x133ECE10)
#define CLASS_2_7369EF3AE6F53ACE_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x133ECB90)
#define CLASS_2_7369EF3AE6F53ACE_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x133ECF20)
#define CLASS_2_7369EF3AE6F53ACE__CTOR_OFFSET UNITYSDK_OFFSET(0x133ECF10)

inline static constexpr unsigned int Class_2_7369EF3AE6F53ACE_TypeDefinitionIndex = 47191;

class Class_2_7369EF3AE6F53ACE : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_15; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x38
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_9; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_10; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x50
	::UnityEngine::GameObject* Field_2_0; // 0x58
	::UnityEngine::GameObject* Field_2_7; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_14; // 0x68
	::UnityEngine::Transform* Field_2_8; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7369EF3AE6F53ACE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7369EF3AE6F53ACE_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7369EF3AE6F53ACE_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7369EF3AE6F53ACE_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
