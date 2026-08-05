#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_2655FBB72F5F5E2B_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x166B55D0)
#define CLASS_2_2655FBB72F5F5E2B_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x166B5390)
#define CLASS_2_2655FBB72F5F5E2B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x166B56E0)
#define CLASS_2_2655FBB72F5F5E2B__CTOR_OFFSET UNITYSDK_OFFSET(0x166B56D0)

inline static constexpr unsigned int Class_2_2655FBB72F5F5E2B_TypeDefinitionIndex = 70377;

class Class_2_2655FBB72F5F5E2B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_5; // 0x18
	::UnityEngine::UI::Extension::UITabButton* Field_2_3; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x28
	::UnityEngine::GameObject* Field_2_9; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x40
	::UnityEngine::GameObject* Field_2_11; // 0x48
	::UnityEngine::GameObject* Field_2_0; // 0x50
	::UnityEngine::Transform* Field_2_4; // 0x58
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x60
	::UnityEngine::GameObject* Field_2_7; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2655FBB72F5F5E2B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2655FBB72F5F5E2B_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2655FBB72F5F5E2B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2655FBB72F5F5E2B_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
